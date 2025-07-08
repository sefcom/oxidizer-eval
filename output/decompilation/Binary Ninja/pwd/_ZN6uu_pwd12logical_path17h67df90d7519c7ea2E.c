
  int64_t* uu_pwd::logical_path::h67df90d7519c7ea2(int64_t* arg1)

{
    int64_t var_28;
    std::env::var_os::hc2689bb17ea5a37c(&var_28, "PWD...0.0.28Display the full fil…");
    int64_t var_40;
    
    if (var_28 != -0x8000000000000000)
    {
        core::ops::function::FnOnce::call_once::hf39ea7a48d4b8f78(&var_40, &var_28);
        
        if (var_40 == -0x8000000000000000)
            goto label_4a5be7;
        
        int64_t var_38;
        size_t var_30;
        
        if (!uu_pwd::logical_path::looks_reasonable::h198aec699ed31598(var_38, var_30))
            goto label_4a5be7;
        
        arg1[2] = var_30;
        *arg1 = var_40;
    }
    else
    {
        var_40 = -0x8000000000000000;
        label_4a5be7:
        std::env::current_dir::h8e5fbaefdf378c8c(arg1);
        
        if (var_40 != -0x8000000000000000)
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h5f81ac5c3a3e7dd1(&var_40);
    }
    return arg1;
}
