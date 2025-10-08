long long uu_cp::delete_dest_if_needed_and_allowed(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5[90], char a6, unsigned long long a7)
{
    char *v0;  // [bp-0x218]
    unsigned long long v1;  // [bp-0x210]
    int v2;  // [bp-0x208]
    unsigned long long v3;  // [bp-0x1f8]
    int v4;  // [bp-0x1f0], Other Possible Types: char
    unsigned long v5;  // [bp-0x1e0]
    unsigned long long v6;  // [bp-0x1d8]
    unsigned long long v7;  // [bp-0x1d0]
    unsigned long long v8;  // [bp-0x1c8]
    char v9;  // [bp-0x1c0]
    unsigned long long v10;  // [bp-0x1b8]
    unsigned long long v11;  // [bp-0x1b0]
    char *v12;  // [bp-0x1a8]
    unsigned long long v13;  // [bp-0x1a0]
    void* v14;  // [bp-0x198]
    char v15;  // [bp-0x188]
    int v16;  // [bp-0x180], Other Possible Types: char
    unsigned long long v17;  // [bp-0x170]
    unsigned long long v18;  // [bp-0x168]
    int v19;  // [bp-0x160]
    int v20;  // [bp-0x150], Other Possible Types: char
    int v21;  // [bp-0x140]
    int v22;  // [bp-0x130]
    int v23;  // [bp-0x120]
    int v24;  // [bp-0x110]
    char v25;  // [bp-0x100]
    int v26;  // [bp-0xd8]
    unsigned long long v27;  // [bp-0xc8]
    int v28;  // [bp-0xb8]
    unsigned long long v29;  // [bp-0xa8]
    unsigned long long v30;  // [bp-0xa0]
    int v31;  // [bp-0x98]
    int v32;  // [bp-0x88]
    int v33;  // [bp-0x78]
    int v34;  // [bp-0x68]
    int v35;  // [bp-0x58]
    int v36;  // [bp-0x48]
    char v37;  // [bp-0x38]
    unsigned int v38;  // eax
    unsigned long long v39;  // rax
    unsigned long v40;  // rax
    unsigned long long v41;  // rax

    if (a5[84] < 2)
    {
        v38 = a5[85];
        if (v38 != 2)
        {
            if (v38 == 1 || (char)uucore::features::fs::is_symlink_loop(a3, a4))
                goto LABEL_4a2efc;
            std::fs::metadata(&v15, a3, a4);
            if (*((int *)&v15) == 2)
            {
                v39 = *((long long *)&v16);
                *((unsigned long long *)a0) = 9223372036854775809;
                *((unsigned long long *)&a0[8]) = v39;
                return v39;
            }
            if (!(v20 & 146))
                goto LABEL_4a2efc;
        }
        else if (a5[80])
        {
            v40 = a5[89];
            if (a6 == 1 && !(char)v40)
                v40 = a5[88];
            v15.from_path(a1, a2, v40 & 4294967295);
            v6 = 1;
            v7 = a1;
            v8 = a2;
            v9 = 1;
            v0 = &v6;
            v1 = <os_display::Quoted as core::fmt::Display>::fmt;
            v10 = &g_55ec38;
            v11 = 1;
            v14 = 0;
            v12 = &v0;
            v13 = 1;
            v4.map_or_else(&v10);
            if ((v15 & 1))
            {
                v41 = *((long long *)&v16);
                *((unsigned long *)&a0[24]) = v5;
                a0[8] = v4;
                *((unsigned long long *)a0) = 9223372036854775810;
                *((unsigned long long *)&a0[32]) = v41;
                return v41;
            }
            v3 = v17;
            v2 = v16;
            v31 = v19;
            v32 = v20;
            v33 = v21;
            v34 = v22;
            v35 = v23;
            v36 = v24;
            memcpy(&v37, &v25, 16);
            core::ptr::drop_in_place<<core::result::Result<(),std::io::error::Error> as quick_error::ResultExt<(),std::io::error::Error>>::context<alloc::string::String>::{{closure}}>(&v4);
            v27 = v3;
            v26 = v2;
            v28 = v26;
            v29 = v27;
            v30 = v18;
            if (a7.get_inner(&v28))
            {
LABEL_4a2efc:
                v39 = std::fs::remove_file(a3, a4);
                if (v39)
                {
                    *((unsigned long long *)a0) = 9223372036854775809;
                    *((unsigned long long *)&a0[8]) = v39;
                    return v39;
                }
            }
        }
    }
    *((unsigned long long *)a0) = 9223372036854775820;
    return 9223372036854775820;
}
