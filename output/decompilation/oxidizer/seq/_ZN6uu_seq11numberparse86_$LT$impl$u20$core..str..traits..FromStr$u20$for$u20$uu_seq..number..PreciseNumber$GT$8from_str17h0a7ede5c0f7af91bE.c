fn uu_seq::numberparse::<impl core::str::traits::FromStr for uu_seq::number::PreciseNumber>::from_str(a1: i64, a2: i64) -> : struct64 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0x198]
    let v1: struct56;  // [bp-0x70]
    let v2: u64;  // [bp-0x70]
    let v3: u64;  // [bp-0x68]
    let v4: u128;  // [bp-0x60]
    let v5: u64;  // [bp-0x50]
    let v6: u128;  // [bp-0x38]
    let v7: u64;  // [bp-0x28]
    let v9: u64;  // rdi
    let v10: u64;  // rsi
    let v11: i64;  // rax
    let v12: u64;  // rcx

    v1 = <uucore::features::extendedbigdecimal::ExtendedBigDecimal as uucore::features::parser::num_parser::ExtendedParser>::extended_parse(a1, a2);
    if v1.field_0 == 9223372036854775817 {
        v9 = v3;
        v10 = v1.field_16;
        v11 = &v1 as u8;
        v12 = (v9 < 9223372036854775813 ? 9223372036854775803 + v9 + 6 : 0);
        v0 = 6;
        if (*((&v0 + ((v12 & 63) >> 3)) as &i8) >> (v12 & 63 & 7) & 1) {
            return struct64 {
                field_0: 1
                field_8: 0
                field_16: v9
                field_24: v10
                field_32: *((&v1.field_16 as &char + 8) as &i128)
                field_48: v1.field_40
                field_56: 0
            };
        }
        v0 = 9;
        if !(*((&v0 + ((v12 & 63) >> 3)) as &i8) >> (v12 & 63 & 7) & 1) {
            return struct16 {
                field_0: 2
                field_8: 1
            };
        }
    } else if v1.field_0 + 9223372036854775803 != 3 {
        return struct16 {
            field_0: 2
            field_8: 0
        };
    }
    v7 = *((v11 + 16) as &i64);
    v6 = *(v11 as &i128);
    v2 = v9;
    v3 = v10;
    v4 = *(v11 as &i128);
    v5 = v7;
    uu_seq::numberparse::compute_num_digits(a0, a1, a2, &v2);
    return;
}
