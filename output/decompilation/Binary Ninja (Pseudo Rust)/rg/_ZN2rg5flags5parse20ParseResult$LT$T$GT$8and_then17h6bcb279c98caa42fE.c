
  fn rg::flags::parse::ParseResult$LT$T$GT$::and_then::h6bcb279c98caa42f(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let rcx: i64 = *arg2 - 2;
    let mut rax: i64 = 1;
    
    if rcx < 3
    {
        rax = rcx;
    }
    
    if rax == 0
    {
        let rax_2: i8 = arg2[1];
        arg1[1] = rax_2;
        *arg1 = 2;
        return rax_2;
    }
    
    if rax == 1
    {
        let mut var_270: ();
        memcpy(&var_270, arg2, 0x260);
        return rg::flags::parse::parse::_$u7b$$u7b$closure$u7d$$u7d$::h078e73d04d1b17d8(arg1, 
            &var_270);
    }
    
    let rax_3: i64 = arg2[1];
    arg1[1] = rax_3;
    *arg1 = 4;
    rax_3
}
