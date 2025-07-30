
  fn spyware::communication::messages::Message::DownloadFileRequest::hb5d1389eec76b978(arg1: *mut i64, arg2: *mut i128) -> i64

{
    let result: i64 = arg2[1];
    arg1[3] = result;
    *arg1.byte_offset(8) = *arg2;
    *arg1 = -0x7ffffffffffffffe;
    result
}
