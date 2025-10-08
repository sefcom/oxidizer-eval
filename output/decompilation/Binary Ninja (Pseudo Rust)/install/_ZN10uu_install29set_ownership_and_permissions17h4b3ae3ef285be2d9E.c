
  fn uu_install::set_ownership_and_permissions::h4b3ae3ef285be2d9(arg1: i64, arg2: u64, arg3: *mut c_void) -> u64

{
    if *arg3.byte_offset(0x48) != 0
    {
        *arg3.byte_offset(0x4c);
    }
    
    if uu_install::mode::chmod::hdfca6c9c8a923e56(arg1, arg2) == 0
    {
        return uu_install::chown_optional_user_group::h803ff07f1543e95d(arg1, arg2, arg3);
    }
    
    let mut var_50: ();
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_50, arg1, arg2);
    let mut var_58: i64 = 3;
    alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_58)
}
