
  fn uu_shuf::NonrepeatingIterator::new::h5c9f2f7db2741ba2(arg1: *mut i128, arg2: *mut i64, arg3: i64, arg4: i64) -> *mut i128

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
    else if rcx != 0 || rax_1 != -1
    {
        r12 = core::cmp::min_by::h9901c89ba00e38af(r12, rax_1 - rcx + 1);
    }
    
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::hf7b2857436e5a11e(arg1);
    arg1[5] = arg2[2];
    arg1[4] = *arg2;
    *arg1.byte_offset(0x38) = arg3;
    arg1[3] = r12;
    arg1
}
