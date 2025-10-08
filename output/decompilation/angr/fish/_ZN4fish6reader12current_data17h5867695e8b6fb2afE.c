long long fish::reader::current_data()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    fish::reader::reader_data_stack();
    if (!g_15a90b0)
        return 0;
    return *((long long *)(g_15a90a8 + g_15a90b0 * 8 - 8));
}
