
  int128_t* uu_mv::mv::h15eff797ddd7e01a(void* arg1, int64_t arg2, void* arg3)

{
    void var_60;
    uu_mv::parse_paths::hd84bd62365a1b7cc(&var_60, arg1, arg2, *(arg3 + 0x32));
    int128_t* result;
    void* var_58;
    int64_t var_50;
    
    if (*(arg3 + 0x18) != -0x8000000000000000)
    {
        int128_t var_30;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_30, *(arg3 + 0x20), 
            *(arg3 + 0x28));
        uint64_t var_20;
        uint64_t var_38_1 = var_20;
        int128_t var_48 = var_30;
        result =
            uu_mv::move_files_into_dir::hea74a81b456dd214(var_58, var_50, *var_48[8], var_20, arg3);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(&var_48);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h6a57a393af247306(&var_60);
    }
    else
    {
        int128_t* result_1;
        int64_t rdx_2;
        
        if (var_50 != 2)
            result_1 = uu_mv::handle_multiple_paths::h86c7b11f84ad2502(var_58, var_50, arg3);
        else
            result_1 = uu_mv::handle_two_paths::hbd0a81168087f696(*(var_58 + 8), *(var_58 + 0x10), 
                *(var_58 + 0x20), *(var_58 + 0x28), arg3);
        result = result_1;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h6a57a393af247306(&var_60);
    }
    return result;
}
