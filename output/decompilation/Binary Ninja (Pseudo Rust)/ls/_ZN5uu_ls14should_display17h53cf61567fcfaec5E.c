
  fn uu_ls::should_display::h53cf61567fcfaec5(arg1: *mut c_void, arg2: *mut c_void) -> u64

{
    let mut rax_1: i8;
    
    if *arg2.byte_offset(0xf8) == 2
    {
        rax_1 = uu_ls::is_hidden::h56276072d631ca64(arg1);
    }
    
    let mut rbp: i32;
    
    if *arg2.byte_offset(0xf8) != 2 || rax_1 == 0
    {
        let mut var_83: i16 = 1;
        let var_81_1: i8 = 1;
        let mut var_38: u64;
        std::fs::DirEntry::file_name::h6946eae0b92783e6(&var_38, arg1);
        let mut var_80: i32;
        let var_30: *mut i8;
        let var_28: u64;
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_80, var_30, var_28);
        let mut zmm0_1: i128;
        let var_70: u64;
        let mut var_58_1: u64;
        
        if var_80 != 1
        {
            let var_78: i64;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_80, var_78, var_70);
            var_58_1 = var_70;
            zmm0_1 = var_80;
        }
        else
        {
            let mut var_50: i64;
            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_50, var_30, var_28);
            let var_40: u64;
            
            if !(0 + -(var_50))
            {
                let var_58_2: u64 = var_40;
                zmm0_1 = var_50;
            }
            else
            {
                let var_48: i64;
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_80, var_48, var_40);
                var_58_1 = var_70;
                zmm0_1 = var_80;
            }
        }
        let mut var_68: i128 = zmm0_1;
        let rcx_1: i64 = *arg2.byte_offset(8);
        var_80 = rcx_1;
        let var_78_1: i64 = *arg2.byte_offset(0x10) * 0x38 + rcx_1;
        let rax_6: i32 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h753ac60a44d20d1f(&var_80, &var_68, &var_83);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_68);
        rbp = rax_6 ^ 1;
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(var_38, 
            var_30);
    }
    else
    {
        rbp = 0;
    }
    
    rbp
}
