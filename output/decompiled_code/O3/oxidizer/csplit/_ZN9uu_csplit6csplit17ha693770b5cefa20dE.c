fn uu_csplit::csplit(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i128;  // [sp-0x1e8]
    let v1: i64;  // [sp-0x1d8]
    let v3: i128;  // [sp-0x1b8]
    let v4: i64;  // [sp-0x1a8]
    let v5: i64;  // [sp-0x1a0]
    let v6: i64;  // [sp-0x198]
    let v7: i64;  // [sp-0x190]
    let v8: i320;  // [sp-0x188], Other Possible Types: struct40
    let v9: i128;  // [bp-0x178]
    let v10: i128;  // [sp-0x158]
    let v11: i128;  // [sp-0x148]
    let v12: i128;  // [sp-0x138]
    let v13: i64;  // [sp-0x128], Other Possible Types: struct8
    let v14: i64;  // [sp-0x108]
    let v15: i128;  // [sp-0x100]
    let v16: i8;  // [sp-0xf0]
    let v17: struct1;  // [bp-0xe8]
    let v18: i64;  // [sp-0xe0]
    let v19: i64;  // [sp-0xd8]
    let v20: struct48;  // [sp-0xd0], Other Possible Types: i384
    let v21: i64;  // [sp-0xa0]
    let v22: i64;  // [sp-0x98]
    let v23: i8;  // [sp-0x90]
    let v24: i128;  // [sp-0x88]
    let v25: i64;  // [sp-0x78]
    let v26: struct32;  // [sp-0x70], Other Possible Types: i256
    let v27: i256;  // [sp-0x50], Other Possible Types: struct32
    let v29: i64;  // rcx
    let v30: i64;  // r8
    let v31: i64;  // r9
    let v32: i64;  // rax
    let v33: i64;  // rcx
    let v34: i64;  // rdx
    let v35: struct49;  // rax
    let v36: i64;  // rax
    let v37: i64;  // rsi
    let v38: i64;  // rdx
    let v39: struct16;  // rax
    let v40: i128;  // xmm0
    let v41: i64;  // rdx
    let v42: i64;  // rax
    let v43: i64;  // rsi
    let v44: struct16;  // rax
    let v45: i64;  // rsi
    let v46: i64;  // rax

    v20 = std::io::BufRead::lines(a4);
    v21 = 0;
    v17 = struct1 {
        field_88: 0
    };
    v18 = 8;
    v19 = 0;
    v22 = 1;
    v23 = 0;
    v14 = a1;
    v15 = 0;
    v13 = 0x8000000000000000;
    v16 = 0;
    v8 = uu_csplit::patterns::get_patterns(a2, a3, v29, v30, v31);
    v32 = v8;
    v0 = *((&v8 as &char + 8) as &i128);
    v1 = *((&v8 as &char + 24) as &i64);
    if v32 != 12 {
        v33 = *((&v8 as &char + 32) as &i64);
        *((a0 + 24) as &i64) = v1;
        *((a0 + 8) as &i128) = v0;
        *(a0 as &i64) = v32;
        *((a0 + 32) as &i64) = v33;
        goto LABEL_560d97;
    }
    v24 = v0;
    v25 = v1;
    uu_csplit::do_csplit(&v0, &v13, &v24, &v17);
    if v0 != 12 {
LABEL_560b25:
        if !(!*((a1 + 96) as &i8)) || !((v46 = uu_csplit::SplitWriter::delete_all_splits(&v13), v46)) {
            return struct40 {
                field_0: v0
                field_16: v1
                field_32: v2
            };
        }
        *(a0 as &i64) = 0;
        *((a0 + 8) as &i64) = v46;
        goto LABEL_560d97;
        goto LABEL_560d97;
    }
    v23 = 1;
    v27 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v17, v34);
    if *((&v27 as &char + 8) as &i64) != 9223372036854775809 {
        v4 = *((&v27 as &char + 24) as &i64);
        v3 = *((&v27 as &char + 8) as &i128);
        v35 = uu_csplit::SplitWriter::new_writer();
        if v35 {
            *(a0 as &i64) = 0;
            *((a0 + 8) as &struct49) = v35;
            goto LABEL_560d97;
        }
        v36 = v3;
        v37 = *((&v3 as &char + 8) as &i64);
        if v8 == 0x8000000000000000 {
            *(a0 as &i64) = 0;
            *((a0 + 8) as &struct40) = v8.field_8;
            goto LABEL_560c47;
        }
        v38 = v4;
        v8 = v36;
        v8.field_8 = vvar_217{reg 64};
        v9 = v38;
        v39 = uu_csplit::SplitWriter::writeln(v8.field_8, v38);
        if !v39 {
            v12 = v22;
            v11 = *((&v20 as &char + 40) as &i128);
            v40 = *(&v17 as &i128);
            v10 = *((&v20 as &char + 24) as &i128);
            v8.field_32 = (stack_base)[200] as i128;
            v9 = v19;
            v8 = v40;
        } else {
            *(a0 as &i64) = 0;
            *((a0 + 8) as &struct16) = v39;
LABEL_560c47:
            goto LABEL_560d97;
        }
        loop {
            v26 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v8, v41);
            v42 = *((&v26 as &char + 8) as &i64);
            if v42 == 9223372036854775809 {
                break;
            }
            v43 = *((&v26 as &char + 16) as &i64);
            if v42 == 0x8000000000000000 {
                *(a0 as &i64) = 0;
                *((a0 + 8) as &i64) = v6;
                goto LABEL_560d97;
            }
            v5 = v42;
            v6 = v43;
            v7 = *((&v26 as &char + 24) as &i64);
            v44 = uu_csplit::SplitWriter::writeln(v6, v7);
            if v44 {
LABEL_560d97:
                return struct16 {
                    field_0: 0
                    field_8: v44
                };
            }
        }
        v13 = uu_csplit::SplitWriter::finish_split(v45, v34);
    }
    goto LABEL_560b25;
}
