
  int128_t* uu_dd::Input::discard_cache::h2bede2b9be5bf459(int32_t arg1)

{
    off64_t rcx;
    int64_t rdx;
    int32_t rsi;
    int128_t* result = _$LT$core..result..Result$LT$T$C$nix..errno..consts..Errno$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h0693640055669ac9(uu_dd::Source::discard_cache::h30a1a5912ab32cb4(arg1, rsi, rdx, rcx));
    
    if (!result)
        return result;
    
    int128_t* result_1 = result;
    void** const var_70_1 = &data_5620d8;
    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
    int64_t rax_1;
    int64_t rdx_1;
    rax_1 = uucore::util_name::h60d842bf27b05e82();
    int64_t var_68 = rax_1;
    int64_t var_60_1 = rdx_1;
    int64_t* var_58 = &var_68;
    int64_t (* var_50_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
    int128_t** var_48_1 = &result_1;
    int64_t (* var_40_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc9ea8a505475b34b;
    void* const var_38 = &data_561070;
    int64_t var_30_1 = 3;
    int64_t var_18_1 = 0;
    int64_t** var_28_1 = &var_58;
    int64_t var_20_1 = 2;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_38);
    return core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hef88782da503643c(result_1, var_70_1);
}
