fn fd::filter::time::TimeFilter::from_str(a0: u64, a1: u64) -> long long {
    let v0: Result<struct12, struct8>;  // [bp-0x168], Other Possible Types: u128
    let v1: struct16;  // [bp-0x164]
    let v2: Option<struct8>;  // [bp-0x158], Other Possible Types: struct40, struct48
    let v3: struct24;  // [bp-0x150], Other Possible Types: struct40
    let v4: Result<struct12, struct8>;  // [bp-0x128], Other Possible Types: u128
    let v5: u32;  // [bp-0x120]
    let v6: struct32;  // [bp-0x108], Other Possible Types: struct40, u32
    let v7: struct16;  // [bp-0xe0]
    let v8: Result<struct64, struct8>;  // [bp-0xd0]
    let v9: iNone;  // [bp-0xc8]
    let v10: iNone;  // [bp-0xb8]
    let v11: iNone;  // [bp-0xa8]
    let v12: iNone;  // [bp-0x98]
    let v13: struct40;  // [bp-0x88]
    let v14: u128;  // [bp-0x58]
    let v15: iNone;  // [bp-0x48]
    let v16: iNone;  // [bp-0x38]
    let v17: iNone;  // [bp-0x28]
    let v19: std::time::SystemTime;  // r14, Other Possible Types: struct8
    let v20: u64;  // rdx
    let v22: core::option::Option<&str>;  // rax
    let v24: u64;  // r15
    let v27: u64;  // r14
    let v29: &mut [u8];  // rax:rdx
    let v30: core::result::Result<u64, core::num::error::ParseIntError>;  // rax:rdx

    v19 = a0;
    v8 = jiff::span::parse_iso_or_friendly(a0, a1);
    match v8 {
        Err(_) => {
            v4 = jiff::fmt::temporal::DateTimeParser::parse_timestamp(a0, a1);
            match v4 {
                Err(_) => {
                    v0 = jiff::fmt::temporal::DateTimeParser::parse_datetime(a0, a1);
                    match v0 {
                        Err(_) => {
                            v6 = 0;
                            v29 = core::char::methods::encode_utf8_raw(64, &v6 as u64, v20);
                            v22 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v29.data_ptr, v29.length, a0, a1) as u64;
                            if let Some(_) = v22 {
                                v30 = core::num::<impl u64>::from_ascii_radix(&v0 as u8, v22, v20);
                                if let Ok(_) = v0 as u8 {
                                    v19 = <std::time::SystemTime as core::ops::arith::Add<core::time::Duration>>::add(None, None, v3, 0) as u64;
                                }
                            }
                        },
                        Ok(_) => {
                            v7 = v1;
                            <jiff::tz::timezone::repr::Repr as core::clone::Clone>::clone(v24);
                            v6 = jiff::tz::timezone::TimeZone::into_ambiguous_zoned(v24, &v7);
                            v2 = jiff::tz::ambiguous::AmbiguousZoned::later(&v6);
                            if let None = v2 {
                                v13 = v3;
                                v19 = jiff::zoned::<impl core::convert::From<jiff::zoned::Zoned> for std::time::SystemTime>::from(&v13);
                            }
                        },
                    }
                },
                Ok(_) => {
                    v19 = jiff::timestamp::<impl core::convert::From<jiff::timestamp::Timestamp> for std::time::SystemTime>::from(v5, *((&v4 as &char + 16) as &i32) as u32 as u64);
                },
            }
        },
        Ok(_) => {
            v17 = v12;
            v16 = v11;
            v15 = v10;
            v14 = v9;
            v6 = fd::filter::time::now();
            v2 = jiff::zoned::Zoned::checked_sub(&v6, &v14);
            if !(v2.field_0 as i8 & 1) {
                v4 = *(&v2.field_8 as &i128) as u128;
                v27 = *((&v2.field_16 as &char + 8) as &i64);
                v0 = v2.field_32;
                v2 = struct40 {
                    field_0: v4
                    field_16: v27
                    field_32: <UNKNOWN>
                };
                v19 = jiff::zoned::<impl core::convert::From<jiff::zoned::Zoned> for std::time::SystemTime>::from(&v2);
            }
        },
    }
    return v19;
}
