long long uu_wc::utf8::Incomplete::new(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned long v3;  // rax
    unsigned long long v5;  // rdx

    v0 = v3;
    v1 = 0;
    core::slice::<impl [T]>::copy_from_slice(a1.index_mut(&v1, 4, &g_4f8f70), v5, a0, a1, &g_4f8f88);
    return a1 * 0x100000000;
}
