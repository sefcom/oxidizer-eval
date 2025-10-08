
  fn uu_split::filenames::FilenameIterator::new::hc2a8a0f7203a171b(arg1: *mut i64, arg2: i64, arg3: u64, arg4: *mut c_void) -> u64

{
    let r14: u64 = arg3;
    let mut rcx: u64;
    rcx = *arg4.byte_offset(0x29) << 3;
    let mut rax: u64 = 0x100a1a >> rcx;
    let mut r13: i64 = -0x8000000000000000;
    let mut result: u64;
    let mut rsi: i64;
    
    if *arg4.byte_offset(0x28) == 0
    {
        let mut var_68: i64;
        uu_split::number::FixedWidthNumber::new::h658afa50ae467836(&var_68, rax, 
            *arg4.byte_offset(0x18), *arg4.byte_offset(0x20));
        let rdi_1: i64 = var_68;
        
        if rdi_1 != -0x8000000000000000
        {
            let var_60: i64;
            rsi = var_60;
            let var_58: u64;
            rax = var_58;
            let var_50: u64;
            rcx = var_50;
            arg3 = rax >> 8;
            r13 = rdi_1;
            goto 'label_46b527;
        }
        
        let mut var_48: ();
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hfadfb68a35ae07bf(&var_48, "numerical suffix start value is …", 0x3f);
        let var_30_1: i32 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::he26860fb58d4a888(&var_48);
        arg1[1] = result;
        arg1[2] = &data_50ab40;
        *arg1 = -0x7fffffffffffffff;
    }
    else
    {
        rsi = *arg4.byte_offset(0x20);
        'label_46b527:
        let zmm0: i128 = *arg4.byte_offset(8);
        *arg1 = r13;
        arg1[1] = rsi;
        arg1[2] = rax;
        *arg1.byte_offset(0x11) = arg3;
        result = arg3 >> 0x30;
        *arg1.byte_offset(0x17) = result;
        *arg1.byte_offset(0x15) = arg3 >> 0x20;
        arg1[3] = rcx;
        arg1[4] = arg2;
        arg1[5] = r14;
        *arg1.byte_offset(0x30) = zmm0;
        arg1[8] = 1;
    }
    result
}
