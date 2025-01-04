fn uu_numfmt::parse_unit_size(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i64;  // [bp-0xc0], Other Possible Types: Result<struct8, struct1>, struct24, struct17
    let v1: i64;  // [sp-0xb8]
    let v2: i192;  // [sp-0x90], Other Possible Types: struct24
    let v3: i64;  // [sp-0x68]
    let v4: i64;  // [sp-0x60]
    let v5: i64;  // [sp-0x58]
    let v6: i8;  // [sp-0x50]
    let v7: i192;  // [sp-0x48]
    let v9: i64;  // rbp
    let v10: i64;  // rax
    let v11: i64;  // rdx
    let v12: i64;  // rdx
    let v14: i64;  // rax

    v0 = struct17 {
        field_0: a1
        field_8: a1 + a2
        field_16: 0
    };
    v2 = <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v0);
    v9 = *((&v2 as &char + 16) as &i64);
    v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v9, a1, a2);
    if !v10 {
        core::str::slice_error_fail(); /* do not return */
    }
    if v9 {
        v0 = alloc::str::<impl str>::repeat("0", v9);
        if alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(v1, *((&v0 as &char + 16) as &i64), *((&v2 as &char + 8) as &i64), *((&v2 as &char + 16) as &i64)) as i8 {
            goto LABEL_4c01f3;
        } else {
            goto LABEL_4c01b0;
        }
    } else {
LABEL_4c01b0:
        if !(uu_numfmt::parse_unit_size_suffix(v10, v11, v12) == 1) {
            goto LABEL_4c01f3;
        }
        v14 = *((&v2 as &char + 16) as &i64);
        if !v14 {
            *((a0 + 8) as &i64) = v11;
            goto LABEL_4c028d;
        }
        v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((&v2 as &char + 8) as &i64), v14);
        if v0 {
LABEL_4c01f3:
            v3 = 0;
            v4 = a1;
            v5 = a2;
            v6 = 1;
            v7 = format!("invalid unit size: {:?}", &v3);
            *((a0 + 16) as &i64) = *((&v7 as &char + 16) as &i64);
            *(a0 as &i192) = v7;
        } else {
            *((a0 + 8) as &i64) = v1 * v11;
LABEL_4c028d:
            *(a0 as &i64) = 0x8000000000000000;
        }
    }
    return;
}
