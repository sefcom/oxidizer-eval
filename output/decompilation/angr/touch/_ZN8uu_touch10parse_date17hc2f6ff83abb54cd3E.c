long long uu_touch::parse_date(struct_0 *a0, unsigned long long a1, char *a2, unsigned long long a3)
{
    void* v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    unsigned long long v2;  // [bp-0xb0]
    unsigned long long v3;  // [bp-0xa8]
    unsigned long long v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x98]
    unsigned long long v6;  // [bp-0x90]
    unsigned long long v7;  // [bp-0x88]
    unsigned long long v8;  // [bp-0x80]
    unsigned long long v9;  // [bp-0x78]
    char v10;  // [bp-0x64]
    int v11;  // [bp-0x58]
    unsigned int v12;  // [bp-0x4c]
    void* v13;  // [bp-0x48]
    unsigned int v14[2][2];  // [bp-0x40]
    char *v16;  // rdi
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdx
    unsigned long long v19;  // r8
    unsigned long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rdx

    v10.parse_from_str(a2, a3, "%a %b %e %H:%M:%S %Y%Y-%m-%d %H:%M:%SZ%Y-%m-%dT%H:%M:%SZ%Y-%m-%dT%H:%M:%S%Y-%m-%d %H:%M:%S%Y-%m-%d %H:%M%Y%m%d%H%M.%S%Y%m%d%H%M%Y%m%dUTC%#z%#z", 20);
    if (*((int *)&v10))
    {
        v16 = &v10;
LABEL_53ab07:
        v20 = uu_touch::datetime_to_filetime(v16);
        goto LABEL_53ab0c;
    }
    else
    {
        v0 = 0;
        v1 = 4;
        v2 = "%Y-%m-%d %H:%M:%S%Y-%m-%d %H:%M%Y%m%d%H%M.%S%Y%m%d%H%M%Y%m%dUTC%#z%#z";
        v3 = 17;
        v4 = "%Y-%m-%d %H:%M:%S.%f%a %b %e %H:%M:%S %Y%Y-%m-%d %H:%M:%SZ%Y-%m-%dT%H:%M:%SZ%Y-%m-%dT%H:%M:%S%Y-%m-%d %H:%M:%S%Y-%m-%d %H:%M%Y%m%d%H%M.%S%Y%m%d%H%M%Y%m%dUTC%#z%#z";
        v5 = 20;
        v6 = "%Y-%m-%d %H:%M%Y%m%d%H%M.%S%Y%m%d%H%M%Y%m%dUTC%#z%#z";
        v7 = 14;
        v8 = "%Y-%m-%d %H:%M %z%Y%m%d%H%MUTC%z%Y%m%d%H%M %z%Y%m%d%H%MZ%z%Y-%m-%d %H:%M:%S.%f%a %b %e %H:%M:%S %Y%Y-%m-%d %H:%M:%SZ%Y-%m-%dT%H:%M:%SZ%Y-%m-%dT%H:%M:%S%Y-%m-%d %H:%M:%S%Y-%m-%d %H:%M%Y%m%d%H%M.%S%Y%m%d%H%M%Y%m%dUTC%#z%#z";
        v9 = 17;
        if (v0.next())
        {
            do
            {
                v11.parse_from_str(a2, a3, v17, v19);
                if ((int)v11)
                {
                    v16 = &v11;
                    goto LABEL_53ab07;
                }
                v17 = v0.next();
                v18 = v18;
            } while (v17);
        }
        v21 = a2.parse_from_str(a3, "%Y-%m-%d", 8);
        if (!((char)v21 & 1))
        {
            v12 = v21 >> 32;
            v13 = 0;
            v14.offset_from_local_datetime(1, &v12);
            v0.and_then(&v14, &v12);
            v14.unwrap(&v0);
            v20 = uu_touch::datetime_to_filetime(&v14);
LABEL_53ab0c:
            a0->field_8 = v20;
            a0->field_10 = v24;
        }
        else if (a3 && *(a2) == 64)
        {
            v22 = 1.get(a2, a3);
            if (!v22)
                core::str::slice_error_fail(a2, a3, 1, a3, &g_679ec0); /* do not return */
            ::0x5302b0::core::num::<impl i64>::from_ascii_radix(&v0, v22, a2);
            if ((char)v0)
                goto LABEL_53ac5b;
            a0->field_8 = v1;
            a0->field_10 = 0;
        }
        else
        {
LABEL_53ac5b:
            parse_datetime::parse_datetime_at_date(&v0, a1, a2, a3);
            if (v0 != 9223372036854775810)
            {
                v0.drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>();
                v23 = a0->field_8.to_vec(a2, a3);
                a0->field_0 = 0x8000000000000000;
                return v23;
            }
            a0->field_8 = uu_touch::datetime_to_filetime(&v1);
            a0->field_10 = v18;
            a0->field_0 = 9223372036854775812;
            return (unsigned long long)v0.drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>();
        }
        a0->field_0 = 9223372036854775812;
        return 9223372036854775812;
    }
}
