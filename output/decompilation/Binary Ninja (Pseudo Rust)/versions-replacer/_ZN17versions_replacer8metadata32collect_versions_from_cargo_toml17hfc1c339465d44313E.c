
  fn versions_replacer::metadata::collect_versions_from_cargo_toml::hfc1c339465d44313(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let var_258: i64 = -0x8000000000000000;
    let var_240: i64 = -0x8000000000000000;
    let var_228: i64 = -0x8000000000000000;
    let mut var_288: i64 = 0;
    let var_280: i64 = 8;
    let var_278: i128 = {0};
    let var_268: i64 = 8;
    let var_260: i64 = 0;
    let var_210: i64 = 0;
    let var_200: i64 = 0;
    let var_1f8: i32 = 0;
    cargo_metadata::MetadataCommand::manifest_path::h505cce700b18956d(&var_288, 
        _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h5b3439d32baa9182(arg2));
    let mut var_1c0: i64;
    cargo_metadata::MetadataCommand::exec::heef95a2c2766c53e(&var_1c0, &var_288);
    let mut var_f0: i64;
    eyre::context::_$LT$impl$u20$eyre..WrapErr$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::wrap_err::h1fc4642316d0d90b(&var_f0, &var_1c0);
    let r12: i64 = var_f0;
    let var_e8: i64;
    
    if r12 == -0x8000000000000000
    {
        arg1[1] = var_e8;
        *arg1 = 0;
        return core::ptr::drop_in_place$LT$cargo_metadata..MetadataCommand$GT$::h13f2d0c45c19c03e(
            &var_288);
    }
    
    let mut var_1b0: i64;
    let mut var_e0: ();
    memcpy(&var_1b0, &var_e0, 0xc0);
    var_1c0 = r12;
    let var_1b8_1: i64 = var_e8;
    core::ptr::drop_in_place$LT$cargo_metadata..MetadataCommand$GT$::h13f2d0c45c19c03e(&var_288);
    let mut var_1f0: i128;
    core::iter::traits::iterator::Iterator::collect::heb703dadacfa79d7(&var_1f0, var_e8);
    let zmm0_1: i128 = var_1f0;
    let var_1d0: i128;
    *arg1.byte_offset(0x20) = var_1d0;
    let var_1e0: i128;
    *arg1.byte_offset(0x10) = var_1e0;
    *arg1 = zmm0_1;
    core::ptr::drop_in_place$LT$cargo_metadata..Metadata$GT$::h2465f5346126ad86(&var_1c0)
}
