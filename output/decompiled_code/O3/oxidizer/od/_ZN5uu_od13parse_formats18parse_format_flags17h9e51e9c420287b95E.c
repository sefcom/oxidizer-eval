fn uu_od::parse_formats::parse_format_flags(a0: &Result<struct24, struct32>, a1: u32, a2: u32) -> u64 {
    let v1: i128;  // [sp-0x198]
    let v3: i64;  // [sp-0x170], Other Possible Types: struct16
    let v4: i64;  // [sp-0x168]
    let v5: i64;  // [sp-0x160]
    let v6: struct24;  // [bp-0x158], Other Possible Types: struct33, i8
    let v7: i8;  // [bp-0x150]
    let v8: i64;  // [sp-0x148]
    let v11: i8;  // [bp-0x130]
    let v17: i64;  // [sp-0x100]
    let v18: i64;  // [sp-0xf8]
    let v19: i64;  // [sp-0xf0]
    let v30: i64;  // r15
    let v33: i64;  // r13
    let v34: i64;  // rbp
    let v37: struct8;  // rax
    let v62: i64;  // rcx

    v3 = 0;
    v4 = 8;
    v5 = 0;
    v17 = a1;
    v18 = a1 + a2 * 24;
    v19 = 1;
    v30 = &v7;
    v33 = &v11;
    v34 = &v6;
    v19 = 0;
    v37 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::nth(0x1);
    if (0 & 1) {
        v6 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v62 = a0;
        *((v62 + 24) as &i64) = v8;
        *((v62 + 8) as &i128) = v1;
        *(v62 as &i64) = 1;
        return a0;
    }
    if !v5 {
        v6 = struct33 {
            field_0: _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h64be8d56f8dc029eE
            field_16: g_541ae0
            field_32: 0
        };
        v3 = alloc::vec::Vec<T,A>::push(&v6);
    }
    a0 = a0;
    *((a0 + 24) as &i64) = v5;
    *((a0 + 8) as &i128) = v3;
    *(a0 as &i64) = 0;
    return a0;
}
