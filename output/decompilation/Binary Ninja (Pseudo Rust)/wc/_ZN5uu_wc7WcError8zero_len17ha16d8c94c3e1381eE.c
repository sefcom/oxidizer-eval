
  fn uu_wc::WcError::zero_len::ha16d8c94c3e1381e(arg1: *mut i64, arg2: *mut i64, arg3: i64) -> *mut i64

{
    let mut rcx: i64 = -0x8000000000000000;
    
    if arg2 == 0
    {
        *arg1 = -0x7ffffffffffffffd;
        return arg1;
    }
    
    let mut rsi: *const i8;
    let mut rdi: i64;
    
    if *arg2 != -0x7fffffffffffffff
    {
        let mut var_28: i64;
        uu_wc::escape_name_wrapper::haaae7e5c159f0dd0(&var_28, arg2[1], arg2[2]);
        rcx = var_28;
        let var_20: *mut i8;
        rsi = var_20;
        let var_18: i64;
        rdi = var_18;
    }
    else
    {
        rsi = &data_41a0ed[0x51];
        rdi = 1;
    }
    
    *arg1 = rcx;
    arg1[1] = rsi;
    arg1[2] = rdi;
    arg1[3] = arg3;
    arg1
}
