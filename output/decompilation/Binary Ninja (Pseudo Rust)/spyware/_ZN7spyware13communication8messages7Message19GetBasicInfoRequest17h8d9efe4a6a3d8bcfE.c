
  fn spyware::communication::messages::Message::GetBasicInfoRequest::h8d9efe4a6a3d8bcf(arg1: *mut i64, arg2: *mut i128) -> i64

{
    let result: i64 = arg2[1];
    arg1[3] = result;
    *arg1.byte_offset(8) = *arg2;
    *arg1 = -0x7ffffffffffffffc;
    result
}
