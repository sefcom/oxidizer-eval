long long uu_cp::is_forbidden_to_copy_to_same_file::h98a1a338c57edd66(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[79], char a5)
{
    char v0;  // [sp-0xba]
    char v1;  // [sp-0xb9]
    char v2;  // [bp-0xb0]
    char v3;  // [bp-0x70]
    char v5;  // r15b
    char v6;  // dl
    char v7;  // dl
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rcx
    unsigned long long v10;  // r8
    unsigned long long v11;  // r9
    unsigned long long v12;  // rax
    void* v13;  // rax

    v1 = std::path::Path::is_symlink::h6ab8b58756c51c6b(a0, a1);
    v5 = std::path::Path::is_symlink::h6ab8b58756c51c6b(a2, a3) & 255 & 4294967295;
    v0 = a4[65];
    if (!(char)uucore::features::fs::paths_refer_to_same_file::h31fd0e434c6b3374(a0, a1, a2, a3, 1))
        return 0;
    v6 = v1;
    if (a4[76])
    {
        if (!(!a4[60]) || !(!a4[61]))
        {
            if (!(!(!v0 & v6)) || !(!v5))
                return 0;
        }
        else
        {
            if (!(v6 == 1) || !(v0) || !(!v5))
                return 0;
        }
        if (!v6)
        {
            std::path::Path::components::h4f3217acf0fc8653(&v2, a2, a3);
            std::path::Path::components::h4f3217acf0fc8653(&v3, a0, a1);
            v7 = v1;
            if (!(char)::0x4fdeb0::_$LT$std..path..Components$u20$as$u20$core..cmp..PartialEq$GT$::eq::h5cac1ec2999e76da(&v2, &v3, v8, v9, v10, v11))
                return 0;
        }
    }
    v12 = a4[78];
    if (!(unsigned int)v12)
    {
        return 0;
    }
    else if ((unsigned int)v12 == 1)
    {
        if (v5)
            return 0;
        v13 = v12 | -0x100 | 1;
        return v13;
    }
    else
    {
        if (v0)
        {
            return v13;
        }
        else if (!(v7 & v5))
        {
            return v13;
        }
    }
}
