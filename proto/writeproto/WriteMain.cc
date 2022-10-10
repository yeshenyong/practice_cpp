#include <iostream>
#include <fstream>
#include <string>
#include "common.pb.h"

int main(int argc, char* argv[]) {

    RecoSystem reco_system_pb;
    reco_system_pb.set_userid("yeshenyong");
    reco_system_pb.set_bytesval("are u ysy?");

    RecoSystem_UserEmbedding* reco_user_embedding = new RecoSystem_UserEmbedding();

    reco_user_embedding->set_int32val(123);
    reco_user_embedding->set_stringval("DSSM");

    reco_system_pb.add_repeatedint32val(234);
    reco_system_pb.add_repeatedint32val(456);
    reco_system_pb.add_repeatedstringval("hzy");
    reco_system_pb.add_repeatedstringval("ysy");

    std::string filename = "single_proto_tmp_file";

    std::fstream output(filename, std::ios::out | std::ios::trunc | std::ios::binary);
    if (!reco_system_pb.SerializeToOstream(&output)) {
        std::cerr << "Failed to Write reco_system_pb" << std::endl;
        exit(-1);
    }

    delete reco_user_embedding;

    return 0;

}



