fn fd::dir_entry::DirEntry::stripped_path(a0: void*, a1: u8) -> long long {
    let v1: u64;  // rax
    let v2: u64;  // rdx

    v1 = fd::dir_entry::DirEntry::path(a0);
    if (a1 & 1) {
        return fd::filesystem::strip_current_dir(v1, v2);
    }
    return v1;
}
