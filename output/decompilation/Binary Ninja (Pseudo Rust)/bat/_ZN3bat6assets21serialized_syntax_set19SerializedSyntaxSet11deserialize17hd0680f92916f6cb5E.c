
  fn bat::assets::serialized_syntax_set::SerializedSyntaxSet::deserialize::hd0680f92916f6cb5(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let rsi: i64 = arg2[1];
    
    if !(0 + -(*arg2))
    {
        /* tailcall */
        return bat::assets::asset_from_cache::h6eea9baee1a0f0cf(arg1, rsi);
    }
    
    let mut var_68: ();
    let result: i64 = bat::assets::asset_from_contents::h9aa831f69bef887d(&var_68, rsi, arg2[2], 
        "n/adata integrated in binary is …");
    core::result::Result$LT$T$C$E$GT$::expect::he666caa0949183cb(&arg1[1], &var_68);
    *arg1 = 0;
    result
}
