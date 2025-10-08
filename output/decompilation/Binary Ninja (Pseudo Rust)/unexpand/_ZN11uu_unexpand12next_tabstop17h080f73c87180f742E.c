
  fn uu_unexpand::next_tabstop::h080f73c87180f742(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut var_20: i64 = arg3;
    
    if arg2 != 1
    {
        let mut var_18: *mut i64 = arg1;
        let var_10_1: *mut c_void = &arg1[arg2];
        let mut rax_6: *mut i64;
        let mut rcx_1: i64;
        rax_6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::hbb310f0c725f7a84(&var_18, &var_20);
        
        if rax_6 == 0
        {
            return 0;
        }
        
        *rax_6;
    }
    else if *arg1 == 0
    {
        core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
        /* no return */
    }
    
    1
}
