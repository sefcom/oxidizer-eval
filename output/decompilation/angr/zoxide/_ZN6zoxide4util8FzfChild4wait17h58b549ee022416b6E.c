int zoxide::util::FzfChild::wait(void* a0, unsigned int a1[6])
{
    unsigned int v0;  // [bp-0x6c]
    char v1;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    uint128_t v4;  // [bp-0x50]
    void* v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    void* v7;  // [bp-0x28]
    char v8;  // [bp-0x20], Other Possible Types: unsigned int
    unsigned int v9;  // [bp-0x1c]
    char v10;  // [bp-0x18]
    unsigned long v12;  // rdi
    unsigned int v13;  // eax
    unsigned long long v14;  // rcx
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rdx
    unsigned long v17;  // rax
    unsigned long v18;  // rax

    v12 = a1[4];
    a1[4] = 4294967295;
    core::ptr::drop_in_place<core::option::Option<std::process::ChildStdin>>(v12);
    v13 = a1[5];
    a1[5] = 4294967295;
    if (v13 == -1)
        core::option::unwrap_failed(&g_534bb0); /* do not return */
    v0 = v13;
    v5 = 0;
    v6 = 1;
    v7 = 0;
    if (!((char)std::io::append_to_string(&v5, &v0, 0, v14).context(v15) & 1))
    {
        v1.wait(a1);
        v8.context(&v1);
        if (v8 == 1)
        {
            v16 = *((long long *)&v10);
            goto LABEL_492ba9;
        }
        v17 = v9;
        if (!((char)v17 & 127))
        {
            v18 = (unsigned int)v17 >> 8;
            if (!(char)v18)
            {
                *((unsigned long long *)&a0[16]) = 0;
                *((int128_t *)a0) = *((int128_t *)&v5);
            }
            else
            {
                switch ((unsigned int)v18)
                {
                case 1:
                    v1 = &g_534ba0;
                    v2 = 1;
                    v3 = 8;
                    v4 = 0;
                    v16 = anyhow::__private::format_err(&v1);
                    break;
                case 2:
                    v1 = &g_534b90;
                    v2 = 1;
                    v3 = 8;
                    v4 = 0;
                    v16 = anyhow::__private::format_err(&v1);
                    break;
                case 130:
                    v16 = 130.new();
                    break;
                default:
                    if (((unsigned int)v18 != 255 & 127 < (unsigned int)v18))
                        goto LABEL_492cb8;
                    v1 = &g_534b70;
                    v2 = 1;
                    v3 = 8;
                    v4 = 0;
                    v16 = anyhow::__private::format_err(&v1);
                    break;
                }
                goto LABEL_492ba9;
            }
        }
        else
        {
LABEL_492cb8:
            v1 = &g_534b80;
            v2 = 1;
            v3 = 8;
            v4 = 0;
            v16 = anyhow::__private::format_err(&v1);
            goto LABEL_492ba9;
        }
    }
    else
    {
LABEL_492ba9:
        *((unsigned long long *)&a0[8]) = v16;
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<alloc::string::String>(&v5);
    }
    return core::ptr::drop_in_place<std::fs::File>(v0);
}
