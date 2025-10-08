
  fn fd::dir_entry::DirEntry::style::hc7d1f63435441946(arg1: *mut c_void, arg2: *mut c_void) -> *mut c_void

{
    let rax: i64;
    let var_18: i64 = rax;
    core::cell::once::OnceCell$LT$T$GT$::get_or_try_init::hb581f8aa1c0b3c00(
        arg1.byte_offset(0x120), arg2, arg1);
    
    if *arg1.byte_offset(0x120) != 2
    {
        return arg1.byte_offset(0x120);
    }
    
    nullptr
}
