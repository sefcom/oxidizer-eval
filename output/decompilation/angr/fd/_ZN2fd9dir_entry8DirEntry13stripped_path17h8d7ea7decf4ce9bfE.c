long long fd::dir_entry::DirEntry::stripped_path(void* a0, char a1)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdx

    v1 = a0.path();
    if (!(a1 & 1))
        return v1;
    return fd::filesystem::strip_current_dir(v1, v2);
}
