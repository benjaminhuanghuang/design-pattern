namespace DiscountVisitor;


/// <summary>
/// Visitor (alternative)
/// </summary>
public interface IVisitor
{
    void Visit(IElement element);
}
