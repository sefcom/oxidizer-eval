
  int64_t uu_test::parser::Parser::term::h385cc0ae73b5bef0(int64_t* arg1, int64_t* arg2)

{
    int64_t var_60;
    uu_test::parser::Parser::next_token::hec2da245067de41f(&var_60, arg2);
    int32_t var_88;
    int128_t var_78;
    int128_t var_50;
    int64_t var_40;
    int64_t result;
    
    switch (var_60)
    {
        case 0:
        {
            uu_test::parser::Parser::lparen::h57f06a78ce35371d(&var_88, arg2);
            label_4aefa6:
            
            if (var_88 != 7)
            {
                int128_t zmm0_2 = var_88;
                *(arg1 + 0x10) = var_78;
                *arg1 = zmm0_2;
            }
            else
                *arg1 = 7;
            
            return core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(
                &var_60);
            break;
        }
        case 1:
        {
            uu_test::parser::Parser::bang::h9b754ef1da85f93e(&var_88, arg2);
            goto label_4aefa6;
        }
        case 5:
        {
            int64_t var_68_1 = var_40;
            int128_t var_78_1 = var_50;
            var_88 = var_60;
            result = uu_test::parser::Parser::uop::h62a6f0e931485a3c(arg2, &var_88);
            *arg1 = 7;
            return result;
            break;
        }
        case 6:
        {
            int64_t var_68_2 = var_40;
            int128_t var_78_2 = var_50;
            var_88 = var_60;
            result = alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(arg2, &var_88);
            *arg1 = 7;
            return result;
            break;
        }
        default:
        {
            int64_t var_18_1 = var_40;
            int128_t var_28_1 = var_50;
            int128_t var_38 = var_60;
            result = uu_test::parser::Parser::literal::h487831028acf0989(&var_88, arg2, &var_38);
            
            if (var_88 != 7)
            {
                int128_t zmm0_3 = var_88;
                *(arg1 + 0x10) = var_78;
                *arg1 = zmm0_3;
            }
            else
                *arg1 = 7;
            
            return result;
        }
    }
}
