long long uu_tee::tee(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0xb8], Other Possible Types: char
    void* v1;  // [bp-0xb0]
    unsigned long long v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa8]
    void* v4;  // [bp-0xa0], Other Possible Types: unsigned long long
    char v5;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x80]
    char v8;  // [bp-0x78]
    void* v9;  // [bp-0x70]
    unsigned long long v10;  // [bp-0x68]
    unsigned long long v11;  // [bp-0x60]
    unsigned long long v12;  // [bp-0x58]
    unsigned long long v13;  // [bp-0x50]
    unsigned long v14;  // [bp-0x48]
    unsigned long long v15;  // [bp-0x40]
    struct_0 *v16;  // [bp-0x38]
    unsigned long long v18;  // r13
    char v19;  // bpl
    unsigned long long v20;  // r12
    void* v21;  // rbx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rdx
    void* v24;  // rdi
    unsigned long long v25;  // rdi
    unsigned long long v26;  // rax

    v18 = 171798691843;
    if (a0->field_19 && (int)uucore::features::signals::ignore_interrupts(a0, a1, a2, a3) != 134)
        return 171798691843;
    v19 = a0->field_1b;
    if (v19 == 4 && (int)uucore::features::signals::enable_pipe_errors(a0, a1, a2, a3) != 134)
        return 171798691843;
    v20 = a0->field_10;
    v14 = a0->field_8;
    v15 = a0->field_8 + v20 * 24;
    v16 = a0;
    core::iter::adapters::try_process(&(char)v0, &v14);
    v21 = v1;
    if (!((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63)))
    {
        v11 = *((long long *)&v0);
        v12 = v21;
        v13 = v3;
        uucore::mods::locale::get_message(&v8, "tee-standard-outputsrc/uu/tee/src/tee.rs: \n", 19);
        v4 = std::io::stdio::stdout().new();
        v5 = &g_57af58;
        *((int128_t *)&v0) = *((int128_t *)&v8);
        v2 = v10;
        v11.insert(0, &(char)v0, &g_57afa8);
        v2 = v13;
        memcpy(&(char)v0, &v11, 16);
        v5 = v19;
        v4 = 0;
        v6 = std::io::stdio::stdin().new();
        v7 = &g_57afc0;
        if (a0->field_1a)
        {
            uu_tee::ensure_stdout_not_broken(&v8);
            if (v8)
            {
                v21 = v9;
            }
            else
            {
                if (!(!((&v8)[1] & 1) && v2 == 1))
                    goto LABEL_49f6ee;
                v21 = 0;
            }
            core::ptr::drop_in_place<uu_tee::NamedReader>(v6, &g_57afc0);
            core::ptr::drop_in_place<uu_tee::MultiWriter>(&(char)v0);
        }
        else
        {
LABEL_49f6ee:
            v22 = uu_tee::copy(&v6, &(char)v0);
            if (v22 == 1)
            {
                v24 = v23;
                if (!((char)v23.kind() == 40))
                    goto LABEL_49f750;
            }
            else if (!((char)v22 & 1))
            {
                goto LABEL_49f71e;
            }
            ::0x49da00::core::ptr::drop_in_place<std::io::error::Error>(v25);
LABEL_49f71e:
            if (v3 == v20)
            {
                v26 = (char)v0.flush();
                if (v26)
                {
                    ::0x49e180::core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(v26);
                }
                else
                {
                    ::0x49e180::core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(0);
                    v18 = 0;
                }
            }
            v24 = 0;
LABEL_49f750:
            ::0x49e180::core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(v24);
            core::ptr::drop_in_place<uu_tee::NamedReader>(v6, &g_57afc0);
            core::ptr::drop_in_place<uu_tee::MultiWriter>(&(char)v0);
            return v18;
        }
    }
    return v21;
}
