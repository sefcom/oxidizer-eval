fn uu_numfmt::parse_unit_size(a0: &Result<struct24, struct8>, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [bp-0xc0], Other Possible Types: struct24, struct17, Result<struct8, struct1>
    let v1: i64;  // [sp-0xb8]
    let v2: i64;  // [bp-0xb0]
    let v3: i64;  // [sp-0xa8]
    let v4: i64;  // [sp-0xa0]
    let v5: struct24;  // [sp-0x90], Other Possible Types: i192
    let v6: i64;  // [sp-0x78]
    let v7: i64;  // [sp-0x70]
    let v8: i64;  // [sp-0x68]
    let v9: i64;  // [sp-0x60]
    let v10: i64;  // [sp-0x58]
    let v11: i8;  // [sp-0x50]
    let v15: i64;  // r15
    let v16: i64;  // rbp
    let v18: i64;  // rdx
    let v19: i64;  // rax

    v15 = a1;
    v0 = struct17 {
        field_0: a1
        field_8: a1 + a2
        field_16: 0
    };
    v5 = <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v0);
    v16 = *((&v5 as &char + 16) as &i64);
    if !v16 {
LABEL_4c01b0:
        if uu_numfmt::parse_unit_size_suffix(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v16, v15, a2), v18) == 1 {
            v19 = *((&v5 as &char + 16) as &i64);
            if !v19 {
                return Err(struct8 {
                    field_0: v18
                });
            }
            v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((&v5 as &char + 8) as &i64), v19);
            if !v0 {
                *((a0 + 8) as &i64) = v1 * v18;
            }
        }
    } else {
        v0 = alloc::str::<impl str>::repeat("0", v16);
        if !alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(v1, *((&v0 as &char + 16) as &i64), *((&v5 as &char + 8) as &i64), *((&v5 as &char + 16) as &i64)) as i8 {
            goto LABEL_4c01b0;
        }
    }
    v8 = 0;
    v9 = v15;
    v10 = a2;
    v11 = 1;
    v6 = &v8;
    v7 = <os_display::Quoted as core::fmt::Display>::fmt;
    v0 = "invalid unit size: ";
    v1 = 1;
    v4 = 0;
    v2 = &v6;
    v3 = 1;
    core::option::Option<T>::map_or_else();
    return Ok(struct24 {
        field_0: v12
        field_16: v13
    });
}
