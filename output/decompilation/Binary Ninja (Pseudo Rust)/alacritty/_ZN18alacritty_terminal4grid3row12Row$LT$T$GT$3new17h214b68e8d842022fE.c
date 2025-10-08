
  fn alacritty_terminal::grid::row::Row$LT$T$GT$::new::h214b68e8d842022f(arg1: *mut i64, arg2: i64) -> i64

{
    let mut result: i64;
    let mut rdx: *mut c_void;
    result =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h6d79adff25664689(arg2, 8, 0x18);
    let mut rbp: *mut c_void = rdx;
    let mut var_48: i128;
    let var_38: i64;
    
    if arg2 >= 2
    {
        let mut i_1: i64 = arg2 - 1;
        rbp = rdx;
        let mut i: i64;
        
        do
        {
            _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$core..default..Default$GT$::default::h2206ab58710dae3d(&var_48);
            *rbp.byte_offset(0x10) = var_38;
            *rbp = var_48;
            rbp += 0x18;
            i = i_1;
            i_1 -= 1;
        } while i != 1;
    }
    
    _$LT$alacritty_terminal..term..cell..Cell$u20$as$u20$core..default..Default$GT$::default::h2206ab58710dae3d(&var_48);
    *rbp.byte_offset(0x10) = var_38;
    *rbp = var_48;
    *arg1 = result;
    arg1[1] = rdx;
    arg1[2] = arg2;
    arg1[3] = 0;
    result
}
