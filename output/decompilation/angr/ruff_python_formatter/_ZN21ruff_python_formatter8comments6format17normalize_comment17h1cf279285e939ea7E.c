long long ruff_python_formatter::comments::format::normalize_comment(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0x98], Other Possible Types: char, unsigned int, unsigned long
    unsigned int v1;  // [bp-0x98]
    unsigned int v2;  // [bp-0x94]
    unsigned long long v3;  // [bp-0x90]
    char *v4;  // [bp-0x88], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v5;  // [bp-0x80]
    void* v6;  // [bp-0x78]
    char *v7;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x60]
    char *v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    unsigned long long v12;  // [bp-0x40]
    unsigned long long v13;  // [bp-0x38]
    unsigned long long v14;  // [bp-0x30]
    unsigned long long v16;  // rdx
    unsigned long long v17;  // r12
    unsigned long long v18;  // r13
    unsigned long long v19;  // r15
    unsigned long long v20;  // r14
    char *v21;  // rax
    char *v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax

    v17 = core::str::<impl str>::trim_end_matches(a1.text(a2, a3), v16);
    v18 = v16;
    ruff_python_formatter::comments::format::strip_comment_prefix(&v0, v17, a2);
    if (v0 == 4)
    {
        v19 = v3;
        v20 = v4;
        v11 = v19;
        v12 = v20;
        if (v20)
        {
            *((uint128_t *)&v0) = 2772985689069162972190926176288;
            v4 = 39;
            if ((char)v0.is_prefix_of(v19, v20))
            {
                *((unsigned long long *)&a0[8]) = 0x8000000000000000;
            }
            else
            {
                v1 = 0;
                if (!(char)core::slice::<impl [T]>::starts_with(v19, v20, ::0x6e6590::core::char::methods::encode_utf8_raw(160, &v1), v16))
                {
                    v23 = core::str::<impl str>::trim_start_matches(v19, v20);
                    goto LABEL_700211;
                }
                v13 = core::str::<impl str>::trim_start_matches(v19, v20);
                v14 = v16;
                if ((char)core::slice::<impl [T]>::starts_with(core::str::<impl str>::trim_start_matches(v13, v16), v16, "type:# ", 5))
                {
                    v21 = &v11;
                    goto LABEL_700283;
                }
                else
                {
                    v1 = 0;
                    if ((char)core::slice::<impl [T]>::starts_with(v13, v16, ::0x6e6590::core::char::methods::encode_utf8_raw(32, &v1), v16))
                    {
                        v21 = &v13;
LABEL_700283:
                        v7 = v21;
                        v8 = <&T as core::fmt::Display>::fmt;
                        v0 = &g_97cc78;
                        v3 = 1;
                        v6 = 0;
                        v22 = &v7;
                    }
                    else
                    {
                        v23 = 2.get(v19, v20);
                        if (!v23)
                            core::str::slice_error_fail(v19, v20, 2, v20, &g_97cc88); /* do not return */
LABEL_700211:
                        v7 = v23;
                        v8 = v24;
                        v9 = &v7;
                        v10 = <&T as core::fmt::Display>::fmt;
                        v0 = &g_97cc78;
                        v3 = 1;
                        v6 = 0;
                        v22 = &v9;
                    }
                    v4 = v22;
                    v5 = 1;
                    v25 = a0 + 8.map_or_else(&v1);
                    *((unsigned long long *)a0) = 0;
                    return v25;
                }
            }
        }
        else
        {
            *((unsigned long long *)&a0[8]) = 0x8000000000000000;
            v18 = 1;
            v17 = "#Didn't find expected comment token `#`crates/ruff_python_formatter/src/comments/map.rs";
        }
        v26 = 0;
    }
    else
    {
        v17 = v3;
        v18 = v4;
        *((unsigned int *)&a0[8]) = v0;
        *((unsigned int *)&a0[12]) = v2;
        v26 = 1;
    }
    *((unsigned long long *)&a0[16]) = v17;
    *((unsigned long long *)&a0[24]) = v18;
    *((unsigned long long *)a0) = v26;
    return v26;
}
