
  fn uu_ls::display_len_or_rdev::h54f0966b5b04a08a(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i8) -> *mut i128

{
    let mut result: *mut i128;
    
    if ((0xb000 & *arg2.byte_offset(0x38)) | 0x4000) != 0x6000
    {
        if arg3 == 0
        {
            core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
            /* no return */
        }
        
        let rax_9: i64 = *arg2.byte_offset(0x50);
        let mut rax_10: u64;
        let mut rdx_3: u64;
        
        if (rax_9 | arg3) >> 0x20 == 0
        {
            let temp2_2: i32 = arg3;
            rax_10 = COMBINE(0, rax_9) / temp2_2;
            rdx_3 = COMBINE(0, rax_9) % temp2_2;
        }
        else
        {
            let rdx_2: i64 = 0;
            let temp2_1: i32 = arg3;
            rax_10 = COMBINE(rdx_2, rax_9) / temp2_1;
            rdx_3 = COMBINE(rdx_2, rax_9) % temp2_1;
        }
        
        result = uu_ls::display_size::hb2e480a0d8619531(&arg1[1], rax_10 + 1, arg4);
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let r14_1: i64 = *arg2.byte_offset(0x48);
        let mut var_40: i128;
        let mut rax_6: i64;
        let mut rdx: u64;
        rax_6 = core::fmt::num::imp::_$LT$impl$u20$u32$GT$::_fmt::hcfe26aa883005358(
            (r14_1 >> 0x20 & 0xfffff000) | (r14_1 >> 8 & 0xfff), &var_40, 0xa);
        let mut var_58: i128;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_58, rax_6, rdx);
        let mut var_22: ();
        let mut rax_7: i64;
        let mut rdx_1: u64;
        rax_7 = core::fmt::num::imp::_$LT$impl$u20$u32$GT$::_fmt::hcfe26aa883005358(
            (r14_1 >> 0xc & 0xffffff00) | r14_1, &var_22, 0xa);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_40, rax_7, rdx_1);
        let var_30: i64;
        arg1[5] = var_30;
        *arg1.byte_offset(0x18) = var_40;
        let result_1: *mut i128;
        result = result_1;
        arg1[2] = result;
        *arg1 = var_58;
    }
    
    result
}
