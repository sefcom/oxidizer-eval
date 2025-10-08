
  fn uu_df::table::RowFormatter::get_values::hdf51f7a80eb4184b(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut var_e8: i64 = 0;
    let result: i64 = 8;
    let var_d8: i64 = 0;
    let rax: *mut c_void = arg2[1];
    let rax_1: i64 = *rax.byte_offset(0x10);
    
    if rax_1 != 0
    {
        let rax_3: *mut c_void = *rax.byte_offset(8);
        let r13_1: *mut i64 = *arg2;
        let rax_11: i8 = arg2[2];
        let mut r14_1: i64 = 0;
        
        do
        {
            let mut rcx_1: *mut i64 = &r13_1[4];
            let mut var_100: i128;
            let var_f0: i64;
            let mut var_68: i128;
            let mut var_58_1: i64;
            
            match *rax_3.byte_offset(r14_1)
            {
                0 =>
                {
                    if (rax_11 & 1) == 0
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_68, &r13_1[0xa]);
                    }
                    else
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_100, "total%", 5);
                        var_58_1 = var_f0;
                        var_68 = var_100;
                    }
                }
                1 =>
                {
                    uu_df::table::RowFormatter::scaled_bytes::h1421e1083b656cc7(&var_68, rax, 
                        r13_1[0x16]);
                }
                2 =>
                {
                    uu_df::table::RowFormatter::scaled_bytes::h1421e1083b656cc7(&var_68, rax, 
                        r13_1[0x17]);
                }
                3 =>
                {
                    uu_df::table::RowFormatter::scaled_bytes::h1421e1083b656cc7(&var_68, rax, 
                        r13_1[0x18]);
                }
                4 =>
                {
                    uu_df::table::RowFormatter::percentage::h1b6e4d875b5dc07f(&var_68, *r13_1, 
                        r13_1[1]);
                }
                5 =>
                {
                    if (rax_11 & 1) == 0
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_68, &r13_1[0x10]);
                    }
                    else if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h71ef4b7cfeebb3c7(*rax.byte_offset(8), *rax.byte_offset(0x10)) == 0
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_100, "total%", 5);
                        var_58_1 = var_f0;
                        var_68 = var_100;
                    }
                    else
                    {
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_68, &r13_1[0x10]);
                    }
                }
                6 =>
                {
                    uu_df::table::RowFormatter::scaled_inodes::h53c80a3954ed717b(&var_68, rax, 
                        *rcx_1, rcx_1[1]);
                }
                7 =>
                {
                    rcx_1 = &r13_1[6];
                    uu_df::table::RowFormatter::scaled_inodes::h53c80a3954ed717b(&var_68, rax, 
                        *rcx_1, rcx_1[1]);
                }
                8 =>
                {
                    rcx_1 = &r13_1[8];
                    uu_df::table::RowFormatter::scaled_inodes::h53c80a3954ed717b(&var_68, rax, 
                        *rcx_1, rcx_1[1]);
                }
                9 =>
                {
                    uu_df::table::RowFormatter::percentage::h1b6e4d875b5dc07f(&var_68, r13_1[2], 
                        r13_1[3]);
                }
                0xa =>
                {
                    let rbx_1: i64 = r13_1[0x13];
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_100, "-total%", 1);
                    let mut rsi_1: *mut c_void = &r13_1[0x13];
                    let mut var_48: i128;
                    
                    if -(rbx_1) == -0x8000000000000000
                    {
                        rsi_1 = &var_48;
                    }
                    
                    let var_38_1: i64 = var_f0;
                    var_48 = var_100;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_68, rsi_1);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h73027cd2db783008(
                        &var_48);
                }
                0xb =>
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_68, &r13_1[0xd]);
                }
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::h4b8ce3b04144c5a5(&var_e8, &var_68);
            r14_1 += 1;
        } while rax_1 != r14_1;
    }
    
    arg1[2] = var_d8;
    *arg1 = var_e8;
    arg1[1] = result;
    result
}
