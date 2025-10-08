
  fn zoxide::db::stream::Stream::new::hb44baf2d44c3710b(arg1: *mut i128, arg2: *mut c_void, arg3: *mut i128) -> i64

{
    zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::sort_by_score::h86f3a64116ac2be7(arg2, *arg3.byte_offset(0x48));
    let result: i64 = *arg2.byte_offset(0x10);
    arg1[6] = arg2;
    *arg1.byte_offset(0x68) = 0;
    arg1[7] = result;
    let zmm1: i128 = arg3[1];
    let zmm2: i128 = arg3[2];
    let zmm3: i128 = arg3[3];
    *arg1 = *arg3;
    arg1[1] = zmm1;
    arg1[2] = zmm2;
    arg1[3] = zmm3;
    arg1[4] = arg3[4];
    arg1[5] = arg3[5];
    result
}
