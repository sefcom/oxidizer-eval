
  fn fd::dir_entry::DirEntry::into_stripped_path::hf6442f166321ae2e(arg1: *mut i128, arg2: *mut i32, arg3: i8) -> i64

{
    if (arg3 & 1) == 0
    {
        /* tailcall */
        return fd::dir_entry::DirEntry::into_path::h5b05848c102c5466(arg1, arg2);
    }
    
    let mut rax_1: i64;
    let mut rdx: u64;
    rax_1 = fd::dir_entry::DirEntry::stripped_path::h8d7ea7decf4ce9bf(arg2, arg3);
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(arg1, rax_1, rdx);
    /* tailcall */
    core::ptr::drop_in_place$LT$fd..dir_entry..DirEntry$GT$::h394f0ee2b950b509(arg2)
}
