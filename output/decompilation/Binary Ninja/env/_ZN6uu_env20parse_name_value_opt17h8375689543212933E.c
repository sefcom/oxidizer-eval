
  int64_t uu_env::parse_name_value_opt::h8375689543212933(int128_t** arg1, void* arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_a0 = -0x8000000000000000;
    int64_t var_98 = arg3;
    int64_t var_90 = arg4;
    int64_t var_88;
    uu_env::native_int_str::NativeStr::split_once::hcbed3488f59e21a4(&var_88, &var_a0, "=");
    int128_t* rax;
    
    if (var_88 != -0x7fffffffffffffff)
    {
        int64_t var_78;
        int64_t var_48_1 = var_78;
        int128_t var_58 = var_88;
        int128_t var_70;
        int128_t var_40_1 = var_70;
        int64_t var_60;
        int64_t var_30_1 = var_60;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hd0be2e25e316a3f1(arg2 + 0x30, &var_58);
        arg1[1] = 0;
        rax = nullptr;
    }
    else
    {
        rax = uu_env::parse_program_opt::h5dc288b3b7b61775(arg2, arg3, arg4);
        
        if (!rax)
        {
            arg1[1] = 1;
            rax = nullptr;
        }
        else
            arg1[1] = &data_548840;
    }
    
    *arg1 = rax;
    return core::ptr::drop_in_place$LT$uu_env..native_int_str..NativeStr$GT$::hef710a318dedb98d(
        &var_a0);
}
