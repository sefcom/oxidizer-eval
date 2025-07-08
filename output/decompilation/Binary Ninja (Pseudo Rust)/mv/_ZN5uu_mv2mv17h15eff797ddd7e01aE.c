
  fn uu_mv::mv::h15eff797ddd7e01a(arg1: *mut c_void, arg2: i64, arg3: *mut c_void) -> *mut i128

{
    let mut var_60: ();
    uu_mv::parse_paths::hd84bd62365a1b7cc(&var_60, arg1, arg2, *arg3.byte_offset(0x32));
    let mut result: *mut i128;
    let var_58: *mut c_void;
    let var_50: i64;
    
    if *arg3.byte_offset(0x18) != -0x8000000000000000
    {
        let mut var_30: i128;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_30, 
            *arg3.byte_offset(0x20), *arg3.byte_offset(0x28));
        let var_20: u64;
        let var_38_1: u64 = var_20;
        let mut var_48: i128 = var_30;
        result =
            uu_mv::move_files_into_dir::hea74a81b456dd214(var_58, var_50, *var_48[8], var_20, arg3);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(&var_48);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h6a57a393af247306(&var_60);
    }
    else
    {
        let mut result_1: *mut i128;
        let mut rdx_2: i64;
        
        if var_50 != 2
        {
            result_1 = uu_mv::handle_multiple_paths::h86c7b11f84ad2502(var_58, var_50, arg3);
        }
        else
        {
            result_1 = uu_mv::handle_two_paths::hbd0a81168087f696(*var_58.byte_offset(8), 
                *var_58.byte_offset(0x10), *var_58.byte_offset(0x20), *var_58.byte_offset(0x28), 
                arg3);
        }
        result = result_1;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h6a57a393af247306(&var_60);
    }
    result
}
