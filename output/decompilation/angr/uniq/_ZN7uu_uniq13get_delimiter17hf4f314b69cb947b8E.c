long long uu_uniq::get_delimiter(unsigned long long a0)
{
    struct struct_0 v0[8];  // [bp-0x58]
    char v1;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x48]
    char *v3;  // [bp-0x40]
    uint128_t v4;  // [bp-0x38]
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r14
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax

    v1.try_get_one(a0, _ZN7uu_uniq7options12ALL_REPEATED17hcf39646f1fef1878E, g_58c500);
    v6 = _ZN7uu_uniq7options12ALL_REPEATED17hcf39646f1fef1878E.unwrap(g_58c500, &v1).or_else(a0);
    if (!v6)
    {
        v13 = a0.contains_id(_ZN7uu_uniq7options5GROUP17hb84543885041a53aE, g_58c590);
        return v13 & 0xffffffffffffff00 | ((char)v13 ^ 1) * 2 + 2;
    }
    v7 = v6[1];
    v8 = v6[2];
    if ((char)v7.equal(v8, "appenduniq-help-groupgroup-methoduniq-help-check-charsNuniq-help-countuniq-help-ignore-caseuniq-help-repeateduniq-help-skip-charsuniq-help-skip-fieldsuniq-help-zero-terminatedinternal error: entered unreachable code: Should have been caught by possible val", 6))
        return 0;
    v9 = v7.equal(v8, "prependuniq-help-all-repeateddelimit-methodappenduniq-help-groupgroup-methoduniq-help-check-charsNuniq-help-countuniq-help-ignore-caseuniq-help-repeateduniq-help-skip-charsuniq-help-skip-fieldsuniq-help-zero-terminatedinternal error: entered unreachable co", 7);
    if ((char)v9)
        return v9 & 0xffffffffffffff00 | 1;
    v10 = v7.equal(v8, "separate", 8);
    if ((char)v10)
        return v10 & 0xffffffffffffff00 | 2;
    v11 = v7.equal(v8, "bothname", 4);
    if ((char)v11)
        return v11 & 0xffffffffffffff00 | 3;
    v12 = v7.equal(v8, "nonehelpNoneshimbothname", 4);
    if (!(char)v12)
    {
        v1 = &g_58be28;
        v2 = 1;
        v3 = &v0[0].field_0;
        v4 = 0;
        core::panicking::panic_fmt(&v1, &g_58be38); /* do not return */
    }
    return v12 & 0xffffffffffffff00 | 4;
}
