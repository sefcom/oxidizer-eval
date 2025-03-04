fn uu_more::break_line(a0: &struct24, a1: u64, a2: u64, a3: u64) -> int {
    let v0: i64;  // [sp-0x168]
    let v1: i64;  // [sp-0x160]
    let v2: i64;  // [sp-0x158]
    let v3: struct16;  // [sp-0x150], Other Possible Types: unsigned long
    let v4: i64;  // [sp-0x140]
    let v5: struct24;  // [bp-0x138], Other Possible Types: int
    let v7: i64;  // [sp-0x120]
    let v8: struct24;  // [sp-0x110], Other Possible Types: unsigned long
    let v9: i64;  // [sp-0x100]
    let v10: i64;  // [sp-0xf0]
    let v11: i64;  // [sp-0xe0]
    let v12: i64;  // [sp-0xd8]
    let v13: i64;  // [sp-0xd0]
    let v14: i8;  // [sp-0xc8]
    let v15: i32;  // [sp-0xc4]
    let v16: i8;  // [sp-0xc0]
    let v17: i64;  // [sp-0xb8]
    let v18: i64;  // [sp-0xa8]
    let v19: i64;  // [sp-0x98]
    let v20: i64;  // [sp-0x88]
    let v21: i64;  // [sp-0x80]
    let v22: i64;  // [sp-0x78]
    let v23: i8;  // [sp-0x70]
    let v24: i32;  // [sp-0x6c]
    let v25: i8;  // [sp-0x68]
    let v26: i64;  // [sp-0x60]
    let v27: i64;  // [sp-0x58]
    let v28: i64;  // [sp-0x50]
    let v29: struct24;  // [bp-0x48]
    let v31: i64;  // r14
    let v34: iNone;  // ymm0
    let v35: i64;  // rbp
    let v36: i64;  // rdx
    let v37: i64;  // rax
    let v38: i64;  // rbp
    let v40: i64;  // rbp
    let v41: i64;  // rax

    v3 = 0;
    v3 = 8;
    v4 = 0;
    if unicode_width::str_width(a1, a2, 0) < a3 {
        v8 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
        *(&v5.field_0 as &struct24) = struct24 {
            field_0: v32
            field_16: v9
        };
        v3 = alloc::vec::Vec<T,A>::push(&v5);
    } else {
        v8 = 0;
        v9 = 0;
        v10 = 0;
        v11 = 0;
        v12 = a2;
        v13 = 0;
        v14 = 2;
        v15 = 268566529;
        v16 = 16;
        v17 = 0;
        v18 = 0;
        v19 = 0;
        v20 = a2;
        v21 = a2;
        v22 = 0;
        v23 = 2;
        v24 = 268566529;
        v25 = 16;
        v26 = a1;
        v2 = a2;
        v27 = a2;
        v1 = a1;
        v28 = a1;
        v0 = 0;
        v7 = "src/uu/more/src/more.rs";
        v31 = 0;
        loop {
            v35 = <unicode_segmentation::grapheme::Graphemes as core::iter::traits::iterator::Iterator>::next(&v8);
            if !v35 {
                break;
            }
            v37 = unicode_width::str_width(v35, v36, 0);
            v31 += v37;
            if v31 <= a3 {
                continue;
            }
            v38 = v35 - v28;
            v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v0, v38, v1, v2), a2);
            v34 = v34 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v5 as u256;
            *(&v29.field_0 as &struct24) = struct24 {
                field_0: v39
                field_16: v6
            };
            v3 = alloc::vec::Vec<T,A>::push(&v29);
            v0 = v38;
            v31 = v37;
        }
        v40 = v2;
        if v0 != v40 {
            v41 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v0, v1, v40);
            if !v41 {
                v7 = "src/uu/more/src/more.rs";
            }
            v8 = <T as alloc::slice::hack::ConvertVec>::to_vec(v41, a2);
            *(&v5.field_0 as &struct24) = struct24 {
                field_0: v42
                field_16: v9
            };
            v3 = alloc::vec::Vec<T,A>::push(&v5);
        }
    }
    return struct24 {
        field_0: v43
        field_16: v4
    };
}
