
  int128_t* uu_split::filter_args::hc9c131d0e8e2f9ae(int128_t* arg1, int128_t* arg2, int64_t* arg3, char* arg4, char* arg5)

{
    size_t var_68;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_68, *(arg2 + 8), arg2[1]);
    
    if (!var_68)
    {
        char* var_60;
        size_t var_58;
        
        if (!uu_split::should_extract_obs_lines::h45a9ca9df26354c5(var_60, var_58, *arg4, *arg5))
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_68, var_60, var_58);
        else
            uu_split::handle_extract_obs_lines::hd759134314187d0a(&var_68, var_60, var_58, arg3);
        
        int128_t zmm0_1 = var_68;
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
    
    return arg1;
}
