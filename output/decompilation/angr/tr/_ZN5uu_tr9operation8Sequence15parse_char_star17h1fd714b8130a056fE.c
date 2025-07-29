double uu_tr::operation::Sequence::parse_char_star(long long a0, long long a1, long long a2)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    unsigned long long v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    unsigned long long v7;  // [bp-0x10]
    int v9;  // xmm0
    char v10;  // al
    int v11;  // xmm0

    v4 = "[*]*]0[:alnumalphablankcntrldigitgraphlowerprintpunctspaceupperxdigit:][==]cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/threa";
    v5 = 1;
    v6 = "*]*]0[:alnumalphablankcntrldigitgraphlowerprintpunctspaceupperxdigit:][==]cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread";
    v7 = 2;
    v0.process(&v4, a1);
    if (*((int *)&v0) != 3)
    {
        v11 = *((int128_t *)&v0);
        *((int128_t *)((char *)&a0->field_8 + 8)) = *((int128_t *)&v2);
        *((void*)&(&a0->field_0)[1]) = v11;
        a0->field_0 = 1;
        return (unsigned long long)v11;
    }
    v9 = *((int128_t *)&v1);
    v10 = v3;
    *((void*)&(&a0->field_0)[1]) = v9;
    *((unsigned int *)((char *)&a0->field_8 + 8)) = 12;
    a0->field_18 = 2;
    *((char *)&a0[1].field_0) = v10;
    a0->field_0 = 0;
    return (unsigned long long)v9;
}
