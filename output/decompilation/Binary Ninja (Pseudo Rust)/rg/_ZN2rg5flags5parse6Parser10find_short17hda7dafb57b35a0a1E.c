
  fn rg::flags::parse::Parser::find_short::hda7dafb57b35a0a1(arg1: *mut i64, arg2: *mut c_void, arg3: i32) -> i64

{
    let mut rax_1: i8;
    let mut rdx: i64;
    
    if arg3 < 0x80
    {
        let mut var_19: i8 = arg3;
        rax_1 =
            rg::flags::parse::FlagMap::find::hdf23bd2dbf42aadc(arg2.byte_offset(0x18), &var_19, 1);
    }
    
    let mut result: i64;
    
    if arg3 >= 0x80 || (rax_1 & 1) == 0
    {
        result = -0x7fffffffffffffff;
        arg1[1] = arg3;
    }
    else
    {
        let rsi_1: i64 = *arg2.byte_offset(0x10);
        
        if rdx >= rsi_1
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(rdx, rsi_1);
            /* no return */
        }
        
        arg1[1] = rdx * 0x28 + *arg2.byte_offset(8);
        result = -0x8000000000000000;
    }
    
    *arg1 = result;
    result
}
