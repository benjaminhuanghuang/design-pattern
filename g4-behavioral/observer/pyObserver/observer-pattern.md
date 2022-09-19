# Observer Pattern
    One subject, more than one observers
    When subject changes, its notify observers to update
    Observer get state of subject or update subject
    
## Purpose
    Easy to add new observers

## Implementation
    Create abstract subject and observer
    Add __enter__ and __exit__ methods
    Use "with" avoid dangling reference
    
## Related Patterns
    MVC pattern, Model is subject, view is observer

## Demo
    KPI(Key Performance Indicators)
    Dashboard is the observer and the KPI source is the subject or publisher
    BeforeObserver -> Observer -> ContextObserver (avoid dangling reference)

    
