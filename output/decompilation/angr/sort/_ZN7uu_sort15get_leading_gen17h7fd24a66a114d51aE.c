long long uu_sort::get_leading_gen(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x90]
    void* v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]
    char *v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    void* v11;  // [bp-0x38]
    char *v13;  // r15
    char *v14;  // rdx
    unsigned long long v15;  // rax
    char *v16;  // r13
    unsigned long v17;  // r13
    unsigned long long v18;  // rax
    struct_0 *v19;  // rax
    unsigned int v20;  // edx
    char v21;  // bl
    char v22;  // r13b
    unsigned int v23;  // edx
    struct_1 *v24;  // rax
    unsigned int v25;  // eax
    struct_2 *v26;  // rax

    v13 = core::str::<impl str>::trim_start_matches(a0, a1);
    v0 = a1 - v14;
    v1 = 0;
    v2 = 3;
    v3 = "infnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDECstandard outputwrite failed: ";
    v4 = 3;
    v5 = "-inflineNoneshim";
    v6 = 4;
    v7 = "nanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDECstandard outputwrite failed: ";
    v8 = 3;
    if (v1.next())
    {
        do
        {
            v17 = v16;
            if (v17)
            {
                if (v17 < v14)
                {
                    if (v13[v17] <= 191)
                        continue;
                }
                else
                {
                    if (v17 != v14)
                        continue;
                }
            }
            v18 = v17.get(v13, v14);
            if (!v18)
            {
                core::str::slice_error_fail(v13, v14, 0, v17, &g_58d3a8); /* do not return */
            }
            else if ((char)::0x4b46b0::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v18, v14, v15, v17))
            {
                return v0;
            }
            v15 = v1.next();
            v16 = v14;
        } while (v15);
    }
    v11 = 0;
    v9 = v13;
    v10 = v13 + v14;
    itertools::peek_nth::peek_nth(&v1, &v9);
    v19 = v1.peek_nth(0);
    if (v19 && (v19->field_8 == 45 || v19->field_8 == 43))
        v1.next();
    v1.next();
    if ((unsigned int)v14 != 0x110000)
    {
        do
        {
            v23 = v20;
            if (v23 - 48 < 10)
                continue;
            if (v23 == 46)
            {
                if ((v21 & 1))
                {
                    core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&v1);
                    return v0;
                }
                v21 = 1;
                if (!(v22 & 1))
                    continue;
                goto LABEL_4d6437;
            }
            else if ((v23 & 4294967263) == 69 && !(v22 & 1))
            {
                v24 = v1.peek_nth(0);
                if (!v24)
                {
                    core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&v1);
                    return v0;
                }
                v25 = v24->field_8;
                if (v25 != 45 && v25 != 43)
                {
                    v22 = 1;
                    if (v25 - 48 >= 10)
                    {
                        core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&v1);
                        return v0;
                    }
                }
                else
                {
                    v26 = v1.peek_nth(2);
                    if (!v26)
                    {
                        core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&v1);
                        return v0;
                    }
                    else if (v26->field_8 - 48 <= 9)
                    {
                        v1.next();
                        v22 = 1;
                    }
                    else
                    {
                        core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&v1);
                        return v0;
                    }
                }
            }
            else
            {
LABEL_4d6437:
                core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&v1);
                return v0;
            }
            v1.next();
            (unsigned int)v14 = (unsigned int)v14;
        } while ((unsigned int)v14 != 0x110000);
    }
    core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&v1);
    return v0;
}
