double uu_tr::operation::Sequence::parse_char_range(long long a0, long long a1, long long a2)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    char v3;  // [bp-0x20]
    char v4;  // [bp-0x1f]
    unsigned long long v5;  // [bp-0x18]
    unsigned long long v6;  // [bp-0x10]
    int v8;  // xmm0
    unsigned long v9;  // rax
    unsigned long v10;  // rcx
    int v11;  // xmm0

    v5 = "-[*]*]0[:alnumalphablankcntrldigitgraphlowerprintpunctspaceupperxdigit:][==]cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thre";
    v6 = 1;
    v0.process(&v5, a1, a2);
    if (*((int *)&v0) != 3)
    {
        v11 = *((int128_t *)&v0);
        *((int128_t *)((char *)&a0->field_8 + 8)) = *((int128_t *)&v2);
        *((void*)&(&a0->field_0)[1]) = v11;
        a0->field_0 = 1;
        return (unsigned long long)v11;
    }
    v8 = *((int128_t *)&v1);
    v9 = v3;
    v10 = v4;
    *((void*)&(&a0->field_0)[1]) = v8;
    *((unsigned int *)((char *)&a0->field_8 + 8)) = ((v9 & 255) <= (v10 & 255)) * 2 + 10;
    *((unsigned int *)((char *)&a0->field_8 + 12)) = v10;
    *((int *)&a0->field_18) = ((char)v9 > (char)v10 ? (unsigned int)v9 & 255 : ((unsigned int)v9 & 255) * 0x100 + ((unsigned int)v10 & 255) * 0x10000 + 1);
    a0->field_0 = 0;
    return (unsigned long long)v8;
}
