
  fn uu_pwd::logical_path::h67df90d7519c7ea2(arg1: *mut i64) -> *mut i64

{
    let mut var_28: i64;
    std::env::var_os::hc2689bb17ea5a37c(&var_28, "PWD...0.0.28Display the full fil…");
    let mut var_40: i64;
    
    if var_28 != -0x8000000000000000
    {
        core::ops::function::FnOnce::call_once::hf39ea7a48d4b8f78(&var_40, &var_28);
        
        if var_40 == -0x8000000000000000
        {
            goto 'label_4a5be7;
        }
        
        let var_38: i64;
        let var_30: size_t;
        
        if uu_pwd::logical_path::looks_reasonable::h198aec699ed31598(var_38, var_30) == 0
        {
            goto 'label_4a5be7;
        }
        
        arg1[2] = var_30;
        *arg1 = var_40;
    }
    else
    {
        var_40 = -0x8000000000000000;
        'label_4a5be7:
        std::env::current_dir::h8e5fbaefdf378c8c(arg1);
        
        if var_40 != -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h5f81ac5c3a3e7dd1(&var_40);
        }
    }
    arg1
}
