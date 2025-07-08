
  fn uu_env::split_iterator::SplitIterator::state_delimiter_backslash::hda2bc29fb6f38b14(arg1: *mut i32, arg2: *mut i128) -> *mut c_void

{
    let rax: i32 = uu_env::split_iterator::SplitIterator::get_current_char::h5ca55267f11846dc(arg2);
    let rax_1: u64 = rax - 0x22;
    let mut result: *mut c_void;
    let mut var_40: i32;
    
    if rax_1 <= 0x41
    {
        result = jump_table_425150[rax_1] + &jump_table_425150;
        let var_30: i128;
        let result_2: *mut c_void;
        
        match result
        {
            0x4d9b13 =>
            {
                uu_env::split_iterator::SplitIterator::take_one::h79c5ef4ea4fbd4ee(&var_40, arg2);
                
                if var_40 == 8
                {
                    /* tailcall */
                    return uu_env::split_iterator::SplitIterator::state_unquoted::h4114e84db94125c1(
                        arg1, arg2);
                }
                
                'label_4d9b8e:
                result = result_2;
                *arg1.byte_offset(0x20) = result;
                let zmm0_1: i128 = var_40;
                *arg1.byte_offset(0x10) = var_30;
                *arg1 = zmm0_1;
            }
            0x4d9b72 =>
            {
                goto 'label_4d9b7a;
            }
            0x4d9baa =>
            {
                'label_4d9bb5:
                uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code::h4d5fe0b4c9b39b36(&var_40, arg2, rax);
                let rcx_2: i32 = var_40;
                let result_1: i8;
                result = result_1;
                
                if rcx_2 != 8
                {
                    arg1[9] = *result_2[4];
                    *arg1.byte_offset(0x15) = var_30;
                    let var_3b: i128;
                    *arg1.byte_offset(5) = var_3b;
                    *arg1 = rcx_2;
                    arg1[1] = result;
                }
                else
                {
                    if result != 0
                    {
                        /* tailcall */
                        return uu_env::split_iterator::SplitIterator::state_unquoted::h4114e84db94125c1(arg1, arg2);
                    }
                    
                    result = *arg2.byte_offset(0x38);
                    *arg1 = 3;
                    arg1[1] = rax;
                    *arg1.byte_offset(8) = result;
                }
            }
            0x4d9be4 =>
            {
                *arg1 = 6;
            }
        }
    }
    else if rax == 0xa
    {
        'label_4d9b7a:
        result = uu_env::split_iterator::SplitIterator::skip_one::hcd63dec953ae1fd1(&var_40, arg2);
        
        if var_40 != 8
        {
            goto 'label_4d9b8e;
        }
        
        *arg1 = 8;
    }
    else
    {
        if rax != 0x110000
        {
            goto 'label_4d9bb5;
        }
        
        let r14_1: i64 = *arg2.byte_offset(0x38);
        result = _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(
            &arg1[4], "Delimiter", 9);
        *arg1 = 1;
        *arg1.byte_offset(8) = r14_1;
    }
    result
}
