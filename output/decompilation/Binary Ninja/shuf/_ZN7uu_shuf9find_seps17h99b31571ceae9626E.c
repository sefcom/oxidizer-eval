
  void uu_shuf::find_seps::h99b31571ceae9626(int64_t* arg1, char arg2)

{
    int64_t i = arg1[2];
    
    if (i)
    {
        int64_t* rbx_1 = arg1;
        
        if (i != 1 || rbx_1[1][1])
        {
            int64_t* var_60_1 = rbx_1;
            
            do
            {
                int64_t i_1 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(i);
                i = i_1;
                int64_t rsi = rbx_1[2];
                
                if (i_1 >= rsi)
                {
                    core::panicking::panic_bounds_check::h25a5330941572dd1(i, rsi);
                    /* no return */
                }
                
                char** rax_1 = rbx_1[1];
                int64_t rcx_2 = i << 4;
                
                if (core::slice::memchr::memchr::hd9bdb72df61b073b(arg2, *(rax_1 + rcx_2), 
                    *(rax_1 + rcx_2 + 8)) == 1)
                {
                    int64_t rax_2;
                    int64_t rdx_2;
                    rax_2 = alloc::vec::Vec$LT$T$C$A$GT$::swap_remove::hd8884eae080ccab8(rbx_1, i);
                    int64_t var_50 = rax_2;
                    int64_t var_48_1 = rax_2;
                    int64_t var_40_1 = rax_2 + rdx_2;
                    char var_38 = arg2;
                    int64_t* j;
                    int64_t rdx_3;
                    j = memchr::arch::generic::memchr::Iter::next::h49b397ad764296c0(&var_50, 
                        &var_38);
                    int64_t r15_1;
                    
                    if (!j)
                    {
                        r15_1 = 0;
                        rbx_1 = var_60_1;
                    }
                    else
                    {
                        int64_t r13_1 = rdx_3;
                        r15_1 = 0;
                        rbx_1 = var_60_1;
                        
                        do
                        {
                            int64_t rax_5;
                            int64_t rdx_5;
                            rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hc642f9dd373424d2(r15_1, r13_1, rax_2, rdx_2);
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h77e0d20633c95084(rbx_1, rax_5, 
                                rdx_5);
                            r15_1 = r13_1 + 1;
                            int64_t rdx_6;
                            j = memchr::arch::generic::memchr::Iter::next::h49b397ad764296c0(
                                &var_50, &var_38);
                            r13_1 = rdx_6;
                        } while (j);
                    }
                    
                    if (rdx_2 > r15_1)
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h77e0d20633c95084(rbx_1, rax_2 + r15_1, 
                            rdx_2 - r15_1);
                }
            } while (i);
        }
        else
            rbx_1[2] = 0;
    }
}
