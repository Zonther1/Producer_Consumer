# Producer_Consumer_Problem
<details>
  <summary>What is it about?</summary>
  This program is to understand how semaphores and threading works.
  It controlls when values are placed into the buffer (producer) and values taken out (consumer).
</details>
<details>
  <summary>How to run the program</summary>
  1.  Download the "Program_Files" and place it in a location on your PC.<br>
  2.  In terminal, set your directory to location of "Program_Files".<br>
  3.  Use gcc to complie the source code.<br>
  ```
  $ gcc producer.c -pthread -lrt -o producer
  $ gcc consumer.c -pthread -lrt -o consumer
  ```
  4. Run both programs at the same time to see the code working.
  ```
  $ ./producer & ./consumer &
</details>
