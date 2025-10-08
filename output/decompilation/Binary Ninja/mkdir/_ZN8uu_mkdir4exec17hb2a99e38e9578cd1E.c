
  int64_t uu_mkdir::exec::hb2a99e38e9578cd1(int128_t* arg1, void* arg2)

{
    int128_t var_48 = arg1[3];
    int128_t var_58 = arg1[2];
    int128_t var_68 = arg1[1];
    int128_t var_78 = *arg1;
    
    for (void* i = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h703678aad0b6495e(&var_78); i; i = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h703678aad0b6495e(&var_78))
    {
        void* const var_d8;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h09085b3eedcee021(&var_d8, *(i + 8), *(i + 0x10));
        void* const r13_1 = var_d8;
        int64_t var_d0;
        int64_t r12_1 = var_d0;
        int64_t** var_c8;
        uint64_t rax;
        int64_t* rdx_3;
        rax = uu_mkdir::mkdir::hb9a94a553ced0d34(r12_1, var_c8, arg2);
        
        if (!rax)
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h1159a829858b625c(0, rdx_3);
        else
        {
            uint64_t var_e8 = rax;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(rdx_3[0xb](rax));
            int64_t rax_2;
            int64_t rdx_4;
            rax_2 = uucore::util_name::h074417a1e6395129();
            int64_t var_a8 = rax_2;
            int64_t var_a0_1 = rdx_4;
            int64_t* var_98 = &var_a8;
            int64_t (* var_90_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f8342cc4ae57580;
            uint64_t* var_88_1 = &var_e8;
            int64_t (* var_80_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha6320bb394ca0d6b;
            var_d8 = &data_4ede10;
            var_d0 = 3;
            int64_t var_b8_1 = 0;
            var_c8 = &var_98;
            int64_t var_c0_1 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_d8);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::had00d84193dcc420(var_e8, rdx_3);
        }
        
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h186e614367733317(r13_1, r12_1);
    }
    
    return 0;
}
