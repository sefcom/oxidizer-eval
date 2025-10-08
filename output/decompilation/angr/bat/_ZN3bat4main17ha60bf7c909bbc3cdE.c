void bat::main()
{
    unsigned long long v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    char v2;  // [bp-0xa8]
    char v3;  // [bp-0xa7]
    int v4;  // [bp-0x98]
    int v5;  // [bp-0x88]
    char v6;  // [bp-0x78]
    int v7;  // [bp-0x68]
    char v8;  // [bp-0x58]
    int v9;  // [bp-0x48]
    int v10;  // [bp-0x38]
    char v11;  // [bp-0x28]
    int v12;  // [bp-0x18]
    unsigned long long v13;  // [bp-0x8]
    unsigned long long v15;  // rbx

    v13 = v15;
    bat::run(&v2);
    if (v2 != 13)
    {
        v12 = v7;
        memcpy(&v11, &v6, 16);
        v10 = v5;
        v9 = v4;
        memcpy(&v8, &v2, 16);
        v1 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
        v0 = v1.lock();
        bat::error::default_error_handler(&v8, &v0, &g_ac8b00);
        core::ptr::drop_in_place<std::io::stdio::StderrLock>(&v0);
        std::process::exit(1); /* do not return */
    }
    else if (v3)
    {
        std::process::exit(0); /* do not return */
    }
    else
    {
        std::process::exit(1); /* do not return */
    }
}
