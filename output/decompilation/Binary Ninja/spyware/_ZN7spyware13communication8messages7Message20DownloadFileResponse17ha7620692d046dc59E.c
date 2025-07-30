
  int64_t spyware::communication::messages::Message::DownloadFileResponse::ha7620692d046dc59(int64_t* arg1, int128_t* arg2)

{
    int64_t result = arg2[3];
    arg1[7] = result;
    int128_t zmm0 = *arg2;
    int128_t zmm1 = arg2[1];
    *(arg1 + 0x28) = arg2[2];
    *(arg1 + 0x18) = zmm1;
    *(arg1 + 8) = zmm0;
    *arg1 = -0x7ffffffffffffffd;
    return result;
}
