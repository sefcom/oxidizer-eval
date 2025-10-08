int uu_pinky::platform::unix::read_to_console(unsigned int a0)
{
    void* v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    void* v2;  // [bp-0x98]
    char *v3;  // [bp-0x90]
    unsigned long long v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x80]
    unsigned long long v6;  // [bp-0x78]
    char *v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x68]
    void* v9;  // [bp-0x60]
    char v10;  // [bp-0x50]
    char v11;  // [bp-0x38]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rdx

    v11.with_capacity(a0);
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v13 = v11.read_to_end(&v0);
    if (v13)
    {
        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v13, v14);
    }
    else
    {
        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(0, v15);
        v10.from_utf8_lossy(v1, 0);
        v3 = &v10;
        v4 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
        v5 = &g_419240;
        v6 = 1;
        v9 = 0;
        v7 = &v3;
        v8 = 1;
        std::io::stdio::_print(&v5);
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v10);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v0, v1);
    return core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(&v11);
}
