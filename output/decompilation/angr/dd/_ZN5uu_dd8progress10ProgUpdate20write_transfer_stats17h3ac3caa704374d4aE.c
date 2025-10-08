long long uu_dd::progress::ProgUpdate::write_transfer_stats(void* a0, unsigned long long a1, unsigned int a2)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    uint128_t v3;  // [bp-0x28]
    unsigned long long v5;  // rax

    if (a2)
    {
        v0 = &g_53db30;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        v5 = a1.write_fmt(&v0);
        if (v5)
            return v5.from();
    }
    v5 = a0.write_io_lines(a1);
    if (!v5)
        return a0.write_prog_line(a1, 0);
    return v5.from();
}
