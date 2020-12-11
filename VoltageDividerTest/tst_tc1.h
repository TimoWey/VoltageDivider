#ifndef TST_TC1_H
#define TST_TC1_H

#include <gmock/gmock-matchers.h>
#include <gtest/gtest.h>
#include <QString>
#include "../VoltageDividerSource/src/UserInputValidator.h"

using namespace testing;

TEST(VoltageDividerTest, tc1)
{
  UserInputValidator* v;
  UserInputValidator* o;
  v = new UserInputValidator("V");
  o = new UserInputValidator("Ohm");
  int pos = 0;
  QString s = "100V";

  // Test Unit check
  v->validate(s, pos);
  EXPECT_EQ(v->getIsValid(), 1);

  o->validate(s, pos);
  EXPECT_EQ(o->getIsValid(), 0);

  s = "10Ohm";
  v->validate(s, pos);
  EXPECT_EQ(v->getIsValid(), 0);

  o->validate(s, pos);
  EXPECT_EQ(o->getIsValid(), 1);

  // Test Si-Prefix V
  s = "10mV";
  v->validate(s, pos);
  EXPECT_EQ(v->getIsValid(), 1);

  s = "10kV";
  v->validate(s, pos);
  EXPECT_EQ(v->getIsValid(), 1);

  s = "10MV";
  v->validate(s, pos);
  EXPECT_EQ(v->getIsValid(), 1);

  s = "10fV";
  v->validate(s, pos);
  EXPECT_EQ(v->getIsValid(), 0);

  // Test Si-Prefix Ohm
  s = "10mOhm";
  o->validate(s, pos);
  EXPECT_EQ(o->getIsValid(), 1);

  s = "10kOhm";
  o->validate(s, pos);
  EXPECT_EQ(o->getIsValid(), 1);

  s = "10MOhm";
  o->validate(s, pos);
  EXPECT_EQ(o->getIsValid(), 1);

  s = "10fOhm";
  o->validate(s, pos);
  EXPECT_EQ(o->getIsValid(), 0);

  // Random other check
  s = "x";
  o->validate(s, pos);
  EXPECT_EQ(o->getIsValid(), 0);
}

#endif  // TST_TC1_H
