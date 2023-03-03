# Command

## Intent
It allows us to encapsulate requests as objects.
thereby letting you parameterize clients with different requests, queue, or log requests, and support undoable operations.

## Example
```
    viewModel.SomeCommand.CanExecute()

    viewModel.SomeCommand.Execute()
```