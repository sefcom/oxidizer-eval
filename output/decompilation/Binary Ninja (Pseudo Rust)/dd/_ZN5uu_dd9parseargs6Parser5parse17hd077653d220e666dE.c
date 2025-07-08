
  fn uu_dd::parseargs::Parser::parse::hd077653d220e666d(arg1: *mut i64) -> *mut i64

{
    let mut var_1c0: i64;
    let rcx: i64;
    let rdx: i64;
    let rsi: *mut i64;
    uu_dd::parseargs::Parser::read::h3585469891c58efd(&var_1c0, rsi, rdx, rcx);
    let r14: i64 = var_1c0;
    let var_1b8: i128;
    let var_1a8: i128;
    
    if r14 != 2
    {
        let mut var_198: ();
        let mut var_c0: ();
        memcpy(&var_c0, &var_198, 0xb0);
        let mut var_e8: i64 = r14;
        let var_e0_1: i128 = var_1b8;
        let var_d0_1: i128 = var_1a8;
        uu_dd::parseargs::Parser::validate::hd2b1e31453916e87(arg1, &var_e8);
    }
    else
    {
        *arg1.byte_offset(0x18) = var_1a8;
        *arg1.byte_offset(8) = var_1b8;
        *arg1 = 3;
    }
    arg1
}
