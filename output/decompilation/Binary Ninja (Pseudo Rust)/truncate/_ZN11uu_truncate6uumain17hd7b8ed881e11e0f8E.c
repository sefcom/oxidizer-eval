
  fn uu_truncate::uumain::hd7b8ed881e11e0f8(arg1: i64) -> u64

{
    core::result::Result$LT$T$C$E$GT$::expect::hc3a5f0250cf46583(
        uucore::disable_rust_signal_handlers::hcf33f4a6d6e443c4());
    let mut rax_1: u64;
    let mut rdx: *mut i64;
    rax_1 = uu_truncate::uumain::uumain::hc59688359ed7db22(arg1);
    
    if rax_1 == 0
    {
        /* tailcall */
        return uucore::mods::error::get_exit_code::h4ce6cf124c2ef658();
    }
    
    let mut var_98: u64 = rax_1;
    let mut var_58: *mut u64 = &var_98;
    let var_50: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h0d47bb3bfbf76a0b;
    let mut var_88: *mut c_void = &data_416cc0;
    let var_80: i64 = 1;
    let var_68: i64 = 0;
    let var_78: *mut *mut u64 = &var_58;
    let var_70: i64 = 1;
    let mut var_38: i128;
    core::option::Option$LT$T$GT$::map_or_else::ha18dd64e8fdb80dc(&var_38, &var_88);
    var_58 = var_38;
    let var_28: u64;
    let var_48: u64 = var_28;
    let mut var_20: *mut i128;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h7c23d9252d3a919a(var_50, var_28, 1, 0) == 0
    {
        let mut rax_3: i64;
        let mut rdx_1: i64;
        rax_3 = uucore::util_name::h074417a1e6395129();
        var_38 = rax_3;
        *var_38[8] = rdx_1;
        var_20 = &var_38;
        let var_18_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5eb4c9f43d13592f;
        var_88 = &std::thread::current::CURRENT::he2088b27ed4d9d30;
        let var_80_1: i64 = 2;
        let var_68_1: i64 = 0;
        let var_78_1: *mut *mut i128 = &var_20;
        let var_70_1: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
        var_38 = &var_58;
        *var_38[8] =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_88 = &data_4e32e8;
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
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5eb4c9f43d13592f;
        var_88 = &data_4e3308;
        let var_80_3: i64 = 2;
        let var_68_3: i64 = 0;
        let var_78_3: *mut *mut i128 = &var_20;
        let var_70_3: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
    }
    
    let rax_8: i32 = rdx[0xb](var_98);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h28c3ae9657395a95(var_58, var_50);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hf0c9cdad41133183(var_98, rdx);
    rax_8
}
