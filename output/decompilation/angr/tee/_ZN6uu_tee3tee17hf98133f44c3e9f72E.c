long long uu_tee::tee(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0xa8]
    int v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    struct_0 *v3;  // [bp-0x98], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x90], Other Possible Types: unsigned long long
    char v5;  // [bp-0x88], Other Possible Types: unsigned long long
    int v6;  // [bp-0x78], Other Possible Types: char
    unsigned long long v7;  // [bp-0x70]
    struct_0 *v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x58]
    unsigned long long v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x48]
    unsigned long long v13;  // [bp-0x40]
    unsigned long long v14;  // [bp-0x38]
    unsigned long long v16;  // r15
    unsigned long long v17;  // rcx
    char v18;  // bpl
    unsigned long v19;  // r12
    void* v20;  // rdx
    void* v21;  // rbx
    unsigned long long v22;  // rax

    v16 = 171798691843;
    if (!a0->field_19 || (int)uucore::features::signals::ignore_interrupts(a0, a1, a2, v17) == 134)
    {
        v18 = a0->field_1b;
        if (v18 != 4 || (int)uucore::features::signals::enable_pipe_errors(a0, a1, a2, v17) == 134)
        {
            v19 = a0->field_10;
            *((unsigned long long *)&v1) = a0->field_8;
            v2 = a0->field_8 + v19 * 24;
            v3 = a0;
            v6.collect(&(unsigned long long)v1);
            if ((char)(((0 ^ *((long long *)&v6)) & (0 ^ -(*((long long *)&v6)))) >> 63))
                return v13;
            v12 = *((long long *)&v6);
            v13 = v7;
            v14 = v9;
            (unsigned long long)v1.to_vec("'standard output'src/uu/tee/src/tee.rs: \nstdin: ", 17);
            v8 = v3;
            *((int128_t *)&v6) = *((int128_t *)&v0);
            v4 = std::io::stdio::stdout().new();
            v5 = &g_4ea430;
            *((int128_t *)&v1) = (int128_t)v6;
            v3 = v8;
            v12.insert(&(unsigned long long)v1);
            v3 = v14;
            memcpy(&(unsigned long long)v1, &v12, 16);
            v5 = v18;
            v4 = 0;
            v10 = std::io::stdio::stdin().new();
            v11 = &g_4ea498;
            if (a0->field_1a)
            {
                uu_tee::ensure_stdout_not_broken(&v6);
                if ((char)v6)
                {
                    v16 = v7;
                }
                else
                {
                    if (((char)(&v6)[1] & 1) || v3 != 1)
                        goto LABEL_45d0a0;
                    v16 = 0;
                }
                core::ptr::drop_in_place<uu_tee::NamedReader>(v10, &g_4ea498);
            }
            else
            {
LABEL_45d0a0:
                if (((char)std::io::copy::generic_copy(&v10, &(unsigned long long)v1) & 1))
                {
                    v21 = v20;
                    if ((char)v20.kind() != 40)
                        goto LABEL_45d0fa;
                    core::ptr::drop_in_place<std::io::error::Error>(v20);
                }
                if (v9 == v19)
                {
                    v22 = (unsigned long long)v1.flush();
                    if (v22)
                    {
                        core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(v22);
                    }
                    else
                    {
                        core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(0);
                        v16 = 0;
                    }
                }
                v21 = 0;
LABEL_45d0fa:
                core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(v21);
                core::ptr::drop_in_place<uu_tee::NamedReader>(v10, &g_4ea498);
            }
            core::ptr::drop_in_place<uu_tee::MultiWriter>(&(unsigned long long)v1);
        }
    }
    return v16;
}
