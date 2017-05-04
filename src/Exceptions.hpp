#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <string>

namespace sjtu {

	class Exception {
		std::string detail;
	public:
		Exception():detail() {}
		Exception(const std::string &rhs): detail(rhs) {}
		Exception(std::string &&rhs): detail(rhs) {}
		Exception(const Exception &ec) : detail(ec.detail) {}
	};
	
	class FailBuy: public Exception {
	public:
		FailBuy(const std::string &rhs): Exception(rhs) {}
	};

	class FailRefund: public Exception {
	public:
		FailRefund(const std::string &rhs): Exception(rhs) {}
	};

	class TrainNotExist: public Exception {
	public:
		TrainNotExist(const std::string &rhs): Exception(rhs) {}
	};

	class DateNotExist: public Exception {
	public:
		DateNotExist(const std::string &rhs): Exception(rhs) {}
	};

	class StationNotFound: public Exception {
	public:
		StationNotFound(const std::string &rhs): Exception(rhs) {}
	};

	class UserAlreadyExist: public Exception {
	public:
		UserAlreadyExist(const std::string &rhs): Exception(rhs) {}
	};

	class UserNotExist: public Exception {
	public:
		UserNotExist(const std::string &rhs): Exception(rhs) {}
	};

	class AlreadyLogin: public Exception {
	public:
		AlreadyLogin(const std::string &rhs): Exception(rhs) {}
	};

	class AlreadyLogout: public Exception {
	public:
		AlreadyLogout(const std::string &rhs): Exception(rhs) {}
	};

	class NameTooLong: public Exception {
	public:
		NameTooLong(const std::string &rhs): Exception(rhs) {}
	};

	class InconsistentPassword : public Exception {
	public:
		InconsistentPassword (const std::string &rhs): Exception(rhs) {}
	};

	class WrongIdentifyingCode : public Exception {
	public:
		WrongIdentifyingCode (const std::string &rhs): Exception(rhs) {}
	};

	class PasswordIsNotValid: public Exception {
	public:
		PasswordIsNotValid(const std::string &rhs): Exception(rhs) {}
	};

	class WrongPassword: public Exception {
	public:
		WrongPassword(const std::string &rhs): Exception(rhs) {}
	};

	class TicketsNotEnough: public Exception {
	public:
		TicketsNotEnough(const std::string &rhs): Exception(rhs) {}
	};
	
	class TicketsNotFound: public Exception {
	public:
		TicketsNotFound(const std::string &rhs): Exception(rhs) {}
	};

	class NotAdmin: public Exception {
	public:
		NotAdmin(const std::string &rhs): Exception(rhs) {}
	};

	class IndexOutOfBound: public Exception {
	public:
		IndexOutOfBound(const std::string &rhs): Exception(rhs) {}
	};

	class InvalidIterator: public Exception {
	public:
		InvalidIterator(const std::string &rhs): Exception(rhs) {}
	};

	class MoneyNotEnough: public Exception {
	public:
		MoneyNotEnough(const std::string &rhs): Exception(rhs) {}
	};

	class NotLogin: public Exception {
	public:
		NotLogin(const std::string &rhs): Exception(rhs) {}
	};

	class InsufficientPriviledge: public Exception {
	public:
		InsufficientPriviledge(const std::string &rhs): Exception(rhs) {}
	};

	class ContainerIsEmpty: public Exception {
	public:
		ContainerIsEmpty(const std::string &rhs): Exception(rhs) {}
	};

	class RunTimeError: public Exception {
	public:
		RunTimeError(const std::string &rhs): Exception(rhs) {}
	};
	
}

#endif
