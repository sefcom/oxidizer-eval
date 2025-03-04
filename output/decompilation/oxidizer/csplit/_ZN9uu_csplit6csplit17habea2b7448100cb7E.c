fn uu_csplit::csplit(a0: &Result<struct40, struct8>, a1: void*, a2: u32, a3: u32, a4: u64, a5: u32) -> u64 {
    let v0: iNone;  // [sp-0x1a8], Other Possible Types: struct40
    let v1: i64;  // [sp-0x198]
    let v2: i64;  // [sp-0x178], Other Possible Types: Result<struct40, struct24>, int
    let v3: i64;  // [sp-0x170]
    let v4: i64;  // [bp-0x168], Other Possible Types: int
    let v5: iNone;  // [sp-0x158]
    let v6: iNone;  // [sp-0x148]
    let v7: iNone;  // [sp-0x138]
    let v8: i64;  // [sp-0x128]
    let v9: struct1;  // [bp-0x120]
    let v10: i64;  // [sp-0x118]
    let v11: iNone;  // [sp-0x110]
    let v12: i64;  // [sp-0x100]
    let v13: i8;  // [sp-0xf8]
    let v14: i64;  // [sp-0xf0]
    let v15: i8;  // [sp-0xe8]
    let v16: i64;  // [sp-0xe0]
    let v17: i64;  // [sp-0xd8]
    let v18: i64;  // [sp-0xd0]
    let v19: i64;  // [sp-0xc8], Other Possible Types: struct8
    let v20: i64;  // [sp-0xa8]
    let v21: iNone;  // [sp-0xa0]
    let v22: i8;  // [sp-0x90]
    let v23: iNone;  // [sp-0x88]
    let v24: struct32;  // [sp-0x70]
    let v25: struct32;  // [sp-0x50]
    let v27: i8;  // dl
    let v28: i64;  // rax
    let v29: i64;  // rcx
    let v30: i64;  // rax
    let v31: i64;  // rsi
    let v32: i64;  // rdx
    let v33: iNone;  // xmm0
    let v34: i64;  // rax
    let v36: i64;  // rax
    let v37: i64;  // rax

    v12 = std::io::BufRead::lines(a4, a5 as u64);
    v13 = v27 & 1;
    v9 = struct1 {
        field_56: 0
    };
    v10 = 8;
    v11 = 0;
    v14 = 1;
    v15 = 0;
    v20 = a1;
    v21 = 0;
    v19 = 0x8000000000000000;
    v22 = 0;
    v2 = uu_csplit::patterns::get_patterns(a2, a3);
    v28 = v2;
    v0 = *((&v2 as &char + 8) as &i128);
    v1 = *((&v2 as &char + 24) as &i64);
    if v28 != 12 {
        v29 = *((&v2 as &char + 32) as &i64);
        *((a0 + 24) as &unsigned long) = v1;
        *((a0 + 8) as void*) = v0;
        *(a0 as &unsigned long) = v28;
        *((a0 + 32) as &unsigned long) = v29;
        return v37;
    }
    v0 = uu_csplit::do_csplit(&v19, &v23, &v9);
    if v0.field_0 as i32 == 12 {
        v15 = 1;
        v25 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v9);
        if v25.field_8 as i64 != 9223372036854775809 {
            v8 = v25.field_24;
            v7 = v25.field_8;
            if uu_csplit::SplitWriter::new_writer() as u64 {
                return v37;
            }
            v30 = v7 as i64;
            v31 = (&v7)[8] as i64;
            if v2 == 0x8000000000000000 {
                *(a0 as &i64) = 0;
                *((a0 + 8) as &unsigned long) = v3;
                return v37;
            }
            v32 = v8;
            v2 = v30;
            v3 = v31;
            v4 = v32;
            if uu_csplit::SplitWriter::writeln(v3, v32) as u64 {
                return v37;
            }
            v33 = *(&v9 as &i128);
            v6 = *(&v14 as &i128);
            v5 = *(&v12 as &i128);
            v4 = v11;
            v2 = v33;
            loop {
                v24 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v2);
                v34 = v24.field_8 as i64;
                if v34 == 9223372036854775809 {
                    break;
                }
                if v34 == 0x8000000000000000 {
                    *(a0 as &i64) = 0;
                    *((a0 + 8) as &unsigned long) = v17;
                    return v37;
                }
                v16 = v34;
                v17 = *((&v24.field_8 as &char + 8) as &i64);
                v18 = v24.field_24;
                if uu_csplit::SplitWriter::writeln(v17, v18) as u64 {
                    return v37;
                }
            }
            v19 = uu_csplit::SplitWriter::finish_split();
        }
    }
    if *((a1 + 96) as &i8) {
        return v37;
    }
    v36 = uu_csplit::SplitWriter::delete_all_splits(&v19);
    if v36 {
        *(a0 as &i64) = 0;
        *((a0 + 8) as &unsigned long) = v36;
        return v37;
    }
}
