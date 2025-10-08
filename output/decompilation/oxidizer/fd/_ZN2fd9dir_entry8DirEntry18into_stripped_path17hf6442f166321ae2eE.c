fn fd::dir_entry::DirEntry::into_stripped_path(a0: u64, a1: u64, a2: u8) -> int {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax

    v0 = v2;
    if !(a2 & 1) {
        fd::dir_entry::DirEntry::into_path(a0, a1);
        return;
    }
    std::sys::pal::unix::os::split_paths::bytes_to_path(a0, fd::dir_entry::DirEntry::stripped_path(a1, a2));
    return;
}
