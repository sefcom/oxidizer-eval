
  fn uu_sort::FieldSelector::new::h76b0cdeb9dd3e1dd(arg1: *mut i128, arg2: *mut i128, arg3: *mut i128, arg4: i64) -> *mut i128

{
    let mut r8: u64 = *arg2.byte_offset(8);
    
    if r8 == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d4334c76f34ab0e(arg1, 
            "invalid character index 0 for th…", 0x3b);
        *arg1.byte_offset(0x37) = 2;
    }
    else
    {
        let rax_2: u8 = arg4 >> 0x28;
        let mut rdi: u32 = rax_2;
        
        if *arg2 != 1
        {
            rdi = rdi != 2;
            r8 = 1;
        }
        else
        {
            if r8 != 1
            {
                rdi = rdi != 2;
                r8 = arg3[1];
            }
            else
            {
                r8 = arg3[1];
                rdi = rdi != 2;
                rdi &= ((r8 ^ 2) | arg2[1]) != 0 | rax_2 < 2;
            }
            
            r8 = r8 != 2;
        }
        
        let var_20_1: i128 = *arg2;
        let rsi: i64 = arg3[1];
        let zmm0: i128 = *arg3;
        let var_38_1: i128 = zmm0;
        arg1[2] = *var_20_1[8];
        *arg1.byte_offset(0x28) = arg2[1];
        *arg1 = zmm0;
        arg1[1] = rsi;
        *arg1.byte_offset(0x18) = var_20_1;
        *arg1.byte_offset(0x34) = arg4 >> 0x20;
        arg1[3] = arg4;
        *arg1.byte_offset(0x35) = rax_2;
        *arg1.byte_offset(0x36) = r8;
        *arg1.byte_offset(0x37) = rdi;
    }
    
    arg1
}
