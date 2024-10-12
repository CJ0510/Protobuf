//
// Created by Lenovo on 2024/10/12.
//

#include "Mytest.h"
#include "Person.pb.h"

void Mytest::test() {
  // 序列化
  Person p;
  p.set_id(10);
  p.set_age(14);
  p.set_name("cj");
  p.set_sex("man");

  // 序列化P
  std::string output;
  p.SerializeToString(&output);

  // 反序列化
  Person pp;
  pp.ParseFromString(output);
  std::cout<<pp.id()<<" "<<pp.sex();
}
