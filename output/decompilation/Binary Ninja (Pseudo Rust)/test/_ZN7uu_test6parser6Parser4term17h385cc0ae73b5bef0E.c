
  fn uu_test::parser::Parser::term::h385cc0ae73b5bef0(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut var_60: i64;
    uu_test::parser::Parser::next_token::hec2da245067de41f(&var_60, arg2);
    let mut var_88: i32;
    let var_78: i128;
    let var_50: i128;
    let var_40: i64;
    let mut result: i64;
    
    match var_60
    {
        0 =>
        {
            uu_test::parser::Parser::lparen::h57f06a78ce35371d(&var_88, arg2);
            'label_4aefa6:
            
            if var_88 != 7
            {
                let zmm0_2: i128 = var_88;
                *arg1.byte_offset(0x10) = var_78;
                *arg1 = zmm0_2;
            }
            else
            {
                *arg1 = 7;
            }
            
            core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_60)
        }
        1 =>
        {
            uu_test::parser::Parser::bang::h9b754ef1da85f93e(&var_88, arg2);
            goto 'label_4aefa6;
        }
        5 =>
        {
            let var_68_1: i64 = var_40;
            let var_78_1: i128 = var_50;
            var_88 = var_60;
            result = uu_test::parser::Parser::uop::h62a6f0e931485a3c(arg2, &var_88);
            *arg1 = 7;
            result
        }
        6 =>
        {
            let var_68_2: i64 = var_40;
            let var_78_2: i128 = var_50;
            var_88 = var_60;
            result = alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(arg2, &var_88);
            *arg1 = 7;
            result
        }
        _ =>
        {
            let var_18_1: i64 = var_40;
            let var_28_1: i128 = var_50;
            let mut var_38: i128 = var_60;
            result = uu_test::parser::Parser::literal::h487831028acf0989(&var_88, arg2, &var_38);
            
            if var_88 != 7
            {
                let zmm0_3: i128 = var_88;
                *arg1.byte_offset(0x10) = var_78;
                *arg1 = zmm0_3;
            }
            else
            {
                *arg1 = 7;
            }
            
            result
        }
    }
}
