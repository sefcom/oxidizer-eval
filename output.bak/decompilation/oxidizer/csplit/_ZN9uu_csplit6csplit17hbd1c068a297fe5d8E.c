fn uu_csplit::csplit(a0: &struct40, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i128;  // [sp-0x1e8]
    let v1: i64;  // [sp-0x1d8]
    let v2: i8;  // [bp-0x1c8]
    let v3: i128;  // [sp-0x1b8]
    let v4: i64;  // [sp-0x1a8]
    let v5: i64;  // [sp-0x1a0]
    let v6: i64;  // [sp-0x198]
    let v7: i64;  // [sp-0x190]
    let v8: i128;  // [sp-0x188], Other Possible Types: struct40
    let v9: i64;  // [sp-0x180]
    let v10: i128;  // [bp-0x178]
    let v11: i128;  // [sp-0x168]
    let v12: i128;  // [sp-0x158]
    let v13: i128;  // [sp-0x148]
    let v14: i128;  // [sp-0x138]
    let v15: i64;  // [sp-0x128], Other Possible Types: struct8
    let v16: i64;  // [sp-0x108]
    let v17: i128;  // [sp-0x100]
    let v18: i8;  // [sp-0xf0]
    let v19: struct1;  // [bp-0xe8]
    let v20: i64;  // [sp-0xe0]
    let v21: i64;  // [sp-0xd8]
    let v22: i384;  // [sp-0xd0], Other Possible Types: struct48
    let v23: i64;  // [sp-0xa0]
    let v24: i64;  // [sp-0x98]
    let v25: i8;  // [sp-0x90]
    let v26: i128;  // [sp-0x88]
    let v27: i64;  // [sp-0x78]
    let v28: struct32;  // [sp-0x70], Other Possible Types: i256
    let v29: i256;  // [sp-0x50], Other Possible Types: struct32
    let v31: i64;  // rax
    let v32: i64;  // rcx
    let v33: struct49;  // rax
    let v34: i64;  // rax
    let v35: i64;  // rsi
    let v36: i64;  // rdx
    let v37: struct16;  // rax
    let v38: i128;  // xmm0
    let v39: i64;  // rax
    let v40: i64;  // rsi
    let v41: struct16;  // rax
    let v42: i64;  // rax
    let v43: i64;  // rax

    v22 = std::io::BufRead::lines(a4);
    v23 = 0;
    v19 = struct1 {
        field_88: 0
    };
    v20 = 8;
    v21 = 0;
    v24 = 1;
    v25 = 0;
    v16 = a1;
    v17 = 0;
    v15 = 0x8000000000000000;
    v18 = 0;
    v8 = uu_csplit::patterns::get_patterns(a2, a3);
    v31 = v8;
    v0 = *((&v8 as &char + 8) as &i128);
    v1 = *((&v8 as &char + 24) as &i64);
    if v31 != 12 {
        v32 = *((&v8 as &char + 32) as &i64);
        *((a0 + 24) as &i64) = v1;
        *((a0 + 8) as &i128) = v0;
        *(a0 as &i64) = v31;
        *((a0 + 32) as &i64) = v32;
        goto LABEL_561037;
    }
    v26 = v0;
    v27 = v1;
    uu_csplit::do_csplit(&v0, &v15, &v26, &v19);
    if v0 != 12 {
LABEL_560dc5:
        if !(!*((a1 + 96) as &i8)) || !((v42 = uu_csplit::SplitWriter::delete_all_splits(&v15), v42)) {
            *((a0 + 32) as &i8) = v2;
            *((a0 + 16) as &i64) = v1;
            *(a0 as &i128) = v0;
            return v43;
        }
        *(a0 as &i64) = 0;
        *((a0 + 8) as &i64) = v42;
        goto LABEL_561037;
        goto LABEL_561037;
    }
    v25 = 1;
    v29 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v19);
    if *((&v29 as &char + 8) as &i64) != 9223372036854775809 {
        v4 = *((&v29 as &char + 24) as &i64);
        v3 = *((&v29 as &char + 8) as &i128);
        v33 = uu_csplit::SplitWriter::new_writer();
        if v33 {
            *(a0 as &i64) = 0;
            *((a0 + 8) as &struct49) = v33;
            goto LABEL_561037;
        }
        v34 = v3;
        v35 = *((&v3 as &char + 8) as &i64);
        if v8 == 0x8000000000000000 {
            *(a0 as &i64) = 0;
            *((a0 + 8) as &i64) = v9;
            goto LABEL_560ee7;
        }
        v36 = v4;
        v8 = v34;
        v9 = v35;
        v10 = v36;
        v37 = uu_csplit::SplitWriter::writeln(v9, v36);
        if !v37 {
            v14 = v24;
            v13 = *((&v22 as &char + 40) as &i128);
            v38 = *(&v19 as &i128);
            v12 = *((&v22 as &char + 24) as &i128);
            v11 = *((&v22 as &char + 8) as &i128);
            v10 = v21;
            v8 = v38;
        } else {
            *(a0 as &i64) = 0;
            *((a0 + 8) as &struct16) = v37;
LABEL_560ee7:
            goto LABEL_561037;
        }
        loop {
            v28 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v8);
            v39 = *((&v28 as &char + 8) as &i64);
            if v39 == 9223372036854775809 {
                break;
            }
            v40 = *((&v28 as &char + 16) as &i64);
            if v39 == 0x8000000000000000 {
                *(a0 as &i64) = 0;
                *((a0 + 8) as &i64) = v6;
                goto LABEL_561037;
            }
            v5 = v39;
            v6 = v40;
            v7 = *((&v28 as &char + 24) as &i64);
            v41 = uu_csplit::SplitWriter::writeln(v6, v7);
            if v41 {
                *(a0 as &i64) = 0;
                *((a0 + 8) as &struct16) = v41;
LABEL_561037:
                return v43;
            }
        }
        v15 = uu_csplit::SplitWriter::finish_split();
    }
    goto LABEL_560dc5;
}
