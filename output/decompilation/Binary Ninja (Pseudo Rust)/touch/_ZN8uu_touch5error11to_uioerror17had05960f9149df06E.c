
  fn uu_touch::error::to_uioerror::had05960f9149df06(arg1: *mut i64, arg2: i64) -> i64

{
    let mut var_20: i8;
    std::io::error::repr_bitpacked::decode_repr::h64152757b01d7bff(&var_20, arg2);
    let mut rax_4: i64;
    let mut rcx: i64;
    
    match var_20
    {
        0 =>
        {
            let var_1c: i32;
            rax_4 = var_1c;
            rcx = 2;
        }
        1 | 2 | 3 =>
        {
            rax_4 = std::io::error::Error::kind::hb2ff5fa058639b3d(arg2);
            rcx = 3;
        }
    }
    
    let result: i64 = rax_4 << 0x20 | rcx;
    *arg1 = -0x8000000000000000;
    arg1[3] = result;
    result
}
