
  fn just::parser::Parser::parse_name::he2804e36e47b7e10(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut var_58: i128;
    let rax: i64 = just::parser::Parser::expect::h35e1151927597ac7(&var_58, arg2, 0x18);
    let var_10: i8;
    
    if var_10 == 0x25
    {
        let rax_1: i64 = just::name::Name::from_identifier::hbd4ef0ea8f6e05d8(arg1, &var_58);
        *arg1.byte_offset(0x48) = 0x25;
        return rax_1;
    }
    
    let var_18: i128;
    arg1[4] = var_18;
    let zmm0: i128 = var_58;
    let var_28: i128;
    arg1[3] = var_28;
    let var_38: i128;
    arg1[2] = var_38;
    let var_48: i128;
    arg1[1] = var_48;
    *arg1 = zmm0;
    rax
}
