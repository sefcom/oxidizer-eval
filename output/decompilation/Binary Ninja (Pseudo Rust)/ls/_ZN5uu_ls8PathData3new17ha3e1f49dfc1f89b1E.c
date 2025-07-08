
  fn uu_ls::PathData::new::ha3e1f49dfc1f89b1(arg1: *mut i128, arg2: *mut i128, arg3: u64, arg4: *mut i128, arg5: i32, arg6: i32, arg7: i8) -> i64

{
    let var_120: u64 = arg3;
    let var_148: *mut i128 = arg4;
    let var_13c: i32 = arg5;
    let mut var_e8: i128;
    let mut r13: i32;
    
    if *arg4 != -0x8000000000000000
    {
        let var_128_1: i64 = arg4[1];
        let var_138_1: i128 = *arg4;
        r13 = 0;
        
        match arg6
        {
            0 =>
            {
                /* tailcall */
                return sub_526b74(arg2, 0, arg1, 0, arg3);
            }
            1 =>
            {
                'label_526b03:
                
                if arg7 == 0
                {
                    /* tailcall */
                    return sub_526b74();
                }
                
                let var_14c: i32 = r13;
                arg2[1];
                let mut rax_7: u32;
                rax_7 = 1;
                let var_150: u32 = rax_7;
                std::fs::metadata::h459aac21f85cb4df(&var_e8, *arg2.byte_offset(8));
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hb9b2c6df5be91f44(&var_e8);
                /* tailcall */
                return sub_526b74();
            }
            2 =>
            {
                /* tailcall */
                return sub_526b74();
            }
            3 =>
            {
                /* tailcall */
                return sub_526b74();
            }
        }
        
        return;
    }
    
    let var_d8: i64;
    
    if arg7 != 0
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4e545ed874bc91f1(&var_e8, arg2);
        let var_128: i64 = var_d8;
        let var_138: i128 = var_e8;
        let mut rax: i64;
        rax = 1;
        (&jump_table_4346c0)[arg6];
        /* tailcall */
        return sub_526b74();
    }
    
    let mut rax_5: i64;
    let mut rdx_2: size_t;
    rax_5 = std::path::Path::file_name::h79ecbb7850a9c7f3(*arg2.byte_offset(8), arg2[1]);
    
    if rax_5 == 0
    {
        rax_5 = uu_ls::PathData::new::_$u7b$$u7b$closure$u7d$$u7d$::h0c5837aa9b0379e1(
            *arg2.byte_offset(8), arg2[1]);
    }
    
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_e8, rax_5, rdx_2);
    let var_128_2: i64 = var_d8;
    let var_138_2: i128 = var_e8;
    r13 = 1;
    
    match arg6
    {
        0 =>
        {
            /* tailcall */
            sub_526b74()
        }
        1 =>
        {
            goto 'label_526b03;
        }
        2 =>
        {
            /* tailcall */
            sub_526b74()
        }
        3 =>
        {
            /* tailcall */
            sub_526b74()
        }
    }
}
