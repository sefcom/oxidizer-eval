long long starship::modules::git_status::RepoStatus::is_staged(unsigned long long a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x24]
    unsigned int v1;  // [bp-0x20]
    unsigned int v2;  // [bp-0x1c]
    unsigned int v4;  // ebp
    unsigned long long v5;  // rdx

    v0 = 0;
    v4 = vvar_14{reg 56} & 0xffffff00 | 1;
    if ((char)core::slice::<impl [T]>::starts_with(a0, a1, ::0xa7eb90::core::char::methods::encode_utf8_raw(77, &v0, 4), v5))
        return v4;
    v1 = 0;
    if ((char)core::slice::<impl [T]>::starts_with(a0, a1, ::0xa7eb90::core::char::methods::encode_utf8_raw(65, &v1, 4), v5))
        return v4;
    v2 = 0;
    return (unsigned int)core::slice::<impl [T]>::starts_with(a0, a1, ::0xa7eb90::core::char::methods::encode_utf8_raw(84, &v2, 4), v5);
}
