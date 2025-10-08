
  fn just::parser::Parser::expect_keyword::h29d7686c3c631ba9(arg1: *mut u64, arg2: *mut c_void, arg3: i8) -> i64

{
    let mut var_161: i8 = arg3;
    let mut var_150: i128;
    just::parser::Parser::advance::ha6fdbb87ccd3a5f7(&var_150, arg2);
    let result_1: i8;
    let mut result: i8 = result_1;
    let zmm0: i128 = var_150;
    let mut var_110: i8;
    let r14: i8 = var_110;
    let var_10f: i32;
    let var_160: i32 = var_10f;
    let mut var_140: i128;
    let var_130: i128;
    let var_120: i128;
    
    if result != 0x25
    {
        let var_107: i32;
        *arg1.byte_offset(0x4c) = var_107;
        *arg1.byte_offset(0x49) = var_107;
        *arg1.byte_offset(0x30) = var_120;
        *arg1.byte_offset(0x20) = var_130;
        *arg1.byte_offset(0x10) = var_140;
        *arg1 = zmm0;
        *arg1.byte_offset(0x44) = var_10f;
        *arg1.byte_offset(0x41) = var_10f;
        arg1[8] = r14;
        arg1[9] = result;
    }
    else
    {
        let var_48_1: i128 = var_140;
        let var_158_1: i32 = var_10f;
        let mut var_a8: i128 = zmm0;
        let var_98_1: i128 = var_140;
        let var_88_1: i128 = var_130;
        let var_78_1: i128 = var_120;
        let var_68_1: i8 = r14;
        let mut var_67_1: i32 = var_10f;
        var_67_1 = var_10f;
        
        if r14 == 0x18
        {
            let mut rax_2: *mut c_void;
            let mut rdx: i64;
            rax_2 = just::token::Token::lexeme::h66587cdf67f63270(&var_a8);
            var_150 = rax_2;
            *var_150[8] = rdx;
            result = _$LT$just..keyword..Keyword$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::h72387ea6ad90b2ef(&var_161, &var_150);
        }
        
        if r14 != 0x18 || result == 0
        {
            let rax_3: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(1, 1);
            
            if rax_3 == 0
            {
                alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                /* no return */
            }
            
            *rax_3 = arg3;
            *var_150[8] = 1;
            var_140 = rax_3;
            *var_140[8] = 1;
            let var_130_1: i128 = zmm0;
            let var_120_1: i128 = var_48_1;
            var_110 = var_130;
            let var_100_1: i128 = var_120;
            let var_f0_1: i8 = r14;
            let mut var_ef_1: i32 = var_10f;
            var_ef_1 = var_10f;
            var_150 = -0x7fffffffffffffdf;
            return just::token::Token::error::h986494da066a4455(arg1, &var_a8, &var_150);
        }
        
        arg1[9] = 0x25;
    }
    result
}
