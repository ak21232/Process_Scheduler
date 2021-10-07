#include "Assignment1.cpp"

//Create a class for Processes//
class Process {
private:
  std::string processID_;
  std::string priority_ = q0;
  int aT_ = 0;
  int bT_ = 0;

public:
  void setProcess(std::string processID, int at, int bt) {
    processID_ = processID;
    at_ = at;
    bt_ = bt;
    }
  void updatePriority(std::string priority) { priority_ = priority; }
  std::string getProcessID() {return processID_; }
  std::string getPriority() {return priority_; }
  int getaT() {return aT_; }
  int getbT() {return bT_; }
};

void queueProcess(Process process1, Process process2, std::queue<Process> &q);

void q0Process(std::queue<Process> &q);

void q1Process(std::queue<Process> &q);
