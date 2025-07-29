long long uu_mktemp::dry_exec(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long a7)
{
    unsigned long long v0;  // [bp-0xb8]
    void* v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    char v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x58]
    char v6;  // [bp-0x48]
    unsigned long long v7;  // r13
    unsigned long long v8;  // rdx
    unsigned long long v9;  // r12
    char *v10;  // rax
    char v11;  // cl
    unsigned int v12;  // edx
    char v13;  // dl
    char v14;  // cl

    v7 = a5 + a4;
    v0 = v7 + a7.with_capacity_in(&g_58cc18);
    v1 = 0;
    v0.spec_extend(a3, a3 + a4, &g_58cc30);
    v0.spec_extend(a5, 88, &g_58cc48);
    v0.spec_extend(a6, a7 + a6, &g_58cc60);
    v9 = a4.index_mut(v7, v8, v1);
    v2 = rand::rngs::thread::rng();
    v2 + 16.fill_bytes(v9, v8);
    core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v2);
    v2 = v9;
    v3 = v9 + v8;
    if (v2.next())
    {
        do
        {
            v11 = *(v10);
            v12 = (v11 >> 1) * 133 >> 12;
            v13 = v12 * 64 - v12 * 2;
            v14 = v11 - v13;
            *((int *)&v10) = ((v11 - v13 & 255) < 10 ? v14 | 48 : (v14 < 36 ? v14 + 87 : v14 + 29));
            v10 = v2.next();
        } while (v10);
    }
    v5 = v1;
    memcpy(&v4, &v0, 16);
    v2.from_utf8(&v4);
    v6.unwrap(&v2);
    a0.join(a1, a2, &v6);
    return a0;
}
