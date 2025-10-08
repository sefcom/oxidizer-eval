long long bat::error::default_error_handler(struct_0 *a0, unsigned long long a1, struct_2 *a2)
{
    unsigned long long v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    struct_0 *v2;  // [bp-0xb0]
    char *v3;  // [bp-0xa8]
    unsigned long long v4;  // [bp-0xa0]
    char *v5;  // [bp-0x98]
    unsigned long long v6;  // [bp-0x90]
    unsigned long long v7;  // [bp-0x88]
    unsigned long long v8;  // [bp-0x80]
    unsigned long long v9;  // [bp-0x78]
    unsigned long long v10;  // [bp-0x70]
    void* v11;  // [bp-0x58]
    char v12;  // [bp-0x50]
    unsigned long long v13;  // [bp-0x4f]
    unsigned long long v14;  // [bp-0x40]
    unsigned long long v15;  // [bp-0x38]
    unsigned long long v16;  // [bp-0x30]
    char *v17;  // [bp-0x28]
    unsigned long long v18;  // [bp-0x20]
    void* v19;  // [bp-0x18]

    v2 = a0;
    switch (a0->field_0)
    {
    case 0:
        if ((char)a0->field_8.kind() == 11)
            std::process::exit(0); /* do not return */
    case 6:
        v12 = 0;
        v11 = 0;
        v13 = 90194313218;
        v7 = 0x8000000000000000;
        v8 = "[bat error]: Error while parsing metadata.yaml file: READERSTDINIO circle detected. The input from stdin is also an output. Aborting to avoid infinite loop.' is a directory.IO circle detected. The input from '' is also an output. Aborting to avoid infinite";
        v9 = 11;
        v10 = 9223372036854775810;
        v3 = &v7;
        v4 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
        v5 = &v2;
        v6 = <&T as core::fmt::Display>::fmt;
        v15 = &g_ace428;
        v16 = 3;
        v19 = 0;
        v17 = &v3;
        v18 = 2;
        v1 = a2->field_48(a1, &v15);
        if (!v1)
            return (unsigned long long)core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v7);
        core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v1);
        return (unsigned long long)core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v7);
    default:
        v1 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
        v0 = v1.lock();
        v12 = 0;
        v11 = 0;
        v13 = 90194313218;
        v7 = 0x8000000000000000;
        v8 = "[bat error]: Error while parsing metadata.yaml file: READERSTDINIO circle detected. The input from stdin is also an output. Aborting to avoid infinite loop.' is a directory.IO circle detected. The input from '' is also an output. Aborting to avoid infinite";
        v9 = 11;
        v10 = 9223372036854775810;
        v3 = &v7;
        v4 = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
        v5 = &v2;
        v6 = <&T as core::fmt::Display>::fmt;
        v15 = &g_ace198;
        v16 = 3;
        v19 = 0;
        v17 = &v3;
        v18 = 2;
        v14 = v0.write_fmt(&v15);
        if (v14)
            core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v14);
        core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v7);
        return core::ptr::drop_in_place<std::io::stdio::StderrLock>(&v0);
    }
}
