
  int128_t* ruff_python_formatter::comments::format::normalize_comment::h1cf279285e939ea7(int64_t* arg1, int32_t* arg2, char* arg3, int64_t arg4)

{
    void* rax;
    int64_t rdx_1;
    rax = ruff_formatter::source_code::SourceCodeSlice::text::h88bb2d0c23d31a8a(arg2, arg3, arg4);
    char* rax_1;
    int64_t rdx_2;
    rax_1 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hc1c5622f93930984(rax, rdx_1);
    char* r12 = rax_1;
    int64_t r13 = rdx_2;
    int32_t var_98;
    ruff_python_formatter::comments::format::strip_comment_prefix::hbac1a00885230484(&var_98, 
        rax_1, rdx_2);
    int32_t rax_2 = var_98;
    int128_t* result;
    char* var_90;
    int64_t var_88;
    
    if (rax_2 != 4)
    {
        r12 = var_90;
        r13 = var_88;
        arg1[1] = rax_2;
        int32_t var_94;
        *(arg1 + 0xc) = var_94;
        result = 1;
        label_700179:
        arg1[2] = r12;
        arg1[3] = r13;
        *arg1 = result;
    }
    else
    {
        char* var_48 = var_90;
        int64_t var_40_1 = var_88;
        
        if (!var_88)
        {
            arg1[1] = -0x8000000000000000;
            r13 = 1;
            r12 = "#Didn't find expected comment to…";
            result = nullptr;
            goto label_700179;
        }
        
        __builtin_memcpy(&var_98, " !:#\'…", 0x14);
        
        if (core::str::pattern::Pattern::is_prefix_of::h1fd50cc35b7d7b71(&var_98, var_90, var_88))
        {
            arg1[1] = -0x8000000000000000;
            result = nullptr;
            goto label_700179;
        }
        
        var_98 = 0;
        char* rax_4;
        uint64_t rdx_4;
        rax_4 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0xa0, &var_98);
        int64_t** rax_11;
        int64_t* var_68;
        int64_t* rax_10;
        int64_t rdx_8;
        
        if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(var_90, 
            var_88, rax_4, rdx_4))
        {
            rax_10 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hd401112d4c765288(
                var_90, var_88);
            label_700211:
            var_68 = rax_10;
            int64_t var_60_1 = rdx_8;
            int64_t* var_58 = &var_68;
            int64_t (* var_50_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdb2fd416f06f629c;
            var_98 = &data_97cc78;
            int64_t var_90_1 = 1;
            int64_t var_78_1 = 0;
            rax_11 = &var_58;
        }
        else
        {
            int64_t rax_6;
            int64_t rdx_6;
            rax_6 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h08e9bc36e1fbb522(var_90, 
                var_88);
            int64_t var_38 = rax_6;
            int64_t var_30_1 = rdx_6;
            int64_t rax_7;
            int64_t rdx_7;
            rax_7 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hd401112d4c765288(rax_6, 
                rdx_6);
            int64_t* rax_9;
            
            if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(rax_7, 
                rdx_7, "type:# #Didn't find expected com…", 5))
            {
                var_98 = 0;
                char* rax_12;
                uint64_t rdx_9;
                rax_12 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x20, &var_98);
                
                if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(
                    rax_6, rdx_6, rax_12, rdx_9))
                {
                    rax_10 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(2, var_90, var_88);
                    
                    if (rax_10)
                        goto label_700211;
                    
                    core::str::slice_error_fail::h1a2885084e28d077(var_90, var_88, 2, var_88);
                    /* no return */
                }
                
                rax_9 = &var_38;
            }
            else
                rax_9 = &var_48;
            
            var_68 = rax_9;
            int64_t (* var_60_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdb2fd416f06f629c;
            var_98 = &data_97cc78;
            int64_t var_90_2 = 1;
            int64_t var_78_2 = 0;
            rax_11 = &var_68;
        }
        int64_t** var_88_1 = rax_11;
        int64_t var_80_1 = 1;
        result = core::option::Option$LT$T$GT$::map_or_else::h9c3ecc8c56a3befd(&arg1[1], &var_98);
        *arg1 = 0;
    }
    return result;
}
