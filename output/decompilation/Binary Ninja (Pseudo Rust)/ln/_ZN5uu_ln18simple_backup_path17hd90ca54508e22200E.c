
  fn uu_ln::simple_backup_path::hd90ca54508e22200(arg1: *mut i128, arg2: *mut i8, arg3: i64, arg4: i64, arg5: i64) -> u64

{
    let mut var_50: i64;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_50, arg2, arg3);
    
    if var_50 != 0
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    let var_48: i64;
    let result: u64;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hfc9b5b21d7faec10(&var_50, 
        var_48, result);
    let mut var_38: i128 = var_50;
    let mut rax_1: i64;
    let mut rdx_1: u64;
    rax_1 = core::slice::iter::Iter$LT$T$GT$::make_slice::ha8b4fec3fb47d555(arg4, arg5 + arg4);
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h4be0e8df4d8349af(&var_38, rax_1, rdx_1);
    arg1[1] = result;
    *arg1 = var_38;
    result
}
