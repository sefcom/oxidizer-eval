fn uu_csplit::csplit(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i32) -> u64 {
    let v0: i128;  // [sp-0x1a8]
    let v1: i64;  // [sp-0x198]
    let v3: i128;  // [sp-0x178], Other Possible Types: struct40
    let v4: i64;  // [sp-0x170]
    let v5: i128;  // [bp-0x168]
    let v6: i128;  // [sp-0x158]
    let v7: i128;  // [sp-0x148]
    let v8: i128;  // [sp-0x138]
    let v9: i64;  // [sp-0x128]
    let v10: struct1;  // [bp-0x120]
    let v11: i64;  // [sp-0x118]
    let v12: i128;  // [sp-0x110]
    let v13: i64;  // [sp-0x100]
    let v14: i8;  // [sp-0xf8]
    let v15: i64;  // [sp-0xf0]
    let v16: i8;  // [sp-0xe8]
    let v17: i64;  // [sp-0xe0]
    let v18: i64;  // [sp-0xd8]
    let v19: i64;  // [sp-0xd0]
    let v20: i64;  // [sp-0xc8], Other Possible Types: struct8
    let v21: i64;  // [sp-0xa8]
    let v22: i128;  // [sp-0xa0]
    let v23: i8;  // [sp-0x90]
    let v24: i128;  // [sp-0x88]
    let v25: i64;  // [sp-0x78]
    let v26: struct32;  // [sp-0x70], Other Possible Types: i256
    let v27: i256;  // [sp-0x50], Other Possible Types: struct32
    let v29: i8;  // dl
    let v30: i64;  // rcx
    let v31: i64;  // r8
    let v32: i64;  // r9
    let v33: i64;  // rax
    let v34: i64;  // rcx
    let v35: i64;  // rdx
    let v36: struct49;  // rax
    let v37: i64;  // rax
    let v38: i64;  // rsi
    let v39: i64;  // rdx
    let v40: struct16;  // rax
    let v41: i128;  // xmm0
    let v42: i64;  // rdx
    let v43: i64;  // rax
    let v44: i64;  // rsi
    let v45: struct16;  // rax
    let v46: i64;  // rsi
    let v47: i64;  // rax

    v13 = std::io::BufRead::lines(a4, a5);
    v14 = v29 & 1;
    v10 = struct1 {
        field_56: 0
    };
    v11 = 8;
    v12 = 0;
    v15 = 1;
    v16 = 0;
    v21 = a1;
    v22 = 0;
    v20 = 0x8000000000000000;
    v23 = 0;
    v3 = uu_csplit::patterns::get_patterns(a2, a3, v30, v31, v32);
    v33 = v3;
    v0 = *((&v3 as &char + 8) as &i128);
    v1 = *((&v3 as &char + 24) as &i64);
    if v33 != 12 {
        v34 = *((&v3 as &char + 32) as &i64);
        *((a0 + 24) as &i64) = v1;
        *((a0 + 8) as &i128) = v0;
        *(a0 as &i64) = v33;
        *((a0 + 32) as &i64) = v34;
        goto LABEL_560bd0;
    }
    v24 = v0;
    v25 = v1;
    uu_csplit::do_csplit(&v0, &v20, &v24, &v10);
    if v0 != 12 {
LABEL_560972:
        if !(!*((a1 + 96) as &i8)) || !((v47 = uu_csplit::SplitWriter::delete_all_splits(&v20), v47)) {
            return struct40 {
                field_0: v0
                field_16: v1
                field_32: v2
            };
        }
        *(a0 as &i64) = 0;
        *((a0 + 8) as &i64) = v47;
        goto LABEL_560bd0;
        goto LABEL_560bd0;
    }
    v16 = 1;
    v27 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v10, v35);
    if *((&v27 as &char + 8) as &i64) != 9223372036854775809 {
        v9 = *((&v27 as &char + 24) as &i64);
        v8 = *((&v27 as &char + 8) as &i128);
        v36 = uu_csplit::SplitWriter::new_writer();
        if v36 {
            *(a0 as &i64) = 0;
            *((a0 + 8) as &struct49) = v36;
            goto LABEL_560bd0;
        }
        v37 = v8;
        v38 = *((&v8 as &char + 8) as &i64);
        if v3 == 0x8000000000000000 {
            *(a0 as &i64) = 0;
            *((a0 + 8) as &i64) = v4;
            goto LABEL_560a97;
        }
        v39 = v9;
        v3 = v37;
        v4 = v38;
        v5 = v39;
        v40 = uu_csplit::SplitWriter::writeln(v4, v39);
        if !v40 {
            v41 = *(&v10 as &i128);
            v7 = v15;
            v6 = v13;
            v5 = v12;
            v3 = v41;
        } else {
            *(a0 as &i64) = 0;
            *((a0 + 8) as &struct16) = v40;
LABEL_560a97:
            goto LABEL_560bd0;
        }
        loop {
            v26 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v3, v42);
            v43 = *((&v26 as &char + 8) as &i64);
            if v43 == 9223372036854775809 {
                break;
            }
            v44 = *((&v26 as &char + 16) as &i64);
            if v43 == 0x8000000000000000 {
                *(a0 as &i64) = 0;
                *((a0 + 8) as &i64) = v18;
                goto LABEL_560bd0;
            }
            v17 = v43;
            v18 = v44;
            v19 = *((&v26 as &char + 24) as &i64);
            v45 = uu_csplit::SplitWriter::writeln(v18, v19);
            if v45 {
LABEL_560bd0:
                return struct16 {
                    field_0: 0
                    field_8: v45
                };
            }
        }
        v20 = uu_csplit::SplitWriter::finish_split(v46, v35);
    }
    goto LABEL_560972;
}
