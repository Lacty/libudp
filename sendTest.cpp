
//
//  udpを使用した送信者のテスト
//

#include "udp.hpp"

int main() {
  Udp sender;
  sender.initAddr(12345, "127.0.0.1"); // "127.0.0.1"は自分を示している
                                       // 指定したIPアドレスを持つPCに送信可能
  std::vector<char> data;
  std::string str = "hoge";
  for (int i = 0; i < str.size(); i++) {
    data.push_back(str[i]);
  }

  sender.send(data);
}