long long uu_touch::parse_date(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    unsigned long long v2;  // [bp-0xb0]
    unsigned long long v3;  // [bp-0xa8]
    unsigned long long v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x98]
    unsigned long long v6;  // [bp-0x90]
    unsigned long long v7;  // [bp-0x88]
    void* v8;  // [bp-0x80]
    unsigned long long v9;  // [bp-0x78]
    unsigned int v10[1][2];  // [bp-0x64]
    unsigned int v11[1][2];  // [bp-0x58]
    unsigned int v12;  // [bp-0x4c]
    void* v13;  // [bp-0x48]
    char v14;  // [bp-0x40]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rax
    char *v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // rdx

    v10.parse_from_str(a2, a3, "%a %b %e %H:%M:%S %Y%Y-%m-%d %H:%M:%S%Y-%m-%d %H:%M:%S.%f%Y-%m-%d %H:%M%Y-%m-%d %H:%M %ztouch-error-invalid-date-ts-format.60`DateTime - TimeDelta` overflowed%Y%m%d%H%M.%S%Y%m%d%H%Mtouch-error-invalid-date-format/dev/stdout`DateTime + TimeDelta` overflowed", 20);
    if (v10[0])
    {
        v16 = uu_touch::datetime_to_filetime(&v10);
        goto LABEL_5b653c;
    }
    else
    {
        v0 = "%Y-%m-%d %H:%M:%S%Y-%m-%d %H:%M:%S.%f%Y-%m-%d %H:%M%Y-%m-%d %H:%M %ztouch-error-invalid-date-ts-format.60`DateTime - TimeDelta` overflowed%Y%m%d%H%M.%S%Y%m%d%H%Mtouch-error-invalid-date-format/dev/stdout`DateTime + TimeDelta` overflowed/root/.cargo/registr";
        v1 = 17;
        v2 = "%Y-%m-%d %H:%M:%S.%f%Y-%m-%d %H:%M%Y-%m-%d %H:%M %ztouch-error-invalid-date-ts-format.60`DateTime - TimeDelta` overflowed%Y%m%d%H%M.%S%Y%m%d%H%Mtouch-error-invalid-date-format/dev/stdout`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crate";
        v3 = 20;
        v4 = "%Y-%m-%d %H:%M%Y-%m-%d %H:%M %ztouch-error-invalid-date-ts-format.60`DateTime - TimeDelta` overflowed%Y%m%d%H%M.%S%Y%m%d%H%Mtouch-error-invalid-date-format/dev/stdout`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557";
        v5 = 14;
        v6 = "%Y-%m-%d %H:%M %ztouch-error-invalid-date-ts-format.60`DateTime - TimeDelta` overflowed%Y%m%d%H%M.%S%Y%m%d%H%Mtouch-error-invalid-date-format/dev/stdout`DateTime + TimeDelta` overflowed/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.4";
        v7 = 17;
        v8 = 0;
        v9 = 4;
        while (true)
        {
            v17 = v0.next();
            if (!v17)
                break;
            v11.parse_from_str(a2, a3, v17, v18);
            if (v11[0])
            {
                a0->field_8 = uu_touch::datetime_to_filetime(&v11);
                a0->field_10 = v18;
                a0->field_0 = 9223372036854775812;
                return (unsigned long long)core::ptr::drop_in_place<core::array::iter::IntoIter<&str,4_usize>>();
            }
        }
        core::ptr::drop_in_place<core::array::iter::IntoIter<&str,4_usize>>();
        v19 = a2.parse_from_str(a3, "%Y-%m-%d", 8);
        if (((char)v19 & 1))
        {
            v0 = a2;
            v1 = a2 + a3;
            v20 = v0.next();
            if (v20 && *(v20) == 64)
            {
                v21 = 1.get(a2, a3);
                if (!v21)
                    core::str::slice_error_fail(a2, a3, 1, a3, &g_7705a8); /* do not return */
                ::0x5b19f0::core::num::<impl i64>::from_str_radix(&v0, v21, a2);
                if (!(!(char)v0))
                    goto LABEL_5b66bd;
                a0->field_8 = v1;
                a0->field_10 = 0;
            }
            else
            {
LABEL_5b66bd:
                parse_datetime::parse_datetime_at_date(&v0, a1, a2, a3);
                if (v0 != 9223372036854775810)
                {
                    v0.drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>();
                    v22 = a0->field_8.to_vec(a2, a3);
                    a0->field_0 = 0x8000000000000000;
                    return v22;
                }
                a0->field_8 = uu_touch::datetime_to_filetime(&v1);
                a0->field_10 = v18;
                a0->field_0 = 9223372036854775812;
                return (unsigned long long)v0.drop_in_place<core::result::Result<chrono::datetime::DateTime<chrono::offset::fixed::FixedOffset>,parse_datetime::ParseDateTimeError>>();
            }
        }
        else
        {
            v12 = v19 >> 32;
            v13 = 0;
            v14.offset_from_local_datetime(1, &v12);
            v0.and_then(&v14, &v12);
            v14.unwrap(&v0, &g_770590);
            v16 = uu_touch::datetime_to_filetime(&v14);
LABEL_5b653c:
            a0->field_8 = v16;
            a0->field_10 = v23;
        }
        a0->field_0 = 9223372036854775812;
        return 9223372036854775812;
    }
}
