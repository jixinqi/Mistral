#ifndef _MISTRAL_RESPONSE_HPP_INCLUDED_
#define _MISTRAL_RESPONSE_HPP_INCLUDED_

namespace mistral
{
	namespace http
	{
		class response
		{
		public:
			void          status_code(std::uint16_t code);
			void          phrase(std::string phrase);
			void          msg_body(std::string msg_body);

			std::uint16_t status_code();
			std::string   phrase();
			std::string   msg_body();

			void          error_msg_body();
		private:
			std::uint16_t _status_code = 0;
			std::string   _phrase;
			std::string   _msg_body;
		};

		
		class response_build
		{
		public:
			response_build() = default;
			std::string  complete_msg();
			response&    get_response();
		private:
			response     _response;
		};
	}
}


#endif