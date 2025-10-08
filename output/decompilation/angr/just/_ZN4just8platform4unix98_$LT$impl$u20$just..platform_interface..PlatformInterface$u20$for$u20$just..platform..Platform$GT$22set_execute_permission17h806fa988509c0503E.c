long long just::platform::unix::<impl just::platform_interface::PlatformInterface for just::platform::Platform>::set_execute_permission(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xc0]
    char v1;  // [bp-0xb8]
    char v2;  // [bp-0x88]

    std::fs::metadata(&v0, a0, a1);
    if (*((int *)&v0) != 2)
        return std::fs::set_permissions(a0, a1, *((int *)&v2) | 64);
    return *((long long *)&v1);
}
