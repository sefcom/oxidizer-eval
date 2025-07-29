int uu_shred::do_pass()
{
    unsigned long long v0;  // [bp-0x101a0]
    unsigned long long v1;  // [bp-0x10198]
    unsigned long long v2;  // [bp-0x10190]
    char v3;  // [bp-0x10188]
    void* v4;  // [bp-0x2030]
    unsigned long long v6;  // rdi
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rcx
    char v9;  // dl
    unsigned long v10;  // r8
    unsigned long long v11;  // r13
    void* v12;  // r12
    int v13;  // [bp-0x10030]

    do
    {
        v4 = 0;
    } while (&v4 != &v13);
    if (v6.rewind())
        return;
    v3.from_pass_type(v7, v8);
    if (!v9)
        v11 = (((unsigned int)v10 & 4095)) * 0x1000 + v10 & 0xfffffffffffff000;
    v2 = v11 & 4294967295;
    v12 = 0;
    while (v12 < v11 >> 16)
    {
        v0.bytes_for_pass(&v3, 0x10000);
        if (!v0)
            return;
        v12 = v12.forward_unchecked();
        if (v6.write_all(v0, v1))
            return;
    }
    v0.bytes_for_pass(&v3, v2);
    if (!v0)
    {
        return;
    }
    else if (v6.write_all(v0, v1))
    {
        return;
    }
    else if (v6.sync_data())
    {
        return;
    }
    else
    {
        return;
    }
}
