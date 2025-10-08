long long fd::filter::time::TimeFilter::from_str(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x168], Other Possible Types: unsigned int
    unsigned long long v1;  // [bp-0x164]
    unsigned int v2;  // [bp-0x15c]
    int v3;  // [bp-0x158], Other Possible Types: char
    unsigned long long v4;  // [bp-0x150]
    unsigned long long v5;  // [bp-0x148]
    int v6;  // [bp-0x140], Other Possible Types: char
    char v7;  // [bp-0x138]
    unsigned long long v8;  // [bp-0x130]
    int v9;  // [bp-0x128], Other Possible Types: char
    unsigned long long v10;  // [bp-0x120]
    char v11;  // [bp-0x118]
    unsigned int v12;  // [bp-0x108], Other Possible Types: unsigned long long
    char v13;  // [bp-0xf8]
    unsigned long long v14;  // [bp-0xe0]
    unsigned int v15;  // [bp-0xd8]
    char v16;  // [bp-0xd0]
    int v17;  // [bp-0xc8]
    int v18;  // [bp-0xb8]
    int v19;  // [bp-0xa8]
    int v20;  // [bp-0x98]
    char v21;  // [bp-0x88]
    char v22;  // [bp-0x78]
    unsigned long long v23;  // [bp-0x68]
    int v24;  // [bp-0x58]
    int v25;  // [bp-0x48]
    int v26;  // [bp-0x38]
    int v27;  // [bp-0x28]
    unsigned long long v29;  // r14
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rax
    unsigned long long v32;  // rdx
    unsigned long long v33;  // r15
    unsigned long long v36;  // r14

    v29 = a0;
    jiff::span::parse_iso_or_friendly(&v16, a0, a1);
    if (*((int *)&v16) == 1)
    {
        v9.parse_timestamp(a0, a1);
        if (*((int *)&v9) != 1)
        {
            v29 = v10.from(*((int *)&v11));
            goto LABEL_5f4dab;
        }
        v0.parse_datetime(a0, a1);
        if (v0 == 1)
        {
            v12 = 0;
            v31 = ::0x5ccc90::core::char::methods::encode_utf8_raw(64, &v12).strip_prefix_of(v30, a0, a1);
            if (!v31)
                goto LABEL_5f4d49;
            ::0x5c5910::core::num::<impl u64>::from_ascii_radix(&v3, v31, v30);
            if (v3)
                goto LABEL_5f4d49;
            v29 = 0.add(0, v4, 0);
LABEL_5f4da3:
            core::ptr::drop_in_place<core::result::Result<jiff::civil::datetime::DateTime,jiff::error::Error>>(&v0);
LABEL_5f4dab:
            core::ptr::drop_in_place<core::result::Result<jiff::timestamp::Timestamp,jiff::error::Error>>(&v9);
        }
        else
        {
            v15 = v2;
            v14 = v1;
            if (((char)jiff::tz::system::get(jiff::tz::db::db()) & 1))
            {
                v12 = v32;
                core::ptr::drop_in_place<jiff::error::Error>(&v12);
                v33 = 2;
            }
            v33.clone();
            v12.into_ambiguous_zoned(v33, &v14);
            v3.later(&v12);
            if ((v3 & 1))
            {
                core::ptr::drop_in_place<core::result::Result<jiff::zoned::Zoned,jiff::error::Error>>(&v3);
                core::ptr::drop_in_place<jiff::tz::timezone::TimeZone>(v33);
            }
            else
            {
                v23 = v8;
                memcpy(&v22, &v6, 16);
                memcpy(&v21, &v4, 16);
                v29 = v21.from();
                core::ptr::drop_in_place<jiff::tz::timezone::TimeZone>(v33);
                goto LABEL_5f4da3;
            }
LABEL_5f4d49:
            core::ptr::drop_in_place<core::result::Result<jiff::civil::datetime::DateTime,jiff::error::Error>>(&v0);
            core::ptr::drop_in_place<core::result::Result<jiff::timestamp::Timestamp,jiff::error::Error>>(&v9);
LABEL_5f4d5b:
        }
    }
    else
    {
        v27 = v20;
        v26 = v19;
        v25 = v18;
        v24 = v17;
        fd::filter::time::now(&(char)v12);
        (char)v3.checked_sub(&(char)v12, &v24);
        if ((v3 & 1))
        {
            core::ptr::drop_in_place<core::result::Result<jiff::zoned::Zoned,jiff::error::Error>>(&(char)v3);
            core::ptr::drop_in_place<jiff::zoned::Zoned>(*((long long *)&v13));
            goto LABEL_5f4d5b;
        }
        else
        {
            *((int128_t *)&v9) = *((int128_t *)&v4);
            v36 = *((long long *)&v6);
            memcpy(&(char)v0, &v7, 16);
            core::ptr::drop_in_place<jiff::zoned::Zoned>(*((long long *)&v13));
            *((int128_t *)&v3) = (int128_t)v9;
            v5 = v36;
            *((int128_t *)&v6) = *((int128_t *)&v0);
            v29 = (char)v3.from();
        }
    }
    core::ptr::drop_in_place<core::result::Result<jiff::span::Span,jiff::error::Error>>(&v16);
    return v29;
}
