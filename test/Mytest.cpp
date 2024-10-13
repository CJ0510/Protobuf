//
// Created by Lenovo on 2024/10/12.
//

#include "Mytest.h"
#include "Person.pb.h"
#include "Address.pb.h"

void Mytest::test() {
  // 序列化
  Per::Person p;
  p.set_id(10);
  p.set_age(14);
  p.add_name();
  p.set_name(0,"cj");
  p.add_name("cjj");
  p.add_name("cjjj");
  p.set_sex("man");
  p.mutable_addr()->set_addr("B2210b");
  p.mutable_addr()->set_num(10);
  p.set_color(Per::Color::Blue);

  // 序列化P
  std::string output;
  p.SerializeToString(&output);

  // 反序列化
  Per::Person pp;
  pp.ParseFromString(output);
  std::cout<<pp.id()<<" "<<pp.sex()<<std::endl;
  std::cout<<pp.addr().addr()<<" "<<pp.addr().num()<<std::endl;
  int size = pp.name_size();
  for(int i=0;i<size;i++){
  std::cout<<pp.name(i)<<std::endl;
  }
  std::cout<<pp.color()<<std::endl;
}
