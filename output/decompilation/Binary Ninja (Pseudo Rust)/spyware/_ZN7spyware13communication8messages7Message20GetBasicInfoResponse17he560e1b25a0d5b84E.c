
  fn spyware::communication::messages::Message::GetBasicInfoResponse::he560e1b25a0d5b84(arg1: *mut i128, arg2: *mut i128) -> i512

{
    let result: i128 = *arg2;
    let zmm1: i128 = arg2[1];
    let zmm2: i128 = arg2[2];
    arg1[3] = arg2[3];
    arg1[2] = zmm2;
    arg1[1] = zmm1;
    *arg1 = result;
    result
}
