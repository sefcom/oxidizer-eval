
  fn uu_ls::should_display::h04a8ace30b4ea77e(arg1: *mut c_void, arg2: *mut c_void) -> u64

{
    let mut rax_1: i8;
    
    if *arg2.byte_offset(0xf0) == 2
    {
        rax_1 = uu_ls::is_hidden::he2cc02ae0ae5ae31(arg1);
    }
    
    let mut rbx_1: i32;
    
    if *arg2.byte_offset(0xf0) != 2 || rax_1 == 0
    {
        let mut var_83: i16 = 1;
        let var_81_1: i8 = 1;
        let mut var_30: ();
        std::fs::DirEntry::file_name::habdd235db90dd152(&var_30, arg1);
        let mut var_80: i64;
        let var_28: *mut i8;
        let var_20: size_t;
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_80, var_28, var_20);
        let mut zmm0_1: i128;
        let var_70: u64;
        let mut var_58_1: u64;
        
        if var_80 == 0
        {
            let var_78: i64;
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(
                &var_80, var_78, var_70);
            var_58_1 = var_70;
            zmm0_1 = var_80;
        }
        else
        {
            let mut var_48: i64;
            std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_48, var_28, 
                var_20);
            let var_38: u64;
            
            if var_48 != -0x8000000000000000
            {
                let var_58_2: u64 = var_38;
                zmm0_1 = var_48;
            }
            else
            {
                let var_40: i64;
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(
                    &var_80, var_40, var_38);
                var_58_1 = var_70;
                zmm0_1 = var_80;
            }
        }
        let mut var_68: i128 = zmm0_1;
        let rcx_1: i64 = *arg2.byte_offset(8);
        let rax_5: i64 = *arg2.byte_offset(0x10) * 0x38 + rcx_1;
        var_80 = rcx_1;
        let var_78_1: i64 = rax_5;
        let rax_6: i32 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::haa0a26cb84a32dff(&var_80, &var_68, &var_83);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_68);
        rbx_1 = rax_6 ^ 1;
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h51f173604a280fb6(&var_30);
    }
    else
    {
        rbx_1 = 0;
    }
    
    rbx_1
}
