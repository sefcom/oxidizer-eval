long long uu_date::set_system_datetime::h5afa3b625d2799eb(unsigned int a0[3])
{
    unsigned long long v0;  // [sp-0x40]
    unsigned long long *v1;  // [sp-0x38]
    unsigned long long v2;  // [sp-0x30]
    unsigned long long v3;  // [sp-0x28]
    unsigned long v4;  // [sp-0x20], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x18]
    unsigned int v7;  // eax
    unsigned long v8;  // rsi
    unsigned long long v9;  // rdx
    void* v10;  // rcx
    unsigned int v11;  // ecx
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rsi
    uint128_t v14[2];  // rbx
    unsigned long long *v16;  // rax
    int v17;  // xmm0

    v7 = a0[0];
    v8 = v7 >> 13;
    v9 = v8 - 1 & 4294967295;
    v10 = 0;
    if ((unsigned int)v8 <= 0)
    {
        v11 = (unsigned int)((1 - v8 & 4294967295) / 400) + 1;
        v9 = v9 + v11 * 400 & 4294967295;
        v10 = v11 * -146097;
    }
    v12 = v9 & 4294967295;
    v13 = v12 * 1374389535;
    v4 = ((unsigned int)(((((v7 >> 4 & 511) + v10 & 4294967295) - ((v13 >> 37) + (v13 >> 63) & 4294967295) & 4294967295) + ((unsigned int)v12 * 1461 >> 2) & 4294967295) + (((v13 >> 37) + (v13 >> 63) & 4294967295 & 4294967295) >> 2 & 4294967295)) - 719163) * 86400 + a0[1];
    v5 = a0[2];
    if (!clock_settime(0, &v4, (unsigned int)v12 * 1461 >> 2, a0[1], v13 >> 63))
        return 0;
    v16 = __rust_alloc(15, 1);
    if (!v16)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    *((long long *)((char *)v16 + 7)) = 7310575177798280563;
    *(v16) = 8295758535559373155;
    v0 = 15;
    v1 = v16;
    v2 = 15;
    v3 = (unsigned int)std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() * 0x100000000 | 2;
    v14 = __rust_alloc(32, 8);
    if (v14)
    {
        v17 = *((int128_t *)&v0);
        v14[1] = *((int128_t *)&v2);
        *((void*)&v14[0]) = v17;
        return v14;
    }
    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
}
