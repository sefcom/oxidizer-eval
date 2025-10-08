
  fn uu_whoami::uumain::hdb8020f25566a416(arg1: i64) -> u64

{
    core::result::Result$LT$T$C$E$GT$::expect::ha0a8135250188949(
        uucore::disable_rust_signal_handlers::hcf33f4a6d6e443c4());
    let mut rax_1: u64;
    let mut rdx: *mut i64;
    rax_1 = uu_whoami::uumain::uumain::hf281853a2fe8cc41(arg1);
    
    if rax_1 == 0
    {
        /* tailcall */
        return uucore::mods::error::get_exit_code::h4ce6cf124c2ef658();
    }
    
    let mut var_98: u64 = rax_1;
    let mut var_58: *mut u64 = &var_98;
    let var_50: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h5893ffe9e3581a84;
    let mut var_88: *mut c_void = &data_417430;
    let var_80: i64 = 1;
    let var_68: i64 = 0;
    let var_78: *mut *mut u64 = &var_58;
    let var_70: i64 = 1;
    let mut var_38: i128;
    core::option::Option$LT$T$GT$::map_or_else::h765dd08af4f874fd(&var_38, &var_88);
    var_58 = var_38;
    let var_28: i64;
    let var_48: i64 = var_28;
    let mut var_20: *mut i128;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2a78a5a9dba7d269(var_28) == 0
    {
        let mut rax_3: i64;
        let mut rdx_1: i64;
        rax_3 = uucore::util_name::h074417a1e6395129();
        var_38 = rax_3;
        *var_38[8] = rdx_1;
        var_20 = &var_38;
        let var_18_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdf5944606e9598cc;
        var_88 = &data_4d7c60;
        let var_80_1: i64 = 2;
        let var_68_1: i64 = 0;
        let var_78_1: *mut *mut i128 = &var_20;
        let var_70_1: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
        var_38 = &var_58;
        *var_38[8] =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_88 = &data_4d7c80;
        let var_80_2: i64 = 2;
        let var_68_2: i64 = 0;
        let var_78_2: *mut i128 = &var_38;
        let var_70_2: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
    }
    
    if rdx[0xc](var_98) != 0
    {
        let mut rax_6: i64;
        let mut rdx_2: i64;
        rax_6 = uucore::execution_phrase::hf0e80cb4793732ad();
        var_38 = rax_6;
        *var_38[8] = rdx_2;
        var_20 = &var_38;
        let var_18_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdf5944606e9598cc;
        var_88 = &data_4d7ca0;
        let var_80_3: i64 = 2;
        let var_68_3: i64 = 0;
        let var_78_3: *mut *mut i128 = &var_20;
        let var_70_3: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
    }
    
    let rax_8: i32 = rdx[0xb](var_98);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h97402b5ad4f43da1(var_58, var_50);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::he23cfd8cc0ca7366(var_98, rdx);
    rax_8
}
