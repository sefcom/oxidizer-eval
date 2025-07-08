
  int64_t uu_mkdir::exec::h97ad3c032066465d(int128_t* arg1, char arg2, int32_t arg3, char arg4)

{
    int128_t var_48 = arg1[3];
    int128_t var_58 = arg1[2];
    int128_t var_68 = arg1[1];
    int128_t var_78 = *arg1;
    
    for (void* i = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3cb259793dced06b(&var_78); i; i = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3cb259793dced06b(&var_78))
    {
        int128_t var_c8;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_c8, *(i + 8), *(i + 0x10));
        int64_t** var_b8;
        size_t rsi_1 = var_b8;
        size_t var_e8_1 = rsi_1;
        int128_t var_f8 = var_c8;
        int128_t* rax;
        int64_t* rdx_2;
        rax = uu_mkdir::mkdir::h25ca5a950d7e6473(*var_f8[8], rsi_1, arg2, arg3, arg4);
        
        if (rax)
        {
            int128_t* var_108 = rax;
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(rdx_2[0xc](rax));
            int64_t rax_2;
            int64_t rdx_3;
            rax_2 = uucore::util_name::h60d842bf27b05e82();
            int64_t var_d8 = rax_2;
            int64_t var_d0_1 = rdx_3;
            int64_t* var_98 = &var_d8;
            int64_t (* var_90_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfd6a55cddc5280de;
            int128_t** var_88_1 = &var_108;
            int64_t (* var_80_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf47c6583a9945374;
            var_c8 = &data_520510;
            *var_c8[8] = 3;
            int64_t var_a8_1 = 0;
            var_b8 = &var_98;
            int64_t var_b0_1 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h71810d9408842807(var_108, rdx_2);
        }
        
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb7551ff5f0211b82(&var_f8);
    }
    
    return 0;
}
