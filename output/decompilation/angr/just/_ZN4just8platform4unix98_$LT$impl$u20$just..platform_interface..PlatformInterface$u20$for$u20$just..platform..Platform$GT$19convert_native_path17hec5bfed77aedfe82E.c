long long just::platform::unix::<impl just::platform_interface::PlatformInterface for just::platform::Platform>::convert_native_path(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x20], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x18]
    char v2;  // [bp-0x10]
    unsigned long long v4;  // rax

    core::str::converts::from_utf8(&v0, a4, a5);
    if (*((int *)&v0) == 1)
    {
        a0->field_8.to_vec("Error getting current directory: unicode decode errorsignal handlerwarning: I/O error reading from signal pipe: src/positional.rssrc/ran.rsRun recipe ``? ", 53);
        v4 = 1;
    }
    else
    {
        v0.to_vec(v1, *((long long *)&v2));
        a0->field_10 = *((int128_t *)&v1);
        a0->field_8 = v0;
        v4 = 0;
    }
    a0->field_0 = v4;
    return a0;
}
