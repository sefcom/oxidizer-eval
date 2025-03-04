fn uu_numfmt::parse_unit_size(a0: &Result<struct24, struct8>, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [bp-0xc0], Other Possible Types: Result<struct8, struct1>, struct17
    let v1: i64;  // [sp-0xb8]
    let v2: struct24;  // [sp-0x90]
    let v3: i64;  // [sp-0x68]
    let v4: i64;  // [sp-0x60]
    let v5: i64;  // [sp-0x58]
    let v6: i8;  // [sp-0x50]
    let v7: String;  // [sp-0x48]
    let v9: i64;  // rbp
    let v11: i64;  // rdx
    let v12: i64;  // rax

    v0 = struct17 {
        field_0: a1
        field_8: a1 + a2
        field_16: 0
    };
    v2 = <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v0);
    v9 = v2.field_16;
    if !v9 {
LABEL_4c01b0:
        if uu_numfmt::parse_unit_size_suffix(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v9, a1, a2), v11) == 1 {
            v12 = v2.field_16;
            if !v12 {
                *((a0 + 8) as &unsigned long) = v11;
            }
            v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((&v2.field_0 as &char + 8) as &i64), v12);
            if !v0 as i8 {
                return Err(struct8 {
                    field_0: v1 * v11
                });
            }
        }
    } else {
        v0 = alloc::str::<impl str>::repeat("0", v9);
        if !alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(v1, v0.field_16, *((&v2.field_0 as &char + 8) as &i64), v2.field_16) as i8 {
            goto LABEL_4c01b0;
        }
    }
    v3 = 0;
    v4 = a1;
    v5 = a2;
    v6 = 1;
    v7 = format!("invalid unit size: {}", &v3);
    return v7;
}
