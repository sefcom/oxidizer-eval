
  fn just::parser::Parser::forbid::h3395c9dfac3fe700(arg1: *mut u64, arg2: *mut c_void) -> i64

{
    let mut var_d8: i128;
    just::parser::Parser::next::h26f20bd451ef506f(&var_d8, arg2);
    let zmm0: i128 = var_d8;
    let var_97: i32;
    let var_e8: i32 = var_97;
    let var_c8: i128;
    let var_b8: i128;
    let var_a8: i128;
    let result: i8;
    let var_90: i8;
    
    if var_90 != 0x25
    {
        let var_8f: i32;
        *arg1.byte_offset(0x4c) = var_8f;
        *arg1.byte_offset(0x49) = var_8f;
        *arg1.byte_offset(0x30) = var_a8;
        *arg1.byte_offset(0x20) = var_b8;
        *arg1.byte_offset(0x10) = var_c8;
        *arg1 = zmm0;
        *arg1.byte_offset(0x44) = var_97;
        *arg1.byte_offset(0x41) = var_97;
        arg1[8] = result;
        arg1[9] = var_90;
        return result;
    }
    
    let var_e0: i32 = var_97;
    
    if result != 0x18
    {
        arg1[9] = 0x25;
        return result;
    }
    
    let var_a8_1: i128 = var_a8;
    let var_b8_1: i128 = var_b8;
    let var_c8_1: i128 = var_c8;
    var_d8 = zmm0;
    let var_98: i8 = 0x18;
    let mut var_97_1: i32 = var_97;
    var_97_1 = var_97;
    just::parser::Parser::parse_recipe::_$u7b$$u7b$closure$u7d$$u7d$::h3e49d237bea22a26(arg1, 
        &var_d8)
}
