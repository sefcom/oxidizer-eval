
  fn bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while::h61c196cbe5d42445(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    core::option::Option$LT$T$GT$::get_or_insert_with::hc3adaf4f59a89217(arg2.byte_offset(0x28), 
        arg2.byte_offset(0x10));
    let mut result: i64;
    
    if *arg2.byte_offset(0x30) != 0x110000
    {
        core::option::Option$LT$T$GT$::get_or_insert_with::hc3adaf4f59a89217(
            arg2.byte_offset(0x28), arg2.byte_offset(0x10));
        
        if *arg2.byte_offset(0x30) == 0x110000
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        let mut r13_1: i64 = *arg2.byte_offset(0x28);
        core::option::Option$LT$T$GT$::get_or_insert_with::hc3adaf4f59a89217(
            arg2.byte_offset(0x28), arg2.byte_offset(0x10));
        let mut rcx_1: i64 = r13_1;
        let mut rbp_1: i32 = *arg2.byte_offset(0x30);
        
        if rbp_1 != 0x110000
        {
            let var_40_1: i64 = rcx_1;
            rcx_1 = var_40_1;
            r13_1 = rcx_1;
            
            if bat::vscreen::EscapeSequenceOffsetsIterator::next_nf::_$u7b$$u7b$closure$u7d$$u7d$::h4f746c41ba71fa6e(rbp_1) != 0
            {
                let mut rbx_1: i64;
                let mut r13_2: i64;
                let mut i: i8;
                
                do
                {
                    r13_2 = 1;
                    
                    if rbp_1 >= 0x80
                    {
                        r13_2 = 2;
                        
                        if rbp_1 >= 0x800
                        {
                            r13_2 = 4 - 0;
                        }
                    }
                    
                    rbx_1 = *arg2.byte_offset(0x28);
                    *arg2.byte_offset(0x30) = 0x110001;
                    core::option::Option$LT$T$GT$::get_or_insert_with::hc3adaf4f59a89217(
                        arg2.byte_offset(0x28), arg2.byte_offset(0x10));
                    rbp_1 = *arg2.byte_offset(0x30);
                    
                    if rbp_1 == 0x110000
                    {
                        break;
                    }
                    
                    i = bat::vscreen::EscapeSequenceOffsetsIterator::next_nf::_$u7b$$u7b$closure$u7d$$u7d$::h4f746c41ba71fa6e(rbp_1);
                } while i != 0;
                r13_1 = r13_2 + rbx_1;
                rcx_1 = var_40_1;
            }
        }
        
        arg1[1] = rcx_1;
        arg1[2] = r13_1;
        result = 1;
    }
    else
    {
        result = 0;
    }
    
    *arg1 = result;
    result
}
