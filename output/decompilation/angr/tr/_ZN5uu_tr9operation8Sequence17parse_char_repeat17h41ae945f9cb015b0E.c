double uu_tr::operation::Sequence::parse_char_repeat(long long a0, long long a1, long long a2)
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    char v6;  // [bp-0x30], Other Possible Types: unsigned long
    int v7;  // [bp-0x28]
    char v8;  // [bp-0x18]
    unsigned long v10;  // rdi
    unsigned long v11;  // xmm0lq

    v0 = "[*]*]0[:alnumalphablankcntrldigitgraphlowerprintpunctspaceupperxdigit:][==]cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/threa";
    v1 = 1;
    v2 = "*]0[:alnumalphablankcntrldigitgraphlowerprintpunctspaceupperxdigit:][==]cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/l";
    v3 = 1;
    v4 = "]0[:alnumalphablankcntrldigitgraphlowerprintpunctspaceupperxdigit:][==]cannot access a Thread Local Storage value during or after destruction/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/lo";
    v5 = 1;
    v6.process(&v0, a1);
    v10 = &(&a0->field_0)[1];
    if (!v6)
    {
        *((int128_t *)(v10 + 16)) = *((int128_t *)&v8);
        *((void*)v10) = v7;
        a0->field_0 = 1;
        return (unsigned long long)v7;
    }
    uu_tr::operation::Sequence::parse_char_repeat::{{closure}}(v10, &v6);
    a0->field_0 = 0;
    return v11;
}
