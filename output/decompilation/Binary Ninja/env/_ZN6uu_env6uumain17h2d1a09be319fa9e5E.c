
  uint64_t uu_env::uumain::h2d1a09be319fa9e5(int64_t arg1)

{
    core::result::Result$LT$T$C$E$GT$::expect::h16af578bf76ac2e6(
        uucore::disable_rust_signal_handlers::hc16ff077e3f1e2f6());
    int16_t var_98 = 0;
    char var_96 = 2;
    int32_t* rax_1;
    int64_t* rdx_1;
    rax_1 = uu_env::EnvAppData::run_env::ha7719131c2b1bb9b(&var_98, arg1);
    int32_t rbx_1;
    
    if (!rax_1)
        rbx_1 = 0;
    else
    {
        int32_t* var_a8 = rax_1;
        int32_t** var_48 = &var_a8;
        int64_t (* var_40_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha89f889f02ecb343;
        var_98 = &data_417280;
        int64_t var_90_1 = 1;
        int64_t var_78_1 = 0;
        int32_t*** var_88_1 = &var_48;
        int64_t var_80_1 = 1;
        int128_t var_28;
        core::option::Option$LT$T$GT$::map_or_else::h60f4303fb8255fc3(&var_28, &var_98);
        var_48 = var_28;
        uint64_t var_18;
        uint64_t var_38_1 = var_18;
        int32_t*** var_68;
        int64_t* var_58;
        
        if (_$LT$alloc..string..String$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::ne::hb4f2d17f007cd88a(var_40_1, var_18))
        {
            int32_t*** rax_3;
            int64_t rdx_2;
            rax_3 = uucore::util_name::h60d842bf27b05e82();
            var_68 = rax_3;
            int64_t var_60_1 = rdx_2;
            var_58 = &var_68;
            int64_t (* var_50_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hca024d7dd65e16bb;
            var_98 = &data_545a20;
            int64_t var_90_2 = 2;
            int64_t var_78_2 = 0;
            int64_t** var_88_2 = &var_58;
            int64_t var_80_2 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_98);
            var_68 = &var_48;
            int64_t (* var_60_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_98 = &data_545a40;
            int64_t var_90_3 = 2;
            int64_t var_78_3 = 0;
            int32_t**** var_88_3 = &var_68;
            int64_t var_80_3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_98);
        }
        
        if (rdx_1[0xd](var_a8))
        {
            int32_t*** rax_6;
            int64_t rdx_3;
            rax_6 = uucore::execution_phrase::h7a36a698673d06ab();
            var_68 = rax_6;
            int64_t var_60_3 = rdx_3;
            var_58 = &var_68;
            int64_t (* var_50_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hca024d7dd65e16bb;
            var_98 = &data_545a70;
            int64_t var_90_4 = 2;
            int64_t var_78_4 = 0;
            int64_t** var_88_4 = &var_58;
            int64_t var_80_4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_98);
        }
        
        rbx_1 = rdx_1[0xc](var_a8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb9361acd21bda034(&var_48);
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hc4769e5c0a6689ea(var_a8, rdx_1);
    }
    
    return rbx_1;
}
