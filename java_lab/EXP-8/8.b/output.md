# Console output

```text
start thread A
start thread B
Thread A started
from thread A i=1
from thread A i=2
from thread A i=3
from thread A i=4
exit from A
start thread C
end of main thread
thread C started
thread c =1
thread c =2
thread c =3
thread c =4
exit from C
Thread B started
from thread B j=1
from thread B j=2
from thread B j=3
from thread B j=4
exit from B
```

This ordering is a representative run, not a guarantee. Java thread
priorities are scheduling hints; the operating system and JVM may interleave
the three worker threads differently on another run.
