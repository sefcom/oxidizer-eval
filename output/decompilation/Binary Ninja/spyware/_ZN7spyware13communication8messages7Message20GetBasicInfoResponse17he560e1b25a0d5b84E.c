
  int512_t spyware::communication::messages::Message::GetBasicInfoResponse::he560e1b25a0d5b84(int128_t* arg1, int128_t* arg2)

{
    int128_t result = *arg2;
    int128_t zmm1 = arg2[1];
    int128_t zmm2 = arg2[2];
    arg1[3] = arg2[3];
    arg1[2] = zmm2;
    arg1[1] = zmm1;
    *arg1 = result;
    return result;
}
