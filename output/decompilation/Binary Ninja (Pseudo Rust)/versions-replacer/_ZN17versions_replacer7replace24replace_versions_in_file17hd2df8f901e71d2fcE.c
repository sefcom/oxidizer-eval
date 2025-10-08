
  fn versions_replacer::replace::replace_versions_in_file::hd2df8f901e71d2fc(arg1: i64, arg2: i64, arg3: *mut i64) -> i64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h990a0115cc6ce4a4(arg1);
    let mut var_58: i64 = rax;
    let mut var_30: i128;
    std::fs::read_to_string::h0dbd6e5991166611(&var_30, rax);
    let mut var_78: i64;
    eyre::context::_$LT$impl$u20$eyre..WrapErr$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::wrap_err_with::h956695fcc1fb384c(&var_78, &var_30, &var_58);
    let rax_1: i64 = var_78;
    
    if -(rax_1) == -0x8000000000000000
    {
        return 1;
    }
    
    let mut var_48: i64 = rax_1;
    let var_70: *mut i8;
    let var_40_1: *mut i8 = var_70;
    let var_68: i64;
    let var_38_1: i64 = var_68;
    versions_replacer::replace::replace_versions_in_string::h063c15bef42f5705(&var_30, var_70, 
        var_68, arg3);
    let var_20: i64;
    let var_68_1: i64 = var_20;
    var_78 = var_30;
    let var_18: *mut i8;
    
    if var_18 != 0 && eyre::context::_$LT$impl$u20$eyre..WrapErr$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::wrap_err_with::h7ae28368aab41094(std::fs::write::h48952fe712cc9e14(var_58, rdx, var_70), &var_58) != 0
    {
        core::ptr::drop_in_place$LT$regex..error..Error$GT$::h40176a95864f42c7(&var_78);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8e8a5cd0dfd373fb(&var_48);
        return 1;
    }
    
    core::ptr::drop_in_place$LT$regex..error..Error$GT$::h40176a95864f42c7(&var_78);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8e8a5cd0dfd373fb(&var_48);
    0
}
