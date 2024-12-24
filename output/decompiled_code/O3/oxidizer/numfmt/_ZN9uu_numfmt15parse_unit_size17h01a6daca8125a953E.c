fn uu_numfmt::parse_unit_size(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i64;  // [bp-0xc0], Other Possible Types: struct17, Result<struct8, struct1>, struct24
    let v1: struct24;  // [sp-0x90], Other Possible Types: i192
    let v2: i64;  // [sp-0x68]
    let v3: i64;  // [sp-0x60]
    let v4: i64;  // [sp-0x58]
    let v5: i8;  // [sp-0x50]
    let v6: i192;  // [sp-0x48]
    let v8: i64;  // rbp
    let v9: i64;  // rax
    let v10: i64;  // rdx
    let v11: i64;  // rdx
    let v13: i64;  // rax

    v0 = struct17 {
        field_0: a1
        field_8: a1 + a2
        field_16: 0
    };
    v1 = <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v0);
    v8 = *((&v1 as &char + 16) as &i64);
    v9 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v8, a1, a2);
    if !v9 {
        core::str::slice_error_fail(); /* do not return */
    }
    if v8 {
        v0 = alloc::str::<impl str>::repeat("0", v8);
        if alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(v0.field_8, *((&v0 as &char + 16) as &i64), *((&v1 as &char + 8) as &i64), *((&v1 as &char + 16) as &i64)) as i8 {
            goto LABEL_4c0643;
        } else {
            goto LABEL_4c0600;
        }
    } else {
LABEL_4c0600:
        if !(uu_numfmt::parse_unit_size_suffix(v9, v10, v11) == 1) {
            goto LABEL_4c0643;
        }
        v13 = *((&v1 as &char + 16) as &i64);
        if !v13 {
            *((a0 + 8) as &i64) = v10;
            goto LABEL_4c06dd;
        }
        v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((&v1 as &char + 8) as &i64), v13);
        if v0 {
LABEL_4c0643:
            v2 = 0;
            v3 = a1;
            v4 = a2;
            v5 = 1;
            v6 = format!("invalid unit size: {:?}", &v2);
            *((a0 + 16) as &i64) = *((&v6 as &char + 16) as &i64);
            *(a0 as &i192) = v6;
        } else {
            *((a0 + 8) as &struct24) = v0.field_8 * v10;
LABEL_4c06dd:
            *(a0 as &i64) = 0x8000000000000000;
        }
    }
    return;
}
