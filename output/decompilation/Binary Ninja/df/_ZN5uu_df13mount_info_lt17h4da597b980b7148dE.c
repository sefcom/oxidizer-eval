
  int64_t uu_df::mount_info_lt::h4da597b980b7148d(void* arg1, void* arg2)

{
    int64_t rax;
    int64_t var_38 = rax;
    int64_t r15 = *(arg1 + 0x20);
    uint64_t r12 = *(arg1 + 0x28);
    var_38 = 0;
    char rax_2 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cf7c8293e15fd51(r15, 
        r12, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&var_38));
    char rax_4;
    
    if (rax_2)
    {
        *var_38[4] = 0;
        rax_4 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cf7c8293e15fd51(
            *(arg2 + 0x20), *(arg2 + 0x28), 
            core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&*var_38[4]));
    }
    
    if (!rax_2 || rax_4)
    {
        int64_t rax_5 = *(arg1 + 0x58);
        uint64_t rbp_2 = *(arg1 + 0x70);
        int64_t r13_2 = *(arg2 + 0x70);
        int64_t rcx_1;
        
        if (rax_5)
            rcx_1 = *(arg2 + 0x58);
        
        if (rax_5 && rcx_1)
        {
            rax_5 = rax_5 > rcx_1;
            rax_5 |= rbp_2 >= r13_2;
            
            if (rax_5 == 1)
                goto label_46d88e;
        }
        else if (rbp_2 >= r13_2)
        {
            label_46d88e:
            
            if (alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h6c46bd122a266b24(r15, r12, *(arg2 + 0x20), *(arg2 + 0x28)))
                return 1;
            
            return alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h6c46bd122a266b24(*(arg1 + 0x68), rbp_2, *(arg2 + 0x68), r13_2) ^ 1;
        }
    }
    
    return 0;
}
