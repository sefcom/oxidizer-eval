void fd::main()
{
    unsigned long long v0;  // [bp-0x60]
    char v1;  // [bp-0x58]
    char v2;  // [bp-0x57]
    unsigned long long v3;  // [bp-0x50]
    char *v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    unsigned long long v7;  // [bp-0x30]
    char *v8;  // [bp-0x28]
    unsigned long long v9;  // [bp-0x20]
    unsigned long long v10;  // [bp-0x18]
    unsigned long long v11;  // [bp-0x10]
    unsigned long long v12;  // [bp-0x8]
    unsigned long long v14;  // rbx
    unsigned long long v15;  // rax

    v12 = v14;
    fd::run(&v1);
    if (v1 != 1)
    {
        v15 = (unsigned long long)v2.exit();
        core::ptr::drop_in_place<anyhow::Error>(&(char)v0);
        _Unwind_Resume(v15);
        core::panicking::panic_in_cleanup(); /* do not return */
    }
    v0 = v3;
    v4 = &v0;
    v5 = anyhow::error::<impl core::fmt::Display for anyhow::Error>::fmt;
    v6 = &g_802140;
    v7 = 2;
    v10 = &g_47b620;
    v11 = 1;
    v8 = &v4;
    v9 = 1;
    std::io::stdio::_eprint(&v6);
    4.exit();
    [D] Unsupported jumpkind Ijk_NoDecode at address 6267400()
}
