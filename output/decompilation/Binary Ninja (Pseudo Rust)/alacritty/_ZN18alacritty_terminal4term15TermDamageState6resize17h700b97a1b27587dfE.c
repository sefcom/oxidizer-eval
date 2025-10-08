
  fn alacritty_terminal::term::TermDamageState::resize::h700b97a1b27587df(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    arg1[5] = 1;
    __builtin_memset(&arg1[2], 0, 0x14);
    let mut result: i64 = alloc::vec::Vec$LT$T$C$A$GT$::reserve::h2fe219f6dc78a3fe(arg1, arg3);
    
    if arg3 != 0
    {
        let mut rbp_1: i64 = 0;
        
        do
        {
            let mut var_48: i64 = rbp_1;
            rbp_1 += 1;
            let var_40_1: i64 = arg2;
            let var_38_1: i64 = 0;
            result = alloc::vec::Vec$LT$T$C$A$GT$::push::h03702a85e1bf04eb(arg1, &var_48);
        } while arg3 != rbp_1;
    }
    
    result
}
