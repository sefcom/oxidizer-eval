
  fn uu_sort::FieldSelector::new::h5b970f0569e874f9(arg1: *mut i128, arg2: *mut i128, arg3: *mut i128, arg4: i64) -> *mut i128

{
    let rdi: i64 = *arg2.byte_offset(8);
    
    if rdi == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1bb0423170e7fa7c(arg1, "invalid character index 0 for th…", 0x3b);
        *arg1.byte_offset(0x37) = 2;
        return arg1;
    }
    
    let rax_1: u8 = arg4 >> 0x28;
    let r9: u32 = rax_1;
    let r10: i64 = *arg2;
    let mut rdi_2: i64;
    let mut r8_1: i64;
    
    if ((rdi ^ 1) | (r10 ^ 1)) != 0
    {
        rdi_2 = r9 != 2;
        r8_1 = 1;
        
        if r10 == 1
        {
            r8_1 = arg3[1] != 2;
        }
    }
    else if arg3[1] != 2
    {
        rdi_2 = r9 != 2;
        r8_1 = 1;
    }
    else
    {
        if rax_1 >= 2
        {
            rdi_2 = 0;
            r8_1 = 0;
        }
        
        if rax_1 < 2 || arg2[1] == 1
        {
            rdi_2 = r9 != 2;
            r8_1 = 0;
        }
    }
    
    let var_20: i128 = *arg2;
    let rsi: i64 = arg3[1];
    let zmm0: i128 = *arg3;
    let var_38: i128 = zmm0;
    arg1[2] = *var_20[8];
    *arg1.byte_offset(0x28) = arg2[1];
    *arg1 = zmm0;
    arg1[1] = rsi;
    *arg1.byte_offset(0x18) = var_20;
    *arg1.byte_offset(0x34) = arg4 >> 0x20;
    arg1[3] = arg4;
    *arg1.byte_offset(0x35) = rax_1;
    *arg1.byte_offset(0x36) = r8_1;
    *arg1.byte_offset(0x37) = rdi_2;
    arg1
}
