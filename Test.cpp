/**
 
 * AUTHOR: <shay peretz>
 
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;
#include <stdexcept>
#include <string>
using namespace std;


TEST_CASE("Good snowman code") {
    //change the head
   CHECK(snowman(11112311) == string("       \n _===_ \n\\(.,.) \n ( : )\\\n ( : ) "));
   CHECK(snowman(21112311) == string("  ___  \n ..... \n (.,.) \n ( : )\\\n ( : ) "));
   CHECK(snowman(31112311) == string("   _   \n  /_\\  \n\\(.,.) \n ( : )\\\n ( : ) "));
   CHECK(snowman(41112311) == string("  ___  \n (_*_) \n\\(.,.) \n ( : )\\\n ( : ) "));

    // change the nose
   CHECK(snowman(11222311) == string("       \n _===_ \n\\(o,o) \n ( : )\\\n ( : ) "));
   CHECK(snowman(12222311) == string("       \n _===_ \n\\(o.o) \n ( : )\\\n ( : ) "));
   CHECK(snowman(13222311) == string("       \n _===_ \n\\(o_o) \n ( : )\\\n ( : ) "));
   CHECK(snowman(14222311) == string("       \n _===_ \n\\(o o) \n ( : )\\\n ( : ) "));
    //change the left eye
   CHECK(snowman(13122311) == string("       \n _===_ \n\\(._o) \n ( : )\\\n ( : ) "));
   CHECK(snowman(11222311) == string("       \n _===_ \n\\(o,o) \n ( : )\\\n ( : ) "));
   CHECK(snowman(13322311) == string("       \n _===_ \n\\(O_o) \n ( : )\\\n ( : ) "));
   CHECK(snowman(13422311) == string("       \n _===_ \n\\(-_o) \n ( : )\\\n ( : ) "));
    //change the right eye
   CHECK(snowman(11212311) == string("       \n _===_ \n\\(o,.) \n ( : )\\\n ( : ) "));
   CHECK(snowman(11222311) == string("       \n _===_ \n\\(o,o) \n ( : )\\\n ( : ) "));
   CHECK(snowman(11232311) == string("       \n _===_ \n\\(o,O) \n ( : )\\\n ( : ) "));
   CHECK(snowman(11242311) == string("       \n _===_ \n\\(o,-) \n ( : )\\\n ( : ) "));
    //change the left arm
   CHECK(snowman(11221311) == string("       \n _===_ \n (o,o) \n<( : )\\\n ( : ) "));
   CHECK(snowman(11222311) == string("       \n _===_ \n\\(o,o) \n ( : )\\\n ( : ) "));
   CHECK(snowman(11223311) == string("       \n _===_ \n(o,o) \n/( : )\\\n ( : ) "));
   CHECK(snowman(11224311) == string("       \n _===_ \n (o,o) \n ( : )\\\n ( : ) "));
   //change the right arm
   CHECK(snowman(11221111) == string("       \n _===_ \n (o,o) \n<( : )>\n ( : ) "));
   CHECK(snowman(11221211) == string("       \n _===_ \n (o,o)/\n<( : )\n ( : ) "));
   CHECK(snowman(11221311) == string("       \n _===_ \n (o,o) \n<( : )\\\n ( : ) "));
   CHECK(snowman(11221411) == string("       \n _===_ \n (o,o) \n<( : ) \n ( : ) "));
   //change the torso
   CHECK(snowman(11221311) == string("       \n _===_ \n (o,o) \n<( : )\\\n ( : ) "));
   CHECK(snowman(11221321) == string("       \n _===_ \n (o,o) \n<(] [)\\\n ( : ) "));
   CHECK(snowman(11221331) == string("       \n _===_ \n (o,o) \n<(> <)\\\n ( : ) "));
   CHECK(snowman(11221314) == string("       \n _===_ \n (o,o) \n<(  )\\\n ( : ) "));
   //change the base
   CHECK(snowman(11221311) == string("       \n _===_ \n (o,o) \n<( : )\\\n ( : ) "));
   CHECK(snowman(11221312) == string("       \n _===_ \n (o,o) \n<( : )\\\n (\" \") "));
   CHECK(snowman(11221313) == string("       \n _===_ \n (o,o) \n<( : )\\\n (___) "));
   CHECK(snowman(11221314) == string("       \n _===_ \n (o,o) \n<( : )\\\n (   ) "));



}

TEST_CASE("Bad snowman code: short number") {
       CHECK_THROWS_AS(snowman(1), std::out_of_range);
       CHECK_THROWS_AS(snowman(12), std::out_of_range);
       CHECK_THROWS_AS(snowman(123), std::out_of_range);
       CHECK_THROWS_AS(snowman(1234), std::out_of_range); 
       CHECK_THROWS_AS(snowman(12341), std::out_of_range);
       CHECK_THROWS_AS(snowman(123412), std::out_of_range);
       CHECK_THROWS_AS(snowman(1234123), std::out_of_range);

}
TEST_CASE("Bad snowman code: long number") {
       CHECK_THROWS_AS(snowman(112233441), std::out_of_range);
       CHECK_THROWS_AS(snowman(1122334412), std::out_of_range);
       CHECK_THROWS_AS(snowman(123412342), std::out_of_range);
}

TEST_CASE("snowman with negative numbers") { 
    CHECK_THROWS_AS(snowman(-24321142), std::out_of_range); 
    CHECK_THROWS_AS(snowman(-12343213), std::out_of_range);
    CHECK_THROWS_AS(snowman(-31234232), std::out_of_range);
}
TEST_CASE("snowman with digit out of range(not 1 to 4)"){
    CHECK_THROWS_AS(snowman(51234213), std::out_of_range); 
    CHECK_THROWS_AS(snowman(17234231), std::out_of_range); 
    CHECK_THROWS_AS(snowman(12823423), std::out_of_range); 
    CHECK_THROWS_AS(snowman(12392311), std::out_of_range); 
    CHECK_THROWS_AS(snowman(12345311), std::out_of_range); 
    CHECK_THROWS_AS(snowman(12322811), std::out_of_range); 
    CHECK_THROWS_AS(snowman(12342301), std::out_of_range); 
    CHECK_THROWS_AS(snowman(12392311), std::out_of_range); 
   
}


