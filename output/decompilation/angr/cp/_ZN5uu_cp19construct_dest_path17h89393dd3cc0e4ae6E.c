long long uu_cp::construct_dest_path(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5, char a6, char a7)
{
    int v0;  // [bp-0xe8], Other Possible Types: char
    unsigned long long v1;  // [bp-0xd8]
    unsigned long long v2;  // [bp-0xc8]
    unsigned long long v3;  // [bp-0xc0]
    unsigned long long v4;  // [bp-0xb8]
    char v5;  // [bp-0xb0]
    char v6;  // [bp-0xa8]
    char v7;  // [bp-0xa0]
    unsigned long long v8;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x90]
    int v10;  // [bp-0x88]
    char v11;  // [bp-0x78]
    char v12;  // [bp-0x6e]
    int v13;  // [bp-0x68]
    unsigned long long v14;  // [bp-0x58]
    char v15;  // [bp-0x50]
    unsigned long long v16;  // [bp-0x40]
    unsigned long long v18;  // rsi
    char v19;  // dl
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax

    if ((a6 & 1) && (char)a3.is_dir(a4))
    {
        v0.to_vec("dir/cp-error-with-parents-dest-must-be-dircp-error-cannot-overwrite-directory-with-non-directory  ()?", 3);
        v2 = 1;
        v3 = a3;
        v4 = a4;
        v5 = 1;
        v6.spec_to_string(&v2);
        v14 = v1;
        v13 = v0;
        memcpy(&v15, &v6, 16);
        v16 = v8;
        v6.from_iter(&v13);
        uucore::mods::locale::get_message_with_args(&(&a0->field_0)[1], "cp-error-cannot-overwrite-directory-with-non-directory  ()?", 54, &v6);
        a0->field_0 = 9223372036854775811;
        return 9223372036854775811;
    }
    if ((a7 & 1))
    {
        if (!(char)a3.is_dir(a4))
        {
            v20 = uucore::mods::locale::get_message(&(&a0->field_0)[1], "cp-error-with-parents-dest-must-be-dircp-error-cannot-overwrite-directory-with-non-directory  ()?", 38);
            a0->field_0 = 9223372036854775811;
            return v20;
        }
        if (!(!a5))
            goto LABEL_4dcbed;
        v6.components(a1, a2);
        if (v12)
        {
            v18 = "/cp-error-with-parents-dest-must-be-dircp-error-cannot-overwrite-directory-with-non-directory  ()?";
            goto LABEL_4dcc3d;
        }
        else
        {
            v19 = (char)v8 < 5;
            v18 = ((char)v8 < 5 ? "/cp-error-with-parents-dest-must-be-dircp-error-cannot-overwrite-directory-with-non-directory  ()?" : 1);
            goto LABEL_4dcc3d;
        }
    }
    else
    {
        if (a5)
        {
LABEL_4dcbed:
            std::sys::pal::unix::os::split_paths::bytes_to_path(&v0, a3, a4);
        }
        else
        {
            v21 = a1.parent(a2);
            if (!v21)
            {
                v18 = a1;
                if (!(!v21))
                    goto LABEL_4dcc3b;
LABEL_4dcc3a:
            }
            else
            {
                v18 = v21;
                if (!v21)
                    goto LABEL_4dcc3a;
LABEL_4dcc3b:
            }
LABEL_4dcc3d:
            uu_cp::localize_to_target(&v6, v18, v19, a1, a2, a3, a4);
            v22 = *((long long *)&v6);
            memcpy(&(char)v2, &v7, 16);
            v4 = v9;
            if (v22 != 9223372036854775820)
            {
                *((long long *)&a0->field_20) = *((long long *)&v11);
                *((void*)&a0->field_18) = v10;
                *((unsigned long long *)((char *)&a0->field_8 + 8)) = v4;
                *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v2);
                a0->field_0 = v22;
                return v22;
            }
            memcpy(&v0, &(char)v2, 16);
            v1 = v4;
        }
        v20 = v1;
        *((unsigned long long *)((char *)&a0->field_8 + 8)) = v1;
        *((void*)&(&a0->field_0)[1]) = v0;
        a0->field_0 = 9223372036854775820;
        return v20;
    }
}
