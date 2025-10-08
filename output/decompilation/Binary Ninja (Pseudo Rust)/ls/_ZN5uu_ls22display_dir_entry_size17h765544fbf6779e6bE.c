
  fn uu_ls::display_dir_entry_size::h765544fbf6779e6b(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void, arg4: *mut c_void) -> *mut c_void

{
    let result: *mut c_void = uu_ls::PathData::get_metadata::h14c40f15e3077b4f(arg2, arg4);
    
    if result == 0
    {
        __builtin_memset(arg1, 0, 0x30);
        return result;
    }
    
    let mut var_60: i64;
    uu_ls::display_len_or_rdev::h54f0966b5b04a08a(&var_60, result, *arg3.byte_offset(0xd0), 
        *arg3.byte_offset(0xf9));
    let mut var_78_1: i64;
    let mut var_70_1: i64;
    let mut var_68_1: i64;
    let var_50: i64;
    let mut var_48: i64;
    
    if !(0 + -(var_60))
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_48);
        let var_38: i64;
        var_68_1 = var_38;
        var_70_1 = var_50;
        var_78_1 = var_38 + 2 + var_50;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_60);
    }
    else
    {
        var_78_1 = var_48;
        let mut var_58: ();
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_58);
        var_68_1 = 0;
        var_70_1 = 0;
    }
    uu_ls::display_symlink_count::h2fe71a64427ba274(&var_60, *result.byte_offset(0x30));
    let rbp_2: i8 = *arg3.byte_offset(0xeb);
    let r12_1: i64 =
        *uu_ls::display_uname::h7c414fef392325b1(*result.byte_offset(0x3c), rbp_2, arg4).
        byte_offset(0x10);
    let rax_5: i64 =
        *uu_ls::display_group::h274df09bb9587751(*result.byte_offset(0x40), rbp_2, arg4).
        byte_offset(0x10);
    *arg1 = var_50;
    arg1[1] = r12_1;
    arg1[2] = rax_5;
    arg1[3] = var_78_1;
    arg1[4] = var_70_1;
    arg1[5] = var_68_1;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hfc5b24fb008ea041(&var_60)
}
