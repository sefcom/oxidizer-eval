
  uint64_t just::evaluator::Evaluator::evaluate_assignment::h6f66c21b7dd7e3b7(char* arg1, int64_t* arg2, int64_t* arg3)

{
    void* rax;
    uint64_t rdx;
    rax = just::token::Token::lexeme::h66587cdf67f63270(&arg3[0x10]);
    
    if (just::scope::Scope::bound::h642fef3bae8484e6(arg2[5], arg2[6], rax, rdx))
        goto label_665254;
    
    char result_1;
    just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&result_1, arg2, arg3);
    uint64_t result = result_1;
    int128_t var_c7;
    int128_t var_a8;
    int128_t var_98;
    int128_t var_88;
    int128_t var_78;
    int64_t var_68;
    
    if (result != 0x38)
    {
        *(arg1 + 0x60) = var_68;
        *(arg1 + 0x50) = var_78;
        *(arg1 + 0x40) = var_88;
        *(arg1 + 0x30) = var_98;
        *(arg1 + 0x20) = var_a8;
        *(arg1 + 0x10) = var_c7;
        *(arg1 + 1) = var_c7;
        *arg1 = result;
    }
    else
    {
        int64_t var_b0;
        int128_t var_49;
        *var_49[8] = var_b0;
        int128_t zmm0_1 = var_c7;
        int128_t var_58 = zmm0_1;
        *var_c7[0xf] = var_b0;
        result_1 = zmm0_1;
        *var_78[8] = arg3[0x18];
        var_88 = *(arg3 + 0xb0);
        var_98 = *(arg3 + 0xa0);
        var_a8 = *(arg3 + 0x90);
        var_b0 = *(arg3 + 0x80);
        *var_68[4] = 0;
        *var_68[5] = *(arg3 + 0xcd);
        var_68 = 0;
        *var_68[6] = *(arg3 + 0xce);
        just::scope::Scope::bind::h2017080dbe33bcde(&arg2[5], &result_1);
        label_665254:
        int64_t rdx_4;
        result = just::scope::Scope::value::hb06d4bb986c3514e(&arg2[5], rax, rdx);
        
        if (!result)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        *(arg1 + 8) = result;
        *(arg1 + 0x10) = rdx_4;
        *arg1 = 0x38;
    }
    return result;
}
