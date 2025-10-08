
  fn bat::app::App::style_components::hac13e48bafa5aa1c(arg1: *mut bool, arg2: *mut c_void) -> bool

{
    let mut var_108: *mut i8;
    bat::app::App::forced_style_components::h537be08c927f0794(&var_108, arg2);
    let mut result: bool;
    let mut var_168: i128;
    let mut var_148: i128;
    let mut var_138: i128;
    let mut var_128: i128;
    let mut result_1: bool;
    let mut var_d7: i128;
    let mut var_a8: i128;
    let mut var_88: i128;
    let mut var_78: i128;
    let mut var_68: i128;
    
    if var_108 == 0
    {
        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h0da66166b1e02921(
            arg2, "stylethemetheme-darktheme-lightt…", 5) == 0
        {
            let mut rax_3: i64;
            let mut rdx_2: i64;
            rax_3 = bat::style::StyleComponent::components::h6c8afe9a5a433675(0xa, 
                *arg2.byte_offset(0x38));
            _$LT$std..collections..hash..set..HashSet$LT$T$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h26e476e131c09ae9(&var_148, rax_3);
            goto 'label_7a8643;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h5cb28e4b0036c6f1(
            &var_88, arg2, "stylethemetheme-darktheme-lightt…", 5);
        clap_builder::parser::error::MatchesError::unwrap::haed18dec1f11e146(&var_148, 
            "stylethemetheme-darktheme-lightt…", 5, &var_88);
        
        if var_148 == 0
        {
            core::option::expect_failed::h3f620cfb8545dc61(&data_485489[0x10]);
            /* no return */
        }
        
        let var_118: i128;
        let var_58_1: i128 = var_118;
        var_68 = var_128;
        var_78 = var_138;
        var_88 = var_148;
        core::iter::traits::iterator::Iterator::collect::h9acb3a2c2a2b2913(&result_1, &var_88);
        result = result_1;
        
        if result == 0xd
        {
            let mut var_38: i128 = var_d7;
            let var_c0: i64;
            let var_28_1: i64 = var_c0;
            bat::style::StyleComponentList::to_components::hc62d98123a3ec256(&var_148, &var_38, 
                *arg2.byte_offset(0x38));
            goto 'label_7a8643;
        }
        
        var_168 = var_d7;
        let var_98: i128;
        *arg1.byte_offset(0x40) = var_98;
        *arg1.byte_offset(0x30) = var_a8;
        let var_b8: i128;
        *arg1.byte_offset(0x20) = var_b8;
        *arg1.byte_offset(0x10) = var_d7;
        *arg1.byte_offset(1) = var_168;
        *arg1 = result;
    }
    else
    {
        let var_e8: i128;
        var_128 = var_e8;
        let mut var_f8: i128;
        var_138 = var_f8;
        var_148 = var_108;
        'label_7a8643:
        result = bat::style::StyleComponents::grid::h47e585e5c9942068(&var_148);
        
        if result != 0
        {
            result =
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::hf4eda7f712eff57a(&var_148);
            
            if result != 0
            {
                *var_a8[8] = 0;
                var_a8 = 0;
                *var_a8[9] = 0x1500000006;
                result_1 = -0x8000000000000000;
                *var_d7[7] = "[bat warning]Style 'rule' is a s…";
                *var_d7[0xf] = 0xd;
                let var_c0_1: i64 = -0x7ffffffffffffffe;
                var_88 = &data_ac84c8;
                *var_88[8] = 1;
                var_78 = 8;
                var_78 = {0};
                core::option::Option$LT$T$GT$::map_or_else::ha6af42fd863fbfff(&var_108, 
                    "Style 'rule' is a subset of styl…", &var_88);
                var_168 = var_108;
                let mut var_159: i128;
                *var_159[1] = var_f8;
                var_108 = &result_1;
                let var_100_1: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
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
        
        let zmm0_4: i128 = var_148;
        *arg1.byte_offset(0x28) = var_128;
        *arg1.byte_offset(0x18) = var_138;
        *arg1.byte_offset(8) = zmm0_4;
        *arg1 = true;
    }
    result
}
