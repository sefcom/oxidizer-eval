
  fn uu_env::split_iterator::SplitIterator::state_unquoted_backslash::h36c7c5f0e0f90489(arg1: *mut i32, arg2: *mut i128) -> u64

{
    let rax: i32 = uu_env::split_iterator::SplitIterator::get_current_char::h29d2c0904606848a(arg2);
    let mut result: u64;
    let mut var_40: i32;
    
    if rax <= 0x5b
    {
        let rax_1: u64 = rax - 0xa;
        let var_3b: i128;
        let var_2b: i128;
        
        if rax_1 > 0x1d
        {
            'label_470c6c:
            uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code::hbf4d9b34cfe30d19(&var_40, arg2, rax);
            let rcx_1: i32 = var_40;
            let result_1: i8;
            result = result_1;
            
            if rcx_1 != 0xc
            {
                let var_1c: i32;
                arg1[9] = var_1c;
                *arg1.byte_offset(0x15) = var_2b;
                *arg1.byte_offset(5) = var_3b;
                *arg1 = rcx_1;
                arg1[1] = result;
            }
            else if (result & 1) != 0
            {
                *arg1 = 0xc;
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
                    result = uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(
                        &var_40, arg2);
                    
                    if var_40 == 0xc
                    {
                        *arg1 = 0xc;
                    }
                    else
                    {
                        'label_470bfe:
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
                    goto 'label_470c6c;
                }
                0x18 | 0x1a | 0x1d =>
                {
                    goto 'label_470be7;
                }
            }
        }
    }
    else if rax > 0x62
    {
        if rax == 0x63
        {
            result =
                uu_env::split_iterator::SplitIterator::push_word_to_words::hde29bdf58d338eeb(arg2);
            *arg1 = 9;
        }
        else
        {
            if rax != 0x110000
            {
                goto 'label_470c6c;
            }
            
            let r14_1: i64 = *arg2.byte_offset(0x38);
            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf510679057ea9fe7(&arg1[4], "UnquotedNo anodeextern "ENOTUNIQ…", 8);
            *arg1 = 1;
            *arg1.byte_offset(8) = r14_1;
        }
    }
    else if rax == 0x5c
    {
        'label_470be7:
        result = uu_env::split_iterator::SplitIterator::take_one::h1e0059af94c5f623(&var_40, arg2);
        
        if var_40 != 0xc
        {
            goto 'label_470bfe;
        }
        
        *arg1 = 0xc;
    }
    else
    {
        if rax != 0x5f
        {
            goto 'label_470c6c;
        }
        
        uu_env::split_iterator::SplitIterator::skip_one::h26dcd237c4fe536e(&var_40, arg2);
        
        if var_40 != 0xc
        {
            goto 'label_470bfe;
        }
        
        result = uu_env::split_iterator::SplitIterator::push_word_to_words::hde29bdf58d338eeb(arg2);
        *arg1 = 0xa;
    }
    result
}
