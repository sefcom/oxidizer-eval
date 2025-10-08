
  int64_t fd::dir_entry::DirEntry::into_stripped_path::hf6442f166321ae2e(int128_t* arg1, int32_t* arg2, char arg3)

{
    if (!(arg3 & 1))
        /* tailcall */
        return fd::dir_entry::DirEntry::into_path::h5b05848c102c5466(arg1, arg2);
    
    int64_t rax_1;
    uint64_t rdx;
    rax_1 = fd::dir_entry::DirEntry::stripped_path::h8d7ea7decf4ce9bf(arg2, arg3);
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(arg1, rax_1, rdx);
    /* tailcall */
    return core::ptr::drop_in_place$LT$fd..dir_entry..DirEntry$GT$::h394f0ee2b950b509(arg2);
}
