char fish::history::file::should_mmap()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return (char)fish::path::path_get_data_remoteness() != 2;
}
