
  fn alacritty_terminal::term::search::RegexIter$LT$T$GT$::skip::h5be9c855bda625b2(arg1: *mut i64) -> i64

{
    let r14: *mut c_void = arg1[5];
    let rbp: u32 = arg1[6];
    let mut rax: i64;
    let mut rdx_1: i32;
    rax = alacritty_terminal::term::Term$LT$T$GT$::expand_wide::h832c6afc1f08b7ff(r14, *arg1, 
        arg1[1], rbp);
    *arg1 = rax;
    arg1[1] = rdx_1;
    let mut result: i64;
    let mut rdx_3: i32;
    
    if rbp != 1
    {
        result = alacritty_terminal::index::Point::sub::h8b4b7dd5f4447bbc(rax, rdx_1, r14, 2);
    }
    else
    {
        result = alacritty_terminal::index::Point::add::h870632f29f948f48(rax, rdx_1, r14, 2, 1);
    }
    
    *arg1 = result;
    arg1[1] = rdx_3;
    result
}
