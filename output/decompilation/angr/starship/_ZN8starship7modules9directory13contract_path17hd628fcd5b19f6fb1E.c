long long starship::modules::directory::contract_path(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    unsigned long long v0;  // [bp-0xf0]
    unsigned long long v1;  // [bp-0xe8]
    int v2;  // [bp-0xe0], Other Possible Types: char
    unsigned long long v3;  // [bp-0xd0]
    char v4;  // [bp-0xc8]
    char v5;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xa8]
    char *v7;  // [bp-0xa0]
    unsigned long long v8;  // [bp-0x98]
    void* v9;  // [bp-0x90]
    char *v10;  // [bp-0x70], Other Possible Types: char
    unsigned long long v11;  // [bp-0x68]
    char *v12;  // [bp-0x60]
    unsigned long long v13;  // [bp-0x58]
    unsigned long long v14;  // [bp-0x30]
    unsigned long long v15;  // rbx
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rax

    v14 = v15;
    v0 = a5;
    v1 = a6;
    if (!a1.starts_with(a2, a3, a4))
        return a0.to_slash_lossy(a1, a2);
    v10.components(a1, a2);
    v5.components(a3, a4);
    if (v10.eq(&v5))
    {
        *((unsigned long long *)&a0[8]) = a5;
        *((unsigned long long *)&a0[16]) = a6;
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v16 = a1.strip_prefix(a2, a3, a4);
    if (!v16)
    {
        v17 = a2;
        if (!v16)
            goto LABEL_b8e63b;
LABEL_b8e63a:
        v19 = v16;
    }
    else
    {
        v17 = v18;
        if (v16)
            goto LABEL_b8e63a;
LABEL_b8e63b:
        v19 = a1;
    }
    v4.to_slash_lossy(v19, v17);
    v10 = &v0;
    v11 = <&T as core::fmt::Display>::fmt;
    v12 = &v4;
    v13 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    v5 = &g_11f4318;
    v6 = 2;
    v9 = 0;
    v7 = &v10;
    v8 = 2;
    v2.map_or_else(0, a2, &v5);
    core::ptr::drop_in_place<versions::Chunk>(&v4);
    *((unsigned long long *)&a0[16]) = v3;
    *(a0) = v2;
    return v3;
}
