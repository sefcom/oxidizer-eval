
  uint64_t uu_tsort::Graph::dfs::h69e8652cb4211fe8(void* arg1, int64_t* arg2, int64_t arg3, int64_t* arg4, int64_t* arg5)

{
    int64_t* var_40 = arg2;
    int64_t rbp;
    rbp = 1;
    
    if (!_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h3d22f1d0f2c6fda7(
        &var_40, arg5[1], arg5[2]))
    {
        if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h0d0bb528157eeff4(arg4, 
            &var_40))
        {
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h9e44a592f6310d68(arg4, var_40, 
                arg3);
            alloc::vec::Vec$LT$T$C$A$GT$::push::hc06cf8efd6ffa662(arg5, var_40, arg3);
            void* rax_2 =
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hbf23ef7421c68646(
                arg1 + 0x18, var_40, arg3);
            
            if (rax_2)
            {
                int64_t r12_1 = *(rax_2 + 0x20);
                
                if (r12_1)
                {
                    int64_t* i = *(rax_2 + 0x18);
                    
                    do
                    {
                        if (uu_tsort::Graph::dfs::h69e8652cb4211fe8(arg1, *i, i[1], arg4, arg5))
                            return rbp;
                        
                        i = &i[2];
                    } while (i != &i[r12_1 * 2]);
                }
            }
            
            int64_t rax_4 = arg5[2];
            
            if (rax_4)
                arg5[2] = rax_4 - 1;
        }
        
        rbp = 0;
    }
    
    return rbp;
}
