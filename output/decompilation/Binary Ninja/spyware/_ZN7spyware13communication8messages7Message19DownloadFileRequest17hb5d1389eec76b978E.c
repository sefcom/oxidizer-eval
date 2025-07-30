
  int64_t spyware::communication::messages::Message::DownloadFileRequest::hb5d1389eec76b978(int64_t* arg1, int128_t* arg2)

{
    int64_t result = arg2[1];
    arg1[3] = result;
    *(arg1 + 8) = *arg2;
    *arg1 = -0x7ffffffffffffffe;
    return result;
}
