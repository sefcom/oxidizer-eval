
  fn uu_wc::uumain::h7372a27e081d07ed(arg1: i64) -> u64

{
    core::result::Result$LT$T$C$E$GT$::expect::he24bbb4ee1a84fd0(
        uucore::disable_rust_signal_handlers::hc16ff077e3f1e2f6());
    let mut rax_1: *mut i64;
    let mut rdx: *mut i64;
    rax_1 = uu_wc::uumain::uumain::h5e9a84c0748907a1(arg1);
    
    if rax_1 == 0
    {
        /* tailcall */
        return uucore::mods::error::get_exit_code::he41365fe4dc666e7();
    }
    
    let mut var_a8: *mut i64 = rax_1;
    let mut var_48: *mut *mut i64 = &var_a8;
    let var_40: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hadb082a4e712a4d2;
    let mut var_98: *mut i128 = &data_415490;
    let var_90: i64 = 1;
    let var_78: i64 = 0;
    let var_88: *mut *mut *mut i64 = &var_48;
    let var_80: i64 = 1;
    let mut var_28: i128;
    core::option::Option$LT$T$GT$::map_or_else::h95919b72df438ecb(&var_28, &var_98);
    var_48 = var_28;
    let var_18: u64;
    let var_38: u64 = var_18;
    let mut var_68: *mut *mut *mut i64;
    let mut var_58: *mut i64;
    
    if _$LT$alloc..string..String$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::ne::hb4f2d17f007cd88a(var_40, var_18) != 0
    {
        let mut rax_3: *mut *mut *mut i64;
        let mut rdx_1: i64;
        rax_3 = uucore::util_name::h60d842bf27b05e82();
        var_68 = rax_3;
        let var_60_1: i64 = rdx_1;
        var_58 = &var_68;
        let var_50_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h48dc50b5ceaec2a3;
        var_98 = &data_52e6d0;
        let var_90_1: i64 = 2;
        let var_78_1: i64 = 0;
        let var_88_1: *mut *mut i64 = &var_58;
        let var_80_1: i64 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_98);
        var_68 = &var_48;
        let var_60_2: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_98 = &data_52e6f0;
        let var_90_2: i64 = 2;
        let var_78_2: i64 = 0;
        let var_88_2: *mut *mut *mut *mut i64 = &var_68;
        let var_80_2: i64 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_98);
    }
    
    if rdx[0xd](var_a8) != 0
    {
        let mut rax_6: *mut *mut *mut i64;
        let mut rdx_2: i64;
        rax_6 = uucore::execution_phrase::h7a36a698673d06ab();
        var_68 = rax_6;
        let var_60_3: i64 = rdx_2;
        var_58 = &var_68;
        let var_50_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h48dc50b5ceaec2a3;
        var_98 = &data_52e710;
        let var_90_3: i64 = 2;
        let var_78_3: i64 = 0;
        let var_88_3: *mut *mut i64 = &var_58;
        let var_80_3: i64 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_98);
    }
    
    let rax_8: i32 = rdx[0xc](var_a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbf403f11cf5d9a37(&var_48);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h23f6fc257a8f4c2b(var_a8, rdx);
    rax_8
}
