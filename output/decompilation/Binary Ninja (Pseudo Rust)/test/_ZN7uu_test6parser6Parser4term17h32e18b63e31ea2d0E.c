
  fn uu_test::parser::Parser::term::h32e18b63e31ea2d0(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut var_38: i64;
    uu_test::parser::Parser::next_token::h4b6300a6fb2b38c8(&var_38, arg2);
    let mut var_58: i32;
    let mut result: i64;
    
    match var_38
    {
        0 =>
        {
            uu_test::parser::Parser::lparen::h3964adf54604f517(&var_58, arg2);
            /* tailcall */
            sub_457749()
        }
        1 =>
        {
            uu_test::parser::Parser::bang::h406dcf32b3e8f731(&var_58, arg2);
            /* tailcall */
            sub_457749()
        }
        5 =>
        {
            result = uu_test::parser::Parser::uop::h1b444c1c0da3bc2d(arg2, &var_38);
            *arg1 = 7;
            result
        }
        6 =>
        {
            result = alloc::vec::Vec$LT$T$C$A$GT$::push::h51b67e1356e9af09(arg2, &var_38);
            *arg1 = 7;
            result
        }
        _ =>
        {
            result = uu_test::parser::Parser::literal::hbd84cf521357194c(&var_58, arg2, &var_38);
            
            if var_58 == 7
            {
                *arg1 = 7;
                return result;
            }
            
            let zmm0_2: i128 = var_58;
            let var_48: i128;
            *arg1.byte_offset(0x10) = var_48;
            *arg1 = zmm0_2;
            result
        }
    }
}
