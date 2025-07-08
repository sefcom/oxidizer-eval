
  int64_t uu_df::table::RowFormatter::get_values::h6dce5b584cdc4209(uint128_t* arg1, int64_t* arg2)

{
    int64_t var_a8 = 0;
    int64_t var_a0 = 8;
    int64_t result = 0;
    void* r14 = arg2[1];
    int64_t rcx = *(r14 + 8);
    int64_t rax = *(r14 + 0x10);
    int64_t var_40 = rcx;
    int64_t var_38 = rax + rcx;
    char* rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd80283963ca975b5(&var_40);
    
    if (!rax_2)
    {
        label_4cb12d:
        arg1[1] = result;
        *arg1 = var_a8;
        return result;
    }
    
    int64_t* rbp_1 = *arg2;
    void* rsi = &rbp_1[0xd];
    int64_t* rcx_5 = &rbp_1[6];
    char rdx_2 = arg2[2];
    void* rax_5 = &rbp_1[0x16];
    int64_t* r13_1 = rcx_5;
    void* r12_1 = rsi;
    int128_t var_118;
    int64_t var_108;
    int128_t var_f8;
    int64_t var_e8;
    
    switch (*rax_2)
    {
        case 0:
        {
            label_4caf45:
            rsi = &rbp_1[0xa];
            
            if (!rdx_2)
                goto label_4cb051;
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_118, "total%", 5);
            label_4cb077:
            var_e8 = var_108;
            var_f8 = var_118;
            goto label_4cb0e6;
        }
        case 1:
        {
            goto label_4cb09b;
        }
        case 2:
        {
            label_4cb088:
            rax_5 = &rbp_1[0x17];
            goto label_4cb09b;
        }
        case 3:
        {
            label_4caf80:
            rax_5 = &rbp_1[0x18];
            label_4cb09b:
            uu_df::table::RowFormatter::scaled_bytes::h6673754bc74912ba(&var_f8, r14, *rax_5);
            goto label_4cb0e6;
        }
        case 4:
        {
            uu_df::table::RowFormatter::percentage::hd76ce7d818616919(&var_f8, *rbp_1, rbp_1[1]);
            goto label_4cb0e6;
        }
        case 5:
        {
            label_4cb01b:
            rsi = &rbp_1[0x10];
            
            if (!rdx_2)
                goto label_4cb051;
            
            rsi = &rbp_1[0x10];
            
            if (_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h550da7de222e5c7d(&data_415b00[0x8e], rcx, rax))
                goto label_4cb051;
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                &var_118, "total%", 5);
            goto label_4cb077;
        }
        case 6:
        {
            label_4cb0a2:
            rcx_5 = &rbp_1[4];
            goto label_4cb0b9;
        }
        case 7:
        {
            goto label_4cb0b9;
        }
        case 8:
        {
            label_4caf73:
            rcx_5 = &rbp_1[8];
            label_4cb0b9:
            uu_df::table::RowFormatter::scaled_inodes::h71e8cb062ae7b2e0(&var_f8, r14, *rcx_5, 
                rcx_5[1]);
            goto label_4cb0e6;
        }
        case 9:
        {
            label_4cb0c0:
            uu_df::table::RowFormatter::percentage::hd76ce7d818616919(&var_f8, rbp_1[2], rbp_1[3]);
            goto label_4cb0e6;
        }
        case 0xa:
        {
            while (true)
            {
                int128_t var_c8;
                void* rsi_1;
                
                if (rbp_1[0x13] != -0x8000000000000000)
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                        &var_118, "-total%", 1);
                    int64_t var_b8_2 = var_108;
                    var_c8 = var_118;
                    rsi_1 = &rbp_1[0x13];
                }
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                        &var_118, "-total%", 1);
                    int64_t var_b8_1 = var_108;
                    var_c8 = var_118;
                    rsi_1 = &var_c8;
                }
                
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_f8, rsi_1);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4c5421f62a6f6c4d(&var_c8);
                label_4cb0e6:
                var_108 = var_e8;
                var_118 = var_f8;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h8aaba3f21f3b2415(&var_a8, &var_118);
                char* rax_12 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd80283963ca975b5(&var_40);
                
                if (!rax_12)
                    goto label_4cb12d;
                
                rax_5 = &rbp_1[0x16];
                rcx_5 = r13_1;
                rsi = r12_1;
                
                switch (*rax_12)
                {
                    case 0:
                    {
                        goto label_4caf45;
                    }
                    case 1:
                    {
                        goto label_4cb09b;
                    }
                    case 2:
                    {
                        goto label_4cb088;
                    }
                    case 3:
                    {
                        goto label_4caf80;
                    }
                    case 4:
                    {
                        break;
                        break;
                    }
                    case 5:
                    {
                        goto label_4cb01b;
                    }
                    case 6:
                    {
                        goto label_4cb0a2;
                    }
                    case 7:
                    {
                        goto label_4cb0b9;
                    }
                    case 8:
                    {
                        goto label_4caf73;
                    }
                    case 9:
                    {
                        goto label_4cb0c0;
                    }
                    case 0xa:
                    {
                        continue;
                    }
                    case 0xb:
                    {
                        goto label_4cb051;
                    }
                }
            }
            
            uu_df::table::RowFormatter::percentage::hd76ce7d818616919(&var_f8, *rbp_1, rbp_1[1]);
            goto label_4cb0e6;
        }
        case 0xb:
        {
            label_4cb051:
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(
                &var_f8, rsi);
            goto label_4cb0e6;
        }
    }
}
