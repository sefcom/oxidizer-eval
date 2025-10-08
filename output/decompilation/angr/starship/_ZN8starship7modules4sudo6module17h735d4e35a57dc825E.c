long long starship::modules::sudo::module(void* a0, unsigned long a1)
{
    char v0;  // [bp-0x1b8]
    int v1;  // [bp-0x1b0], Other Possible Types: char
    unsigned long long v2;  // [bp-0x1a0]
    int v3;  // [bp-0x198]
    unsigned long long v4;  // [bp-0x188]
    int v5;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x170]
    int v7;  // [bp-0x168], Other Possible Types: char *
    unsigned long long v8;  // [bp-0x160]
    void* v9;  // [bp-0x158], Other Possible Types: char
    int v10;  // [bp-0x148]
    unsigned long long v11;  // [bp-0x138]
    char v12;  // [bp-0x128], Other Possible Types: unsigned long, unsigned long long
    char v13;  // [bp-0x120], Other Possible Types: unsigned long long
    char v14;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x110]
    char v16;  // [bp-0x108], Other Possible Types: unsigned long long
    int v17;  // [bp-0xf8]
    unsigned long long v18;  // [bp-0xe8]
    char *v19;  // [bp-0xe0]
    unsigned long long v20;  // [bp-0xd8]
    char v21;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v22;  // [bp-0xc8]
    char v23;  // [bp-0xc0]
    char v24;  // [bp-0xb0]
    char v25;  // [bp-0xa0]
    char v26;  // [bp-0x9f]
    char v27;  // [bp-0x98]
    char *v28;  // [bp-0x88]
    unsigned long v29;  // [bp-0x80]
    int v30;  // [bp-0x78], Other Possible Types: char
    int v31;  // [bp-0x68]
    int v32;  // [bp-0x58]
    int v33;  // [bp-0x48]
    int v34;  // [bp-0x38]
    char v35;  // [bp-0x28]
    char v36;  // [bp-0x20]
    int v38;  // xmm0
    unsigned long long v39;  // rax

    v30.new_module(a1, "sudo", 4);
    v21.try_load(*((long long *)&v36));
    if (v26 || !v25 && (char)"unixlifecodeHashTaskbodyPing'".equal(4, "windows-nsrc/modules/sudo.rs", 7))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        (char)v5.exec_cmd(a1, "sudo", 4, &g_11f6288, 2);
        core::ptr::drop_in_place<core::option::Option<(alloc::string::String,alloc::string::String)>>(&(char)v5);
        if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
        }
        else
        {
            v12.new(v21, v22);
            memcpy(&v27, &v23, 16);
            v28 = &v24;
            v29 = a1;
            if (v12 == 0x8000000000000000)
            {
                v2 = v15;
                memcpy(&v1, &v13, 16);
            }
            else
            {
                v11 = v18;
                v38 = *((int128_t *)&v12);
                v10 = v17;
                memcpy(&v9, &v16, 16);
                *((int128_t *)&v7) = *((int128_t *)&v14);
                v5 = v38;
                starship::modules::sudo::module::{{closure}}(&v0, &v27, &(char)v5);
                if (*((int *)&v0) != 1)
                {
                    v39 = v30.set_segments(&v1);
                    *((int128_t *)&a0[80]) = *((int128_t *)&v35);
                    a0[64] = v34;
                    a0[48] = v33;
                    a0[32] = v32;
                    a0[16] = v31;
                    *(a0) = v30;
                    return v39;
                }
            }
            v4 = v2;
            v3 = v1;
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 2)
            {
                v19 = &v3;
                v20 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
                v5 = &g_11f6278;
                v6 = 1;
                v9 = 0;
                v7 = &v19;
                v8 = 1;
                v12 = "starship::modules::sudoError in module `swift`:\nsrc/modules/swift.rs";
                v13 = 23;
                v14 = "starship::modules::sudoError in module `swift`:\nsrc/modules/swift.rs";
                v15 = 23;
                v16 = log::__private_api::loc(&g_11f62a8);
                log::__private_api::log(&v5, 2, &v12);
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<starship::formatter::string_formatter::StringFormatterError>(&v3);
        }
    }
    return (unsigned long long)core::ptr::drop_in_place<starship::module::Module>(&v30);
}
