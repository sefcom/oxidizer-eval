
  fn uu_test::parser::Parser::bang::h406dcf32b3e8f731(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut var_80: i64;
    uu_test::parser::Parser::peek::h996512ad2aa27c9f(&var_80, arg2);
    let rax: i64 = var_80;
    let mut var_128: i64;
    let mut var_e0: i32;
    let mut var_b8: i128;
    
    if rax == 2 || rax == 4
    {
        _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h51d9b9dc2856ac23(&var_128, &arg2[3]);
        _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::nth::hdfe50a6a2be8fc23(&var_b8, &var_128);
        uu_test::parser::Symbol::new::habde89fb8e284063(&var_e0, &var_b8);
        core::ptr::drop_in_place$LT$core..iter..adapters..peekable..Peekable$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$$GT$::h84df26e0d136ee61(&var_128);
        let mut zmm0_1: i128;
        let mut zmm1_1: i128;
        
        if (var_e0 | 2) != 6
        {
            var_128 = 1;
            uu_test::parser::Symbol::into_literal::h1277b0f42f10b0d4(&var_b8, &var_128);
            let mut var_58: i32;
            uu_test::parser::Parser::literal::hbd84cf521357194c(&var_58, arg2, &var_b8);
            
            if var_58 != 7
            {
                zmm0_1 = var_58;
                let var_48: i128;
                zmm1_1 = var_48;
                'label_457e31:
                *arg1.byte_offset(0x10) = zmm1_1;
                *arg1 = zmm0_1;
                core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(&var_e0);
                return core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(
                    &var_80);
            }
            
            uu_test::parser::Parser::maybe_boolop::h303bddc310538db5(&var_128, arg2);
            
            if var_128 != 7
            {
                goto 'label_457dfa;
            }
            
            core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(&var_e0);
        }
        else
        {
            uu_test::parser::Parser::next_token::h4b6300a6fb2b38c8(&var_128, arg2);
            let mut var_38: ();
            uu_test::parser::Symbol::into_literal::h1277b0f42f10b0d4(&var_38, &var_128);
            uu_test::parser::Parser::literal::hbd84cf521357194c(&var_128, arg2, &var_38);
            
            if var_128 != 7
            {
                'label_457dfa:
                zmm0_1 = var_128;
                let var_118: i128;
                zmm1_1 = var_118;
                goto 'label_457e31;
            }
            
            var_128 = 1;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h51b67e1356e9af09(arg2, &var_128);
            core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(&var_e0);
        }
    }
    else if rax != 6
    {
        _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h51d9b9dc2856ac23(&var_b8, &arg2[3]);
        let var_88: i64;
        let var_f8_1: i64 = var_88;
        let var_98: i128;
        let var_108_1: i128 = var_98;
        var_128 = var_b8;
        let var_f0_1: i64 = 4;
        core::iter::traits::iterator::Iterator::collect::h07229457d4e30845(&var_e0, &var_128);
        let var_d8: *mut i32;
        let var_d0: i64;
        
        if var_d0 != 3 || *var_d8 != 3 || var_d8[0xa] != 2 || var_d8[0x14] != 3
        {
            uu_test::parser::Parser::term::h32e18b63e31ea2d0(&var_128, arg2);
            
            if var_128 != 7
            {
                'label_457e05:
                let zmm0_3: i128 = var_128;
                let var_a8: i128;
                *arg1.byte_offset(0x10) = var_a8;
                *arg1 = zmm0_3;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_test..parser..Symbol$GT$$GT$::h9359e9a929ed7bbe(&var_e0);
                return core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(
                    &var_80);
            }
            
            var_128 = 1;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h51b67e1356e9af09(arg2, &var_128);
        }
        else
        {
            uu_test::parser::Parser::expr::hea95ff6631384a05(&var_128, arg2);
            
            if var_128 != 7
            {
                goto 'label_457e05;
            }
            
            var_128 = 1;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h51b67e1356e9af09(arg2, &var_128);
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_test..parser..Symbol$GT$$GT$::h9359e9a929ed7bbe(&var_e0);
    }
    else
    {
        var_128 = 1;
        uu_test::parser::Symbol::into_literal::h1277b0f42f10b0d4(&var_b8, &var_128);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h51b67e1356e9af09(arg2, &var_b8);
    }
    let result: i64 =
        core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(&var_80);
    *arg1 = 7;
    result
}
