
  fn just::parser::Parser::parse_string_literal::h7c39b9a6292fbece(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let mut var_88: i32;
    just::parser::Parser::parse_string_literal_token::h0d1e77bec93423b0(&var_88, arg2);
    let var_3f: i128;
    
    if var_88 != 1
    {
        let var_1f: i128;
        arg1[4] = *var_1f[7];
        let var_10: i64;
        arg1[5] = var_10;
        let var_2f: i128;
        *arg1.byte_offset(0x10) = var_2f;
        *arg1 = var_3f;
        arg1[9] = 0x25;
        return var_10;
    }
    
    let mut var_c8: i120;
    var_c8 = var_3f;
    *var_c8[7] = *var_3f[7];
    arg1[9] = *var_c8[7];
    *arg1.byte_offset(0x41) = var_c8;
    let var_80: i64;
    *arg1 = var_80;
    let var_78: i128;
    *arg1.byte_offset(8) = var_78;
    let var_68: i128;
    *arg1.byte_offset(0x18) = var_68;
    let var_58: i128;
    *arg1.byte_offset(0x28) = var_58;
    let var_48: i64;
    arg1[7] = var_48;
    let var_40: i8;
    arg1[8] = var_40;
    var_80
}
