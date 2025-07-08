
  fn uu_ls::display_len_or_rdev::habe6b45626a6ff16(arg1: *mut i128, arg2: *mut c_void, arg3: i64, arg4: i8) -> *mut i128

{
    let mut result: *mut i128;
    
    if ((0xb000 & *arg2.byte_offset(0x38)) | 0x4000) != 0x6000
    {
        if arg3 == 0
        {
            core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e();
            /* no return */
        }
        
        let rax_7: i64 = *arg2.byte_offset(0x50);
        let mut rax_8: u64;
        let mut rdx_5: u64;
        
        if (rax_7 | arg3) >> 0x20 == 0
        {
            let temp2_2: i32 = arg3;
            rax_8 = COMBINE(0, rax_7) / temp2_2;
            rdx_5 = COMBINE(0, rax_7) % temp2_2;
        }
        else
        {
            let rdx_4: i64 = 0;
            let temp2_1: i32 = arg3;
            rax_8 = COMBINE(rdx_4, rax_7) / temp2_1;
            rdx_5 = COMBINE(rdx_4, rax_7) % temp2_1;
        }
        
        result = uu_ls::display_size::hba9b1cbdd7c6b199(arg1, rax_8 + 1, arg4);
        *arg1.byte_offset(0x18) = -0x8000000000000000;
    }
    else
    {
        let rax_2: i64 = *arg2.byte_offset(0x48);
        let mut var_40: i32 = (rax_2 >> 0x20 & 0xfffff000) | (rax_2 >> 8 & 0xfff);
        let mut var_3c: i32 = (rax_2 >> 0xc & 0xffffff00) | rax_2;
        let mut var_38: i128;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h7a7a803d5c9f4a1c(&var_38, 
            &var_40);
        let mut var_20: i128;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h7a7a803d5c9f4a1c(&var_20, 
            &var_3c);
        let var_28: i64;
        arg1[1] = var_28;
        *arg1 = var_38;
        *arg1.byte_offset(0x18) = var_20;
        let result_1: *mut i128;
        result = result_1;
        *arg1.byte_offset(0x28) = result;
    }
    
    result
}
