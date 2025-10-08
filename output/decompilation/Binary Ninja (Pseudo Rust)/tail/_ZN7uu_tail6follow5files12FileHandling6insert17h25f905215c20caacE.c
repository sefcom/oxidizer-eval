
  fn uu_tail::follow::files::FileHandling::insert::h25f905215c20caac(arg1: *mut i64, arg2: *mut i8, arg3: u64, arg4: i64, arg5: i8) -> i64

{
    let mut var_110: i128;
    uu_tail::follow::files::FileHandling::canonicalize_path::h83fd2d9f8818f482(&var_110, arg2, 
        arg3);
    let mut var_128: i128;
    let var_100: u64;
    let mut var_f8: i128;
    
    if arg5 != 0
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf90a2ac3df31af12(&var_f8, *var_110[8], var_100);
        var_128 = var_f8;
        core::ptr::drop_in_place$LT$uu_tail..paths..InputKind$GT$::h046d3096d1779570(*arg1, 
            arg1[1]);
        let var_e8: i64;
        arg1[2] = var_e8;
        *arg1 = var_128;
    }
    
    let var_118_2: u64 = var_100;
    var_128 = var_110;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h055dcda36e45ab40(&var_f8, &arg1[3], 
        &var_128, arg4);
    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_tail..follow..files..PathData$GT$$GT$::hcac2d62e1c31956c(&var_f8)
}
