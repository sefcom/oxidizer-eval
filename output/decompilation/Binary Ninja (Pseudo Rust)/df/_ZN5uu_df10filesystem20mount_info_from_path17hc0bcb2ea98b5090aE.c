
  fn uu_df::filesystem::mount_info_from_path::hc0bcb2ea98b5090a(arg1: *mut i16, arg2: i64, arg3: i64, arg4: *mut i64) -> i64

{
    let mut var_88: i64;
    std::fs::canonicalize::he3861711874680a2(&var_88, 
        _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h07de46ba282a0abf(arg4));
    let rax_1: i64 = var_88;
    let mut var_80: i8;
    
    if -(rax_1) == -0x8000000000000000
    {
        let result: i64 =
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h69a84c60d5093e65(var_80);
        *arg1 = 0x101;
        return result;
    }
    
    let mut var_7f: i64;
    let mut var_5f_1: i64 = var_7f;
    var_5f_1 = var_7f;
    let mut var_68: i64 = rax_1;
    let var_60_1: i8 = var_80;
    let mut var_50: i64 = arg2;
    let var_48_1: i64 = arg3 * 0x98 + arg2;
    let mut var_40: *mut i64 = &var_40;
    let var_38_1: *mut i64 = &var_68;
    let var_30_1: *mut *mut i64 = &var_40;
    _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h9c71e0ce0d4c8b4f(&var_88, &var_50, &var_40);
    let rax_4: i64 = var_80;
    let mut r12_1: i64;
    
    if rax_4 != -0x8000000000000000
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
    let mut rax_5: i64 = core::option::Option$LT$T$GT$::or_else::hfb47a539a566ef5e(r12_1, &var_88);
    
    if rax_5 == 0
    {
        *arg1.byte_offset(1) = 2;
        rax_5 = 1;
    }
    else
    {
        *arg1.byte_offset(8) = rax_5;
        rax_5 = 0;
    }
    
    *arg1 = rax_5;
    core::mem::drop::hf2e2fee3dcd8d14f(var_68, var_60_1)
}
