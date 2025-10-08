char fish::reader::reader_in_interactive_read()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    fish::reader::reader_data_stack();
    v0 = g_15a90a8;
    v1 = g_15a90a8 + g_15a90b0 * 8;
    return v0.try_rfold().eq(1);
}
