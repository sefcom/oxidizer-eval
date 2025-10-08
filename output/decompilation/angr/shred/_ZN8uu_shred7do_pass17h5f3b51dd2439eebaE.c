int uu_shred::do_pass()
{
    char v0;  // [bp-0x10178]
    void* v1;  // [bp-0x2028]
    unsigned long long v3;  // rdi
    unsigned long long v4;  // rsi
    char v5;  // dl
    unsigned long v6;  // rcx
    unsigned long long v7;  // r14
    unsigned long long v8;  // r12
    unsigned long long v9;  // r12
    int v11;  // [bp-0x10028]

    do
    {
        v1 = 0;
    } while (&v1 != &v11);
    if (v3.rewind())
        return;
    v0.from_pass_type(v4);
    if (!v5)
        v7 = (((unsigned int)v6 & 4095)) * 0x1000 + v6 & 0xfffffffffffff000;
    v8 = (v7 >> 16) + 1;
    while (true)
    {
        v9 = v8 - 1;
        if (v8 == 1)
            break;
        v8 = v9;
        if (v3.write_all(v0.bytes_for_pass(0x10000), rdx<8>))
            return;
    }
    if (v3.write_all(v0.bytes_for_pass(v7 & 4294967295), rdx<8>))
        return;
    v3.sync_data();
    return;
}
