long long uu_cp::platform::linux::copy_on_write(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5, char a6, unsigned long long a7, unsigned long long a8, char a9, char a10)
{
    char v0;  // [bp-0x70], Other Possible Types: unsigned long long
    char v1;  // [bp-0x68], Other Possible Types: unsigned long long
    char v2;  // [bp-0x60], Other Possible Types: unsigned long long
    char v3;  // [bp-0x5e]
    char v4;  // [bp-0x5d]
    char v5;  // [bp-0x5c]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    char v8;  // [bp-0x41]
    unsigned long long v9;  // [bp-0x40]
    unsigned long long v10;  // [bp-0x38]
    char v11;  // r12b
    char v12;  // r13b
    char v13;  // bpl
    unsigned long long v14;  // rax
    char v15;  // al

    if (a5)
    {
        if (a5 == 1)
        {
            if (a6)
            {
                if (a6 != 1 && !a10)
                {
                    v9 = a7;
                    v10 = a8;
                    uu_cp::platform::linux::handle_reflink_auto_sparse_never(&v2, a1, a2);
                    v8 = v2;
                    v0 = v3;
                    v1 = v4;
                    v14 = uu_cp::platform::linux::clone(a1, a2, a3, a4, 1);
                    goto LABEL_49bef9;
                }
                if (a10)
                {
                    if (!((char)uu_cp::platform::linux::copy_stream(a1, a2, a3, a4, a9) & 1))
                    {
                        v11 = 4;
                        v12 = 1;
                        v13 = 4;
                    }
                    else
                    {
                        v9 = a7;
                        v10 = a8;
                        v2 = v9;
                        v6 = v10;
                        v7 = v14;
                        return a0.from(&(char)v2);
                    }
                }
                else
                {
                    v9 = a7;
                    v10 = a8;
                    v1 = a1;
                    v0 = a2;
                    uu_cp::platform::linux::handle_reflink_auto_sparse_auto(&v2, a1, a2, a3, a4);
                    if (v2)
                    {
                        v12 = 1;
                        v11 = 4;
LABEL_49bdd7:
                        v14 = uu_cp::platform::linux::clone(v1, v0, a3, a4, 1);
                        goto LABEL_49bef6;
                    }
                    else
                    {
                        if (v5 != 3)
                            goto LABEL_49bdd7;
                        v14 = uu_cp::platform::linux::clone(v1, v0, a3, a4, 3);
                        goto LABEL_49bef6;
                    }
                }
            }
            else if (!a10)
            {
                v9 = a7;
                v10 = a8;
                v1 = a1;
                v0 = a2;
                uu_cp::platform::linux::handle_reflink_auto_sparse_always(&v2, a1, a2, a3, a4);
                if (v2)
                {
                    v12 = 2;
                    v11 = 4;
LABEL_49be2f:
                    v14 = uu_cp::platform::linux::clone(v1, v0, a3, a4, 2);
                    goto LABEL_49bef6;
                }
                else
                {
                    if (v5 != 1)
                        goto LABEL_49be2f;
                    v14 = uu_cp::platform::linux::clone(v1, v0, a3, a4, 1);
                    goto LABEL_49bef6;
                }
            }
            else if (!((char)uu_cp::platform::linux::copy_stream(a1, a2, a3, a4, a9) & 1))
            {
                v13 = 3;
                v11 = 4;
                v12 = 2;
            }
            else
            {
                v9 = a7;
                v10 = a8;
                v2 = v9;
                v6 = v10;
                v7 = v14;
                return a0.from(&(char)v2);
            }
        }
        else
        {
            if (a6)
            {
                if (a6 == 1)
                {
                    if (a10)
                        goto LABEL_49bc4a;
                    v9 = a7;
                    v10 = a8;
                    v1 = a1;
                    v0 = a2;
                    uu_cp::platform::linux::handle_reflink_never_sparse_auto(&v2, a1, a2, a3, a4);
                    if (v2)
                    {
                        v11 = 1;
                        v12 = 1;
                        goto LABEL_49be7e;
                    }
                    if (v5 == 3)
                    {
                        v14 = uu_cp::platform::linux::sparse_copy_without_hole(v1, v0, a3, a4);
                        goto LABEL_49bef6;
                    }
                    else
                    {
LABEL_49be7e:
                        v15 = std::fs::copy(v1, v0, a3, a4);
                        goto LABEL_49bec2;
                    }
                }
                else
                {
                    if (!a10)
                    {
                        v9 = a7;
                        v10 = a8;
                        v1 = a4;
                        v0 = a3;
                        uu_cp::platform::linux::handle_reflink_auto_sparse_never(&v2, a1, a2);
                        v15 = std::fs::copy(a1, a2, v0, v1);
                        goto LABEL_49bec2;
                    }
LABEL_49bc4a:
                    if (((char)uu_cp::platform::linux::copy_stream(a1, a2, a3, a4, a9) & 1))
                    {
                        v9 = a7;
                        v10 = a8;
                        v2 = v9;
                        v6 = v10;
                        v7 = v14;
                        return a0.from(&(char)v2);
                    }
                    v13 = 3;
                    v12 = 1;
                    v11 = 1;
                }
            }
            else
            {
                if (!a10)
                {
                    v9 = a7;
                    v10 = a8;
                    v1 = a1;
                    v0 = a2;
                    uu_cp::platform::linux::handle_reflink_never_sparse_always(&v2, a1, a2, a3, a4);
                    if (v2)
                    {
                        v12 = 2;
                        v11 = 1;
                        goto LABEL_49bee1;
                    }
                    if (v5 == 1)
                    {
                        v15 = std::fs::copy(v1, v0, a3, a4);
LABEL_49bec2:
                        if ((v15 & 1))
                        {
                            core::ptr::drop_in_place<core::result::Result<(uu_cp::CopyDebug,uu_cp::platform::linux::CopyMethod),std::io::error::Error>>(&v2);
                            v2 = v9;
                            v6 = v10;
                            v7 = v14;
                            return a0.from(&(char)v2);
                        }
                        core::ptr::drop_in_place<core::result::Result<(uu_cp::CopyDebug,uu_cp::platform::linux::CopyMethod),std::io::error::Error>>(&v2);
                    }
                    else
                    {
LABEL_49bee1:
                        v14 = uu_cp::platform::linux::sparse_copy(v1, v0, a3, a4);
LABEL_49bef6:
LABEL_49bef9:
                        core::ptr::drop_in_place<core::result::Result<(uu_cp::CopyDebug,uu_cp::platform::linux::CopyMethod),std::io::error::Error>>(&v2);
                        if (v14)
                        {
                            v2 = v9;
                            v6 = v10;
                            v7 = v14;
                            return a0.from(&(char)v2);
                        }
                    }
                }
                else if (!((char)uu_cp::platform::linux::copy_stream(a1, a2, a3, a4, a9) & 1))
                {
                    v13 = 3;
                    v11 = 1;
                    v12 = 2;
                }
                else
                {
                    v9 = a7;
                    v10 = a8;
                    v2 = v9;
                    v6 = v10;
                    v7 = v14;
                    return a0.from(&(char)v2);
                }
            }
        }
    }
    else
    {
        if (a6 == 1)
        {
            v9 = a7;
            v10 = a8;
            v14 = uu_cp::platform::linux::clone(a1, a2, a3, a4, 0);
            v11 = 2;
            v12 = 1;
            if (v14)
            {
                v2 = v9;
                v6 = v10;
                v7 = v14;
                return a0.from(&(char)v2);
            }
        }
        else
        {
            return a0.from("`--reflink=always` can be used only with --sparse=autocopy offload: , reflink: , sparse detection: unknownnoyesavoidedunsupportedzerosSEEK_HOLESEEK_HOLE + zeros", 54);
        }
    }
    a0->field_8 = v13;
    a0->field_9 = v11;
    a0->field_a = v12;
    a0->field_0 = 9223372036854775820;
    return 9223372036854775820;
}
