
  int64_t versions_replacer::metadata::collect_versions_from_cargo_toml::hfc1c339465d44313(int64_t* arg1, void* arg2)

{
    int64_t var_258 = -0x8000000000000000;
    int64_t var_240 = -0x8000000000000000;
    int64_t var_228 = -0x8000000000000000;
    int64_t var_288 = 0;
    int64_t var_280 = 8;
    int128_t var_278 = {0};
    int64_t var_268 = 8;
    int64_t var_260 = 0;
    int64_t var_210 = 0;
    int64_t var_200 = 0;
    int32_t var_1f8 = 0;
    cargo_metadata::MetadataCommand::manifest_path::h505cce700b18956d(&var_288, 
        _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h5b3439d32baa9182(arg2));
    int64_t var_1c0;
    cargo_metadata::MetadataCommand::exec::heef95a2c2766c53e(&var_1c0, &var_288);
    int64_t var_f0;
    eyre::context::_$LT$impl$u20$eyre..WrapErr$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::wrap_err::h1fc4642316d0d90b(&var_f0, &var_1c0);
    int64_t r12 = var_f0;
    int64_t var_e8;
    
    if (r12 == -0x8000000000000000)
    {
        arg1[1] = var_e8;
        *arg1 = 0;
        return core::ptr::drop_in_place$LT$cargo_metadata..MetadataCommand$GT$::h13f2d0c45c19c03e(
            &var_288);
    }
    
    int64_t var_1b0;
    void var_e0;
    memcpy(&var_1b0, &var_e0, 0xc0);
    var_1c0 = r12;
    int64_t var_1b8_1 = var_e8;
    core::ptr::drop_in_place$LT$cargo_metadata..MetadataCommand$GT$::h13f2d0c45c19c03e(&var_288);
    int128_t var_1f0;
    core::iter::traits::iterator::Iterator::collect::heb703dadacfa79d7(&var_1f0, var_e8);
    int128_t zmm0_1 = var_1f0;
    int128_t var_1d0;
    *(arg1 + 0x20) = var_1d0;
    int128_t var_1e0;
    *(arg1 + 0x10) = var_1e0;
    *arg1 = zmm0_1;
    return core::ptr::drop_in_place$LT$cargo_metadata..Metadata$GT$::h2465f5346126ad86(&var_1c0);
}
