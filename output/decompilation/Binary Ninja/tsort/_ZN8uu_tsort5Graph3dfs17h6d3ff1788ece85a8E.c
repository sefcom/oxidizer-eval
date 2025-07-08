
  uint64_t uu_tsort::Graph::dfs::h6d3ff1788ece85a8(int64_t* arg1, int64_t* arg2, int64_t arg3, int64_t* arg4, int64_t* arg5)

{
    int64_t* var_48 = arg2;
    int64_t rbp;
    rbp = 1;
    
    if (!_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h42d257bc62dd9328(
        &var_48, arg5[1], arg5[2]))
    {
        if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h9808ee5d91771ad7(arg4, 
            &var_48))
        {
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h2be3e5d0a6b37c2d(arg4, var_48, 
                arg3);
            alloc::vec::Vec$LT$T$C$A$GT$::push::hbbd106ac298c97ce(arg5, var_48, arg3);
            void* rax_2 =
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfa0a63b39f7acc9f(arg1, 
                var_48, arg3);
            
            if (rax_2)
            {
                int64_t rcx = *(rax_2 + 0x18);
                int64_t rax_5 = (*(rax_2 + 0x20) << 4) + rcx;
                int64_t var_38 = rcx;
                int64_t var_30_1 = rax_5;
                
                while (true)
                {
                    int64_t* rax_6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0c0c46eaf379cb40(&var_38);
                    
                    if (!rax_6)
                        break;
                    
                    if (uu_tsort::Graph::dfs::h6d3ff1788ece85a8(arg1, *rax_6, rax_6[1], arg4, arg5))
                        return rbp;
                }
            }
            
            int64_t rax_8 = arg5[2];
            
            if (rax_8)
                arg5[2] = rax_8 - 1;
        }
        
        rbp = 0;
    }
    
    return rbp;
}
