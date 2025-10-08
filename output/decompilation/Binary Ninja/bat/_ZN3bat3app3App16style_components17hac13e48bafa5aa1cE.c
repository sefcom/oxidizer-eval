
  bool bat::app::App::style_components::hac13e48bafa5aa1c(bool* arg1, void* arg2)

{
    char* var_108;
    bat::app::App::forced_style_components::h537be08c927f0794(&var_108, arg2);
    bool result;
    int128_t var_168;
    int128_t var_148;
    int128_t var_138;
    int128_t var_128;
    bool result_1;
    int128_t var_d7;
    int128_t var_a8;
    int128_t var_88;
    int128_t var_78;
    int128_t var_68;
    
    if (!var_108)
    {
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h0da66166b1e02921(
            arg2, "stylethemetheme-darktheme-lightt…", 5))
        {
            int64_t rax_3;
            int64_t rdx_2;
            rax_3 = bat::style::StyleComponent::components::h6c8afe9a5a433675(0xa, *(arg2 + 0x38));
            _$LT$std..collections..hash..set..HashSet$LT$T$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h26e476e131c09ae9(&var_148, rax_3);
            goto label_7a8643;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5cb28e4b0036c6f1(
            &var_88, arg2, "stylethemetheme-darktheme-lightt…", 5);
        clap_builder::parser::error::MatchesError::unwrap::haed18dec1f11e146(&var_148, 
            "stylethemetheme-darktheme-lightt…", 5, &var_88);
        
        if (!var_148)
        {
            core::option::expect_failed::h3f620cfb8545dc61(&data_485489[0x10]);
            /* no return */
        }
        
        int128_t var_118;
        int128_t var_58_1 = var_118;
        var_68 = var_128;
        var_78 = var_138;
        var_88 = var_148;
        core::iter::traits::iterator::Iterator::collect::h9acb3a2c2a2b2913(&result_1, &var_88);
        result = result_1;
        
        if (result == 0xd)
        {
            int128_t var_38 = var_d7;
            int64_t var_c0;
            int64_t var_28_1 = var_c0;
            bat::style::StyleComponentList::to_components::hc62d98123a3ec256(&var_148, &var_38, 
                *(arg2 + 0x38));
            goto label_7a8643;
        }
        
        var_168 = var_d7;
        int128_t var_98;
        *(arg1 + 0x40) = var_98;
        *(arg1 + 0x30) = var_a8;
        int128_t var_b8;
        *(arg1 + 0x20) = var_b8;
        *(arg1 + 0x10) = var_d7;
        *(arg1 + 1) = var_168;
        *arg1 = result;
    }
    else
    {
        int128_t var_e8;
        var_128 = var_e8;
        int128_t var_f8;
        var_138 = var_f8;
        var_148 = var_108;
        label_7a8643:
        result = bat::style::StyleComponents::grid::h47e585e5c9942068(&var_148);
        
        if (result)
        {
            result =
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::hf4eda7f712eff57a(&var_148);
            
            if (result)
            {
                *var_a8[8] = 0;
                var_a8 = 0;
                *var_a8[9] = 0x1500000006;
                result_1 = -0x8000000000000000;
                *var_d7[7] = "[bat warning]Style 'rule' is a s…";
                *var_d7[0xf] = 0xd;
                int64_t var_c0_1 = -0x7ffffffffffffffe;
                var_88 = &data_ac84c8;
                *var_88[8] = 1;
                var_78 = 8;
                var_78 = {0};
                core::option::Option$LT$T$GT$::map_or_else::ha6af42fd863fbfff(&var_108, 
                    "Style 'rule' is a subset of styl…", &var_88);
                var_168 = var_108;
                int128_t var_159;
                *var_159[1] = var_f8;
                var_108 = &result_1;
                uint64_t (* var_100_1)(int64_t* arg1, int64_t arg2) = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
                var_f8 = &var_168;
                *var_f8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_88 = &data_ac84d8;
                *var_88[8] = 3;
                var_68 = 0;
                var_78 = &var_108;
                *var_78[8] = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_88);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(&var_168);
                result = core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hf79116e6dab6a5da(&result_1);
            }
        }
        
        int128_t zmm0_4 = var_148;
        *(arg1 + 0x28) = var_128;
        *(arg1 + 0x18) = var_138;
        *(arg1 + 8) = zmm0_4;
        *arg1 = true;
    }
    return result;
}
