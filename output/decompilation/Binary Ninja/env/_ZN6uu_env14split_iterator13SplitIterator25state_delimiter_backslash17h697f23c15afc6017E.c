
  void* uu_env::split_iterator::SplitIterator::state_delimiter_backslash::h697f23c15afc6017(int32_t* arg1, int128_t* arg2)

{
    int32_t rax = uu_env::split_iterator::SplitIterator::get_current_char::h29d2c0904606848a(arg2);
    uint64_t rax_1 = rax - 0x22;
    void* result;
    int32_t var_40;
    
    if (rax_1 <= 0x41)
    {
        result = jump_table_41d800[rax_1] + &jump_table_41d800;
        int128_t var_30;
        void* result_2;
        
        switch (result)
        {
            case 0x4708c3:
            {
                uu_env::split_iterator::SplitIterator::take_one::h1e0059af94c5f623(&var_40, arg2);
                
                if (var_40 == 0xc)
                    /* tailcall */
                    return uu_env::split_iterator::SplitIterator::state_unquoted::hb014e515ee06de9c(
                        arg1, arg2);
                
                label_47093e:
                result = result_2;
                *(arg1 + 0x20) = result;
                int128_t zmm0_1 = var_40;
                *(arg1 + 0x10) = var_30;
                *arg1 = zmm0_1;
                break;
            }
            case 0x470922:
            {
                goto label_47092a;
            }
            case 0x47095a:
            {
                label_470965:
                uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code::hbf4d9b34cfe30d19(&var_40, arg2, rax);
                int32_t rcx_2 = var_40;
                char result_1;
                result = result_1;
                
                if (rcx_2 != 0xc)
                {
                    arg1[9] = *result_2[4];
                    *(arg1 + 0x15) = var_30;
                    int128_t var_3b;
                    *(arg1 + 5) = var_3b;
                    *arg1 = rcx_2;
                    arg1[1] = result;
                }
                else
                {
                    if (result & 1)
                        /* tailcall */
                        return uu_env::split_iterator::SplitIterator::state_unquoted::hb014e515ee06de9c(arg1, arg2);
                    
                    result = *(arg2 + 0x38);
                    *arg1 = 3;
                    arg1[1] = rax;
                    *(arg1 + 8) = result;
                }
                break;
            }
            case 0x470994:
            {
                *arg1 = 9;
                break;
            }
        }
    }
    else if (rax == 0xa)
    {
        label_47092a:
        result = uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&var_40, arg2);
        
        if (var_40 != 0xc)
            goto label_47093e;
        
        *arg1 = 0xc;
    }
    else
    {
        if (rax != 0x110000)
            goto label_470965;
        
        int64_t r14_1 = *(arg2 + 0x38);
        result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf510679057ea9fe7(&arg1[4], "Delimitersrc/uu/env/src/string_e…", 9);
        *arg1 = 1;
        *(arg1 + 8) = r14_1;
    }
    return result;
}
