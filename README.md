# Producer_Consumer_Problem
<details>
  <summary>What is it about?</summary>
  <p>This program is to understand how semaphores and threading works.</p>
  <p>It controlls when values are placed into the buffer (producer) and values taken out (consumer).</p>
  <p>This program works best on Linux.</p>
</details>
<details>
  <summary>How to run the program</summary>
  <ol>
    <li>Download the "Program_Files" and place it in a location on your PC.</li>
    <li>In terminal, set your directory to location of "Program_Files".</li>
    <li>Use gcc to complie the source code.</li>
      <ul>
        <li><code>$ gcc producer.c -pthread -lrt -o producer</code></li>
        <li><code>$ gcc consumer.c -pthread -lrt -o consumer</code></li>
      </ul>
    <li>Run both programs at the same time to see the code working.</li>
    <ul>
      <li><code>$ ./producer & ./consumer &</code></li>
    </ul>
  </ol>
</details>
<details>
  <summary>What didn't work well.</summary>
  <p>This is the first time working with semaphores and pthread to get both programs to work with each other.</p>
  <p>This was the first time using C programing language in a very long time so I had to relearn it to get the program up and running.</p>
  <p>I had a lot of issues trying to get the producer to come up first because it kept on going to the consumer portion first.</p>
  <p>I also had the issue of the producer and the consumer running at the same time. I was able to fix this by using sleep() in the consumer portion only.</p>
  <p>I was not able to get the consumer to wait at the start up of the program. I am still working on trying to fix this problem.</p>
</details>
<details>
  <summery>Buffer size to small?</summery>
  <p>If you want to change the size of the buffer, you can change it in the producer.c and consumer.c files.</p>
  <p>Look for <code>#define BUFFER_SIZE 2</code> and change the number on BOTH programs to be the same.</p>
</details>
