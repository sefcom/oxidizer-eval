
  fn uu_env::apply_removal_of_all_env_vars::hcf5609ccad6c2606(arg1: *mut c_void)

{
    if *arg1.byte_offset(0x98) != 0
    {
        let mut var_70: ();
        std::env::vars_os::h6ed78a19f7e42380(&var_70);
        let mut var_50: i64;
        
        loop
        {
            _$LT$std..env..VarsOs$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc133e396fa1f6a35(&var_50, &var_70);
            
            if 0 + -(var_50)
            {
                break;
            }
            
            std::env::remove_var::hcbe09fb2ee109f33(&var_50);
            core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$std..ffi..os_str..OsString$C$std..ffi..os_str..OsString$RP$$GT$$GT$::hcd7799ae0817c909(&var_50);
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$std..ffi..os_str..OsString$C$std..ffi..os_str..OsString$RP$$GT$$GT$::hcd7799ae0817c909(&var_50);
        core::ptr::drop_in_place$LT$std..env..VarsOs$GT$::h70cc386ae3046452(&var_70);
    }
}
