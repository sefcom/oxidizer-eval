
  int64_t uu_df::filesystem::mount_info_from_path::heb90d672d6d37662(int64_t* arg1, int64_t arg2, int64_t* arg3)

{
    int64_t* var_88;
    std::fs::canonicalize::h70c2a989be63c794(&var_88, 
        _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h7c1f1ad194ebcdf5(arg3));
    int64_t* rax_1 = var_88;
    
    if (rax_1 == -0x8000000000000000)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h003996e870c333e6(&var_88);
        return 0;
    }
    
    int128_t var_80;
    int128_t var_50_1 = var_80;
    int64_t* var_58 = rax_1;
    int64_t* var_68 = arg1;
    void* var_60_1 = arg2 * 0x98 + arg1;
    var_88 = &var_58;
    var_80 = &var_58;
    *var_80[8] = &var_58;
    int64_t* var_40;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h72961ed988ea76e5(&var_40, &var_68, &var_88);
    int64_t var_38;
    int64_t* r15_1;
    
    if (var_38 != -0x8000000000000000)
    {
        r15_1 = var_40;
        int128_t var_30;
        var_80 = var_30;
        var_88 = r15_1;
        var_80 = var_38;
        core::ptr::drop_in_place$LT$$LP$$RF$uucore..features..fsext..MountInfo$C$std..path..PathBuf$RP$$GT$::h329c4f51013cc44b(&var_88);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..ops..control_flow..ControlFlow$LT$$LP$$RF$uucore..features..fsext..MountInfo$C$std..path..PathBuf$RP$$GT$$GT$::h842f83bfdcbbf6ad(&var_40);
        r15_1 = nullptr;
    }
    
    var_88 = arg1;
    var_80 = arg2;
    *var_80[8] = &var_58;
    int64_t result = core::option::Option$LT$T$GT$::or_else::ha3692bdb0bbd722d(r15_1, &var_88);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he41fae35c4c1a9c1(&var_58);
    return result;
}
