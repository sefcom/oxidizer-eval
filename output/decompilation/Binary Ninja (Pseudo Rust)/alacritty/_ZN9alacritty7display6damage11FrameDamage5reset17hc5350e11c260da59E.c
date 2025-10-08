
  fn alacritty::display::damage::FrameDamage::reset::hc5350e11c260da59(arg1: *mut i64, arg2: i64) -> i64

{
    arg1[6] = 0;
    arg1[5] = 0;
    arg1[2] = 0;
    let mut result: i64 = alloc::vec::Vec$LT$T$C$A$GT$::reserve::h2fe219f6dc78a3fe(arg1, arg2);
    
    if arg2 != 0
    {
        let mut rbp_1: i64 = 0;
        
        do
        {
            let mut var_48: i64 = rbp_1;
            rbp_1 += 1;
            let rdx: i64;
            let var_40_1: i64 = rdx;
            let var_38_1: i64 = 0;
            result = alloc::vec::Vec$LT$T$C$A$GT$::push::h03702a85e1bf04eb(arg1, &var_48);
        } while arg2 != rbp_1;
    }
    
    result
}
