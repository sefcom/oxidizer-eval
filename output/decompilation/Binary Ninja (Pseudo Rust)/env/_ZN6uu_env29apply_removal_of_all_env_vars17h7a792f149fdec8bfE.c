
  fn uu_env::apply_removal_of_all_env_vars::h7a792f149fdec8bf(arg1: *mut c_void)

{
    if *arg1.byte_offset(0x98) != 0
    {
        let mut var_70: ();
        std::env::vars_os::h5a40cbb6c0e7369c(&var_70);
        let mut var_50: i64;
        
        loop
        {
            _$LT$std..env..VarsOs$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9e7e14bfb37fce37(&var_50, &var_70);
            
            if var_50 == -0x8000000000000000
            {
                break;
            }
            
            std::env::remove_var::h8bf786824f32bc6e(&var_50);
            core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$std..ffi..os_str..OsString$C$std..ffi..os_str..OsString$RP$$GT$$GT$::h51bca49ba82cc3a5(&var_50);
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$std..ffi..os_str..OsString$C$std..ffi..os_str..OsString$RP$$GT$$GT$::h51bca49ba82cc3a5(&var_50);
        core::ptr::drop_in_place$LT$std..env..VarsOs$GT$::h6ba13bc04ee97109(&var_70);
    }
}
