long long uu_head::wrap_in_stdout_error(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x68]
    char *v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    char *v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    void* v7;  // [bp-0x30]
    char v8;  // [bp-0x20]
    unsigned int v10;  // eax
    unsigned long long v11;  // rax

    v0 = a0;
    v10 = (unsigned int)a0.kind();
    v1 = &v0;
    v2 = <std::io::error::Error as core::fmt::Display>::fmt;
    v3 = &g_4f7cd8;
    v4 = 1;
    v7 = 0;
    v5 = &v1;
    v6 = 1;
    v8.map_or_else(&v3);
    v11 = v10.new(&v8);
    core::ptr::drop_in_place<std::io::error::Error>(&v0);
    return v11;
}
