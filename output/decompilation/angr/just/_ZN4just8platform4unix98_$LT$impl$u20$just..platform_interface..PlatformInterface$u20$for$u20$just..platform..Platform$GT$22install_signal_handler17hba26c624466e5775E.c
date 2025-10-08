double just::platform::unix::<impl just::platform_interface::PlatformInterface for just::platform::Platform>::install_signal_handler(long long a0)
{
    char v0;  // [bp-0xf8], Other Possible Types: unsigned long long
    int v1;  // [bp-0xf0]
    void* v2;  // [bp-0xe0], Other Possible Types: char
    unsigned short v3;  // [bp-0xdf]
    char v4;  // [bp-0xdd]
    unsigned int v5;  // [bp-0xdc]
    char v6;  // [bp-0xd8]
    unsigned long long v7;  // [bp-0xd0]
    int v8;  // [bp-0xc8]
    char v9;  // [bp-0xb8]
    int v10;  // [bp-0xa8]
    int v11;  // [bp-0x98]
    int v12;  // [bp-0x88]
    int v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x68]
    unsigned long long v15;  // [bp-0x58]
    int v16;  // [bp-0x50]
    int v17;  // [bp-0x40], Other Possible Types: char
    char v18;  // [bp-0x30]
    char v20;  // al
    unsigned long long v21;  // rax
    int v22;  // xmm0

    v2.new();
    v20 = v2;
    if (v20 != 56)
    {
        *((char *)&a0[3]) = v4;
        *((unsigned short *)&a0[1]) = v3;
        a0[24] = v8;
        *((int128_t *)&a0[40]) = *((int128_t *)&v9);
        a0[56] = v10;
        a0[72] = v11;
        a0[88] = v12;
        v22 = *((int128_t *)&v6);
        a0[8] = v22;
        *((char *)a0) = v20;
        *((unsigned int *)&a0[4]) = v5;
        return (unsigned long long)v22;
    }
    v7 = 0x8000000000000000;
    v2 = 0;
    v9 = 0;
    v17.to_vec("signal handlerwarning: I/O error reading from signal pipe: src/positional.rssrc/ran.rsRun recipe ``? ", 14);
    v14 = *((long long *)&v18);
    v13 = v17;
    v17.name(&v2, &v13);
    v0.spawn_unchecked(&v17, v5);
    if (!v0)
    {
        v21 = (long long)v1;
        *((char *)a0) = 47;
        *((unsigned long long *)&a0[8]) = v21;
        return (unsigned long long)v17;
    }
    v16 = v1;
    v15 = v0;
    core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v15);
    *((char *)a0) = 56;
    return (unsigned long long)v1;
}
