
  fn fuel_core_client::client::FuelClient::submit_opt::h459081aceac6f61d(arg1: *mut c_void, arg2: i64, arg3: i64) -> i64

{
    *arg1.byte_offset(0x78) = arg2;
    *arg1.byte_offset(0x80) = arg3;
    *arg1.byte_offset(0x89) = 0x200;
}
