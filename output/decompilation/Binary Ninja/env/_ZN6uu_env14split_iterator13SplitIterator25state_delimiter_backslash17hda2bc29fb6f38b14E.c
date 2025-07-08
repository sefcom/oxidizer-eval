
  void* uu_env::split_iterator::SplitIterator::state_delimiter_backslash::hda2bc29fb6f38b14(int32_t* arg1, int128_t* arg2)

{
    int32_t rax = uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(arg2);
    uint64_t rax_1 = rax - 0x22;
    void* result;
    int32_t var_40;
    
    if (rax_1 <= 0x41)
    {
        result = jump_table_425150[rax_1] + &jump_table_425150;
        int128_t var_30;
        void* result_2;
        
        switch (result)
        {
            case 0x4d9b13:
            {
                uu_env::split_iterator::SplitIterator::take_one::h79c5ef4ea4fbd4ee(&var_40, arg2);
                
                if (var_40 == 8)
                    /* tailcall */
                    return uu_env::split_iterator::SplitIterator::state_unquoted::h4114e84db94125c1(
                        arg1, arg2);
                
                label_4d9b8e:
                result = result_2;
                *(arg1 + 0x20) = result;
                int128_t zmm0_1 = var_40;
                *(arg1 + 0x10) = var_30;
                *arg1 = zmm0_1;
                break;
            }
            case 0x4d9b72:
            {
                goto label_4d9b7a;
            }
            case 0x4d9baa:
            {
                label_4d9bb5:
                uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code::h4d5fe0b4c9b39b36(&var_40, arg2, rax);
                int32_t rcx_2 = var_40;
                char result_1;
                result = result_1;
                
                if (rcx_2 != 8)
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
                    if (result)
                        /* tailcall */
                        return uu_env::split_iterator::SplitIterator::state_unquoted::h4114e84db94125c1(arg1, arg2);
                    
                    result = *(arg2 + 0x38);
                    *arg1 = 3;
                    arg1[1] = rax;
                    *(arg1 + 8) = result;
                }
                break;
            }
            case 0x4d9be4:
            {
                *arg1 = 6;
                break;
            }
        }
    }
    else if (rax == 0xa)
    {
        label_4d9b7a:
        result = uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_40, arg2);
        
        if (var_40 != 8)
            goto label_4d9b8e;
        
        *arg1 = 8;
    }
    else
    {
        if (rax != 0x110000)
            goto label_4d9bb5;
        
        int64_t r14_1 = *(arg2 + 0x38);
        result = _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(
            &arg1[4], "Delimiter", 9);
        *arg1 = 1;
        *(arg1 + 8) = r14_1;
    }
    return result;
}
