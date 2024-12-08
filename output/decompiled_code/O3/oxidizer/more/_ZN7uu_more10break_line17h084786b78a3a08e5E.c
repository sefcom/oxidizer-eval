fn uu_more::break_line(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64) -> int {
    let v0: i64;  // [sp-0x168]
    let v1: i64;  // [sp-0x160]
    let v2: i64;  // [sp-0x158]
    let v3: struct16;  // [sp-0x150], Other Possible Types: i128
    let v4: i64;  // [sp-0x148]
    let v5: i64;  // [sp-0x140]
    let v6: i128;  // [sp-0x138], Other Possible Types: struct24
    let v7: i64;  // [sp-0x128]
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
    let v30: i128;  // [sp-0x48]
    let v31: i64;  // [sp-0x38]
    let v34: i128;  // xmm0
    let v35: i256;  // ymm0
    let v36: i256;  // ymm0
    let v38: i64;  // rsi
    let v39: i64;  // rdx
    let v40: i64;  // rcx
    let v41: i64;  // r8
    let v42: i64;  // r9
    let v43: i64;  // rbp
    let v44: i64;  // rdx
    let v45: i64;  // rax
    let v46: i64;  // r14
    let v47: i64;  // rbp
    let v48: i64;  // rax
    let v49: i128;  // xmm0
    let v50: i64;  // rbp
    let v51: i64;  // rax
    let v52: i128;  // xmm0
    let v53: i128;  // xmm0

    v3 = 0;
    v4 = 8;
    v5 = 0;
    if unicode_width::str_width(a1, a2, 0) < a3 {
        v9 = <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2);
        v7 = v9.field_16;
        v34 = v9;
        v36 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34;
        v6 = v34;
        v3 = alloc::vec::Vec<T,A>::push(&v6);
    } else {
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
        loop {
            v43 = <unicode_segmentation::grapheme::Graphemes as core::iter::traits::iterator::Iterator>::next(&v9, v38, v39, v40, v41, v42);
            if !v43 {
                break;
            }
            v45 = unicode_width::str_width(v43, v44, 0);
            v46 = 0 + v45;
            if v46 > a3 {
                v47 = v43 - v29;
                v48 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v0, v47, v1, v2);
                if !v48 {
                    core::str::slice_error_fail(); /* do not return */
                }
                v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(v48, v44);
                v31 = v6.field_16;
                v49 = v6;
                v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49;
                v30 = v49;
                v3 = alloc::vec::Vec<T,A>::push(&v30);
                v0 = v47;
            }
        }
        v50 = v2;
        if v0 != v50 {
            v51 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v0, v1, v50);
            if !v51 {
                v8 = "src/uu/more/src/more.rs";
                core::str::slice_error_fail(); /* do not return */
            }
            v9 = <T as alloc::slice::hack::ConvertVec>::to_vec(v51, v44);
            v6.field_16 = v9.field_16;
            v52 = v9;
            v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52;
            v6 = v52;
            v3 = alloc::vec::Vec<T,A>::push(&v6);
        }
    }
    *((a0 + 16) as &i64) = v5;
    v53 = v3;
    *(a0 as &i128) = v53;
    return v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53;
}
