long long uu_cp::copydir::path_has_prefix::h072302cfc0a4b4bc(struct_0 *a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x78]
    char v1;  // [bp-0x70]
    char v2;  // [bp-0x68]
    unsigned long v3;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x58]
    unsigned long long v5;  // [sp-0x50]
    unsigned long v6;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x40]
    unsigned long long v8;  // [sp-0x38]
    unsigned long long v10;  // rax
    unsigned long long v12;  // rcx
    unsigned long long v13;  // rax

    uucore::features::fs::canonicalize::h231f0839fd3443a3(&v0, a1);
    v10 = *((long long *)&v0);
    if (v3 == 0x8000000000000000)
    {
        a0->field_8 = v4;
        a0->field_0 = 1;
        return v10;
    }
    v3 = v10;
    v4 = *((long long *)&v1);
    v5 = *((long long *)&v2);
    uucore::features::fs::canonicalize::h231f0839fd3443a3(&v0, a3, a4, 0, 2);
    v12 = *((long long *)&v0);
    v13 = *((long long *)&v1);
    if (v6 == 0x8000000000000000)
    {
        a0->field_8 = v7;
        a0->field_0 = 1;
    }
    else
    {
        v6 = v12;
        v7 = v13;
        v8 = *((long long *)&v2);
        a0->field_1 = std::path::Path::starts_with::h7d210f40af7d69ae(v4, v5, &v6);
        a0->field_0 = 0;
    }
    v10 = ::0x50ca30::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(&v3);
    return v10;
}
