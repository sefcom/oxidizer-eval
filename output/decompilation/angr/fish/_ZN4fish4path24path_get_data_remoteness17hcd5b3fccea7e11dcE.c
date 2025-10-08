long long fish::path::path_get_data_remoteness()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return *((char *)(fish::path::get_data_directory() + 29));
}
