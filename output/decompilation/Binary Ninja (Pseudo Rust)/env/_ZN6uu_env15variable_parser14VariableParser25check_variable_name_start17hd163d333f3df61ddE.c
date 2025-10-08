
  fn uu_env::variable_parser::VariableParser::check_variable_name_start::hd163d333f3df61dd(arg1: *mut i32, arg2: *mut i64) -> u64

{
    let mut result: u64 =
        uu_env::variable_parser::VariableParser::get_current_char::h2461897ac15abcf2(arg2);
    let mut rcx: i32 = 0xc;
    
    if result - 0x30 <= 9
    {
        let r14_1: i64 = arg2[4];
        let mut var_2c: i32 = 0;
        let mut rax: *mut i8;
        let mut rdx_1: u64;
        rax = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(result, &var_2c);
        let mut var_28: i128;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf510679057ea9fe7(&var_28, rax, rdx_1);
        *arg1.byte_offset(8) = r14_1;
        *arg1.byte_offset(0x10) = var_28;
        let result_1: u64;
        result = result_1;
        *arg1.byte_offset(0x20) = result;
        rcx = 7;
    }
    
    *arg1 = rcx;
    result
}
