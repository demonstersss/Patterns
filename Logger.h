#pragma once
class Logger
{
private:
	Logger* log;
	


public:
	Logger() {};
	Logger* GetInstance() {
		if (log == nullptr) {
			cout << "log пуст!\n";
		}
		return log;
	}

	void LogInformation(string str_log) {
		// запись в файл
	}

	~Logger() {};
};

