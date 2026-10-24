# Console output

```text
Start thread A
exit from main thread
from thread A i=1
from thread A i=2
from thread A i=3
from thread A i=4
from thread A i=5
exit from A
from thread B j=1
from thread B j=2
from thread B j=3
exit from B
thread c =1
thread c =2
thread c =3
thread c =4
thread c =5
```

This is one realisation of the run. Thread scheduling is nondeterministic, so
the lines from A, B, C, and the main thread can appear in a different order.
The sleep in C also makes its remaining output occur later.
