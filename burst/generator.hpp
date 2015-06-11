#ifndef __MYUN2_GITHUB_COM__BURST__GENERATOR_BASE_HPP__
#define __MYUN2_GITHUB_COM__BURST__GENERATOR_BASE_HPP__

#include <stdio.h>

namespace myun2
{
	namespace burst
	{
		struct generator
		{
			FILE* f;
			generator(FILE *in_fp) : f(in_fp) {}
			void generate(const char* s) { fputs(s, f); }
			void gen(const char* s) { generate(s); }
			void g(const char* s) { generate(s); }

			template <typename T1>
			void generate(const char* format, const T1& p1) {
				fprintf(f, format, p1); }

			template <typename T1, typename T2>
			void generate(const char* format, const T1& p1, const T2& p2) {
				fprintf(f, format, p1, p2); }

			template <typename T1, typename T2, typename T3>
			void generate(const char* format, const T1& p1, const T2& p2, const T3& p3) {
				fprintf(f, format, p1, p2, p3); }

			template <typename T1, typename T2, typename T3, typename T4>
			void generate(const char* format, const T1& p1, const T2& p2, const T3& p3, const T4& p4) {
				fprintf(f, format, p1, p2, p3, p4); }

			template <typename T1, typename T2, typename T3, typename T4, typename T5>
			void generate(const char* format, const T1& p1, const T2& p2, const T3& p3, const T4& p4, const T5& p5) {
				fprintf(f, format, p1, p2, p3, p4, p5); }

			template <typename T1>
			void gen(const char* format, const T1& p1) {
				fprintf(f, format, p1); }

			template <typename T1, typename T2>
			void gen(const char* format, const T1& p1, const T2& p2) {
				fprintf(f, format, p1, p2); }

			template <typename T1, typename T2, typename T3>
			void gen(const char* format, const T1& p1, const T2& p2, const T3& p3) {
				fprintf(f, format, p1, p2, p3); }
		};
	}
}

#endif//__MYUN2_GITHUB_COM__BURST__GENERATOR_BASE_HPP__
