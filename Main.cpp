#include <iostream>
#include <vector>
#include <queue>
#include "Assignment1.hpp"



int main(){

  //Initialize processes for test case of P1 & P2//
  Process process1.setProcess("P1", 0, 40);
  Process process2.setProcess("P2", 32, 10);

  //Input Processes into an vector//
  std::vector <Process> processVector;
  processVector.push_back(process1);
  processVector.push_back(process2);


  //Input Processes into a queue//
  std::queue<Process> q0;
  std::queue<Process> q1;
  std::queue<Process> q2;

  for (int i = 0; i < processVector.size(); i++;){
    if (processVector[i].getPriority() == "q0"){
      queueProcess(process1, process2, q0);
    }
    else if (processVector[i].getPriority() == "q1"){
      queueProcess(process1, process2, q1);
    }
    else {
      queueProcess(process1, process2, q2);
    }
  }

    return 0;
}
