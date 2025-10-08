long long uu_dd::progress::ProgUpdate::reprint_prog_line(void* a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v4;  // rdx

    v0 = v2;
    v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
    a0.write_prog_line(&v0, 1).unwrap(v4, &g_53db58);
    return &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
}
