
  fn uu_join::parse_print_settings::h08c07f537be3ed8c(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut var_b0: ();
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h31fcb76f23e502bd(
        &var_b0, arg2, "vaj12itoenocheck-ordercheck-orde…");
    let mut var_f0: i64;
    clap_builder::parser::error::MatchesError::unwrap::h9c7a7351e7410c87(&var_f0, 
        "vaj12itoenocheck-ordercheck-orde…", &var_b0);
    let rax: i64 = var_f0;
    let mut var_1b8: fn() -> !;
    
    if rax == 0
    {
        var_1b8 = core::ops::function::FnOnce::call_once::he87907dc6527952d;
        let var_1b0_1: *const i8 = "/home/34r7hm4n/.cargo/registry/s…";
        let var_1a8_1: *const i8 = "/home/34r7hm4n/.cargo/registry/s…";
        let var_1a0_1: i64 = 0;
        let var_190_1: i64 = 0;
        let var_180_1: i64 = 0;
    }
    else
    {
        let var_c0: i128;
        let var_188_1: i128 = var_c0;
        let var_d0: i128;
        let var_198_1: i128 = var_d0;
        let mut var_1a8: i64;
        let var_e0: i128;
        var_1a8 = var_e0;
        var_1b8 = var_f0;
    }
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h31fcb76f23e502bd(
        &var_b0, arg2, "aj12itoenocheck-ordercheck-order…");
    let mut result_1: *mut i64;
    clap_builder::parser::error::MatchesError::unwrap::h9c7a7351e7410c87(&result_1, 
        "aj12itoenocheck-ordercheck-order…", &var_b0);
    let mut var_178: fn() -> !;
    
    if result_1 == 0
    {
        var_178 = core::ops::function::FnOnce::call_once::he87907dc6527952d;
        let var_170_1: *const i8 = "/home/34r7hm4n/.cargo/registry/s…";
        let var_168_1: *const i8 = "/home/34r7hm4n/.cargo/registry/s…";
        let var_160_1: i64 = 0;
        let var_150_1: i64 = 0;
        let var_140_1: i64 = 0;
    }
    else
    {
        let var_100: i128;
        let var_148_1: i128 = var_100;
        let var_110: i128;
        let var_158_1: i128 = var_110;
        let mut var_168: i64;
        let var_120: i128;
        var_168 = var_120;
        var_178 = result_1;
    }
    
    core::iter::traits::iterator::Iterator::chain::h80d51f583fc17b8b(&var_b0, &var_1b8, &var_178);
    let mut var_70: ();
    let mut rax_2: *mut c_void = core::option::Option$LT$T$GT$::or_else::hb3426d0860447af9(
        core::iter::adapters::chain::and_then_or_clear::h36d039b17ed0b5e7(&var_b0), &var_70);
    let mut result: *mut i64;
    let mut rbp: i8;
    let mut r13: i8;
    
    if rax_2 == 0
    {
        r13 = 0;
        rbp = 0;
        'label_46d929:
        result = arg1;
        result[1] = rax == 0;
        *result.byte_offset(9) = rbp;
        *result.byte_offset(0xa) = r13;
        *result = 0;
    }
    else
    {
        rbp = 0;
        r13 = 0;
        
        loop
        {
            uu_join::parse_file_number::h9b8850bce422b1b9(&result_1, *rax_2.byte_offset(8), 
                *rax_2.byte_offset(0x10));
            result = result_1;
            let var_128: i64;
            
            if result != 0
            {
                let rdx_4: *mut *mut c_void = arg1;
                *rdx_4 = result;
                rdx_4[1] = var_128;
                break;
            }
            
            let temp0_1: i8 = var_128;
            
            if temp0_1 != 0
            {
                r13 = 1;
            }
            
            if temp0_1 == 0
            {
                rbp = 1;
            }
            
            rax_2 = core::option::Option$LT$T$GT$::or_else::hb3426d0860447af9(
                core::iter::adapters::chain::and_then_or_clear::h36d039b17ed0b5e7(&var_b0), 
                &var_70);
            
            if rax_2 == 0
            {
                goto 'label_46d929;
            }
        }
    }
    result
}
