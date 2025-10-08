
  fn fd::dir_entry::DirEntry::metadata::hb1432c4a87d609c2(arg1: *mut i32) -> *mut c_void

{
    let rax: i64;
    let var_18: i64 = rax;
    core::cell::once::OnceCell$LT$T$GT$::get_or_try_init::h1591abbcc7351851(&arg1[0x1c], arg1);
    
    if arg1[0x1c] != 2
    {
        return &arg1[0x1c];
    }
    
    nullptr
}
