fn uu_csplit::csplit(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i32) -> u64 {
    let v0: i128;  // [sp-0x1a8]
    let v1: i64;  // [sp-0x198]
    let v3: i128;  // [sp-0x178], Other Possible Types: struct40
    let v4: i128;  // [bp-0x168]
    let v5: i128;  // [sp-0x148]
    let v6: i128;  // [sp-0x138]
    let v7: i64;  // [sp-0x128]
    let v8: struct1;  // [bp-0x120]
    let v9: i64;  // [sp-0x118]
    let v10: i128;  // [sp-0x110]
    let v11: i64;  // [sp-0x100]
    let v12: i8;  // [sp-0xf8]
    let v13: i64;  // [sp-0xf0]
    let v14: i8;  // [sp-0xe8]
    let v15: i64;  // [sp-0xe0]
    let v16: i64;  // [sp-0xd8]
    let v17: i64;  // [sp-0xd0]
    let v18: i64;  // [sp-0xc8], Other Possible Types: struct8
    let v19: i64;  // [sp-0xa8]
    let v20: i128;  // [sp-0xa0]
    let v21: i8;  // [sp-0x90]
    let v22: i128;  // [sp-0x88]
    let v23: i64;  // [sp-0x78]
    let v24: i256;  // [sp-0x70], Other Possible Types: struct32
    let v25: struct32;  // [sp-0x50], Other Possible Types: i256
    let v27: i8;  // dl
    let v28: i64;  // rcx
    let v29: i64;  // r8
    let v30: i64;  // r9
    let v31: i64;  // rax
    let v32: i64;  // rcx
    let v33: i64;  // rdx
    let v34: struct49;  // rax
    let v35: i64;  // rax
    let v36: i64;  // rsi
    let v37: i64;  // rdx
    let v38: struct16;  // rax
    let v39: i128;  // xmm0
    let v40: i64;  // rdx
    let v41: i64;  // rax
    let v42: i64;  // rsi
    let v43: struct16;  // rax
    let v44: i64;  // rsi
    let v45: i64;  // rax

    v11 = std::io::BufRead::lines(a4, a5);
    v12 = v27 & 1;
    v8 = struct1 {
        field_56: 0
    };
    v9 = 8;
    v10 = 0;
    v13 = 1;
    v14 = 0;
    v19 = a1;
    v20 = 0;
    v18 = 0x8000000000000000;
    v21 = 0;
    v3 = uu_csplit::patterns::get_patterns(a2, a3, v28, v29, v30);
    v31 = v3;
    v0 = *((&v3 as &char + 8) as &i128);
    v1 = *((&v3 as &char + 24) as &i64);
    if v31 != 12 {
        v32 = *((&v3 as &char + 32) as &i64);
        *((a0 + 24) as &i64) = v1;
        *((a0 + 8) as &i128) = v0;
        *(a0 as &i64) = v31;
        *((a0 + 32) as &i64) = v32;
        goto LABEL_560930;
    }
    v22 = v0;
    v23 = v1;
    uu_csplit::do_csplit(&v0, &v18, &v22, &v8);
    if v0 != 12 {
LABEL_5606d2:
        if !(!*((a1 + 96) as &i8)) || !((v45 = uu_csplit::SplitWriter::delete_all_splits(&v18), v45)) {
            return struct40 {
                field_0: v0
                field_16: v1
                field_32: v2
            };
        }
        *(a0 as &i64) = 0;
        *((a0 + 8) as &i64) = v45;
        goto LABEL_560930;
        goto LABEL_560930;
    }
    v14 = 1;
    v25 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v8, v33);
    if *((&v25 as &char + 8) as &i64) != 9223372036854775809 {
        v7 = *((&v25 as &char + 24) as &i64);
        v6 = *((&v25 as &char + 8) as &i128);
        v34 = uu_csplit::SplitWriter::new_writer();
        if v34 {
            *(a0 as &i64) = 0;
            *((a0 + 8) as &struct49) = v34;
            goto LABEL_560930;
        }
        v35 = v6;
        v36 = *((&v6 as &char + 8) as &i64);
        if v3 == 0x8000000000000000 {
            *(a0 as &i64) = 0;
            *((a0 + 8) as &struct40) = v3.field_8;
            goto LABEL_5607f7;
        }
        v37 = v7;
        v3 = v35;
        v3.field_8 = vvar_223{reg 64};
        v4 = v37;
        v38 = uu_csplit::SplitWriter::writeln(v3.field_8, v37);
        if !v38 {
            v39 = *(&v8 as &i128);
            v5 = v13;
            v3.field_32 = (stack_base)[0x100] as i128;
            v4 = v10;
            v3 = v39;
        } else {
            *(a0 as &i64) = 0;
            *((a0 + 8) as &struct16) = v38;
LABEL_5607f7:
            goto LABEL_560930;
        }
        loop {
            v24 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v3, v40);
            v41 = *((&v24 as &char + 8) as &i64);
            if v41 == 9223372036854775809 {
                break;
            }
            v42 = *((&v24 as &char + 16) as &i64);
            if v41 == 0x8000000000000000 {
                *(a0 as &i64) = 0;
                *((a0 + 8) as &i64) = v16;
                goto LABEL_560930;
            }
            v15 = v41;
            v16 = v42;
            v17 = *((&v24 as &char + 24) as &i64);
            v43 = uu_csplit::SplitWriter::writeln(v16, v17);
            if v43 {
LABEL_560930:
                return struct16 {
                    field_0: 0
                    field_8: v43
                };
            }
        }
        v18 = uu_csplit::SplitWriter::finish_split(v44, v33);
    }
    goto LABEL_5606d2;
}
