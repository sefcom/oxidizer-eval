
  fn flealib::commandprocessor::CommandProcessor::create_restart_file::h95b9ea373e575473(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut var_28: i128;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h6b169aa4c72fa5e4(
        &var_28, arg2);
    let mut var_98: *mut i128;
    let mut var_88: i128;
    let mut var_50: i32;
    let mut var_48: *mut i128;
    
    if core::sync::atomic::atomic_load::h8980141092664382(
        &log::MAX_LOG_LEVEL_FILTER::hec4bd8d019e67a03) >= 4
    {
        var_98 = &var_28;
        let var_90_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h97f1f44c687b683c;
        var_88 = &data_b087a8;
        *var_88[8] = 1;
        let var_68_1: i64 = 0;
        let var_78_1: *mut *mut i128 = &var_98;
        let var_70_1: i64 = 1;
        let rax_1: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b087d0);
        var_50 = "flealib::commandprocessorWrong n…";
        var_48 = 0x19;
        let var_40_1: *const i8 = "flealib::commandprocessorWrong n…";
        let var_38_1: i64 = 0x19;
        let var_30_1: i64 = rax_1;
        log::__private_api::log::hd2d1d5843cf283e9(&var_88, 4, &var_50);
    }
    
    std::path::PathBuf::push::hc66e4b85c8e42483(&var_28, "flea.rst@");
    var_88 = var_28;
    let rdx_3: i64 = std::fs::File::create::hb10f4de1cd0f279a(&var_50, &var_88);
    
    if var_50 != 1
    {
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h4172f34dc5251b61(&var_50);
    }
    
    var_98 = var_48;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h00281d94234d25d8(&var_88, 
        &var_98, rdx_3);
    let var_18: i64;
    arg1[1] = var_18;
    *arg1 = var_88;
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(var_48)
}
