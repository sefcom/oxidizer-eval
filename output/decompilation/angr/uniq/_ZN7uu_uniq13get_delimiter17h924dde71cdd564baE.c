long long uu_uniq::get_delimiter(unsigned long long a0)
{
    char v0;  // [bp-0x50]
    char v1;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x40]
    char *v3;  // [bp-0x38]
    uint128_t v4;  // [bp-0x30]
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r14
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax

    v1.try_get_one(a0, "all-repeatedcheck-charscountignore-caseskip-fieldsskip-charsuniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 12);
    v6 = "all-repeatedcheck-charscountignore-caseskip-fieldsskip-charsuniquezero-terminatedgroupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ".unwrap(12, &v1).or_else(a0);
    if (!v6)
    {
        v13 = a0.contains_id("groupfilessrc/uu/uniq/src/uniq.rsInvalid argument for : ", 5);
        return v13 & 0xffffffffffffff00 | ((char)v13 ^ 1) * 2 + 2;
    }
    v7 = v6[1];
    v8 = v6[2];
    if ((char)v7.equal(v8, "appendshow all items, separating groups with an empty line. [default: separate]group-methodcompare no more than N characters in linesNprefix lines by the number of occurrencesignore differences in case when comparingonly print duplicate linesavoid comparin", 6))
        return 0;
    v9 = v7.equal(v8, "prependprint all duplicate lines. Delimiting is done with blank lines. [default: none]delimit-methodappendshow all items, separating groups with an empty line. [default: separate]group-methodcompare no more than N characters in linesNprefix lines by the nu", 7);
    if ((char)v9)
        return v9 & 0xffffffffffffff00 | 1;
    v10 = v7.equal(v8, "separate\n       ", 8);
    if ((char)v10)
        return v10 & 0xffffffffffffff00 | 2;
    v11 = v7.equal(v8, "both", 4);
    if ((char)v11)
        return v11 & 0xffffffffffffff00 | 3;
    v12 = v7.equal(v8, "nonehelpNoneshimboth", 4);
    if (!(char)v12)
    {
        v1 = &g_4f5940;
        v2 = 1;
        v3 = &v0;
        v4 = 0;
        core::panicking::panic_fmt(&v1, &g_4f5950); /* do not return */
    }
    return v12 & 0xffffffffffffff00 | 4;
}
