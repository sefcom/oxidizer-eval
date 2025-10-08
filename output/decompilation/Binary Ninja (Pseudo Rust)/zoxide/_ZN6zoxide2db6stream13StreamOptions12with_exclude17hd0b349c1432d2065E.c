
  fn zoxide::db::stream::StreamOptions::with_exclude::hd0b349c1432d2065(arg1: *mut i128, arg2: *mut i128, arg3: *mut i128) -> i64

{
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$glob..Pattern$GT$$GT$::haacfece5fe5473bb(arg2.
        byte_offset(0x18));
    *arg2.byte_offset(0x28) = arg3[1];
    *arg2.byte_offset(0x18) = *arg3;
    let zmm0: i128 = *arg2;
    let zmm1: i128 = arg2[3];
    let zmm2: i128 = arg2[4];
    arg1[5] = arg2[5];
    arg1[4] = zmm2;
    arg1[3] = zmm1;
    *arg1 = zmm0;
    arg1[2] = arg2[2];
    let result: i64 = *arg2.byte_offset(0x28);
    *arg1.byte_offset(0x28) = result;
    arg1[1] = arg2[1];
    result
}
