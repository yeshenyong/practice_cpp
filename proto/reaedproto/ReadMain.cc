#include <iostream>
#include <fstream>
#include <string>
#include "common.pb.h"

using namespace std;

// Iterates though all people in the AddressBook and prints info about them.
void ListRecoSystem(const RecoSystem& reco_system) {
  if (reco_system.has_userid()) {
    cout << "\nuid:" << reco_system.userid();
  }
  if (reco_system.has_bytesval()) {
    cout << "\nbytesval:" << reco_system.bytesval();
  }
  if (reco_system.has_userembedding()) {
    cout << "\nuserembedding:" << reco_system.userembedding().int32val();
    cout << "\nuserembedding:" << reco_system.userembedding().stringval();
  }
  
  for (int i = 0; i < reco_system.repeatedint32val_size(); i++) {
    cout << "\nint32val:" << reco_system.repeatedint32val(i);
  }
  for (int i = 0; i < reco_system.repeatedstringval_size(); i++) {
    cout << "\nstringval:" << reco_system.repeatedstringval(i);
  }
}

int main(int argc, char* argv[]) {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  RecoSystem reco_system_pb;

  {
    fstream input("single_proto_tmp_file", ios::in | ios::binary);
    if (!reco_system_pb.ParseFromIstream(&input)) {
      cerr << "Failed to parse address book." << endl;
      return -1;
    }
  }

  ListRecoSystem(reco_system_pb);

  google::protobuf::ShutdownProtobufLibrary();

  return 0;
}
