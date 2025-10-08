
  fn fd::set_working_dir::h861a2d37c6d30c19(arg1: *mut c_void)

{
    if !(0 + -(*arg1.byte_offset(0x180)))
    {
        let r14_1: *mut i8 = *arg1.byte_offset(0x188);
        let rbx_1: u64 = *arg1.byte_offset(0x190);
        
        if fd::filesystem::is_existing_directory::h6c4a6eed8c6886fc(r14_1, rbx_1) != 0
        {
            /* tailcall */
            return anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::with_context::hdf0967c826a78696(std::env::set_current_dir::hdd64ecf3ba7d462d(arg1.byte_offset(0x180)), r14_1, 
                rbx_1);
        }
        
        let mut var_48: ();
        let rdx_4: u64 =
            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_48, r14_1, rbx_1);
        let mut var_88: *mut c_void = &var_48;
        let var_80_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h339b4df17109b8de;
        let mut var_78: *mut *mut [i8; 0x114] = &data_802828;
        let var_70_1: i64 = 2;
        let var_58_1: i64 = 0;
        let var_68_1: *mut *mut c_void = &var_88;
        let var_60_1: i64 = 1;
        let mut var_30: ();
        core::option::Option$LT$T$GT$::map_or_else::h1f7ab50fdd345844(&var_30, 0, rdx_4, &var_78);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h20faf5157999b1c6(&var_48);
        anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::h06348eb8850c741d(&var_30);
    }
}
