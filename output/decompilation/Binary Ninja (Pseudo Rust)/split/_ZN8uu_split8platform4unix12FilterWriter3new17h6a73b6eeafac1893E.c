
  fn uu_split::platform::unix::FilterWriter::new::h6a73b6eeafac1893(arg1: *mut i32, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut var_140: ();
    uu_split::platform::unix::WithEnvVarSet::new::h427893530f97257f(&var_140, arg4);
    let mut var_198: i32;
    std::env::var::hb56eac25d1451add(&var_198, "SHELL-c/bin/shShell process retu…");
    let mut var_158: i128;
    let var_190: i128;
    
    if var_198 != 1
    {
        let var_180: i64;
        let var_148_1: i64 = var_180;
        var_158 = var_190;
    }
    else
    {
        uu_split::platform::unix::FilterWriter::new::_$u7b$$u7b$closure$u7d$$u7d$::h1b825aae2aa074bc(&var_158, var_190, *var_190[8]);
    }
    let mut var_108: ();
    std::process::Command::new::h9c867987cc8ecf9e(&var_108, &var_158);
    std::process::Command::arg::h01d1b9d820a6f008(&var_108, "-c/bin/shShell process returned …");
    std::process::Command::arg::h01d1b9d820a6f008(&var_108, arg2);
    std::process::Command::stdin::hf847da75d4414cb9(&var_108);
    let mut var_178: i32;
    std::process::Command::spawn::haea730ea7b05a977(&var_178, &var_108);
    let var_170: i64;
    
    if var_178 != 1
    {
        let var_174: i32;
        var_198 = var_174;
        let var_194_1: i64 = var_170;
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h4a39623342789579(&var_108);
        let zmm0_3: i128 = var_198;
        let var_168: i128;
        *arg1.byte_offset(0x10) = var_168;
        *arg1.byte_offset(4) = zmm0_3;
        *arg1 = 0;
    }
    else
    {
        *arg1.byte_offset(8) = var_170;
        *arg1 = 1;
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h4a39623342789579(&var_108);
    }
    core::ptr::drop_in_place$LT$uu_split..platform..unix..WithEnvVarSet$GT$::h230d990f3209e038(
        &var_140)
}
