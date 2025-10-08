
  fn fd::regex_helper::hir_matches_strings_with_leading_dot::hfeacf4fb520ade2b(arg1: *mut i32) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    
    if *arg1 == 8
    {
        let r14_1: i64 = *arg1.byte_offset(0x18);
        
        if r14_1 != 0
        {
            let rbx_1: *mut i64 = *arg1.byte_offset(0x10);
            
            if r14_1 != 1 && _$LT$regex_syntax..hir..HirKind$u20$as$u20$core..cmp..PartialEq$GT$::eq::hab2ad8a19f5e3ee9(*rbx_1, rbx_1[1]) != 0 && rbx_1[6] == 3
            {
                /* tailcall */
                return core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf20ef8fd404ea81d(
                    rbx_1[7], rbx_1[8], ".//rustc/bf64d66bd58719fac2585ea…", 1);
            }
        }
    }
    
    0
}
