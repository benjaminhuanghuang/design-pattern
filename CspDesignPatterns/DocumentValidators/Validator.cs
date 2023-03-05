using System.ComponentModel.DataAnnotations;

namespace DocumentValidators
{
    /// <summary>
    /// Validator
    /// </summary> 
    public interface IValidator<T> where T : class
    {
        IValidator<T> SetSuccessor(IValidator<T> successor);
        void Handle(T request);
    }

    /// <summary>
    /// ConcreteHandler
    /// </summary>
    public class DocumentTitleHandler : IValidator<Document>
    {
        private IValidator<Document>? _successor;

        public void Handle(Document document)
        {
            if (document.Title == string.Empty)
            {
                // validation doesn't check out
                throw new ValidationException(
                    new ValidationResult(
                        "Title must be filled out",
                        new List<string>() { "Title" }), null, null);
            }

            // go to the next handler
            _successor?.Handle(document);
        }

        public IValidator<Document> SetSuccessor(IValidator<Document> successor)
        {
            _successor = successor;
            return successor;
        }
    }

    /// <summary>
    /// ConcreteHandler
    /// </summary>
    public class DocumentLastModifiedHandler : IValidator<Document>
    {
        private IValidator<Document>? _successor;

        public void Handle(Document document)
        {
            if (document.LastModified < DateTime.UtcNow.AddDays(-30))
            {
                // validation doesn't check out
                throw new ValidationException(
                    new ValidationResult(
                        "Document must be modified in the last 30 days",
                        new List<string>() { "LastModified" }), null, null);
            }

            // go to the next handler
            _successor?.Handle(document);
        }

        public IValidator<Document> SetSuccessor(IValidator<Document> successor)
        {
            _successor = successor;
            return successor;
        }
    }

}