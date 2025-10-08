
  fn zoxide::config::exclude_dirs::h9f1bdfa8604aa8e4(arg1: *mut i128) -> i64

{
    let mut var_68: i64;
    std::env::var_os::h745bce177e3d772b(&var_68, "_ZO_EXCLUDE_DI");
    let r14: i64 = var_68;
    let mut var_50: fn(arg1: *mut u64, arg2: i64, arg3: u64) -> *mut u64;
    
    if -(r14) == -0x8000000000000000
    {
        zoxide::config::exclude_dirs::_$u7b$$u7b$closure$u7d$$u7d$::h5139a1084dde13ae(&var_50);
        return core::iter::traits::iterator::Iterator::collect::hdd45a869f7636be8(arg1, &var_50);
    }
    
    var_50 = std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140;
    let var_60: i64;
    let var_48: i64 = var_60;
    let var_58: i64;
    let var_40: i64 = var_58;
    let var_38: fn(arg1: *mut i8) -> i64 =
        std::sys::pal::unix::os::split_paths::is_separator::hb66c58b70205f58d;
    let var_30: i8 = 0;
    core::iter::traits::iterator::Iterator::collect::hfa210c25162442da(arg1, &var_50);
    /* tailcall */
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h62f050d99d211acd(r14, var_60)
}
