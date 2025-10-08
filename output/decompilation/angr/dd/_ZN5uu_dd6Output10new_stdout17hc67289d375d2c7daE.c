long long uu_dd::Output::new_stdout(void* a0, unsigned long long a1)
{
    char v0[4];  // [bp-0x30]
    unsigned int v1;  // [bp-0x2c]
    unsigned long long v2;  // [bp-0x28]
    char v3;  // [bp-0x20], Other Possible Types: unsigned long
    char v4;  // [bp-0x18]
    unsigned long long v6;  // r14
    unsigned long long v8;  // rdx

    v6 = a1;
    v2 = std::io::stdio::stdout();
    *(v0) = 0;
    v3.map_err_context((unsigned long long)v0.seek(), v8);
    if (v3)
    {
        v6 = *((long long *)&v4);
        *((unsigned long *)&a0[8]) = v3;
        *((char *)a0) = 4;
        core::ptr::drop_in_place<uu_dd::Dest>((char)v0, v1);
    }
    else
    {
        *((int128_t *)a0) = *((int128_t *)&v0);
    }
    *((unsigned long long *)&a0[16]) = v6;
    return a0;
}
