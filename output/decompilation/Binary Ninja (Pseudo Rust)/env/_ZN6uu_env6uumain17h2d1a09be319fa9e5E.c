
  fn uu_env::uumain::h2d1a09be319fa9e5(arg1: i64) -> u64

{
    core::result::Result$LT$T$C$E$GT$::expect::h16af578bf76ac2e6(
        uucore::disable_rust_signal_handlers::hc16ff077e3f1e2f6());
    let mut var_98: i16 = 0;
    let var_96: i8 = 2;
    let mut rax_1: *mut i32;
    let mut rdx_1: *mut i64;
    rax_1 = uu_env::EnvAppData::run_env::ha7719131c2b1bb9b(&var_98, arg1);
    let mut rbx_1: i32;
    
    if rax_1 == 0
    {
        rbx_1 = 0;
    }
    else
    {
        let mut var_a8: *mut i32 = rax_1;
        let mut var_48: *mut *mut i32 = &var_a8;
        let var_40_1: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha89f889f02ecb343;
        var_98 = &data_417280;
        let var_90_1: i64 = 1;
        let var_78_1: i64 = 0;
        let var_88_1: *mut *mut *mut i32 = &var_48;
        let var_80_1: i64 = 1;
        let mut var_28: i128;
        core::option::Option$LT$T$GT$::map_or_else::h60f4303fb8255fc3(&var_28, &var_98);
        var_48 = var_28;
        let var_18: u64;
        let var_38_1: u64 = var_18;
        let mut var_68: *mut *mut *mut i32;
        let mut var_58: *mut i64;
        
        if _$LT$alloc..string..String$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::ne::hb4f2d17f007cd88a(var_40_1, var_18) != 0
        {
            let mut rax_3: *mut *mut *mut i32;
            let mut rdx_2: i64;
            rax_3 = uucore::util_name::h60d842bf27b05e82();
            var_68 = rax_3;
            let var_60_1: i64 = rdx_2;
            var_58 = &var_68;
            let var_50_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hca024d7dd65e16bb;
            var_98 = &data_545a20;
            let var_90_2: i64 = 2;
            let var_78_2: i64 = 0;
            let var_88_2: *mut *mut i64 = &var_58;
            let var_80_2: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_98);
            var_68 = &var_48;
            let var_60_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_98 = &data_545a40;
            let var_90_3: i64 = 2;
            let var_78_3: i64 = 0;
            let var_88_3: *mut *mut *mut *mut i32 = &var_68;
            let var_80_3: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_98);
        }
        
        if rdx_1[0xd](var_a8) != 0
        {
            let mut rax_6: *mut *mut *mut i32;
            let mut rdx_3: i64;
            rax_6 = uucore::execution_phrase::h7a36a698673d06ab();
            var_68 = rax_6;
            let var_60_3: i64 = rdx_3;
            var_58 = &var_68;
            let var_50_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hca024d7dd65e16bb;
            var_98 = &data_545a70;
            let var_90_4: i64 = 2;
            let var_78_4: i64 = 0;
            let var_88_4: *mut *mut i64 = &var_58;
            let var_80_4: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_98);
        }
        
        rbx_1 = rdx_1[0xc](var_a8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb9361acd21bda034(&var_48);
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hc4769e5c0a6689ea(var_a8, rdx_1);
    }
    
    rbx_1
}
