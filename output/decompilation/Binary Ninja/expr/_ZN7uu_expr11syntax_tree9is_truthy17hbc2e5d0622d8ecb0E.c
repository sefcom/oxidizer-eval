
  uint64_t uu_expr::syntax_tree::is_truthy::hbc2e5d0622d8ecb0(int64_t* arg1)

{
    uint64_t rbx;
    int64_t var_38;
    
    if (*arg1 != -0x8000000000000000)
    {
        num_bigint::bigint::convert::_$LT$impl$u20$core..convert..From$LT$i64$GT$$u20$for$u20$num_bigint..bigint..BigInt$GT$::from::hfb5b8937a947fc26(&var_38);
        char rax_5 = arg1[3];
        rbx = 1;
        char var_20;
        
        if (rax_5 == var_20)
        {
            int64_t var_30;
            int64_t var_28;
            
            if (rax_5 != 1)
                rbx = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hc86a8171fbe67109(arg1[1], arg1[2], var_30, var_28) ^ 1;
            else
                rbx = 0;
        }
        
        core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::h4ffd1c0c3ebf756b(&var_38);
    }
    else
    {
        int64_t r15_1 = arg1[2];
        uint64_t r14_1 = arg1[3];
        rbx = 1;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(r15_1, r14_1, "-*/%:matchsubstrindexlength()", 1))
        {
            var_38 = r15_1;
            int64_t var_30_1 = r14_1 + r15_1;
            char* rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1ebd26144ee20df5(&var_38);
            
            if (!rax_1)
                rbx = 0;
            else
            {
                uint32_t rax_2 = *rax_1;
                
                if (rax_2 != 0x30)
                    rbx = 1;
                
                if (rax_2 == 0x30 || rax_2 == 0x2d)
                    rbx = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hef697547d5d159b7(core::iter::traits::iterator::Iterator::try_fold::h530582dcff248937(
                        &var_38)) ^ 1;
            }
        }
    }
    return rbx;
}
