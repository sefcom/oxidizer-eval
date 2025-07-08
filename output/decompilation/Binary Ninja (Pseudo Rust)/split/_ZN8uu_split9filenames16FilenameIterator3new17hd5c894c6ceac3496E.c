
  fn uu_split::filenames::FilenameIterator::new::hd5c894c6ceac3496(arg1: u64, arg2: i64, arg3: i64, arg4: *mut c_void) -> u64

{
    let mut rcx: u64;
    rcx = *arg4.byte_offset(0x29) << 3;
    let mut rax: u64 = 0x100a1a >> rcx;
    let result: u64 = arg1;
    let mut r15: i64 = -0x8000000000000000;
    let mut r8_1: i64;
    
    if *arg4.byte_offset(0x28) == 0
    {
        let mut var_68: i64;
        uu_split::number::FixedWidthNumber::new::he6f7e0494f2522ba(&var_68, rax, 
            *arg4.byte_offset(0x18), *arg4.byte_offset(0x20));
        let rdx_1: i64 = var_68;
        
        if rdx_1 != -0x8000000000000000
        {
            let var_60: i64;
            r8_1 = var_60;
            let var_58: u64;
            rax = var_58;
            let var_50: u64;
            rcx = var_50;
            arg1 = rax >> 8;
            r15 = rdx_1;
            goto 'label_4d9a9d;
        }
        
        let mut var_48: ();
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha461c13160c52a35(&var_48);
        let var_30_1: i32 = 1;
        *(result + 8) = alloc::boxed::Box$LT$T$GT$::new::hb3c54f980883cdc1(&var_48);
        *(result + 0x10) = &data_549160;
        *result = -0x7fffffffffffffff;
    }
    else
    {
        r8_1 = *arg4.byte_offset(0x20);
        'label_4d9a9d:
        let zmm0: i128 = *arg4.byte_offset(8);
        *result = r15;
        *(result + 8) = r8_1;
        *(result + 0x10) = rax;
        *(result + 0x11) = arg1;
        *(result + 0x17) = arg1 >> 0x30;
        *(result + 0x15) = arg1 >> 0x20;
        *(result + 0x18) = rcx;
        *(result + 0x20) = arg2;
        *(result + 0x28) = arg3;
        *(result + 0x30) = zmm0;
        *(result + 0x40) = 1;
    }
    result
}
