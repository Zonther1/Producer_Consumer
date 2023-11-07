# Producer_Consumer_Problem
<details>
  <summary>What is it about?</summary>
  <p>This program is to understand how semaphores and threading works.</p>
  <p>It controlls when values are placed into the buffer (producer) and values taken out (consumer).</p>
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
<details>
  <summary>What didn't work well.</summary>
  <p>This is the first time working with semaphores and pthread to get both programs to work with each other.</p>
  <p>I had a lot of issues trying to get the producer to come up first because it kept on going to the consumer portion first</p>
</details>
