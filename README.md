# Producer_Consumer_Problem
<details>
  <summary>What is it about?</summary>
  This program is to understand how semaphores and threading works.
  It controlls when values are placed into the buffer (producer) and values taken out (consumer).
</details>
<details>
  <summary>How to run the program</summary>
  <ol>
    <li>Download the "Program_Files" and place it in a location on your PC.</li>
    <li>In terminal, set your directory to location of "Program_Files".</li>
    <li>Use gcc to complie the source code.</li>
      <ul>
        <li>$ gcc producer.c -pthread -lrt -o producer</li>
        <li>$ gcc consumer.c -pthread -lrt -o consumer</li>
      </ul>
    <li>Run both programs at the same time to see the code working.</li>
    <ul>
      <li>$ ./producer & ./consumer &</li>
    </ul>
  </ol>
</details>
