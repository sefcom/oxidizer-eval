long long fish::common::do_write_to_output(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    v0 = a0;
    (unsigned int)core::fmt::write(&v0, &g_14bfc68, a1).unwrap(&g_14c0f20);
    return v0;
}
