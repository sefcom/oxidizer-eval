
  int64_t just::recipe_resolver::RecipeResolver::resolve_dependency::h8513d047f404bfd5(int64_t* arg1, void* arg2, void* arg3, void* arg4, int64_t* arg5)

{
    int64_t r14 = *(arg3 + 0x20);
    int64_t rbp = *(arg3 + 0x28);
    void* rax_1;
    uint64_t rdx;
    rax_1 = just::token::Token::lexeme::h66587cdf67f63270(
        just::namepath::Namepath::last::hd204dfab89d26ff3(r14, rbp));
    void* var_290 = rax_1;
    uint64_t var_288 = rdx;
    int64_t result;
    
    if (rbp <= 1)
    {
        int64_t* rax_2 =
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h3ce94925646e0fd0(
            *(arg2 + 0x20), *(arg2 + 0x28), rax_1, rdx);
        
        if (!rax_2)
        {
            int64_t* rsi_3 = arg5[1];
            int64_t rdx_3 = arg5[2];
            int64_t result_1;
            int64_t var_230;
            
            if (_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::he7e5eaa90c4f1895(&var_290, rsi_3, rdx_3))
            {
                if (!rdx_3)
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
                    /* no return */
                }
                
                alloc::vec::Vec$LT$T$C$A$GT$::push::h6fed9915a4cca328(arg5, *rsi_3, rsi_3[1]);
                int128_t* rax_5 = just::namepath::Namepath::last::hd204dfab89d26ff3(r14, rbp);
                void* rax_6;
                int64_t rdx_5;
                rax_6 = just::token::Token::lexeme::h66587cdf67f63270(arg4 + 0x90);
                int64_t result_2 = arg5[1];
                int64_t rcx_7 = (arg5[2] << 4) + result_2;
                result_1 = result_2;
                int64_t var_278_1 = rcx_7;
                void* var_270_1 = arg3;
                char var_268_1 = 0;
                void var_228;
                core::iter::traits::iterator::Iterator::collect::h11828e8c2bc76a01(&var_228, 
                    &result_1);
                void* var_210_1 = rax_6;
                int64_t var_208_1 = rdx_5;
                var_230 = -0x7fffffffffffffe9;
                return just::token::Token::error::h986494da066a4455(arg1, rax_5, &var_230);
            }
            
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::hd5ced7b6bb659888(
                &var_230, arg2 + 0x38, rax_1, rdx);
            result = 0;
            
            if (0 + -(var_230))
            {
                *arg1 = result;
                arg1[9] = 0x25;
            }
            else
            {
                void var_130;
                memcpy(&var_130, &var_230, 0x100);
                just::recipe_resolver::RecipeResolver::resolve_recipe::h2d75c63668874e04(&result_1, 
                    arg2, arg5, &var_130);
                result = result_1;
                char var_238;
                
                if (var_238 != 0x25)
                {
                    int128_t var_248;
                    *(arg1 + 0x38) = var_248;
                    int128_t var_258;
                    *(arg1 + 0x28) = var_258;
                    char var_268;
                    *(arg1 + 0x18) = var_268;
                    int64_t var_278;
                    *(arg1 + 8) = var_278;
                    int32_t var_237;
                    *(arg1 + 0x49) = var_237;
                    *(arg1 + 0x4c) = var_237;
                    *arg1 = result;
                    arg1[9] = var_238;
                }
                else
                {
                    *arg1 = result;
                    arg1[9] = 0x25;
                }
            }
        }
        else
        {
            int64_t* rcx_2 = *rax_2;
            int64_t temp0_1 = *rcx_2;
            *rcx_2 += 1;
            
            if (temp0_1 <= -1)
                trap(6);
            
            result = *rax_2;
            *arg1 = result;
            arg1[9] = 0x25;
        }
    }
    else
    {
        result = just::analyzer::Analyzer::resolve_recipe::he99a001ae8837bfe(r14, rbp, 
            *(arg2 + 0x18), arg2 + 0x20);
        *arg1 = result;
        arg1[9] = 0x25;
    }
    
    return result;
}
