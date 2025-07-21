fn uu_more::break_line(a1: i64, a2: i64, a3: i64) -> : struct24 {
    let a0: void*;  // rsi
    let v0: core::result::Result<(), std::io::error::Error>;  // [bp-0x168]
    let v1: u64;  // [bp-0x160]
    let v2: core::result::Result<(), std::io::error::Error>;  // [bp-0x158]
    let v3: struct24;  // [bp-0x150]
    let v4: struct16;  // [bp-0x150]
    let v5: struct16;  // [bp-0x150]
    let v6: struct16;  // [bp-0x150]
    let v7: struct24;  // [bp-0x138]
    let v8: struct24;  // [bp-0x138]
    let v9: u64;  // [bp-0x120]
    let v10: void*;  // [bp-0x110], Other Possible Types: struct24
    let v11: struct24;  // [bp-0x110]
    let v12: void*;  // [bp-0x100]
    let v13: void*;  // [bp-0xf0]
    let v14: void*;  // [bp-0xe0]
    let v15: core::result::Result<(), std::io::error::Error>;  // [bp-0xd8]
    let v16: void*;  // [bp-0xd0]
    let v17: u8;  // [bp-0xc8]
    let v18: u32;  // [bp-0xc4]
    let v19: u8;  // [bp-0xc0]
    let v20: void*;  // [bp-0xb8]
    let v21: void*;  // [bp-0xa8]
    let v22: void*;  // [bp-0x98]
    let v23: core::result::Result<(), std::io::error::Error>;  // [bp-0x88]
    let v24: u64;  // [bp-0x80]
    let v25: void*;  // [bp-0x78]
    let v26: u8;  // [bp-0x70]
    let v27: u32;  // [bp-0x6c]
    let v28: u8;  // [bp-0x68]
    let v29: u64;  // [bp-0x60]
    let v30: u64;  // [bp-0x58]
    let v31: u64;  // [bp-0x50]
    let v32: struct24;  // [bp-0x48]
    let v34: void*;  // r14
    let v35: u64;  // r14
    let v36: u64;  // rbp
    let v37: u32;  // rdx
    let v38: u64;  // rax
    let v40: u64;  // rbp
    let v42: u64;  // rbp
    let v44: i64;  // rbx

    v3 = struct24 {
        field_0: 0
        field_8: 8
        field_16: 0
    };
    if unicode_width::str_width(a0, a1, 0) < a2 {
        v10 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0, a1);
        v7 = v11;
        v4 = alloc::vec::Vec<T,A>::push(&v7);
    } else {
        v10 = 0;
        v12 = 0;
        v13 = 0;
        v14 = 0;
        v15 = a1;
        v16 = 0;
        v17 = 2;
        v18 = 268566529;
        v19 = 16;
        v20 = 0;
        v21 = 0;
        v22 = 0;
        v23 = a1;
        v24 = a1;
        v25 = 0;
        v26 = 2;
        v27 = 268566529;
        v28 = 16;
        v29 = a0;
        v2 = a1;
        v30 = a1;
        v1 = a0;
        v31 = a0;
        v0 = 0;
        v9 = "src/uu/more/src/more.rs";
        v34 = 0;
        loop {
            v35 = v34;
            v36 = <unicode_segmentation::grapheme::Graphemes as core::iter::traits::iterator::Iterator>::next(&v10);
            if !v36 {
                break;
            }
            v38 = unicode_width::str_width(v36, v37, 0);
            v34 = v35 + v38;
            if v34 <= a2 {
                continue;
            }
            v40 = v36 - v31;
            v7 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v0, v40, v1, v2) as u64, a1);
            v32 = v8;
            v5 = alloc::vec::Vec<T,A>::push(&v32);
            v0 = v40;
            v34 = v38;
        }
        v42 = v2;
        if v0 != v42 {
            v10 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v0, v1, v42) as u64, a1);
            v7 = struct24 {
                field_0: *(&v10.field_0 as &i128)
                field_16: 0
            };
            v6 = alloc::vec::Vec<T,A>::push(&v7);
        }
    }
    *((v44 + 16) as &i64) = 0;
    *(v44 as &i128) = *(&v3.field_0 as &i128);
    return;
}
