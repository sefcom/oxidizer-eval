long long just::platform::unix::<impl just::platform_interface::PlatformInterface for just::platform::Platform>::make_shebang_command(void* a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long a4, unsigned long long a5, unsigned long long a6)
{
    char v0;  // [bp-0xf0]

    v0.new(a2, a3);
    if (a5)
        v0.current_dir(a5, a6);
    memcpy(a0, &v0, 224);
    return a0;
}
