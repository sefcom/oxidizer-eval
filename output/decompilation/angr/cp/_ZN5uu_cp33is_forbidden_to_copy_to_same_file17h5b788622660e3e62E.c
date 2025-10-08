long long uu_cp::is_forbidden_to_copy_to_same_file(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[104], unsigned int a5)
{
    char v0;  // [bp-0xc9]
    unsigned int v1;  // [bp-0xb4]
    char v2;  // [bp-0xb0]
    char v3;  // [bp-0x70]
    char v5;  // al
    char v6;  // bl
    char v7;  // cl
    char v8;  // bpl
    char v9;  // cl
    char v10;  // cl
    unsigned long long v11;  // rax
    char v12;  // bpl
    unsigned long long v13;  // r15
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rax

    v1 = a5;
    v0 = a0.is_symlink(a1);
    v5 = a2.is_symlink(a3);
    v6 = a4[89];
    v7 = 1;
    if (!v6 && (!(char)v1 || !a4[88]))
        v7 = v0 & v5 ^ 1;
    v8 = v5;
    if (!(char)uucore::features::fs::paths_refer_to_same_file(a0, a1, a2, a3, v7))
        return 0;
    v9 = v8;
    v10 = v9;
    if (!a4[101])
    {
LABEL_4a2778:
        v11 = a4[103];
        if ((unsigned int)v11)
        {
            if ((unsigned int)v11 == 1)
            {
                if (!v10)
                    return 1;
            }
            else
            {
                if ((v10 & v0))
                {
                    v12 = v6;
                    v13 = a0.file_name(a1);
                    v14 = a2.file_name(a3);
                    if (v13)
                    {
                        if (v14)
                        {
                            v16 = v13.equal(v15, v14, v15);
                            if ((char)v16 || v12)
                                return (v16 & 0xffffffffffffff00 | (char)v16 | v12) & 0xffffffffffffff00 | 1;
                        }
                        else
                        {
                            v11 = v14;
                            if (v12)
                                return v11 & 0xffffffffffffff00 | 1;
                        }
                    }
                    else
                    {
                        v11 = v14 & 0xffffffffffffff00 | !v14 | v12;
                        if (!v14 || v12)
                            return v11 & 0xffffffffffffff00 | 1;
                    }
                }
                else
                {
                    return 1;
                }
            }
        }
    }
    else if (!a4[85] && !a4[84])
    {
        v10 = v9;
        if (!(v0 & v6 ^ 1) && !v10)
            goto LABEL_4a2778;
    }
    else if (v0)
    {
        v10 = v9;
        if (!(v6 ^ 1) && !v10)
            goto LABEL_4a2778;
    }
    else if (!v9)
    {
        v2.components(a2, a3);
        v3.components(a0, a1);
        v10 = v8;
        if (v2.eq(&v3))
            goto LABEL_4a2778;
    }
    return 0;
}
