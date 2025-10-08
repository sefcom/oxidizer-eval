
  fn just::evaluator::Evaluator::evaluate_assignment::h6f66c21b7dd7e3b7(arg1: *mut i8, arg2: *mut i64, arg3: *mut i64) -> u64

{
    let mut rax: *mut c_void;
    let mut rdx: u64;
    rax = just::token::Token::lexeme::h66587cdf67f63270(&arg3[0x10]);
    
    if just::scope::Scope::bound::h642fef3bae8484e6(arg2[5], arg2[6], rax, rdx) != 0
    {
        goto 'label_665254;
    }
    
    let mut result_1: i8;
    just::evaluator::Evaluator::evaluate_expression::h1032c41901323605(&result_1, arg2, arg3);
    let mut result: u64 = result_1;
    let mut var_c7: i128;
    let mut var_a8: i128;
    let mut var_98: i128;
    let mut var_88: i128;
    let mut var_78: i128;
    let mut var_68: i64;
    
    if result != 0x38
    {
        *arg1.byte_offset(0x60) = var_68;
        *arg1.byte_offset(0x50) = var_78;
        *arg1.byte_offset(0x40) = var_88;
        *arg1.byte_offset(0x30) = var_98;
        *arg1.byte_offset(0x20) = var_a8;
        *arg1.byte_offset(0x10) = var_c7;
        *arg1.byte_offset(1) = var_c7;
        *arg1 = result;
    }
    else
    {
        let mut var_b0: i64;
        let mut var_49: i128;
        *var_49[8] = var_b0;
        let zmm0_1: i128 = var_c7;
        let var_58: i128 = zmm0_1;
        *var_c7[0xf] = var_b0;
        result_1 = zmm0_1;
        *var_78[8] = arg3[0x18];
        var_88 = *arg3.byte_offset(0xb0);
        var_98 = *arg3.byte_offset(0xa0);
        var_a8 = *arg3.byte_offset(0x90);
        var_b0 = *arg3.byte_offset(0x80);
        *var_68[4] = 0;
        *var_68[5] = *arg3.byte_offset(0xcd);
        var_68 = 0;
        *var_68[6] = *arg3.byte_offset(0xce);
        just::scope::Scope::bind::h2017080dbe33bcde(&arg2[5], &result_1);
        'label_665254:
        let mut rdx_4: i64;
        result = just::scope::Scope::value::hb06d4bb986c3514e(&arg2[5], rax, rdx);
        
        if result == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        *arg1.byte_offset(8) = result;
        *arg1.byte_offset(0x10) = rdx_4;
        *arg1 = 0x38;
    }
    result
}
