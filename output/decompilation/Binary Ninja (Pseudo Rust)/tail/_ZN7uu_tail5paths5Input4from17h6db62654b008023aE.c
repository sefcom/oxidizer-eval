
  fn uu_tail::paths::Input::from::h6db62654b008023a(arg1: *mut i128, arg2: *mut c_void) -> *mut i128

{
    let mut rax: i64;
    let mut rdx: u64;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h82be18048d2a1ec1(arg2);
    let mut var_30: i64;
    _$LT$uu_tail..paths..InputKind$u20$as$u20$core..convert..From$LT$$RF$std..ffi..os_str..OsStr$GT$$GT$::from::h609f399a6d164aba(&var_30, rax, rdx);
    let mut var_48: i128;
    let mut var_38: u64;
    let mut var_60: i128;
    let var_50: u64;
    
    if var_30 != -0x8000000000000000
    {
        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_60, rax, rdx);
        let var_58: i64;
        _$LT$alloc..borrow..Cow$LT$str$GT$$u20$as$u20$alloc..string..ToString$GT$::to_string::ha2cb0370e40ab073(&var_48, var_58, var_50);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h890545819f3c5be0(&var_60);
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(&var_60, 
            "standard input/dev/stdin/dev/fd/…", 0xe);
        var_38 = var_50;
        var_48 = var_60;
    }
    let var_20: i64;
    *arg1.byte_offset(0x28) = var_20;
    *arg1.byte_offset(0x18) = var_30;
    *arg1 = var_48;
    arg1[1] = var_38;
    arg1
}
