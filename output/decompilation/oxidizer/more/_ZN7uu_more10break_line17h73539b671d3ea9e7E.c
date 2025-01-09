fn uu_more::break_line(a0: &struct24, a1: u64, a2: u64, a3: u64) -> int {
    let v0: i64;  // [sp-0x168]
    let v1: i64;  // [sp-0x160]
    let v2: i64;  // [sp-0x158]
    let v3: struct16;  // [sp-0x150], Other Possible Types: i64
    let v4: i64;  // [sp-0x148]
    let v5: i64;  // [sp-0x140]
    let v6: struct24;  // [bp-0x138], Other Possible Types: i128
    let v8: i64;  // [sp-0x120]
    let v9: i64;  // [sp-0x110], Other Possible Types: struct24
    let v10: i64;  // [sp-0x100]
    let v11: i64;  // [sp-0xf0]
    let v12: i64;  // [sp-0xe0]
    let v13: i64;  // [sp-0xd8]
    let v14: i64;  // [sp-0xd0]
    let v15: i8;  // [sp-0xc8]
    let v16: i32;  // [sp-0xc4]
    let v17: i8;  // [sp-0xc0]
    let v18: i64;  // [sp-0xb8]
    let v19: i64;  // [sp-0xa8]
    let v20: i64;  // [sp-0x98]
    let v21: i64;  // [sp-0x88]
    let v22: i64;  // [sp-0x80]
    let v23: i64;  // [sp-0x78]
    let v24: i8;  // [sp-0x70]
    let v25: i32;  // [sp-0x6c]
    let v26: i8;  // [sp-0x68]
    let v27: i64;  // [sp-0x60]
    let v28: i64;  // [sp-0x58]
    let v29: i64;  // [sp-0x50]
    let v30: struct24;  // [bp-0x48]
    let v32: i64;  // r14
    let v34: i256;  // ymm0
    let v35: i256;  // ymm0
    let v36: i64;  // r14
    let v37: i64;  // rbp
    let v38: i64;  // rdx
    let v39: i64;  // rax
    let v40: i64;  // r14
    let v41: i64;  // rbp
    let v44: i64;  // rax

    v3 = 0;
    v4 = 8;
    v5 = 0;
    if unicode_width::str_width(a1, a2, 0) < a3 {
        v9 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
        v35 = v34 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9;
        *(&v6.field_0 as &struct24) = struct24 {
            field_0: v33
            field_16: v10
        };
        v3 = alloc::vec::Vec<T,A>::push(&v6);
        return struct24 {
            field_0: v34 as u128
            field_16: v5
        };
    }
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = a2;
    v14 = 0;
    v15 = 2;
    v16 = 268566529;
    v17 = 16;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = a2;
    v22 = a2;
    v23 = 0;
    v24 = 2;
    v25 = 268566529;
    v26 = 16;
    v27 = a1;
    v2 = a2;
    v28 = a2;
    v1 = a1;
    v29 = a1;
    v0 = 0;
    v8 = "src/uu/more/src/more.rs";
    v32 = 0;
    loop {
        v36 = v32;
        v37 = <unicode_segmentation::grapheme::Graphemes as core::iter::traits::iterator::Iterator>::next(&v9);
        if !v37 {
            break;
        }
        v39 = unicode_width::str_width(v37, v38, 0);
        v40 = v36 + v39;
        v32 = v40;
        if v40 > a3 {
            v41 = v37 - v29;
            v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v0, v41, v1, v2), v38);
            v35 = v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v6;
            *(&v30.field_0 as &struct24) = struct24 {
                field_0: v42
                field_16: v7
            };
            v3 = alloc::vec::Vec<T,A>::push(&v30);
            v0 = v41;
            v32 = v39;
        }
    }
    v44 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v0, v1, v2);
    if v44 {
        v9 = <T as alloc::slice::hack::ConvertVec>::to_vec(v44, v38);
        v35 = v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9;
        *(&v6.field_0 as &struct24) = struct24 {
            field_0: v45
            field_16: v10
        };
        v3 = alloc::vec::Vec<T,A>::push(&v6);
    }
    v8 = "src/uu/more/src/more.rs";
}
