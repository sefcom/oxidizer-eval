
  fn uu_env::split_iterator::SplitIterator::state_unquoted_backslash::h38190f9bed933da1(arg1: *mut i32, arg2: *mut i128) -> u64

{
    let rax: i32 = uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(arg2);
    let mut result: u64;
    let mut var_40: i32;
    
    if rax <= 0x5b
    {
        let rax_1: u64 = rax - 0xa;
        let var_3b: i128;
        let var_2b: i128;
        
        if rax_1 > 0x1d
        {
            'label_4d9ebc:
            uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code::h4d5fe0b4c9b39b36(&var_40, arg2, rax);
            let rcx_1: i32 = var_40;
            let result_1: i8;
            result = result_1;
            
            if rcx_1 != 8
            {
                let var_1c: i32;
                arg1[9] = var_1c;
                *arg1.byte_offset(0x15) = var_2b;
                *arg1.byte_offset(5) = var_3b;
                *arg1 = rcx_1;
                arg1[1] = result;
            }
            else if result != 0
            {
                *arg1 = 8;
            }
            else
            {
                result = *arg2.byte_offset(0x38);
                *arg1 = 3;
                arg1[1] = rax;
                *arg1.byte_offset(8) = result;
            }
        }
        else
        {
            match rax_1
            {
                0 =>
                {
                    result = uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(
                        &var_40, arg2);
                    
                    if var_40 == 8
                    {
                        *arg1 = 8;
                    }
                    else
                    {
                        'label_4d9e4e:
                        result = *var_2b[0xb];
                        *arg1.byte_offset(0x20) = result;
                        let zmm0_1: i128 = var_40;
                        *arg1.byte_offset(0x10) = var_3b;
                        *arg1 = zmm0_1;
                    }
                }
                1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0xa | 0xb | 0xc | 0xd | 0xe | 0xf | 0x10 | 0x11
                    | 0x12 | 0x13 | 0x14 | 0x15 | 0x16 | 0x17 | 0x19 | 0x1b | 0x1c =>
                {
                    goto 'label_4d9ebc;
                }
                0x18 | 0x1a | 0x1d =>
                {
                    goto 'label_4d9e37;
                }
            }
        }
    }
    else if rax > 0x62
    {
        if rax == 0x63
        {
            result =
                uu_env::split_iterator::SplitIterator::push_word_to_words::h2e43e9c5d0186d6c(arg2);
            *arg1 = 6;
        }
        else
        {
            if rax != 0x110000
            {
                goto 'label_4d9ebc;
            }
            
            let r14_1: i64 = *arg2.byte_offset(0x38);
            result =
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(
                &arg1[4], &data_4179f8, 8);
            *arg1 = 1;
            *arg1.byte_offset(8) = r14_1;
        }
    }
    else if rax == 0x5c
    {
        'label_4d9e37:
        result = uu_env::split_iterator::SplitIterator::take_one::h79c5ef4ea4fbd4ee(&var_40, arg2);
        
        if var_40 != 8
        {
            goto 'label_4d9e4e;
        }
        
        *arg1 = 8;
    }
    else
    {
        if rax != 0x5f
        {
            goto 'label_4d9ebc;
        }
        
        uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_40, arg2);
        
        if var_40 != 8
        {
            goto 'label_4d9e4e;
        }
        
        result = uu_env::split_iterator::SplitIterator::push_word_to_words::h2e43e9c5d0186d6c(arg2);
        *arg1 = 7;
    }
    result
}
