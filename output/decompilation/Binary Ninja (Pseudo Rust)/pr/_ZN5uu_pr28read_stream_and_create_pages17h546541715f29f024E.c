
  fn uu_pr::read_stream_and_create_pages::h546541715f29f024(arg1: *mut i128, arg2: *mut i128) -> i64

{
    let mut r10: i64 = 1;
    let mut r8: i64 = 1;
    
    if !(0 + -(*arg1.byte_offset(0xd8)))
    {
        r8 = *arg1.byte_offset(0xf8);
    }
    
    let rax: i64 = arg1[0x13];
    
    if !(0 + -(arg1[0x10]))
    {
        r10 = arg1[0x12];
    }
    
    let r9_2: i64 = (*arg1.byte_offset(0x138) >> arg1[0x14]) * r10;
    let mut var_118: i64 = 1;
    let var_110: i64 = 0;
    let var_f0: i64 = 0;
    let var_d0: i128 = *arg2;
    let var_c0: i128 = arg2[1];
    let var_b0: i128 = arg2[2];
    let var_a0: i64 = arg2[3];
    let var_98: i64 = 0;
    let var_90: i64 = r8;
    let rdx: i64;
    let var_88: i64 = rdx;
    let var_80: i64 = r9_2;
    let var_78: i64 = 0;
    let var_58: i64 = 0;
    let var_38: i64 = 0;
    let var_30: i64 = rax;
    let var_28: i8 = 0;
    let var_8: i8 = 0;
    let var_20: i128 = *arg1;
    let var_10: i64 = rax;
    alloc::boxed::Box$LT$T$GT$::new::hccf1d8eab5e9177f(&var_118)
}
