
  int64_t uu_dd::Input::discard_cache::h505abcb6f4256ec2(int32_t arg1, int32_t arg2, int64_t arg3, off64_t arg4)

{
    int64_t rax_1 = _$LT$core..result..Result$LT$T$C$nix..errno..consts..Errno$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h5f54743af1ac3190(uu_dd::Source::discard_cache::h504f8f38f4fa8955(arg1, arg2, arg3, arg4));
    int64_t var_78 = rax_1;
    void** const var_70 = &data_53cab0;
    
    if (!rax_1)
        return core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::haecb1dcee0b7efda(&var_78);
    
    int64_t var_88 = rax_1;
    void** const var_80 = &data_53cab0;
    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
    int64_t rax_2;
    int64_t rdx;
    rax_2 = uucore::util_name::h074417a1e6395129();
    int64_t var_68 = rax_2;
    int64_t var_60 = rdx;
    int64_t* var_58 = &var_68;
    int64_t (* var_50)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
    int64_t* var_48 = &var_88;
    int64_t (* var_40)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h07fe195a9490a30f;
    void* const var_38 = &data_53dd50;
    int64_t var_30 = 3;
    int64_t var_18 = 0;
    int64_t** var_28 = &var_58;
    int64_t var_20 = 2;
    std::io::stdio::_eprint::h57899770eacec2ad(&var_38);
    return core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h2f8fd742369c2f2b(&var_88);
}
