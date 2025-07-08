
  fn uu_split::filter_args::hc9c131d0e8e2f9ae(arg1: *mut i128, arg2: *mut i128, arg3: *mut i64, arg4: *mut i8, arg5: *mut i8) -> *mut i128

{
    let mut var_68: size_t;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_68, *arg2.byte_offset(8), arg2[1]);
    
    if var_68 == 0
    {
        let var_60: *mut i8;
        let var_58: size_t;
        
        if uu_split::should_extract_obs_lines::h45a9ca9df26354c5(var_60, var_58, *arg4, *arg5) == 0
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_68, var_60, var_58);
        }
        else
        {
            uu_split::handle_extract_obs_lines::hd759134314187d0a(&var_68, var_60, var_58, arg3);
        }
        
        let zmm0_1: i128 = var_68;
        uu_split::handle_preceding_options::ha9316461586fd0f7(var_60, var_58, arg4, arg5);
        arg1[1] = var_58;
        *arg1 = zmm0_1;
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h0758cff7b902e55a(arg2);
    }
    else
    {
        arg1[1] = arg2[1];
        *arg1 = *arg2;
    }
    
    arg1
}
