
  fn just::recipe_resolver::RecipeResolver::resolve_variable::he5cc046d5539d00e(arg1: *mut u64, arg2: *mut *mut c_void, arg3: *mut i128, arg4: i64, arg5: i64) -> *mut c_void

{
    let mut rax: *mut c_void;
    let mut rdx: u64;
    rax = just::token::Token::lexeme::h66587cdf67f63270(arg3);
    let mut var_a0: *mut c_void = rax;
    let mut result: *mut c_void =
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h62a22d89973a7e72(*arg2, 
        arg2[1], rax, rdx);
    
    if result == 0
    {
        let mut var_90: i64 = arg4;
        let mut var_88_1: i64 = arg5 * 0xd0 + arg4;
        result = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hfdd1394427431362(&var_90, &var_a0);
        
        if result == 0
        {
            result = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h10d5bbd0b5ef08d9(
                just::constants::constants::h3594f93ebbf36f97(), var_a0, rdx);
            
            if result == 0
            {
                var_88_1 = var_a0;
                var_90 = -0x7fffffffffffffcc;
                return just::token::Token::error::h986494da066a4455(arg1, arg3, &var_90);
            }
        }
    }
    
    arg1[9] = 0x25;
    result
}
