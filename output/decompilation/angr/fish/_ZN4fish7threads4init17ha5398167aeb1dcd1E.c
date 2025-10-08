void fish::threads::init()
{
    unsigned int v0;  // [bp-0x84]
    char v1;  // [bp-0x80], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v2;  // [bp-0x78]
    char *v3;  // [bp-0x70]
    char v4;  // [bp-0x68], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x60]
    unsigned int v6;  // [bp-0x50]
    char v7;  // [bp-0x4c]
    char v8;  // [bp-0x48]
    char *v9;  // [bp-0x30], Other Possible Types: unsigned long long
    char v10;  // [bp-0x28], Other Possible Types: unsigned long long
    char v11;  // [bp-0x18]
    unsigned long long v14;  // rbx

    v1.try_insert(std::thread::local::LocalKey<T>::with());
    v1.expect(v2);
    v0 = (unsigned int)__pthread_atfork();
    if (v0)
    {
        v6 = errno::errno();
        v9 = &v6;
        v10 = <errno::Errno as core::fmt::Display>::fmt;
        v1 = &g_14e2db8;
        v2 = 1;
        v3 = &v9;
        v4 = 1;
        v5 = 0;
        core::panicking::assert_failed(0, &v0, &g_550cf8, &v1, &g_14e2df8); /* do not return */
    }
    v14 = 1;
    v8.new(1, 0x400);
    v6 = 0;
    v7 = 0;
    v1.try_insert(&v6);
    if (v1)
    {
        memcpy(&v11, &v4, 16);
        memcpy(&v10, &v2, 16);
    }
    else
    {
        v14 = 0;
    }
    v9 = v14;
    v9.expect();
    return;
}
