long long fd::dir_entry::DirEntry::into_stripped_path(void* a0, void* a1, char a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    if (!(a2 & 1))
        return a0.into_path(a1);
    std::sys::pal::unix::os::split_paths::bytes_to_path(a0, a1.stripped_path(a2), a2);
    return core::ptr::drop_in_place<fd::dir_entry::DirEntry>(a1);
}
