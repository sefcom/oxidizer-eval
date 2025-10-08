
  fn alacritty::display::damage::FrameDamage::intersects::h58f384c2d23e8aa8(arg1: *mut c_void, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> u64

{
    let rax: i64 = *arg1.byte_offset(0x10);
    
    if arg2 >= rax
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(arg2, rax);
        /* no return */
    }
    
    if arg4 >= rax
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(arg4, rax);
        /* no return */
    }
    
    let mut rbp: u64;
    rbp = 1;
    
    if *arg1.byte_offset(0x30) == 0
    {
        let r13_1: i64 = *arg1.byte_offset(8);
        let mut var_48: i128 = *(r13_1 + arg2 * 0x18 + 8);
        let var_38_1: i8 = 0;
        
        if core::ops::range::RangeBounds::contains::h436105b2a06e684e(&var_48, arg3) == 0
        {
            var_48 = *(r13_1 + arg4 * 0x18 + 8);
            let var_38_2: i8 = 0;
            
            if core::ops::range::RangeBounds::contains::h436105b2a06e684e(&var_48, arg5) == 0
            {
                var_48 = arg2 + 1;
                *var_48[8] = arg4;
                rbp = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h3342db6dfe9e46fb(
                    core::iter::traits::iterator::Iterator::try_fold::hf9172bfb7e74d031(&var_48, 
                        arg1), 
                    1);
            }
        }
    }
    
    rbp
}
