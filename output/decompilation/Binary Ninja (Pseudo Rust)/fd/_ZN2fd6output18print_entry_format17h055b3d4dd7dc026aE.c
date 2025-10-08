
  fn fd::output::print_entry_format::h055b3d4dd7dc026a(arg1: i64, arg2: *mut i32, arg3: *mut c_void, arg4: *mut i32) -> i64

{
    let mut rax_1: i64;
    let mut rdx: i64;
    rax_1 =
        fd::dir_entry::DirEntry::stripped_path::h8d7ea7decf4ce9bf(arg2, *arg3.byte_offset(0x1e7));
    let mut r8: i64 = 0;
    
    if !(0 + -(*arg3.byte_offset(0x168)))
    {
        r8 = *arg3.byte_offset(0x170);
    }
    
    let mut var_88: i64;
    fd::fmt::FormatTemplate::generate::hfff854f5585a67ff(&var_88, arg4, rax_1, rdx, r8, 
        *arg3.byte_offset(0x178));
    let var_80: i64;
    let var_78: i64;
    let mut var_30: ();
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_30, var_80, var_78);
    let mut var_70: *mut c_void = &var_30;
    let var_68: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h339b4df17109b8de;
    let mut var_60: *const i8 = &data_470810;
    let var_58: i64 = 1;
    let var_40: i64 = 0;
    let var_50: *mut *mut c_void = &var_70;
    let var_48: i64 = 1;
    let result: i64 = std::io::Write::write_fmt::h323bfdffb85eb317(arg1, &var_60);
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h7308b79749514aee(var_88, var_80);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h20faf5157999b1c6(&var_30);
    result
}
