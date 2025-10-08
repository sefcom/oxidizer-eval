
  int64_t uu_pr::write_columns::h498c3fffc8cb79bc(void* arg1, int64_t arg2, void* arg3, int64_t* arg4)

{
    int64_t rdi = *(arg3 + 0x10);
    uint64_t r12_1 = *(arg3 + 0x138) >> *(arg3 + 0x140);
    int64_t var_188;
    int64_t rax_1;
    
    if (rdi != 1)
    {
        rax_1 = *(arg3 + 0x100);
        var_188 = 1;
        
        if (rax_1 != -0x8000000000000000)
            var_188 = *(arg3 + 0x120);
    }
    else
    {
        var_188 = *(arg3 + 0x18);
        rax_1 = *(arg3 + 0x100);
    }
    
    char rcx_2 = 0;
    
    if (rax_1 != -0x8000000000000000)
        rcx_2 = *(arg3 + 0x128);
    
    int64_t rax_2 = *(arg3 + 0x68);
    uint64_t rax_3 = *(arg3 + 0x70);
    char rax_4 = *(arg3 + 0x20);
    int64_t rax_5 = *(arg3 + 0x28);
    char rax_6 = *(arg3 + 0x142);
    int64_t var_108 = 0;
    int64_t var_100 = 8;
    int64_t var_f8 = 0;
    
    if (rdi && var_188)
    {
        int64_t i_5 = 1;
        int64_t r15_1 = 0;
        int64_t i = 0;
        int64_t i_4;
        
        do
        {
            if (r15_1 > arg2)
            {
                core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(r15_1, arg2);
                /* no return */
            }
            
            int64_t r13_1;
            
            if (r15_1 != arg2)
            {
                int64_t rax_11 = r15_1 << 6;
                void* r15_2 = arg1 + rax_11;
                int64_t rbp_2 = (arg2 << 6) - rax_11;
                r13_1 = 0;
                
                while (*(r15_2 + 0x18) == i)
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h6f336ffbc5993d7a(&var_108, r15_2);
                    r13_1 += 1;
                    r15_2 += 0x40;
                    int64_t temp1_1 = rbp_2;
                    rbp_2 -= 0x40;
                    
                    if (temp1_1 == 0x40)
                        break;
                }
            }
            else
                r13_1 = 0;
            
            r15_1 += r13_1;
            int64_t r13_2 = r13_1 - 1;
            
            while (true)
            {
                r13_2 += 1;
                
                if (r13_2 >= r12_1)
                    break;
                
                alloc::vec::Vec$LT$T$C$A$GT$::push::h6f336ffbc5993d7a(&var_108, 0);
            }
            
            i_4 = i_5;
            i_5 = i_4 + 0;
            i = i_4;
        } while (i_4 < var_188);
    }
    
    int64_t var_c8 = var_f8;
    int64_t var_d8 = var_108;
    int64_t var_d0 = var_100;
    int64_t var_90 = 0;
    uint64_t var_88 = r12_1;
    void* var_c0 = arg1;
    int64_t var_b8 = arg2;
    void* var_b0 = arg3;
    int64_t var_a8 = var_188;
    uint64_t var_a0 = r12_1;
    char var_98 = rcx_2;
    void var_48;
    core::iter::traits::iterator::Iterator::collect::hb2811d645e461af0(&var_48, &var_d8);
    var_d8 = 0;
    int64_t var_d0_1 = 1;
    int64_t s;
    __builtin_memset(&s, 0, 0x30);
    void var_68;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h50f63d40442afdcf(&var_68, &var_48);
    int64_t i_3;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h30afe659be7f021e(&i_3, &var_68);
    int64_t i_6 = i_3;
    
    if (i_6 != -0x8000000000000000)
    {
        int64_t i_2 = i_6;
        int64_t var_190_2;
        void var_150;
        int64_t var_148;
        uint64_t var_140;
        int64_t var_130;
        int64_t var_128;
        int64_t var_f0;
        ssize_t rbx_1;
        
        if (!rdi)
        {
            rbx_1 = 0;
            char r15_5 = 0;
            int64_t i_1;
            
            do
            {
                var_190_2 = var_130;
                var_f0 = var_130;
                int64_t var_e8_2 = var_130 + (var_128 << 3);
                int64_t var_e0_2 = 0;
                int64_t rax_27;
                int64_t** j;
                rax_27 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfd7eb24b40152fb8(&var_f0);
                
                while (j)
                {
                    int64_t* rdx_8 = *j;
                    
                    if (!rdx_8)
                    {
                        r15_5 = 1;
                        
                        if (rax_6)
                            goto label_5377ce;
                        
                        goto label_537729;
                    }
                    
                    uu_pr::get_line_for_printing::hd1db5805a3293521(&var_150, arg3, rdx_8, var_188, 
                        rax_27, rax_4, rax_5, var_128);
                    
                    if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(arg4, var_148, var_140))
                        goto label_53777c;
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(
                        &var_150);
                    rbx_1 += 1;
                    rax_27 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfd7eb24b40152fb8(&var_f0);
                }
                
                if (r15_5 & rax_6 & 1)
                {
                    label_5377ce:
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$regex_automata..util..primitives..NonMaxUsize$GT$$GT$$GT$::hba68b8d98b64866d(i_2, var_190_2);
                    break;
                }
                
                label_537729:
                
                if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(arg4, rax_2, rax_3))
                    goto label_53778b;
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$regex_automata..util..primitives..NonMaxUsize$GT$$GT$$GT$::hba68b8d98b64866d(i_2, var_190_2);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h30afe659be7f021e(&i_3, &var_68);
                i_1 = i_3;
                i_2 = i_1;
            } while (i_1 != -0x8000000000000000);
        }
        else
        {
            rbx_1 = 0;
            
            while (true)
            {
                var_190_2 = var_130;
                var_f0 = var_130;
                int64_t var_e8_1 = var_130 + (var_128 << 3);
                int64_t var_e0_1 = 0;
                int64_t i_7;
                
                while (true)
                {
                    int64_t rax_22;
                    int64_t** rdx_2;
                    rax_22 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfd7eb24b40152fb8(&var_f0);
                    
                    if (!rdx_2)
                    {
                        if (!_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(arg4, rax_2, rax_3))
                        {
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$regex_automata..util..primitives..NonMaxUsize$GT$$GT$$GT$::hba68b8d98b64866d(i_2, var_190_2);
                            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h30afe659be7f021e(&i_3, &var_68);
                            i_7 = i_3;
                            i_2 = i_7;
                            break;
                        }
                    }
                    else
                    {
                        int64_t* rdx_3 = *rdx_2;
                        
                        if (!rdx_3)
                        {
                            uu_pr::get_line_for_printing::hd1db5805a3293521(&var_150, arg3, 
                                &var_d8, var_188, rax_22, rax_4, rax_5, var_128);
                            ssize_t r13_3 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(arg4, var_148, var_140);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_150);
                            
                            if (!r13_3)
                                continue;
                        }
                        else
                        {
                            uu_pr::get_line_for_printing::hd1db5805a3293521(&var_150, arg3, rdx_3, 
                                var_188, rax_22, rax_4, rax_5, var_128);
                            
                            if (!_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(arg4, var_148, var_140))
                            {
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_150);
                                rbx_1 += 1;
                                continue;
                            }
                            else
                            {
                                label_53777c:
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5b204ce323401e77(&var_150);
                            }
                        }
                    }
                    
                    label_53778b:
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$regex_automata..util..primitives..NonMaxUsize$GT$$GT$$GT$::hba68b8d98b64866d(i_2, var_190_2);
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$$GT$::he7e9f21517bd1d76(&var_68);
                    core::ptr::drop_in_place$LT$uu_pr..FileLine$GT$::hfc12aa566782b908(&var_d8);
                    return 1;
                }
                
                if (i_7 == -0x8000000000000000)
                    break;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$$GT$::he7e9f21517bd1d76(&var_68);
    core::ptr::drop_in_place$LT$uu_pr..FileLine$GT$::hfc12aa566782b908(&var_d8);
    return 0;
}
