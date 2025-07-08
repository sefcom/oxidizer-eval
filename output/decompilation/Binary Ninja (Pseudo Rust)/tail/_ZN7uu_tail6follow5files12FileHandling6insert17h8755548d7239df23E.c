
  fn uu_tail::follow::files::FileHandling::insert::h8755548d7239df23(arg1: *mut i64, arg2: *mut i8, arg3: size_t, arg4: i64, arg5: i8) -> i64

{
    let mut var_210: i128;
    uu_tail::follow::files::FileHandling::canonicalize_path::ha359b021a4419771(&var_210, arg2, 
        arg3);
    let mut var_1d8: i128;
    let mut var_f8: i128;
    
    if arg5 != 0
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0bc823050694df3d(&var_f8, &var_210);
        var_1d8 = var_f8;
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h63b24af75b14f95f(arg1);
        let var_e8: i64;
        arg1[2] = var_e8;
        *arg1 = var_1d8;
    }
    
    let var_200: i64;
    let var_1e8: i64 = var_200;
    let mut var_1f8: i128 = var_210;
    memcpy(&var_f8, arg4, 0xd8);
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hf8cb82a3ae54ea43(&var_1d8, &arg1[3], 
        &var_1f8, &var_f8);
    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_tail..follow..files..PathData$GT$$GT$::h8a61832e18145f83(&var_1d8)
}
