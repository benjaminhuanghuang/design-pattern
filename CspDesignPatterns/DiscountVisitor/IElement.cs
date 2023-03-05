namespace DiscountVisitor;

/// <summary>
/// Element
/// </summary>
public interface IElement
{
    void Accept(IVisitor visitor);
}
