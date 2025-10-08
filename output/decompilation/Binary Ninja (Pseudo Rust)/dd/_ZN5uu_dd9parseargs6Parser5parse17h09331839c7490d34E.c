
  fn uu_dd::parseargs::Parser::parse::h09331839c7490d34(arg1: *mut i64, arg2: *mut i64, arg3: *mut i128) -> *mut i64

{
    let mut var_1c0: i64;
    let result: i64 = uu_dd::parseargs::Parser::read::ha501085c91122a16(&var_1c0, arg2, arg3);
    let r14: i64 = var_1c0;
    let var_1b8: i128;
    let var_1a8: i128;
    
    if r14 == 2
    {
        *arg1.byte_offset(0x18) = var_1a8;
        *arg1.byte_offset(8) = var_1b8;
        *arg1 = 3;
        return result;
    }
    
    let mut var_198: ();
    let mut var_c0: ();
    memcpy(&var_c0, &var_198, 0xb0);
    let mut var_e8: i64 = r14;
    let var_e0: i128 = var_1b8;
    let var_d0: i128 = var_1a8;
    uu_dd::parseargs::Parser::validate::hefe4c66de8f3a7b9(arg1, &var_e8)
}
