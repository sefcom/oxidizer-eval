
  fn uu_stat::print_it::hbae1e67489e4141f(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: u64) -> *mut c_void

{
    let r8_1: u8 = arg2 >> 0x10;
    let rax: bool = (arg2 & 0x100) == 0 | r8_1;
    let r9: i64 = *arg1;
    let mut r15: i64 = 0;
    let mut var_50: i32 = arg2;
    
    if r9 < -0x7ffffffffffffffa
    {
        r15 = r9 - 0x7fffffffffffffff;
    }
    
    let var_4c: u16 = arg2 >> 0x20;
    
    match r15
    {
        0 =>
        {
            /* tailcall */
            uu_stat::print_str::h6ec1c07eb7d5dc3a(arg1[1], arg1[2], r8_1, arg3, arg4, arg5)
        }
        1 =>
        {
            uu_stat::print_integer::h03aa5a8d7234e609(arg1[1], &var_50, arg3, arg4, arg5, rax & 1)
        }
        2 =>
        {
            uu_stat::print_unsigned::h6ebed2a96194f8e4(arg1[1], r8_1, arg2 >> 0x28, arg3, arg4, 
                arg5, rax & 1)
        }
        3 =>
        {
            uu_stat::print_unsigned_hex::h3195c7c2eb8d9057(arg1[1], arg2, r8_1, arg3, arg4, arg5, 
                rax & 1)
        }
        4 =>
        {
            uu_stat::print_unsigned_oct::h89c345206a3f2ecd(arg1[1], arg2, r8_1, arg3, arg4, arg5, 
                rax & 1)
        }
        5 =>
        {
            uu_stat::print_float::h1938f14c785bf2a3(&var_50, arg3, arg4, arg5, rax & 1, arg1[1])
        }
        6 =>
        {
            let mut var_48: *mut *mut c_void = &data_519ba0;
            let var_40_1: i64 = 1;
            let var_38_1: i64 = 8;
            let var_30_1: i128 = {0};
            std::io::stdio::_print::h5e446ff973c02de6(&var_48)
        }
    }
}
