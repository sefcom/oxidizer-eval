
  fn rg::flags::FlagValue::unwrap_switch::h8b3b7134394aeb98(arg1: *mut i64) -> u64

{
    if -(*arg1) == -0x8000000000000000
    {
        let rbx_1: u32 = arg1[1];
        core::ptr::drop_in_place$LT$rg..flags..FlagValue$GT$::hd36131b5df04d880(
            -0x8000000000000000, arg1[1]);
        return rbx_1;
    }
    
    let mut var_48: *mut *mut c_void = &data_7eb6c8;
    let var_40: i64 = 1;
    let mut var_50: ();
    let var_38: *mut c_void = &var_50;
    let var_30: i128 = {0};
    core::panicking::panic_fmt::h96f341d36638c225(&var_48);
    /* no return */
}
