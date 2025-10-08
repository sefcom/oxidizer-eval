
  int64_t bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while::h61c196cbe5d42445(int64_t* arg1, void* arg2)

{
    core::option::Option$LT$T$GT$::get_or_insert_with::hc3adaf4f59a89217(arg2 + 0x28, arg2 + 0x10);
    int64_t result;
    
    if (*(arg2 + 0x30) != 0x110000)
    {
        core::option::Option$LT$T$GT$::get_or_insert_with::hc3adaf4f59a89217(arg2 + 0x28, 
            arg2 + 0x10);
        
        if (*(arg2 + 0x30) == 0x110000)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        int64_t r13_1 = *(arg2 + 0x28);
        core::option::Option$LT$T$GT$::get_or_insert_with::hc3adaf4f59a89217(arg2 + 0x28, 
            arg2 + 0x10);
        int64_t rcx_1 = r13_1;
        int32_t rbp_1 = *(arg2 + 0x30);
        
        if (rbp_1 != 0x110000)
        {
            int64_t var_40_1 = rcx_1;
            rcx_1 = var_40_1;
            r13_1 = rcx_1;
            
            if (bat::vscreen::EscapeSequenceOffsetsIterator::next_nf::_$u7b$$u7b$closure$u7d$$u7d$::h4f746c41ba71fa6e(rbp_1))
            {
                int64_t rbx_1;
                int64_t r13_2;
                char i;
                
                do
                {
                    r13_2 = 1;
                    
                    if (rbp_1 >= 0x80)
                    {
                        r13_2 = 2;
                        
                        if (rbp_1 >= 0x800)
                            r13_2 = 4 - 0;
                    }
                    
                    rbx_1 = *(arg2 + 0x28);
                    *(arg2 + 0x30) = 0x110001;
                    core::option::Option$LT$T$GT$::get_or_insert_with::hc3adaf4f59a89217(
                        arg2 + 0x28, arg2 + 0x10);
                    rbp_1 = *(arg2 + 0x30);
                    
                    if (rbp_1 == 0x110000)
                        break;
                    
                    i = bat::vscreen::EscapeSequenceOffsetsIterator::next_nf::_$u7b$$u7b$closure$u7d$$u7d$::h4f746c41ba71fa6e(rbp_1);
                } while (i);
                r13_1 = r13_2 + rbx_1;
                rcx_1 = var_40_1;
            }
        }
        
        arg1[1] = rcx_1;
        arg1[2] = r13_1;
        result = 1;
    }
    else
        result = 0;
    
    *arg1 = result;
    return result;
}
