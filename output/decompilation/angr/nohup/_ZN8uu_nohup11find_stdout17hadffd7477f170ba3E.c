long long uu_nohup::find_stdout(void* a0)
{
    char v0;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xf0]
    unsigned long long v2;  // [bp-0xf0]
    char *v3;  // [bp-0xe8], Other Possible Types: unsigned int, unsigned long long
    char *v4;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xe0]
    void* v6;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned int v7;  // [bp-0xd0]
    char *v8;  // [bp-0xc8], Other Possible Types: char, unsigned long long
    unsigned long long v9;  // [bp-0xc0]
    unsigned long long v10;  // [bp-0xb8]
    void* v11;  // [bp-0xb0], Other Possible Types: char, unsigned long, unsigned long long
    char v12;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0xa0]
    char v14;  // [bp-0x98]
    char *v15;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v16;  // [bp-0x88]
    unsigned long long v17;  // [bp-0x80]
    unsigned long long v18;  // [bp-0x78]
    unsigned int v19;  // [bp-0x70]
    char v20;  // [bp-0x6e]
    char v21;  // [bp-0x6c], Other Possible Types: unsigned short
    unsigned long long v22;  // [bp-0x68]
    unsigned int v23;  // [bp-0x60]
    char v24;  // [bp-0x5e]
    char v25;  // [bp-0x5c], Other Possible Types: unsigned short
    char v26;  // [bp-0x58], Other Possible Types: unsigned int
    unsigned int v27;  // [bp-0x54]
    unsigned long long v28;  // [bp-0x50]
    char v29;  // [bp-0x48], Other Possible Types: unsigned int
    unsigned int v30;  // [bp-0x44]
    unsigned long long v31;  // [bp-0x40]
    unsigned long long v32;  // [bp-0x38]
    char v34;  // r15b
    unsigned long long v35;  // r13
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rdx
    unsigned long long v38;  // rax

    std::env::var(&v0, "POSIXLY_CORRECTsrc/uu/nohup/src/nohup.rs", 15);
    v34 = v0;
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
    v18 = 0x1b600000000;
    v21 = 0;
    v19 = 0;
    v21 = 1;
    v20 = 1;
    v26.open(&v18, "nohup.out(uutils coreutils) 0.0.30Run COMMAND ignoring hangup signals.If standard input is terminal, it'll be replaced with /dev/null.\nIf standard output is terminal, it'll be appended to nohup.out instead,\nor $HOME/nohup.out, if nohup.out open failed.\nIf ", 9);
    if (v26 != 1)
    {
        v11 = uucore::util_name();
        v12 = v37;
        v8 = &v11;
        v9 = <&T as core::fmt::Display>::fmt;
        v0 = &g_4dec18;
        v1 = 2;
        v6 = 0;
        v3 = &v8;
        v5 = 1;
        std::io::stdio::_eprint(&v0);
        v11 = 0;
        v12 = "nohup.out(uutils coreutils) 0.0.30Run COMMAND ignoring hangup signals.If standard input is terminal, it'll be replaced with /dev/null.\nIf standard output is terminal, it'll be appended to nohup.out instead,\nor $HOME/nohup.out, if nohup.out open failed.\nIf ";
        v13 = 9;
        v14 = 1;
        v8 = &v11;
        v9 = <os_display::Quoted as core::fmt::Display>::fmt;
        v0 = &g_4dec38;
        v1 = 2;
        v6 = 0;
        v3 = &v8;
        v5 = 1;
        v38 = std::io::stdio::_eprint(&v0);
        *((unsigned int *)&a0[8]) = v27;
        *((unsigned long long *)a0) = 0;
        return v38;
    }
    v35 = v28;
    v17 = v35;
    std::env::var(&v11, "HOME", 4);
    if (v11 == 1)
    {
        v3 = (v34 ^ 1) * 2 + 125;
        v1 = v35;
        v0 = 9223372036854775810;
        *((double *)a0) = v0.new();
        *((char **)&a0[8]) = &g_4debb0;
        return (unsigned long long)core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v11);
    }
    v10 = *((long long *)&v14);
    memcpy(&v8, &v12, 16);
    v8.push();
    core::str::converts::from_utf8(&v0, v9, v10);
    if ((v0 & 1))
        core::option::unwrap_failed(&g_4dec58); /* do not return */
    v22 = 0x1b600000000;
    v25 = 0;
    v23 = 0;
    v25 = 1;
    v24 = 1;
    v29.open(&v22, &v8);
    if (v29 != 1)
    {
        v11 = uucore::util_name();
        v12 = v36;
        v15 = &v11;
        v16 = <&T as core::fmt::Display>::fmt;
        v0 = &g_4dec18;
        v2 = 2;
        v6 = 0;
        v4 = &v15;
        v5 = 1;
        std::io::stdio::_eprint(&v0);
        v11 = 0;
        v12 = v1;
        v13 = v3;
        v14 = 1;
        v15 = &v11;
        v16 = <os_display::Quoted as core::fmt::Display>::fmt;
        v0 = &g_4dec38;
        v1 = 2;
        v6 = 0;
        v3 = &v15;
        v5 = 1;
        std::io::stdio::_eprint(&v0);
        *((unsigned int *)&a0[8]) = v30;
        *((unsigned long long *)a0) = 0;
        core::ptr::drop_in_place<std::path::PathBuf>(v8, v9);
        return (unsigned long long)core::ptr::drop_in_place<std::io::error::Error>(&v17);
    }
    v32 = v31;
    v15 = v35;
    v11.to_vec(v1, v3);
    v4 = v13;
    memcpy(&v0, &v11, 16);
    v7 = v3;
    v5 = v35;
    v6 = v32;
    *((double *)a0) = v0.new();
    *((char **)&a0[8]) = &g_4debb0;
    return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(v8, v9);
}
