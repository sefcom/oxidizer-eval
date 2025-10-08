
  int64_t ruff_python_formatter::comments::placement::handle_parameter_comment::h4b98d1e26c5ecc8e(int128_t* arg1, int128_t* arg2, void* arg3, char* arg4, int64_t arg5)

{
    int32_t result;
    
    if (*(arg3 + 8))
    {
        int32_t var_48;
        ruff_python_trivia::tokenizer::first_non_trivia_token::h0374298a6b2ddd94(&var_48, 
            *(arg3 + 0x14), arg4, arg5);
        char var_40;
        
        if (var_40 == 0x5a)
        {
            core::option::expect_failed::h3f620cfb8545dc61("A annotated parameter should hav…");
            /* no return */
        }
        
        int32_t rcx_1 = var_48;
        char var_49 = var_40;
        
        if (var_40 != 0xc)
        {
            var_48 = 0;
            core::panicking::assert_failed::h581e1324dddd7d27(0, &var_49, &data_48a9b3, &var_48);
            /* no return */
        }
        
        result = arg2[4];
        
        if (result >= rcx_1)
            goto label_70271d;
        
        goto label_7026e3;
    }
    
    result = arg2[4];
    
    if (result < *(arg3 + 0x10))
    {
        label_7026e3:
        char rcx_2 = *(arg2 + 0x48);
        int32_t rdx_1 = *(arg2 + 0x44);
        *(arg1 + 8) = 0x50;
        arg1[1] = arg3;
        *(arg1 + 0x18) = result;
        *(arg1 + 0x1c) = rdx_1;
        arg1[2] = 0;
        *(arg1 + 0x21) = rcx_2;
        *arg1 = 0x5e;
    }
    else
    {
        label_70271d:
        arg1[4] = arg2[4];
        int128_t zmm0 = *arg2;
        int128_t zmm1 = arg2[1];
        int128_t zmm2 = arg2[2];
        arg1[3] = arg2[3];
        arg1[2] = zmm2;
        arg1[1] = zmm1;
        *arg1 = zmm0;
    }
    
    return result;
}
