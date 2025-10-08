long long fish::wutil::perror(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    unsigned long long v2;  // [sp-0x60]
    unsigned long long v3;  // [bp-0x58]
    char *v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    void* v6;  // [bp-0x40]
    unsigned long long v7;  // [bp-0x30]
    unsigned long long v8;  // [bp-0x28]
    char *v9;  // [bp-0x20]
    unsigned long long v10;  // [bp-0x18]
    unsigned int v12;  // eax
    char *v13;  // rax

    v7 = a0;
    v8 = a1;
    v12 = errno::errno();
    v2 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
    v0 = v2.lock();
    if (a1)
    {
        v9 = &v7;
        v10 = <&T as core::fmt::Display>::fmt;
        v2 = &g_14c14b0;
        v3 = 2;
        v6 = 0;
        v4 = &v9;
        v5 = 1;
        v1 = (unsigned long long)v0.write_fmt(&v2);
        core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v1);
    }
    v13 = strerror(v12);
    v2 = v0.write_all(v13, strlen(v13));
    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v2);
    v2 = v0.write_all("\n%s: %s\nInvalid working directory, it must start and end with /", 1);
    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v2);
    return core::ptr::drop_in_place<std::io::stdio::StderrLock>(v0);
}
