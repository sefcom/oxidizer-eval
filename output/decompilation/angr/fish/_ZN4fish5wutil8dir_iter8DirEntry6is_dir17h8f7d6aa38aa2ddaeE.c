char fish::wutil::dir_iter::DirEntry::is_dir(void* a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return (char)a0.check_type() == 3;
}
