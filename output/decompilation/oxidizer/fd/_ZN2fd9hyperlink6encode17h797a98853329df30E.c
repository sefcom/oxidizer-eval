fn fd::hyperlink::encode(a0: i64, a1: i704) -> long long {
    let v0: struct80;  // [bp-0x168]
    let v1: struct88;  // [bp-0x41]
    let v2: i64;  // [bp-0x40]
    let v3: u64;  // [bp-0x38]
    let v4: u64;  // [bp-0x30]
    let v5: &mut [u8];  // [bp-0x28]
    let v6: i64;  // [bp-0x20]
    let v7: u64;  // [bp-0x18]
    let v8: &str;  // [bp-0x10]
    let v10: u32;  // esi
    let v11: struct48;  // rax
    let v13: core::result::Result<(), core::fmt::Error>;  // rax

    v1 = a1;
    v10 = v1 as u32;
    if v1 - 48 >= 10 && (v1 & 223) - 65 > 25 {
        v11 = v10 - 45;
        if v11 as u32 <= 50 {
            v0 = 1125899906850823;
            if !(*((&v0.field_0 + ((v11 & 63) >> 3)) as &i8) >> (v11 as u8 & 63 & 7) & 1) {
                goto LABEL_5f66ef;
            }
        } else {
LABEL_5f66ef:
            if v10 != 126 {
                v2 = &v1;
                v3 = core::fmt::num::<impl core::fmt::UpperHex for i8>::fmt;
                v4 = "%";
                v5 = 1;
                v8 = "\x02";
                v6 = &v2;
                v7 = 1;
                return core::fmt::Formatter::write_fmt(*(a0 as &i64), *((a0 + 8) as &i64), &v4);
            }
        }
    }
    v13 = <core::fmt::Formatter as core::fmt::Write>::write_char(a0, v10) as u64;
    return *(&v13 as &i64);
}
