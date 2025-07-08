
  fn uu_df::table::RowFormatter::get_values::h6dce5b584cdc4209(arg1: *mut u128, arg2: *mut i64) -> i64

{
    let mut var_a8: i64 = 0;
    let var_a0: i64 = 8;
    let result: i64 = 0;
    let r14: *mut c_void = arg2[1];
    let rcx: i64 = *r14.byte_offset(8);
    let rax: i64 = *r14.byte_offset(0x10);
    let mut var_40: i64 = rcx;
    let var_38: i64 = rax + rcx;
    let rax_2: *mut i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd80283963ca975b5(&var_40);
    
    if rax_2 == 0
    {
        'label_4cb12d:
        arg1[1] = result;
        *arg1 = var_a8;
        return result;
    }
    
    let rbp_1: *mut i64 = *arg2;
    let mut rsi: *mut c_void = &rbp_1[0xd];
    let mut rcx_5: *mut i64 = &rbp_1[6];
    let rdx_2: i8 = arg2[2];
    let mut rax_5: *mut c_void = &rbp_1[0x16];
    let r13_1: *mut i64 = rcx_5;
    let r12_1: *mut c_void = rsi;
    let mut var_118: i128;
    let mut var_108: i64;
    let mut var_f8: i128;
    let mut var_e8: i64;
    
    match *rax_2
    {
        0 =>
        {
            'label_4caf45:
            rsi = &rbp_1[0xa];
            
            if rdx_2 == 0
            {
                goto 'label_4cb051;
            }
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_118, "total%", 5);
            'label_4cb077:
            var_e8 = var_108;
            var_f8 = var_118;
            goto 'label_4cb0e6;
        }
        1 =>
        {
            goto 'label_4cb09b;
        }
        2 =>
        {
            'label_4cb088:
            rax_5 = &rbp_1[0x17];
            goto 'label_4cb09b;
        }
        3 =>
        {
            'label_4caf80:
            rax_5 = &rbp_1[0x18];
            'label_4cb09b:
            uu_df::table::RowFormatter::scaled_bytes::h6673754bc74912ba(&var_f8, r14, *rax_5);
            goto 'label_4cb0e6;
        }
        4 =>
        {
            uu_df::table::RowFormatter::percentage::hd76ce7d818616919(&var_f8, *rbp_1, rbp_1[1]);
            goto 'label_4cb0e6;
        }
        5 =>
        {
            'label_4cb01b:
            rsi = &rbp_1[0x10];
            
            if rdx_2 == 0
            {
                goto 'label_4cb051;
            }
            
            rsi = &rbp_1[0x10];
            
            if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h550da7de222e5c7d(&data_415b00[0x8e], rcx, rax) != 0
            {
                goto 'label_4cb051;
            }
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_118, "total%", 5);
            goto 'label_4cb077;
        }
        6 =>
        {
            'label_4cb0a2:
            rcx_5 = &rbp_1[4];
            goto 'label_4cb0b9;
        }
        7 =>
        {
            goto 'label_4cb0b9;
        }
        8 =>
        {
            'label_4caf73:
            rcx_5 = &rbp_1[8];
            'label_4cb0b9:
            uu_df::table::RowFormatter::scaled_inodes::h71e8cb062ae7b2e0(&var_f8, r14, *rcx_5, 
                rcx_5[1]);
            goto 'label_4cb0e6;
        }
        9 =>
        {
            'label_4cb0c0:
            uu_df::table::RowFormatter::percentage::hd76ce7d818616919(&var_f8, rbp_1[2], rbp_1[3]);
            goto 'label_4cb0e6;
        }
        0xa =>
        {
            loop
            {
                let mut var_c8: i128;
                let mut rsi_1: *mut c_void;
                
                if rbp_1[0x13] != -0x8000000000000000
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                        &var_118, "-total%", 1);
                    let var_b8_2: i64 = var_108;
                    var_c8 = var_118;
                    rsi_1 = &rbp_1[0x13];
                }
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                        &var_118, "-total%", 1);
                    let var_b8_1: i64 = var_108;
                    var_c8 = var_118;
                    rsi_1 = &var_c8;
                }
                
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_f8, rsi_1);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4c5421f62a6f6c4d(&var_c8);
                'label_4cb0e6:
                var_108 = var_e8;
                var_118 = var_f8;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h8aaba3f21f3b2415(&var_a8, &var_118);
                let rax_12: *mut i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd80283963ca975b5(&var_40);
                
                if rax_12 == 0
                {
                    goto 'label_4cb12d;
                }
                
                rax_5 = &rbp_1[0x16];
                rcx_5 = r13_1;
                rsi = r12_1;
                
                match *rax_12
                {
                    0 =>
                    {
                        goto 'label_4caf45;
                    }
                    1 =>
                    {
                        goto 'label_4cb09b;
                    }
                    2 =>
                    {
                        goto 'label_4cb088;
                    }
                    3 =>
                    {
                        goto 'label_4caf80;
                    }
                    4 =>
                    {
                        break;
                    }
                    5 =>
                    {
                        goto 'label_4cb01b;
                    }
                    6 =>
                    {
                        goto 'label_4cb0a2;
                    }
                    7 =>
                    {
                        goto 'label_4cb0b9;
                    }
                    8 =>
                    {
                        goto 'label_4caf73;
                    }
                    9 =>
                    {
                        goto 'label_4cb0c0;
                    }
                    0xa =>
                    {
                        continue;
                    }
                    0xb =>
                    {
                        goto 'label_4cb051;
                    }
                }
            }
            
            uu_df::table::RowFormatter::percentage::hd76ce7d818616919(&var_f8, *rbp_1, rbp_1[1]);
            goto 'label_4cb0e6;
        }
        0xb =>
        {
            'label_4cb051:
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
                &var_f8, rsi);
            goto 'label_4cb0e6;
        }
    }
}
