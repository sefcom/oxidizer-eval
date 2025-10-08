
  fn just::subcommand::Subcommand::summary_recursive::hc0eddb790c4e97dc(arg1: i8, arg2: *mut i64, arg3: *mut i64, arg4: *mut c_void) -> i64

{
    let mut var_68: ();
    alloc::str::join_generic_copy::h1d897c8c94fa609a(&var_68, arg2[1], arg2[2], 
        ":: [private]\nexport no entry fo…", 2);
    let mut var_d8: *mut *mut [i8; 0x90];
    just::justfile::Justfile::public_recipes::h73a7b1046fbbce7b(&var_d8, arg4, arg1);
    let mut var_50: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h02155a0166dab906(&var_50, &var_d8);
    let r12: i64 = *arg3;
    let i_2: *mut c_void = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h03155b1db9f47e52(&var_50);
    
    if i_2 != 0
    {
        let mut i_1: *mut c_void = i_2;
        let mut r12_1: i64 = r12 + 1;
        let mut i: *mut c_void;
        
        do
        {
            let mut var_c0: i64;
            
            if r12_1 != 1
            {
                var_d8 = &data_82f150;
                let var_d0_1: i64 = 1;
                let var_c8_1: i64 = 8;
                var_c0 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_d8);
            }
            
            let var_58: i64;
            let mut var_e8: *mut c_void;
            let mut var_88: *mut c_void;
            
            if var_58 == 0
            {
                let mut rax_1: *mut c_void;
                let mut rdx_3: i64;
                rax_1 = just::token::Token::lexeme::h66587cdf67f63270(i_1.byte_offset(0x90));
                var_88 = rax_1;
                let var_80_2: i64 = rdx_3;
                var_e8 = &var_88;
                let var_e0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                var_d8 = &data_465db0;
                let var_d0_3: i64 = 1;
                let var_b8_2: i64 = 0;
                let var_c8_3: *mut *mut c_void = &var_e8;
                var_c0 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_d8);
            }
            else
            {
                let mut rax: *mut c_void;
                let mut rdx_2: i64;
                rax = just::token::Token::lexeme::h66587cdf67f63270(i_1.byte_offset(0x90));
                var_e8 = rax;
                let var_e0_1: i64 = rdx_2;
                var_88 = &var_68;
                let var_80_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                let var_78_1: *mut *mut c_void = &var_e8;
                let var_70_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                var_d8 = &data_8314a0;
                let var_d0_2: i64 = 2;
                let var_b8_1: i64 = 0;
                let var_c8_2: *mut *mut c_void = &var_88;
                var_c0 = 2;
                std::io::stdio::_print::h5e446ff973c02de6(&var_d8);
            }
            *arg3 = r12_1;
            i = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h03155b1db9f47e52(&var_50);
            i_1 = i;
            r12_1 += 1;
        } while i != 0;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$just..binding..Binding$LT$just..expression..Expression$GT$$GT$$GT$::ha7630a2791a77f7a(&var_50);
    let rax_2: i64 = *arg4.byte_offset(0x2a0);
    let rcx: i64 = *arg4.byte_offset(0x2a8);
    let mut rsi_3: i64 = rax_2;
    let mut rdx_4: *mut *mut [i8; 0x90];
    rdx_4 = rax_2 != 0;
    
    if rax_2 != 0
    {
        rsi_3 = *arg4.byte_offset(0x2b0);
    }
    
    var_d8 = rdx_4;
    let var_d0_4: i64 = 0;
    let var_c8_4: i64 = rax_2;
    let var_c0_1: i64 = rcx;
    let var_b8_3: *mut *mut [i8; 0x90] = rdx_4;
    let var_b0: i64 = 0;
    let var_a8: i64 = rax_2;
    let var_a0: i64 = rcx;
    let var_98: i64 = rsi_3;
    
    loop
    {
        let mut rax_3: *mut i64;
        let mut rdx_5: i64;
        rax_3 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h78f4c4822acc3ece(&var_d8);
        
        if rax_3 == 0
        {
            break;
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::h6fed9915a4cca328(arg2, *rax_3, rax_3[1]);
        just::subcommand::Subcommand::summary_recursive::hc0eddb790c4e97dc(arg1, arg2, arg3, rdx_5);
        let rax_4: i64 = arg2[2];
        
        if rax_4 != 0
        {
            arg2[2] = rax_4 - 1;
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(&var_68)
}
