
  fn uu_mktemp::exec::heedcd9fa9b859fdd(arg1: *mut i128, arg2: i64, arg3: u64, arg4: i64, arg5: i64, arg6: i8) -> *mut i128

{
    let mut var_68: i64;
    let rcx: i64;
    let r8: i64;
    let r9: u64;
    
    if arg6 == 0
    {
        uu_mktemp::make_temp_file::hb72bef91cb9e45f4(&var_68, arg2, arg3, rcx, r8, r9, arg4, arg5);
    }
    else
    {
        uu_mktemp::make_temp_dir::h6dfece6cf0e8d640(&var_68, arg2, arg3, rcx, r8, r9, arg4, arg5);
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
        rax_2 = std::path::Path::file_name::h6d40d88bf3fb287a(var_60, var_58);
        
        if rax_2 != 0
        {
            core::str::converts::from_utf8::h8a6dc80f786921e0(&var_68, rax_2, rdx_2);
        }
        
        if rax_2 == 0 || var_68 == 1
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        let mut var_38: i128;
        std::path::Path::join::h54ca0a2412d4ea69(&var_38, arg2, arg3, var_60);
        let var_28: i64;
        arg1[1] = var_28;
        *arg1 = var_38;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h4af838b51e1cae1b(&var_50);
    }
    else
    {
        *arg1.byte_offset(8) = var_60;
        arg1[1] = var_58;
        *arg1 = -0x8000000000000000;
    }
    arg1
}
