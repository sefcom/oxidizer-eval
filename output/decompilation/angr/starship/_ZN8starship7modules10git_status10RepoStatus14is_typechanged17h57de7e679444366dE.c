long long starship::modules::git_status::RepoStatus::is_typechanged(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned long v3;  // rax
    unsigned long long v4;  // rdx

    v0 = v3;
    v1 = 0;
    return core::slice::<impl [T]>::ends_with(a0, a1, ::0xa7eb90::core::char::methods::encode_utf8_raw(84, &v1, 4), v4);
}
