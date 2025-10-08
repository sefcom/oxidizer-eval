
  fn zoxide::util::Fzf::spawn::hfa36335aedf1d058(arg1: *mut i32, arg2: *mut c_void) -> *mut i32

{
    let mut var_30: i32;
    let result: *mut i32 = std::process::Command::spawn::haea730ea7b05a977(&var_30, arg2);
    let var_2c: i128;
    
    if var_30 != 1
    {
        *arg1.byte_offset(0x10) = var_2c;
        *arg1.byte_offset(4) = var_2c;
        *arg1 = 0;
        return result;
    }
    
    let r14: i64 = *var_2c[4];
    let mut var_50: i64;
    
    if std::io::error::Error::kind::h135fe00c4e7365f3(r14) != 0
    {
        let var_48: i64 = r14;
        var_50 = 1;
        return anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h90a67f2b84aeb721(arg1, &var_50);
    }
    
    var_50 = r14;
    *arg1.byte_offset(8) = anyhow::kind::Adhoc::new::h431080fddafce1a4();
    *arg1 = 1;
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc0a90eb9fb31b0c2(&var_50)
}
