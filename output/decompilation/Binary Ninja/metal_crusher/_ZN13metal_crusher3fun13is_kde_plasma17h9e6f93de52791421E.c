
  uint64_t metal_crusher::fun::is_kde_plasma::h9e6f93de52791421()

{
    char var_28;
    std::env::var::hfb15700640056880(&var_28, "XDG_CURRENT_DESKTOPGNOMEplasmash…");
    
    if (var_28 & 1)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h2dda2584fb36613a(&var_28);
        return 0;
    }
    
    void var_40;
    core::result::Result$LT$T$C$E$GT$::unwrap::hf281b12ef98186e8(&var_40, &var_28);
    char* var_38;
    int64_t var_30;
    int32_t rax_1 =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h4cb49604a7270c97(
        "KDEXDG_CURRENT_DESKTOPGNOMEplasm…", 3, var_38, var_30);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha04b33545db7d743(&var_40);
    return rax_1;
}
