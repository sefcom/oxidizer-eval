
  fn uu_df::table::Row::new::h8c73bfba9893cde9(arg1: *mut i64) -> i64

{
    let var_20: i64 = -0x8000000000000000;
    let mut var_70: i128;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(&var_70, 
        "total%", 5);
    let zmm0: i128 = var_70;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(&var_70, 
        "-total%", 1);
    let zmm0_1: i128 = var_70;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(&var_70, 
        "-total%", 1);
    let result: i64;
    arg1[0x12] = result;
    *arg1.byte_offset(0x80) = var_70;
    let var_10: i64;
    arg1[0x15] = var_10;
    *arg1.byte_offset(0x98) = var_20;
    arg1[0xc] = result;
    *arg1.byte_offset(0x50) = zmm0;
    *arg1.byte_offset(0x68) = zmm0_1;
    arg1[0xf] = result;
    *arg1 = 0;
    arg1[2] = 0;
    __builtin_memset(&arg1[4], 0, 0x30);
    __builtin_memset(&arg1[0x16], 0, 0x18);
    result
}
