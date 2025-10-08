long long uu_cp::construct_dest_path(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5, char a6, char a7)
{
    unsigned long long v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    unsigned long long v3;  // [bp-0x98]
    char v4;  // [bp-0x90]
    char *v5;  // [sp-0x88]
    unsigned long long v6;  // [bp-0x80]
    unsigned long long v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x70]
    unsigned long long v9;  // [bp-0x70]
    unsigned long long v10;  // [bp-0x68]
    char *v11;  // [bp-0x60]
    unsigned long long v12;  // [bp-0x58]
    void* v13;  // [bp-0x50]
    char v14;  // [bp-0x40]
    char v15;  // [bp-0x36]
    unsigned long long v16;  // rax
    unsigned long long v18;  // rsi
    char v19;  // dl
    unsigned long long v21;  // rax

    if ((a6 & 1) && (char)a3.is_dir(a4))
    {
        v1 = 1;
        v2 = a3;
        v3 = a4;
        v4 = 1;
        v5 = &v1;
        v6 = <os_display::Quoted as core::fmt::Display>::fmt;
        v9 = &g_55eae8;
        v10 = 2;
        v13 = 0;
        v11 = &v5;
        v12 = 1;
        (&a0->field_0)[1].map_or_else(&v9);
        v16 = 9223372036854775811;
    }
    else
    {
        if ((a7 & 1))
        {
            if (!(char)a3.is_dir(a4))
                return a0.from("with --parents, the destination must be a directory/", 51);
            if (a5)
                goto LABEL_4a0d02;
            (char)v8.components(a1, v0);
            if (v15)
            {
                v18 = "/";
                goto LABEL_4a0d5d;
            }
            else
            {
                v19 = (char)v11 < 5;
                v18 = ((char)v11 < 5 ? "/" : 1);
                goto LABEL_4a0d5d;
            }
        }
        if (a5)
        {
LABEL_4a0d02:
            std::sys::pal::unix::os::split_paths::bytes_to_path(&(char)v5, a3, a4);
            goto LABEL_4a0db1;
        }
        else
        {
            v21 = a1.parent(a2);
            if (!v21)
            {
                if (v21)
                    goto LABEL_4a0d5b;
LABEL_4a0d5a:
                v18 = a1;
            }
            else
            {
                if (!v21)
                    goto LABEL_4a0d5a;
LABEL_4a0d5b:
                v18 = v21;
            }
LABEL_4a0d5d:
            uu_cp::localize_to_target(&(char)v8, v18, v19, a1, a2, a3, a4);
            v16 = v8;
            memcpy(&(char)v1, &(char)v10, 16);
            v3 = v12;
            if (v8 == 9223372036854775820)
            {
                memcpy(&(char)v5, &(char)v1, 16);
                v7 = v3;
LABEL_4a0db1:
                *((unsigned long long *)((char *)&a0->field_8 + 8)) = v7;
                *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v5);
                v16 = 9223372036854775820;
            }
            else
            {
                *((long long *)&a0->field_20) = *((long long *)&v14);
                *((int128_t *)&a0->field_18) = *((int128_t *)&v13);
                *((unsigned long long *)((char *)&a0->field_8 + 8)) = v3;
                *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v1);
            }
        }
    }
    a0->field_0 = v16;
    return v16;
}
