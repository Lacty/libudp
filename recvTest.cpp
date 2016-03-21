
//
//  udpを使用した受信側のテスト
//

#include "udp.hpp"

int main() {
  Udp reciever;
  reciever.initAddr(12345, "");

  for (char i : reciever.recieve()) {
    std::cout << i;
  }
}