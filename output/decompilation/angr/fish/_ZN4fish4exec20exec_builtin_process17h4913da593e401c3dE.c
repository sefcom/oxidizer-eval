long long fish::exec::exec_builtin_process(unsigned long long a0, void* a1, unsigned int a2[44], unsigned long long a3[3], char a4)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    uint128_t v3;  // [bp-0x60]
    char v4;  // [bp-0x48]
    unsigned int v6;  // ebp
    unsigned int v7;  // edx

    if (a2[0] != 1)
    {
        v0 = &g_14d7c50;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14d7e70); /* do not return */
    }
    v6 = a4;
    fish::exec::create_output_stream_for_builtin(&v4, 1, a3, v6);
    fish::exec::create_output_stream_for_builtin(&v0, 2, a3, v6);
    a2[42] = fish::exec::get_performer_for_builtin(a2, a1, a3[1], a3[2]).call_once(&g_14d7e08, a0, &v4, &v0);
    a2[43] = v7;
    fish::exec::handle_builtin_output(a0, a1, a2, a3, &v4, &v0);
    core::ptr::drop_in_place<fish::io::OutputStream>(&v0);
    return core::ptr::drop_in_place<fish::io::OutputStream>(&v4);
}
