fn uu_more::break_line(a1: i64, a2: i64, a3: i64) -> : struct24 {
    let a0: void*;  // rsi
    let v0: core::result::Result<(), std::io::error::Error>;  // [bp-0x168]
    let v1: u64;  // [bp-0x160]
    let v2: core::result::Result<(), std::io::error::Error>;  // [bp-0x158]
    let v3: void*;  // [bp-0x150]
    let v4: struct16;  // [bp-0x150]
    let v5: struct16;  // [bp-0x150]
    let v6: struct16;  // [bp-0x150]
    let v7: u64;  // [bp-0x148]
    let v8: void*;  // [bp-0x140]
    let v9: u192;  // [bp-0x138], Other Possible Types: struct24
    let v10: u192;  // [bp-0x138]
    let v11: u64;  // [bp-0x120]
    let v12: struct24;  // [bp-0x110], Other Possible Types: void*
    let v13: void*;  // [bp-0x100], Other Possible Types: u192
    let v14: void*;  // [bp-0xf0]
    let v15: void*;  // [bp-0xe0]
    let v16: core::result::Result<(), std::io::error::Error>;  // [bp-0xd8]
    let v17: void*;  // [bp-0xd0]
    let v18: u8;  // [bp-0xc8]
    let v19: u32;  // [bp-0xc4]
    let v20: u8;  // [bp-0xc0]
    let v21: void*;  // [bp-0xb8]
    let v22: void*;  // [bp-0xa8]
    let v23: void*;  // [bp-0x98]
    let v24: core::result::Result<(), std::io::error::Error>;  // [bp-0x88]
    let v25: u64;  // [bp-0x80]
    let v26: void*;  // [bp-0x78]
    let v27: u8;  // [bp-0x70]
    let v28: u32;  // [bp-0x6c]
    let v29: u8;  // [bp-0x68]
    let v30: u64;  // [bp-0x60]
    let v31: u64;  // [bp-0x58]
    let v32: u64;  // [bp-0x50]
    let v33: u192;  // [bp-0x48]
    let v35: void*;  // r14
    let v36: u64;  // r14
    let v37: u64;  // rbp
    let v38: u32;  // rdx
    let v39: u64;  // rax
    let v41: u64;  // rbp
    let v43: u64;  // rbp
    let v45: i64;  // rbx

    v3 = 0;
    v7 = 8;
    v8 = 0;
    if unicode_width::str_width(a0, a1, 0) < a2 {
        v12 = <T as alloc::slice::hack::ConvertVec>::to_vec(a0, a1);
        v9 = v13;
        memcpy(&v9, &v12, 16);
        v4 = alloc::vec::Vec<T,A>::push(&v9);
    } else {
        v12 = 0;
        v13 = 0;
        v14 = 0;
        v15 = 0;
        v16 = a1;
        v17 = 0;
        v18 = 2;
        v19 = 268566529;
        v20 = 16;
        v21 = 0;
        v22 = 0;
        v23 = 0;
        v24 = a1;
        v25 = a1;
        v26 = 0;
        v27 = 2;
        v28 = 268566529;
        v29 = 16;
        v30 = a0;
        v2 = a1;
        v31 = a1;
        v1 = a0;
        v32 = a0;
        v0 = 0;
        v11 = "src/uu/more/src/more.rs";
        v35 = 0;
        loop {
            v36 = v35;
            v37 = <unicode_segmentation::grapheme::Graphemes as core::iter::traits::iterator::Iterator>::next(&v12);
            if !v37 {
                break;
            }
            v39 = unicode_width::str_width(v37, v38, 0);
            v35 = v36 + v39;
            if v35 <= a2 {
                continue;
            }
            v41 = v37 - v32;
            v9 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v0, v41, v1, v2) as u64, a1);
            v33 = v10;
            v5 = alloc::vec::Vec<T,A>::push(&v33);
            v0 = v41;
            v35 = v39;
        }
        v43 = v2;
        if v0 != v43 {
            v12 = <T as alloc::slice::hack::ConvertVec>::to_vec(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v0, v1, v43) as u64, a1);
            v9 = struct24 {
                field_0: <UNKNOWN>
                field_16: 0
            };
            memcpy(&v9, &v12, 16);
            v6 = alloc::vec::Vec<T,A>::push(&v9);
        }
    }
    *((v45 + 16) as &i64) = 0;
    *(v45 as &i128) = *(&v6.field_0 as &i128);
    return;
}
