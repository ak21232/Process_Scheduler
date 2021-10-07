#include <iostream>
#include <vector>
#include <queue>


void queueProcess(Process process1, Process process2, std::queue<Process> &q){
  if (process1.getaT() > process2.getaT()){
    q.push(process2);
    q.push(process1);

  }
  else {
    q.push(process1);
    q.push(process2);
  }
}


void q0Process(std::queue<Process> &q){
    //Run processes through q0//
    if(q.queue.front().bT % q0.quantum > 0){
      q.queue.front().remainingTime = q.queue.front().bT % q0.quantum;
      q1.queue.push(q.queue.front());
      q.queue.pop();
    }
    else {
      std:: cout << q.queue.front() << "at Queue 0 is executed for 8 \n";
    }
}

void q1Process(std::queue<Process> &q){
  //Run processes through q1//
    if(q.queue.front().bT % q1.quantum == 8){
      q0Process(q);
    }
    else if(q.queue.front().bT % q1.quantum > 0){
      q.queue.front().remainingTime = q.queue.front().bT % q1.quantum;
      q2.queue.push(q.queue.front());
      q.queue.pop();
    }
    else {
      std:: cout << q.queue.front() << "at Queue 0 is executed for 16 \n";
    }
}
