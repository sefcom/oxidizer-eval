long long starship::formatter::string_formatter::shell_prompt_escape(unsigned long long a0, unsigned long long a1, char a2)
{
    char v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    char v3;  // [bp-0x40]
    unsigned long long v4;  // [bp-0x38]
    unsigned long long v5;  // [bp-0x30]
    char v6;  // [bp-0x28]
    unsigned long long v7;  // [bp-0x20]
    char v8;  // [bp-0x18]

    switch (a2)
    {
    case 0:
        v0.into(a1);
        alloc::str::<impl str>::replace(&v6, v1, v2, 92, "\\\\/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/toml_writer-1.0.2/src/string.rs\\u", 2);
        alloc::str::<impl str>::replace(&v3, v7, *((long long *)&v8), 36, "\\$", 2);
        alloc::str::<impl str>::replace(a0, v4, v5, 96, "\\`%%rawmajorminorpatch/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/lazy_lock.rsError formatting `` version:\nsrc/formatter/version.rs", 2);
        core::ptr::drop_in_place<alloc::string::String>(&v3);
        core::ptr::drop_in_place<alloc::string::String>(&v6);
    case 5:
        v0.into(a1);
        alloc::str::<impl str>::replace(a0, v1, v2, 37, "%%rawmajorminorpatch/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/lazy_lock.rsError formatting `` version:\nsrc/formatter/version.rs", 2);
        break;
    default:
        return a0.into(a1);
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v0);
}
