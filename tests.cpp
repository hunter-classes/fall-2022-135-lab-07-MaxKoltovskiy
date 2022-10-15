#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "unindent.h"
#include "indent.h"

TEST_CASE("Remove Leading Spaces"){
    CHECK(removeLeadingSpaces("       int x = 1;  ") == "int x = 1;  ");
    CHECK(removeLeadingSpaces("int x = 1;  ") == "int x = 1;  ");
}
TEST_CASE("Count char in line"){
    CHECK(countChar("    for(int i = 0; i < 10; i++) {", '{') == 1);
    CHECK(countChar("for(int i = 0; i < 10; i++) {", 'i') == 4);
}