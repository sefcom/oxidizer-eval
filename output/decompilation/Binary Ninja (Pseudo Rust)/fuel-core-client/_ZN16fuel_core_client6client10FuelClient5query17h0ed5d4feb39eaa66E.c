
  fn fuel_core_client::client::FuelClient::query::h0ed5d4feb39eaa66(arg1: *mut i128, arg2: i64, arg3: *mut i128) -> i512

{
    arg1[5] = arg2;
    let zmm1: i128 = arg3[1];
    let zmm2: i128 = arg3[2];
    let zmm3: i128 = arg3[3];
    *arg1 = *arg3;
    arg1[1] = zmm1;
    arg1[2] = zmm2;
    arg1[3] = zmm3;
    let result: i128 = arg3[4];
    arg1[4] = result;
    arg1[7] = 0;
    result
}
