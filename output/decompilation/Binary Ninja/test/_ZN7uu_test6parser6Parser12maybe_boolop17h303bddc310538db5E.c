
  int64_t uu_test::parser::Parser::maybe_boolop::h303bddc310538db5(int64_t* arg1, int64_t* arg2)

{
    char result = uu_test::parser::Parser::peek_is_boolop::h010fbe45650976ac(arg2);
    
    if (!result)
        *arg1 = 7;
    else
    {
        void var_48;
        uu_test::parser::Parser::next_token::h4b6300a6fb2b38c8(&var_48, arg2);
        int32_t var_90;
        uu_test::parser::Parser::peek::h996512ad2aa27c9f(&var_90, arg2);
        int32_t var_b8;
        
        if (var_90 != 6)
        {
            core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(&var_90);
            result = uu_test::parser::Parser::boolop::h6f7fceace89c923f(&var_b8, arg2, &var_48);
            
            if (var_b8 != 7)
            {
                label_457f9c:
                int128_t zmm0_2 = var_b8;
                int128_t var_a8;
                *(arg1 + 0x10) = var_a8;
                *arg1 = zmm0_2;
            }
            else
            {
                result = uu_test::parser::Parser::maybe_boolop::h303bddc310538db5(&var_b8, arg2);
                
                if (var_b8 != 7)
                    goto label_457f9c;
                
                *arg1 = 7;
            }
        }
        else
        {
            uu_test::parser::Symbol::into_literal::h1277b0f42f10b0d4(&var_b8, &var_48);
            int32_t var_68;
            uu_test::parser::Parser::literal::hbd84cf521357194c(&var_68, arg2, &var_b8);
            
            if (var_68 != 7)
            {
                int128_t zmm0_1 = var_68;
                int128_t var_58;
                *(arg1 + 0x10) = var_58;
                *arg1 = zmm0_1;
                return core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(
                    &var_90);
            }
            
            result =
                core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(&var_90);
            *arg1 = 7;
        }
    }
    
    return result;
}
