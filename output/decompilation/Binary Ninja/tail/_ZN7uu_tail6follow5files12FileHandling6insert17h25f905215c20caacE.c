
  int64_t uu_tail::follow::files::FileHandling::insert::h25f905215c20caac(int64_t* arg1, char* arg2, uint64_t arg3, int64_t arg4, char arg5)

{
    int128_t var_110;
    uu_tail::follow::files::FileHandling::canonicalize_path::h83fd2d9f8818f482(&var_110, arg2, 
        arg3);
    int128_t var_128;
    uint64_t var_100;
    int128_t var_f8;
    
    if (arg5)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf90a2ac3df31af12(&var_f8, *var_110[8], var_100);
        var_128 = var_f8;
        core::ptr::drop_in_place$LT$uu_tail..paths..InputKind$GT$::h046d3096d1779570(*arg1, 
            arg1[1]);
        int64_t var_e8;
        arg1[2] = var_e8;
        *arg1 = var_128;
    }
    
    uint64_t var_118_2 = var_100;
    var_128 = var_110;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h055dcda36e45ab40(&var_f8, &arg1[3], 
        &var_128, arg4);
    return core::ptr::drop_in_place$LT$core..option..Option$LT$uu_tail..follow..files..PathData$GT$$GT$::hcac2d62e1c31956c(&var_f8);
}
