long long fish::exec::handle_builtin_output(unsigned long long a0, unsigned long long a1, unsigned int *a2, unsigned long long a3[3], unsigned long long a4[4], unsigned long long a5[4])
{
    unsigned long long v0;  // [bp-0xa8]
    char v1;  // [bp-0x90]
    unsigned long v2;  // [bp-0x80]
    char v3;  // [bp-0x78]
    unsigned long v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    uint128_t v8;  // [bp-0x48]
    void* v10;  // rbp
    void* v11;  // rdx
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rsi

    if (*(a2) != 1)
    {
        v5 = &g_14d7c50;
        v6 = 1;
        v7 = 8;
        v8 = 0;
        core::panicking::panic_fmt(&v5, &g_14d7c60); /* do not return */
    }
    v10 = 0;
    v11 = 0;
    if ((unsigned int)a4[0] == 2)
        v11 = a4[3];
    v12 = 4;
    v13 = 4;
    if (a4[0] == 2)
        v13 = a4[2];
    fish::common::wcs2osstring(&v1, v13, v11);
    if ((unsigned int)a5[0] == 2)
        v10 = a5[3];
    if (a5[0] == 2)
        v12 = a5[2];
    fish::common::wcs2osstring(&v3, v12, v10);
    if (v2)
    {
        v5 = std::io::stdio::stdout();
        v0 = v5.flush();
        core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v0);
    }
    if (!v4)
        return fish::exec::run_internal_process_or_short_circuit(a0, a1, a2, &v1, &v3, a3);
    v5 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
    v0 = v5.flush();
    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v0);
    return fish::exec::run_internal_process_or_short_circuit(a0, a1, a2, &v1, &v3, a3);
}
