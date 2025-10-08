
  int64_t uu_shuf::NonrepeatingIterator::new::hc2770fdf8c909180(int128_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4)

{
    int64_t rax;
    int64_t var_28 = rax;
    int64_t r12 = arg4;
    int64_t rcx = *arg2;
    int64_t rax_1 = arg2[1];
    
    if (rax_1 < rcx)
        r12 = 0;
    else if (rcx || rax_1 != -1 || arg2[2] & 1)
        r12 = core::cmp::Ord::min::h3622a8f04b6ad4c5(r12, rax_1 - rcx + 1);
    
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h2c61f77ef3103939(arg1);
    int64_t result = arg2[2];
    arg1[5] = result;
    arg1[4] = *arg2;
    *(arg1 + 0x38) = arg3;
    arg1[3] = r12;
    return result;
}
