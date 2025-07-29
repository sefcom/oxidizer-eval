long long uu_cp::platform::linux::copy_on_write(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5, char a6, unsigned long long a7, unsigned long long a8, char a9)
{
    unsigned int v0;  // [bp-0xbc]
    char v1;  // [bp-0xbc]
    char v2;  // [bp-0xbc]
    char v3;  // [bp-0xb8], Other Possible Types: unsigned long long
    char v4;  // [bp-0xb8]
    unsigned long long v5;  // [bp-0xb0], Other Possible Types: char
    char v6;  // [bp-0xb0]
    char v7;  // [bp-0xa8], Other Possible Types: unsigned long long
    char v8;  // [sp-0xa0]
    char v9;  // [bp-0x9f]
    char v10;  // [bp-0x9e]
    char v11;  // [bp-0x9d]
    char v12;  // [bp-0x9c]
    int v13;  // [bp-0x98], Other Possible Types: char
    int v14;  // [bp-0x68], Other Possible Types: char
    int v15;  // [bp-0x58], Other Possible Types: char
    char v16;  // [bp-0x48]
    unsigned long v17;  // rdi
    unsigned long long v19;  // rax
    char v20;  // r13b
    char v21;  // r12b
    unsigned long long v22;  // rax
    unsigned long long v23;  // r14
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rax

    v17 = a6;
    if (!a5)
    {
        if ((char)v17 != 1)
        {
            uucore::mods::locale::get_message(&a0->field_8, "cp-error-reflink-always-sparse-auto", 35);
            a0->field_0 = 9223372036854775811;
            return a0;
        }
        v0 = 0;
        v23 = uu_cp::platform::linux::clone(a1, a2, a3, a4, 0);
        v20 = 2;
        v21 = 1;
        if (!(!v23))
            goto LABEL_4ec40b;
    }
    else if (a5 == 1)
    {
        if (!(char)v17)
        {
            if (a9)
            {
                v24 = uu_cp::platform::linux::copy_stream(a1, a2, a3, a4);
                if (v24)
                {
                    v0 = (unsigned int)v24 & 0xffffff00 | 3;
                    v20 = 4;
                    v21 = 2;
                    goto LABEL_4ec40b;
                }
                else
                {
                    v21 = 2;
                    v20 = 4;
                    goto LABEL_4ec4b9;
                }
            }
            else
            {
                v3 = a1;
                v7 = a2;
                uu_cp::platform::linux::handle_reflink_auto_sparse_always(&v8, a1, a2, a3, a4);
                v5 = v8;
                if (v8)
                {
                    v21 = 2;
                    v20 = 4;
                    v0 = 0;
LABEL_4ec327:
                    v22 = uu_cp::platform::linux::clone(v3, v7, a3, a4, 2);
                    goto LABEL_4ec3f4;
                }
                else
                {
                    v0 = v9;
                    if (!(v12 == 1))
                        goto LABEL_4ec327;
                    v22 = uu_cp::platform::linux::clone(v3, v7, a3, a4, 1);
                    goto LABEL_4ec3f4;
                }
            }
        }
        if ((char)v17 == 1)
        {
            if (!a9)
            {
                v3 = a1;
                v7 = a2;
                uu_cp::platform::linux::handle_reflink_auto_sparse_auto(&v8, a1, a2, a3, a4);
                v5 = v8;
                if (v8)
                {
                    v21 = 1;
                    v20 = 4;
                    v0 = 0;
LABEL_4ec2cb:
                    v22 = uu_cp::platform::linux::clone(v3, v7, a3, a4, 1);
                    goto LABEL_4ec3f4;
                }
                else
                {
                    v0 = v9;
                    if (!(v12 == 3))
                        goto LABEL_4ec2cb;
                    v22 = uu_cp::platform::linux::clone(v3, v7, a3, a4, 3);
                    goto LABEL_4ec3f4;
                }
            }
            v19 = uu_cp::platform::linux::copy_stream(a1, a2, a3, a4);
            if (v19)
            {
                v20 = 4;
                v21 = 1;
                v0 = (unsigned int)v19 & 0xffffff00 | 4;
                goto LABEL_4ec40b;
            }
            else
            {
                v21 = 1;
                v0 = 4;
                v20 = 4;
            }
        }
        else
        {
            if (!(!a9))
                goto LABEL_4ec11e;
            uu_cp::platform::linux::handle_reflink_auto_sparse_never(&v8, a1, a2);
            v3 = v8;
            v1 = v9;
            v5 = v10;
            v7 = v11;
            v23 = uu_cp::platform::linux::clone(a1, a2, a3, a4, 1);
            v0 = (!v4 ? v2 : 0);
            core::ptr::drop_in_place<core::result::Result<(uu_cp::CopyDebug,uu_cp::platform::linux::CopyMethod),std::io::error::Error>>(v4, *((long long *)&v13));
            if (!(!v23))
                goto LABEL_4ec40b;
        }
    }
    else if ((char)v17)
    {
        if ((char)v17 == 1)
        {
            if (!(!a9))
                goto LABEL_4ec11e;
            v3 = a1;
            v7 = a2;
            uu_cp::platform::linux::handle_reflink_never_sparse_auto(&v8, a1, a2, a3, a4);
            v5 = v8;
            if (v8)
            {
                v20 = 1;
                v0 = 0;
                v21 = 1;
                goto LABEL_4ec37a;
            }
            else
            {
                v0 = v9;
                if (v12 == 3)
                {
                    v22 = uu_cp::platform::linux::sparse_copy_without_hole(v3, v7, a3, a4);
                    goto LABEL_4ec3f4;
                }
                else
                {
LABEL_4ec37a:
                    v25 = std::fs::copy(v3, v7, a3, a4);
                    goto LABEL_4ec3c2;
                }
            }
        }
        if (a9)
        {
LABEL_4ec11e:
            v26 = uu_cp::platform::linux::copy_stream(a1, a2, a3, a4);
            if (v26)
            {
                v0 = (unsigned int)v26 & 0xffffff00 | 3;
                v21 = 1;
                v20 = 1;
                goto LABEL_4ec40b;
            }
            else
            {
                v20 = 1;
                v0 = 3;
                v21 = 1;
            }
        }
        else
        {
            v7 = a4;
            v5 = a3;
            uu_cp::platform::linux::handle_reflink_auto_sparse_never(&v8, a1, a2);
            v3 = v8;
            v0 = (v3 ? 0 : v9);
            if (std::fs::copy(a1, a2, v5, v7))
            {
                v27 = *((long long *)&v13);
                goto LABEL_4ec3d8;
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<(uu_cp::CopyDebug,uu_cp::platform::linux::CopyMethod),std::io::error::Error>>(v4, *((long long *)&v13));
            }
        }
    }
    else if (a9)
    {
        v24 = uu_cp::platform::linux::copy_stream(a1, a2, a3, a4);
        if (v24)
        {
            v0 = (unsigned int)v24 & 0xffffff00 | 3;
            v20 = 1;
            v21 = 2;
            goto LABEL_4ec40b;
        }
        else
        {
            v21 = 2;
            v20 = 1;
LABEL_4ec4b9:
            v0 = (unsigned int)v24 & 0xffffff00 | 3;
        }
    }
    else
    {
        v3 = a1;
        v7 = a2;
        uu_cp::platform::linux::handle_reflink_never_sparse_always(&v8, a1, a2, a3, a4);
        v5 = v8;
        if (v8)
        {
            v21 = 2;
            v20 = 1;
            v0 = 0;
            goto LABEL_4ec3df;
        }
        v0 = v9;
        if (v12 == 1)
        {
            v25 = std::fs::copy(v3, v7, a3, a4);
LABEL_4ec3c2:
            if (v25)
            {
                v27 = *((long long *)&v13);
LABEL_4ec3d8:
                core::ptr::drop_in_place<core::result::Result<(uu_cp::CopyDebug,uu_cp::platform::linux::CopyMethod),std::io::error::Error>>(v6, v27);
LABEL_4ec40b:
                uu_cp::platform::linux::copy_on_write::{{closure}}(&v8, a7, a8, v23);
                v28 = *((long long *)&v8);
                memcpy(&v14, &v13, 16);
                memcpy(&v15, &(char)v13, 16);
                memcpy(&v16, &(char)v13, 16);
                if (v28 != 9223372036854775820)
                {
                    *((int128_t *)((char *)&a0->field_18 + 8)) = *((int128_t *)&v16);
                    *((void*)&(&a0->padding_9)[1]) = v15;
                    *((void*)&a0->field_8) = v14;
                    a0->field_0 = v28;
                    return a0;
                }
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<(uu_cp::CopyDebug,uu_cp::platform::linux::CopyMethod),std::io::error::Error>>(v6, (long long)v13);
            }
        }
        else
        {
LABEL_4ec3df:
            v22 = uu_cp::platform::linux::sparse_copy(v3, v7, a3, a4);
LABEL_4ec3f4:
            v23 = v22;
            core::ptr::drop_in_place<core::result::Result<(uu_cp::CopyDebug,uu_cp::platform::linux::CopyMethod),std::io::error::Error>>(v5, (long long)v13);
            if (!(!v23))
                goto LABEL_4ec40b;
        }
    }
    a0->field_8 = v0;
    a0->padding_9[0] = v20;
    a0->padding_9[1] = v21;
    a0->field_0 = 9223372036854775820;
    return a0;
}
