
  fn uu_join::State::initialize::h26fceea0e160947a(arg1: *mut i64, arg2: i64, arg3: i8) -> i64

{
    let mut var_48: i64;
    uu_join::State::read_line::hc11952a2ce5ea2c0(&var_48, arg1, arg2);
    let rax: i64 = var_48;
    
    if rax == -0x7fffffffffffffff
    {
        return 1;
    }
    
    let var_28: i128;
    let var_58_1: i128 = var_28;
    let var_38: i128;
    let var_68_1: i128 = var_38;
    let mut var_78: i64 = rax;
    let var_40: i64;
    let var_70_1: i64 = var_40;
    
    if rax != -0x8000000000000000
    {
        alloc::vec::Vec$LT$T$C$A$GT$::push::h1e462bd96175ed88(arg1, &var_78);
        
        if arg3 == 0
        {
            return 0;
        }
        
        if arg1[2] == 0
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
            /* no return */
        }
        
        *(arg1[1] + 0x10);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h0fad273de0c46d5d(&var_78);
    }
    
    0
}
