
  fn zoxide::db::stream::StreamOptions::with_base_dir::hdd0087d9881369a3(arg1: *mut i128, arg2: *mut i128, arg3: *mut i128) -> i64

{
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::he4fa8c614f7df1fb(&arg2[3]);
    arg2[4] = arg3[1];
    let zmm0: i128 = *arg3;
    arg2[3] = zmm0;
    let zmm1: i128 = *arg2;
    let zmm2: i128 = arg2[1];
    let zmm3: i128 = arg2[2];
    arg1[5] = arg2[5];
    arg1[3] = zmm0;
    arg1[2] = zmm3;
    arg1[1] = zmm2;
    *arg1 = zmm1;
    arg1[4] = arg2[4];
    let result: i64 = *arg2.byte_offset(0x48);
    *arg1.byte_offset(0x48) = result;
    result
}
