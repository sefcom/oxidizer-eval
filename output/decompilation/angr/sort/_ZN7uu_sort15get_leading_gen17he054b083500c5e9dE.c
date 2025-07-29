long long uu_sort::get_leading_gen(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    void* v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]
    char *v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    void* v11;  // [bp-0x38]
    char *v13;  // r15
    char *v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    struct_0 *v17;  // rax
    char v18;  // bpl
    struct_0 *v20;  // rax
    unsigned int v21;  // eax
    struct_0 *v22;  // rax

    v13 = core::str::<impl str>::trim_start_matches(a0, a1);
    v0 = a1 - v14;
    v1 = "infnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC";
    v2 = 3;
    v3 = "-inflineNoneshimname";
    v4 = 4;
    v5 = "nanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC";
    v6 = 3;
    v7 = 0;
    v8 = 3;
    while (true)
    {
        v15 = v1.next();
        if (!v15)
            break;
        if (v14)
        {
            if (v14 < v14)
            {
                if (*((char *)(v13 + v14)) <= 191)
                    continue;
            }
            else
            {
                if (!(v14 == v14))
                    continue;
            }
        }
        v16 = v14.get(v13, v14);
        if (!v16)
        {
            core::str::slice_error_fail(v13, v14, 0, v14, &g_670a00); /* do not return */
        }
        else if ((char)::0x508470::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v16, v14, v15, v14))
        {
            ::0x507300::core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>();
            return v0;
        }
    }
    ::0x507300::core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>();
    v11 = 0;
    v9 = v13;
    v10 = v13 + v14;
    itertools::peek_nth::peek_nth(&v1, &v9);
    v17 = v1.peek_nth(0);
    if (v17 && (v17->field_8 == 45 || v17->field_8 == 43))
        v1.next();
    while (true)
    {
        v1.next();
        if ((unsigned int)v14 == 0x110000)
            break;
        if ((unsigned int)v14 - 48 < 10)
            continue;
        if ((unsigned int)v14 == 46)
        {
            v18 = 1;
            if ((v18 & 1))
            {
                core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&v1);
                return v0;
            }
        }
        else if (((unsigned int)v14 & 4294967263) == 69)
        {
            v20 = v1.peek_nth(0);
            if (!v20)
            {
                core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&v1);
                return v0;
            }
            v21 = v20->field_8;
            if (v21 == 45 || v21 == 43)
            {
                v22 = v1.peek_nth(2);
                if (!v22)
                {
                    core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&v1);
                    return v0;
                }
                if (v22->field_8 - 48 <= 9)
                {
                    v1.next();
                }
                else
                {
                    core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&v1);
                    return v0;
                }
            }
            else if (v21 - 48 >= 10)
            {
                core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&v1);
                return v0;
            }
            while (true)
            {
                v1.next();
                if ((unsigned int)v14 == 0x110000)
                    break;
                if ((unsigned int)v14 - 48 >= 10)
                {
                    core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&v1);
                    return v0;
                }
            }
        }
        else
        {
            core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&v1);
            return v0;
        }
    }
    core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&v1);
    return v0;
}
