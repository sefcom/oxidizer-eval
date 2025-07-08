
  fn uu_mktemp::exec::h4964a5bb0e6c4200(arg1: *mut i128, arg2: i64, arg3: size_t, arg4: i64, arg5: i64, arg6: i8) -> *mut i128

{
    let mut var_68: i64;
    let rcx: i64;
    let r8: i64;
    let r9: u64;
    
    if arg6 == 0
    {
        uu_mktemp::make_temp_file::hfdb13d12b9e8c76a(&var_68, arg2, arg3, rcx, r8, r9, arg4, arg5);
    }
    else
    {
        uu_mktemp::make_temp_dir::h59267eff7d377883(&var_68, arg2, arg3, rcx, r8, r9, arg4, arg5);
    }
    let rax_1: i64 = var_68;
    let var_60: i64;
    let var_58: i64;
    
    if rax_1 != -0x8000000000000000
    {
        let mut var_50: i64 = rax_1;
        let var_48_1: i64 = var_60;
        let var_40_1: i64 = var_58;
        let mut rax_2: *mut i8;
        let mut rdx_2: i64;
        rax_2 = std::path::Path::file_name::h79ecbb7850a9c7f3(var_60, var_58);
        
        if rax_2 != 0
        {
            std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_68, rax_2, rdx_2);
        }
        
        if rax_2 == 0 || var_68 != 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        let mut var_38: i128;
        std::path::Path::join::hac25b276bfec4f36(&var_38, arg2, arg3, var_60);
        let var_28: i64;
        arg1[1] = var_28;
        *arg1 = var_38;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4(&var_50);
    }
    else
    {
        *arg1.byte_offset(8) = var_60;
        arg1[1] = var_58;
        *arg1 = -0x8000000000000000;
    }
    arg1
}
