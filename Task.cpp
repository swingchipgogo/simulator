#include "Task.h"
#include <sstream>
//#include <iomanip>

using namespace std;

std::string Task::print()
{
	std::stringstream sstream;

	sstream << "task#|task ID|Node ID|Start Time|Excution Time|Finished Time"<<endl;
	sstream << "Task ID : " << setprecision(5) << id << "Node ID : " << setprecision(5) << get_executed_core_id();
	sstream << "Start Time : " << setprecision(5) << get_start_time();
	sstream << "Excution Time : " << setprecision(5) << execution_time();
	sstream << "Finished Time : " << setprecision(5) << finished_time()<<endl;
	// ...

	return sstream.str();

}