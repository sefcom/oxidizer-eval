long long fish::wutil::wcstoi::wcstoi_impl(unsigned long long a0, unsigned long long a1, struct_0 *a2, unsigned long long *a3)
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x50], Other Possible Types: unsigned long long
    char v2;  // [bp-0x48], Other Possible Types: unsigned long long
    uint128_t v3;  // [bp-0x40]
    char v5;  // bpl
    unsigned long v6;  // rax
    void* v7;  // rdx
    unsigned long long v8;  // rcx
    unsigned long long v9;  // rdi
    unsigned int v10;  // edx
    unsigned long long v11;  // rdx
    unsigned int v12;  // ecx
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rax
    unsigned int v15;  // edx
    unsigned int v16;  // edx

    v5 = 0.lt(0);
    fish::wutil::wcstoi::parse_radix(&v0, a0, a1, a2->field_0, a2->field_4, ~(a2->field_8 | v5) & 1);
    v6 = v2;
    if ((char)v6 == 2)
    {
        v7 = v0 * 0x100;
        v8 = 1;
        goto LABEL_12ecacf;
    }
    v9 = v0;
    *(a3) = v1;
    if (((char)v6 & 1))
    {
        if (!v9)
        {
            v0 = &g_14c1418;
            v1 = 1;
            v2 = 8;
            v3 = 0;
            core::panicking::panic_fmt(&v0, &g_14c1428); /* do not return */
        }
        if (v5)
        {
            v6 = v9.from();
            if (!((char)v6 & 1))
                goto LABEL_12ecb47;
            v6 = v10;
            v12 = ~((int)-(v11).from());
LABEL_12ecb19:
            v8 = v12 & 1;
            v7 = 0;
        }
        else
        {
            v13 = v9;
            v14 = 4294967295.to_u64();
            v6 = v14 - v13;
            if (v14 < v13)
            {
LABEL_12ecb47:
                v8 = 1;
                v7 = 0;
LABEL_12ecacf:
            }
            else if (((char)v6 + 1.from() & 1))
            {
                v6 = v15;
                v7 = 0;
                v8 = 0;
            }
            else
            {
                core::option::expect_failed("value should be in rangeradix cannot be 0/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/os/fd/raw.rs", 24, &g_14c1458); /* do not return */
            }
        }
        return v6 * 0x100000000 | v7 | v8;
    }
    v6 = v16;
    v12 = ~((char)v9.from());
    goto LABEL_12ecb19;
}
