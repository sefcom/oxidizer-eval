
  uint64_t uu_ln::simple_backup_path::hd90ca54508e22200(int128_t* arg1, char* arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t var_50;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_50, arg2, arg3);
    
    if (var_50)
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    int64_t var_48;
    uint64_t result;
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hfc9b5b21d7faec10(&var_50, 
        var_48, result);
    int128_t var_38 = var_50;
    int64_t rax_1;
    uint64_t rdx_1;
    rax_1 = core::slice::iter::Iter$LT$T$GT$::make_slice::ha8b4fec3fb47d555(arg4, arg5 + arg4);
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h4be0e8df4d8349af(&var_38, rax_1, rdx_1);
    arg1[1] = result;
    *arg1 = var_38;
    return result;
}
