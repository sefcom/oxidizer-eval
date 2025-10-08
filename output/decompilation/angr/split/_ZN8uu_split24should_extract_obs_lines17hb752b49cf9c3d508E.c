long long uu_split::should_extract_obs_lines(unsigned long long a0, unsigned long long a1, char a2, char a3)
{
    unsigned long v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rax

    v0 = v3;
    v1 = 0;
    if ((char)core::slice::<impl [T]>::starts_with(a0, a1, ::0x4675a0::core::char::methods::encode_utf8_raw(45, &v1), v4) && !((a2 | a3 | (char)core::slice::<impl [T]>::starts_with(a0, a1, "---a-b-C-l-n-tsrc/uu/split/src/split.rs", 2)) & 1) && !(char)core::slice::<impl [T]>::starts_with(a0, a1, "-a-b-C-l-n-tsrc/uu/split/src/split.rs", 2) && !(char)core::slice::<impl [T]>::starts_with(a0, a1, "-b-C-l-n-tsrc/uu/split/src/split.rs", 2) && !(char)core::slice::<impl [T]>::starts_with(a0, a1, "-C-l-n-tsrc/uu/split/src/split.rs", 2) && !(char)core::slice::<impl [T]>::starts_with(a0, a1, "-l-n-tsrc/uu/split/src/split.rs", 2) && !(char)core::slice::<impl [T]>::starts_with(a0, a1, "-n-tsrc/uu/split/src/split.rs", 2))
    {
        v5 = core::slice::<impl [T]>::starts_with(a0, a1, "-tsrc/uu/split/src/split.rs", 2);
        return v5 & 0xffffffffffffff00 | (char)v5 ^ 1;
    }
    return 0;
}
