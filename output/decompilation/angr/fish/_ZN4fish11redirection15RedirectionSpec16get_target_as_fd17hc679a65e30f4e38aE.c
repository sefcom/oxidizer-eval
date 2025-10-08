long long fish::redirection::RedirectionSpec::get_target_as_fd(unsigned long long a0[3])
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return ~((int)fish::wutil::wcstoi::fish_wcstoi(a0[1], a0[2])) & 1;
}
