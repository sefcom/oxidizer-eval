
  int64_t uu_test::parser::Parser::term::h32e18b63e31ea2d0(int64_t* arg1, int64_t* arg2)

{
    int64_t var_38;
    uu_test::parser::Parser::next_token::h4b6300a6fb2b38c8(&var_38, arg2);
    int32_t var_58;
    int64_t result;
    
    switch (var_38)
    {
        case 0:
        {
            uu_test::parser::Parser::lparen::h3964adf54604f517(&var_58, arg2);
            /* tailcall */
            return sub_457749();
        }
        case 1:
        {
            uu_test::parser::Parser::bang::h406dcf32b3e8f731(&var_58, arg2);
            /* tailcall */
            return sub_457749();
        }
        case 5:
        {
            result = uu_test::parser::Parser::uop::h1b444c1c0da3bc2d(arg2, &var_38);
            *arg1 = 7;
            return result;
            break;
        }
        case 6:
        {
            result = alloc::vec::Vec$LT$T$C$A$GT$::push::h51b67e1356e9af09(arg2, &var_38);
            *arg1 = 7;
            return result;
            break;
        }
        default:
        {
            result = uu_test::parser::Parser::literal::hbd84cf521357194c(&var_58, arg2, &var_38);
            
            if (var_58 == 7)
            {
                *arg1 = 7;
                return result;
            }
            
            int128_t zmm0_2 = var_58;
            int128_t var_48;
            *(arg1 + 0x10) = var_48;
            *arg1 = zmm0_2;
            return result;
        }
    }
}
