
  fn fd::regex_helper::pattern_has_uppercase_char::h2d9199440bf6ad18(arg1: i64, arg2: i64) -> u64

{
    let var_200: i32 = 0xfa;
    let var_1fc: i16 = 0;
    let var_1fa: i8 = 0;
    let var_207: i32 = 0x2020202;
    let var_203: i16 = 0x202;
    let var_201: i8 = 0xa;
    let mut var_208: i8 = 0;
    let mut var_108: ();
    regex_syntax::parser::ParserBuilder::build::h4f1d8f33c91068d9(&var_108, &var_208);
    regex_syntax::parser::Parser::parse::h5efb678b74ee433b(&var_208, &var_108, arg1, arg2);
    let mut rbx_1: u32;
    let var_1f8: i128;
    let var_1e8: i128;
    let mut var_188: i128;
    
    if var_208 != -0x7fffffffffffffff
    {
        var_188 = var_208;
        let var_198: i128;
        let var_118_1: i128 = var_198;
        let var_1a8: i128;
        let var_128_1: i128 = var_1a8;
        let var_1b8: i128;
        let var_138_1: i128 = var_1b8;
        let var_1c8: i128;
        let var_148_1: i128 = var_1c8;
        let var_1d8: i128;
        let var_158_1: i128 = var_1d8;
        let var_168_1: i128 = var_1e8;
        let var_178_1: i128 = var_1f8;
        
        if var_188 != -0x7fffffffffffffff
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$regex_syntax..error..Error$GT$$GT$::h980d190192d3b1f2(&var_188);
            rbx_1 = 0;
        }
        else
        {
            rbx_1 = *var_188[8];
        }
    }
    else
    {
        let var_168: i128 = var_1e8;
        let var_178: i128 = var_1f8;
        var_188 = var_200;
        rbx_1 = fd::regex_helper::pattern_has_uppercase_char::_$u7b$$u7b$closure$u7d$$u7d$::hf198437ff31349b4(&var_188);
    }
    core::ptr::drop_in_place$LT$regex_syntax..parser..Parser$GT$::h264258e692885e03(&var_108);
    rbx_1 &= 1;
    rbx_1
}
