
  fn uu_test::parser::Parser::bang::h9b754ef1da85f93e(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut var_e8: i64;
    uu_test::parser::Parser::peek::hd4e8be8df06376c2(&var_e8, arg2);
    let rax: i64 = var_e8;
    let mut var_148: i64;
    let var_138: i128;
    let mut var_110: ();
    
    if rax == 2 || rax == 4
    {
        _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h86ce5a051be3bc0b(&var_148, &arg2[3]);
        _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::h06598638d93f08d0(&var_110, &var_148);
        let mut var_c0: i32;
        uu_test::parser::Symbol::new::ha5314f5fa26867b7(&var_c0, &var_110);
        core::ptr::drop_in_place$LT$core..iter..adapters..peekable..Peekable$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$$GT$::h1d252f4392002ad9(&var_148);
        let mut zmm0_1: i128;
        let mut zmm1_1: i128;
        
        if (var_c0 | 2) != 6
        {
            var_148 = 1;
            uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&var_110, &var_148);
            let mut var_98: i32;
            uu_test::parser::Parser::literal::h487831028acf0989(&var_98, arg2, &var_110);
            
            if var_98 != 7
            {
                zmm0_1 = var_98;
                let var_88: i128;
                zmm1_1 = var_88;
                'label_4af665:
                *arg1.byte_offset(0x10) = zmm1_1;
                *arg1 = zmm0_1;
                core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_c0);
                return core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(
                    &var_e8);
            }
            
            uu_test::parser::Parser::maybe_boolop::h62a19c04e1420d25(&var_148, arg2);
            
            if var_148 != 7
            {
                goto 'label_4af62e;
            }
            
            core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_c0);
        }
        else
        {
            uu_test::parser::Parser::next_token::hec2da245067de41f(&var_148, arg2);
            let mut var_38: ();
            uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&var_38, &var_148);
            uu_test::parser::Parser::literal::h487831028acf0989(&var_148, arg2, &var_38);
            
            if var_148 != 7
            {
                'label_4af62e:
                zmm0_1 = var_148;
                zmm1_1 = var_138;
                goto 'label_4af665;
            }
            
            var_148 = 1;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(arg2, &var_148);
            core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_c0);
        }
    }
    else if rax != 6
    {
        _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h86ce5a051be3bc0b(&var_148, &arg2[3]);
        let var_118: i64;
        let var_48_1: i64 = var_118;
        let var_128: i128;
        let var_58_1: i128 = var_128;
        let var_68_1: i128 = var_138;
        let mut var_78: i128 = var_148;
        let var_40_1: i64 = 4;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h676d59df733cc62a(&var_110, &var_78);
        let var_108: *mut i32;
        let var_100: i64;
        
        if var_100 != 3 || *var_108 != 3 || var_108[0xa] != 2 || var_108[0x14] != 3
        {
            uu_test::parser::Parser::term::h385cc0ae73b5bef0(&var_148, arg2);
            
            if var_148 != 7
            {
                'label_4af639:
                let zmm0_3: i128 = var_148;
                *arg1.byte_offset(0x10) = var_138;
                *arg1 = zmm0_3;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_test..parser..Symbol$GT$$GT$::h8be5e6021bc91ab2(&var_110);
                return core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(
                    &var_e8);
            }
            
            var_148 = 1;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(arg2, &var_148);
        }
        else
        {
            uu_test::parser::Parser::expr::h14b244d6254724ab(&var_148, arg2);
            
            if var_148 != 7
            {
                goto 'label_4af639;
            }
            
            var_148 = 1;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(arg2, &var_148);
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_test..parser..Symbol$GT$$GT$::h8be5e6021bc91ab2(&var_110);
    }
    else
    {
        var_148 = 1;
        uu_test::parser::Symbol::into_literal::hae4d6fad5ad71dcb(&var_110, &var_148);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(arg2, &var_110);
    }
    let result: i64 =
        core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_e8);
    *arg1 = 7;
    result
}
