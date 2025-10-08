void fish::main()
{
    char v0;  // [bp-0x70], Other Possible Types: unsigned long long
    char v1;  // [bp-0x60]
    char v2;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    char v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    unsigned long long v7;  // [bp-0x28]
    unsigned long long v8;  // [bp-0x20]
    unsigned long long v9;  // [bp-0x18]
    unsigned long long v10;  // [bp-0x10]
    unsigned long long v11;  // [bp-0x8]
    unsigned long long v13;  // r15
    unsigned long long v14;  // r14
    unsigned long long v15;  // r12
    unsigned long long v16;  // rbx
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdx

    v11 = v13;
    v10 = v14;
    v9 = v15;
    v8 = v16;
    std::env::args_os(&v0);
    v2.next(&v0);
    if (!((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63)))
    {
        v17 = v3.file_name(v4);
        if (v17)
        {
            core::str::converts::from_utf8(&v5, v17, v18);
            if (!(v5 & 1))
            {
                if ((char)v6.equal(v7, "fish_key_readerfish_indentCould not open file %s\n%s\nPid must be at least zero", 15))
                {
                    fish::builtins::fish_key_reader::main(); /* do not return */
                }
                else if ((char)v6.equal(v7, "fish_indentCould not open file %s\n%s\nPid must be at least zero", 11))
                {
                    fish::builtins::fish_indent::main(); /* do not return */
                }
            }
        }
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v2, v3);
    }
    core::ptr::drop_in_place<std::env::ArgsOs>(&v0);
    v0.try_insert();
    v0.unwrap(*((long long *)&v1));
    fish::panic::panic_handler(); /* do not return */
}
