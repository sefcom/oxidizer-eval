
  fn ruff_python_formatter::other::interpolated_string_element::needs_bracket_spacing::h48d7245bed3451fb(arg1: *mut i32, arg2: *mut *mut i8) -> u8

{
    if *arg1 == 0x1e && arg1[0xb] == 0 && *arg1.byte_offset(0x18) == 1
    {
        let mut rax_1: i64;
        rax_1 = 0;
        return 0;
    }
    
    let rax: i64;
    let var_8: i64 = rax;
    let rax_3: *mut c_void = *arg2[2].byte_offset(0x60);
    0x6c0 >> *ruff_python_formatter::expression::left_most::h26733ef32f4505d7(arg1, 
        *rax_3.byte_offset(8), *rax_3.byte_offset(0x10), *arg2, arg2[1]) & 1
}
