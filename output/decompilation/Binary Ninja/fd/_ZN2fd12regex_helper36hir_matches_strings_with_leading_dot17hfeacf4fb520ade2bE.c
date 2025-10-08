
  int64_t fd::regex_helper::hir_matches_strings_with_leading_dot::hfeacf4fb520ade2b(int32_t* arg1)

{
    int64_t rax;
    int64_t var_18 = rax;
    
    if (*arg1 == 8)
    {
        int64_t r14_1 = *(arg1 + 0x18);
        
        if (r14_1)
        {
            int64_t* rbx_1 = *(arg1 + 0x10);
            
            if (r14_1 != 1 && _$LT$regex_syntax..hir..HirKind$u20$as$u20$core..cmp..PartialEq$GT$::eq::hab2ad8a19f5e3ee9(*rbx_1, rbx_1[1]) && rbx_1[6] == 3)
                /* tailcall */
                return core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf20ef8fd404ea81d(
                    rbx_1[7], rbx_1[8], ".//rustc/bf64d66bd58719fac2585ea…", 1);
        }
    }
    
    return 0;
}
