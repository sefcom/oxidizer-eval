long long uu_cp::is_forbidden_to_copy_to_same_file(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[104], unsigned int a5)
{
    char v0;  // [bp-0xc9]
    unsigned int v1;  // [bp-0xb4]
    char v2;  // [bp-0xb0]
    char v3;  // [bp-0x70]
    unsigned long long v5;  // rax
    unsigned long v6;  // rbx
    char v7;  // cl
    unsigned long long v8;  // rbp
    char v9;  // dl
    unsigned int v10;  // ebp
    unsigned int v11;  // r14d
    unsigned long long v12;  // r15
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx

    v1 = a5;
    v0 = a0.is_symlink(a1);
    v5 = a2.is_symlink(a3);
    v6 = a4[89];
    v7 = 1;
    if (!(char)v6 && (!(char)v1 || !a4[88]))
        v7 = v0 & (char)v5 ^ 1;
    v8 = v5 & 4294967295;
    if (!(char)uucore::features::fs::paths_refer_to_same_file(a0, a1, a2, a3, v7))
        return 0;
    v9 = v8;
    if (!a4[101])
    {
LABEL_4dedfe:
        if (!(a4[103] == 1 & v9) && !!a4[103])
        {
            v10 = (unsigned int)v8 & 0xffffff00 | 1;
            if ((v0 & v9) != 1)
                return v10;
            v11 = (unsigned int)v6 & 255;
            v12 = a0.file_name(a1);
            v13 = a2.file_name(a3);
            if (v12)
            {
                if (v13 && (char)v12.equal(v14, v13, v14))
                    return v10;
            }
            else
            {
                if (!v13)
                    return v10;
            }
            return v11;
        }
    }
    else if (!a4[85] && !a4[84])
    {
        if (!(v0 & (char)v6 ^ 1) && !v9)
            goto LABEL_4dedfe;
    }
    else
    {
        if (v0)
        {
            if (!((char)v6 ^ 1) && !v9)
                goto LABEL_4dedfe;
        }
        else
        {
            if (!v9)
            {
                v2.components(a2, a3);
                v3.components(a0, a1);
                v9 = v8;
                if (!(!v2.eq(&v3)))
                    goto LABEL_4dedfe;
            }
        }
    }
    return 0;
}
