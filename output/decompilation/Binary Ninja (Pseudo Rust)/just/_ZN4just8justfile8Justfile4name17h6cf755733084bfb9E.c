
  fn just::justfile::Justfile::name::h6cf755733084bfb9(arg1: *mut c_void) -> *mut c_void

{
    let rax_2: i8 = *arg1.byte_offset(0x230);
    
    if rax_2 == 0x25
    {
        return 1;
    }
    
    let var_18: i128 = *arg1.byte_offset(0x220);
    let var_28: i128 = *arg1.byte_offset(0x210);
    let var_38: i128 = *arg1.byte_offset(0x200);
    let mut var_48: i128 = *arg1.byte_offset(0x1f0);
    let mut var_7: i32 = *arg1.byte_offset(0x231);
    var_7 = *arg1.byte_offset(0x234);
    let var_8: i8 = rax_2;
    just::token::Token::lexeme::h66587cdf67f63270(&var_48)
}
