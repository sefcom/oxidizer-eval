
  fn alacritty_terminal::vi_mode::first_occupied_in_line::h19350108178722bc(arg1: *mut i64, arg2: *mut c_void, arg3: i32) -> i64

{
    let mut var_3c: i32 = arg3;
    let rcx: i64 = *arg2.byte_offset(0xb8);
    let mut var_30: i64 = 0;
    let var_28: i64 = rcx;
    let mut var_38: *mut i32 = &var_3c;
    let mut var_20: i32;
    let rax_1: i64 = core::iter::traits::iterator::Iterator::try_fold::h82c875bbb5b4bee1(&var_20, 
        &var_30, arg2, &var_38);
    
    if var_20 != 1
    {
        *arg1 = 0;
        return rax_1;
    }
    
    let var_18: i64;
    arg1[1] = var_18;
    let var_10: i32;
    arg1[2] = var_10;
    *arg1 = 1;
    var_18
}
