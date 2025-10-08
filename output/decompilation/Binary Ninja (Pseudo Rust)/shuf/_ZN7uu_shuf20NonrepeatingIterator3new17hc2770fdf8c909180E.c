
  fn uu_shuf::NonrepeatingIterator::new::hc2770fdf8c909180(arg1: *mut i128, arg2: *mut i64, arg3: i64, arg4: i64) -> i64

{
    let rax: i64;
    let var_28: i64 = rax;
    let mut r12: i64 = arg4;
    let rcx: i64 = *arg2;
    let rax_1: i64 = arg2[1];
    
    if rax_1 < rcx
    {
        r12 = 0;
    }
    else if rcx != 0 || rax_1 != -1 || (arg2[2] & 1) != 0
    {
        r12 = core::cmp::Ord::min::h3622a8f04b6ad4c5(r12, rax_1 - rcx + 1);
    }
    
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h2c61f77ef3103939(arg1);
    let result: i64 = arg2[2];
    arg1[5] = result;
    arg1[4] = *arg2;
    *arg1.byte_offset(0x38) = arg3;
    arg1[3] = r12;
    result
}
