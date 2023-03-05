using DocumentValidators;
using System.ComponentModel.DataAnnotations;

namespace ChainofResponsibilityTests
{
    public class DocumentValidatorsTests
    {
        [Fact]
        public void Test1()
        {
            var validDocument = new Document("A",DateTimeOffset.UtcNow, true, true);
            var invalidDocument = new Document("B", DateTimeOffset.UtcNow, false, true);

            // chain a set of handlers
            var documentHandlerChain = new DocumentTitleHandler();
            documentHandlerChain
                .SetSuccessor(new DocumentLastModifiedHandler())
                .SetSuccessor(new DocumentLastModifiedHandler())

            try
            {
                documentHandlerChain.Handle(validDocument);
                Console.WriteLine("Valid document is valid.");
                documentHandlerChain.Handle(invalidDocument);
                Console.WriteLine("Invalid document is valid.");
            }
            catch (ValidationException validationException)
            {
                Console.WriteLine(validationException.Message);
            }
        }
    }
}