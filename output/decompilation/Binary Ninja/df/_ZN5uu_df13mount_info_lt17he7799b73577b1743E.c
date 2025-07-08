
  int64_t uu_df::mount_info_lt::he7799b73577b1743(void* arg1, void* arg2)

{
    int64_t rax;
    int64_t var_38 = rax;
    int64_t r15 = *(arg1 + 0x20);
    uint64_t r12 = *(arg1 + 0x28);
    var_38 = 0;
    char rax_2 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hfcb4c23ecb597bc5(r15, 
        r12, core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&var_38), 1);
    char rax_4;
    
    if (rax_2)
    {
        *var_38[4] = 0;
        rax_4 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hfcb4c23ecb597bc5(
            *(arg2 + 0x20), *(arg2 + 0x28), 
            core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&*var_38[4]), 1);
    }
    
    if (!rax_2 || rax_4)
    {
        int64_t rax_5 = *(arg1 + 0x58);
        uint64_t rbp_2 = *(arg1 + 0x70);
        int64_t r13_2 = *(arg2 + 0x70);
        int64_t rcx_1;
        
        if (rax_5)
            rcx_1 = *(arg2 + 0x58);
        
        if (!rax_5 || !rcx_1)
        {
            if (rbp_2 >= r13_2)
            {
                label_4c68b0:
                
                if (alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h26cf2969793785fb(r15, r12, *(arg2 + 0x20), *(arg2 + 0x28)))
                    return 1;
                
                return alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h26cf2969793785fb(*(arg1 + 0x68), rbp_2, *(arg2 + 0x68), r13_2) ^ 1;
            }
        }
        else if (rbp_2 >= r13_2 || rax_5 > rcx_1)
            goto label_4c68b0;
    }
    
    return 0;
}
