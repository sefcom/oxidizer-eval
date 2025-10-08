
  int64_t uu_df::filesystem::mount_info_from_path::hc0bcb2ea98b5090a(int16_t* arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    int64_t var_88;
    std::fs::canonicalize::he3861711874680a2(&var_88, 
        _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h07de46ba282a0abf(arg4));
    int64_t rax_1 = var_88;
    char var_80;
    
    if (-(rax_1) == -0x8000000000000000)
    {
        int64_t result =
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h69a84c60d5093e65(var_80);
        *arg1 = 0x101;
        return result;
    }
    
    int64_t var_7f;
    int64_t var_5f_1 = var_7f;
    var_5f_1 = var_7f;
    int64_t var_68 = rax_1;
    char var_60_1 = var_80;
    int64_t var_50 = arg2;
    int64_t var_48_1 = arg3 * 0x98 + arg2;
    int64_t* var_40 = &var_40;
    int64_t* var_38_1 = &var_68;
    int64_t** var_30_1 = &var_40;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h9c71e0ce0d4c8b4f(&var_88, &var_50, &var_40);
    int64_t rax_4 = var_80;
    int64_t r12_1;
    
    if (rax_4 != -0x8000000000000000)
    {
        r12_1 = var_88;
        core::ptr::drop_in_place$LT$$LP$$RF$uucore..features..fsext..MountInfo$C$std..path..PathBuf$RP$$GT$::he3cf3c9f5c62efb3(rax_4, var_7f);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..ops..control_flow..ControlFlow$LT$$LP$$RF$uucore..features..fsext..MountInfo$C$std..path..PathBuf$RP$$GT$$GT$::he2ec4800f4f1f216(-0x8000000000000000, var_7f);
        r12_1 = 0;
    }
    
    var_88 = arg2;
    var_80 = arg3;
    var_7f = &var_68;
    int64_t rax_5 = core::option::Option$LT$T$GT$::or_else::hfb47a539a566ef5e(r12_1, &var_88);
    
    if (!rax_5)
    {
        *(arg1 + 1) = 2;
        rax_5 = 1;
    }
    else
    {
        *(arg1 + 8) = rax_5;
        rax_5 = 0;
    }
    
    *arg1 = rax_5;
    return core::mem::drop::hf2e2fee3dcd8d14f(var_68, var_60_1);
}
