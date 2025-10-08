
  void* just::recipe_resolver::RecipeResolver::resolve_variable::he5cc046d5539d00e(uint64_t* arg1, void** arg2, int128_t* arg3, int64_t arg4, int64_t arg5)

{
    void* rax;
    uint64_t rdx;
    rax = just::token::Token::lexeme::h66587cdf67f63270(arg3);
    void* var_a0 = rax;
    void* result =
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h62a22d89973a7e72(*arg2, 
        arg2[1], rax, rdx);
    
    if (!result)
    {
        int64_t var_90 = arg4;
        int64_t var_88_1 = arg5 * 0xd0 + arg4;
        result = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hfdd1394427431362(&var_90, &var_a0);
        
        if (!result)
        {
            result = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h10d5bbd0b5ef08d9(
                just::constants::constants::h3594f93ebbf36f97(), var_a0, rdx);
            
            if (!result)
            {
                var_88_1 = var_a0;
                var_90 = -0x7fffffffffffffcc;
                return just::token::Token::error::h986494da066a4455(arg1, arg3, &var_90);
            }
        }
    }
    
    arg1[9] = 0x25;
    return result;
}
