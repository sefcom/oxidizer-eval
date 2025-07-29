long long uu_dd::progress::ProgUpdate::print_transfer_stats(void* a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v4;  // rdx

    v0 = v2;
    v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h1d60656d6130b3e8E;
    a0.write_transfer_stats(&v0, a1).unwrap(v4, &g_5df240);
    return &_ZN3std2io5stdio6stderr8INSTANCE17h1d60656d6130b3e8E;
}
