long long starship::modules::git_status::RepoStatus::is_modified(unsigned long long a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x18], Other Possible Types: unsigned long
    unsigned int v1;  // [bp-0x14]
    unsigned long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rax

    v0 = v3;
    v0 = 0;
    v5 = core::slice::<impl [T]>::ends_with(a0, a1, ::0xa7eb90::core::char::methods::encode_utf8_raw(77, &v0, 4), v4);
    if ((char)v5)
        return v5 & 0xffffffffffffff00 | 1;
    v1 = 0;
    return core::slice::<impl [T]>::ends_with(a0, a1, ::0xa7eb90::core::char::methods::encode_utf8_raw(65, &v1, 4), v4);
}
