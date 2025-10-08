
  fn zoxide::util::current_time::hc177626caa3eacce() -> i64

{
    let mut rax: i64;
    let mut rdx: i32;
    rax = std::time::SystemTime::now::h4fbc1302a9c481f4();
    let mut var_30: i64 = rax;
    let var_28: i32 = rdx;
    let mut var_20: ();
    std::time::SystemTime::duration_since::h5eaa6a008fb4c137(&var_20, &var_30, 0);
    let mut var_40: i64;
    anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::hc4dc3457e2a22d9b(&var_40, &var_20);
    let var_38: i32;
    
    if var_38 != 0x3b9aca00
    {
        return 0;
    }
    
    1
}
