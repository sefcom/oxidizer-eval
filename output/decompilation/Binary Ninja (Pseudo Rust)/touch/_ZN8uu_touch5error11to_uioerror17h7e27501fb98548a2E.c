
  fn uu_touch::error::to_uioerror::h7e27501fb98548a2(arg1: *mut i64, arg2: i64) -> i64

{
    let mut var_20: i8;
    std::io::error::repr_bitpacked::decode_repr::h60fa891ec952a586(&var_20, arg2);
    let mut rax_1: u64;
    let mut rcx: i64;
    
    if var_20 == 0
    {
        let var_1c: i32;
        rax_1 = var_1c;
        rcx = 2;
    }
    else
    {
        rax_1 = std::io::error::Error::kind::h135fe00c4e7365f3(arg2);
        rcx = 3;
    }
    
    let result: i64 = rax_1 << 0x20 | rcx;
    *arg1 = -0x8000000000000000;
    arg1[3] = result;
    result
}
