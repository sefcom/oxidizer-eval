long long fish::history::file::parse_timestamp(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    char v4;  // [bp-0x10]
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    v7 = core::slice::<impl [T]>::strip_prefix(fish::history::file::trim_start(a0, a1), v6);
    if (!v7)
        return v7;
    v8 = core::str::converts::from_utf8(&v2, fish::history::file::trim_start(v7, v6), v6);
    if ((v2 & 1))
        return v8;
    v9 = core::num::<impl i64>::from_ascii_radix(&v0, v3, *((long long *)&v4));
    if (!v0)
        return fish::history::file::time_from_seconds(v1);
    return v9;
}
