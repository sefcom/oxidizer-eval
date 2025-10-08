
  fn fuel_core_client::reqwest_ext::FuelOperation$LT$Operation$GT$::new::h2a6fede262a19031(arg1: *mut i128, arg2: *mut i128, arg3: i32, arg4: i32) -> i64

{
    let result: i64 = arg2[6];
    arg1[6] = result;
    arg1[5] = arg2[5];
    arg1[4] = arg2[4];
    let zmm0: i128 = *arg2;
    let zmm1: i128 = arg2[1];
    let zmm2: i128 = arg2[2];
    arg1[3] = arg2[3];
    arg1[2] = zmm2;
    arg1[1] = zmm1;
    *arg1 = zmm0;
    *arg1.byte_offset(0x68) = arg3;
    *arg1.byte_offset(0x6c) = arg4;
    result
}
