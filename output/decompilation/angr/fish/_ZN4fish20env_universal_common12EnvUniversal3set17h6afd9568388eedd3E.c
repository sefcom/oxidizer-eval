long long fish::env_universal_common::EnvUniversal::set(struct_0 *a0, unsigned long long a1, unsigned long long a2, void* a3)
{
    int v0;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x78]
    void* v2;  // [bp-0x70]
    unsigned long v3;  // [bp-0x68], Other Possible Types: unsigned long long
    int v4;  // [bp-0x60], Other Possible Types: char
    unsigned long long v5;  // [bp-0x58]
    unsigned long v6;  // [bp-0x50]
    char v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x38]
    char v10;  // bpl
    unsigned long v11;  // r13
    unsigned long long v12;  // rdi
    unsigned long long v13;  // rax
    unsigned long v14;  // rax
    unsigned long v15;  // cc_ndep

    v10 = (char)a3[16];
    (char)v0.to_vec(a1, a2);
    v8 = v3;
    memcpy(&v7, &(char)v0, 16);
    (char)v0.rustc_entry(&a0->padding_0[40], &v7);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        if ((char)(long long)v2[24] + 16.equal((long long)v2[16], *((long long *)a3) + 16, (long long)a3[8]) && (char)v2[8] == v10)
            return core::ptr::drop_in_place<fish::env::var::EnvVar>(a3);
        v11 = v2 - 24;
        v3 = *((long long *)(v11 + 16));
        *((int128_t *)&v0) = *((int128_t *)v11);
        *((int128_t *)v11) = *((int128_t *)a3);
        *((long long *)(v11 + 16)) = (long long)a3[16];
        core::ptr::drop_in_place<fish::env::var::EnvVar>(&(char)v0);
    }
    else
    {
        v12 = *((long long *)&v4);
        v1 = v0;
        *((int128_t *)&v4) = *((int128_t *)a3);
        v6 = (long long)a3[16];
        v12.insert_no_grow(v5, &v1);
    }
    (char)v0.to_vec(a1, a2);
    v13 = a0->padding_0[88].insert(&(char)v0);
    if (!(v10 & 1))
        return v13;
    v14 = a0->field_88 + 1;
    if ((char)_ccall(4, 24, a0->field_88 + 1, 0, _ccall(17, (unsigned long long)(v10 & 1), 0, v15)))
        core::panicking::panic_const::panic_const_add_overflow(&g_14d7278); /* do not return */
    a0->field_88 = v14;
    return v14;
}
