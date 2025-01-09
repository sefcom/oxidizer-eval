fn uu_csplit::csplit(a0: &Result<struct40, struct8>, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i128;  // [sp-0x1e8], Other Possible Types: struct40
    let v1: i64;  // [sp-0x1d8]
    let v2: i128;  // [sp-0x1b8]
    let v3: i64;  // [sp-0x1a8]
    let v4: i64;  // [sp-0x1a0]
    let v5: i64;  // [sp-0x198]
    let v6: i64;  // [sp-0x190]
    let v7: i64;  // [sp-0x188], Other Possible Types: Result<struct40, struct24>
    let v8: i64;  // [sp-0x180]
    let v9: i64;  // [bp-0x178]
    let v10: i128;  // [sp-0x168]
    let v11: i128;  // [sp-0x158]
    let v12: i128;  // [sp-0x148]
    let v13: i128;  // [sp-0x138]
    let v14: i64;  // [sp-0x128], Other Possible Types: struct8
    let v15: i64;  // [sp-0x108]
    let v16: i128;  // [sp-0x100]
    let v17: i8;  // [sp-0xf0]
    let v18: struct1;  // [bp-0xe8]
    let v19: i64;  // [sp-0xe0]
    let v20: i64;  // [sp-0xd8]
    let v21: struct48;  // [sp-0xd0], Other Possible Types: i384
    let v22: i64;  // [sp-0xa0]
    let v23: i64;  // [sp-0x98]
    let v24: i8;  // [sp-0x90]
    let v25: i192;  // [sp-0x88]
    let v26: i256;  // [sp-0x70], Other Possible Types: struct32
    let v27: i256;  // [sp-0x50], Other Possible Types: struct32
    let v29: i64;  // rax
    let v30: i64;  // rcx
    let v31: i64;  // rax
    let v32: i64;  // rsi
    let v33: i64;  // rdx
    let v34: i128;  // xmm0
    let v35: i64;  // rax
    let v37: i64;  // rax
    let v38: i64;  // rax

    v21 = std::io::BufRead::lines(a4);
    v22 = 0;
    v18 = struct1 {
        field_88: 0
    };
    v19 = 8;
    v20 = 0;
    v23 = 1;
    v24 = 0;
    v15 = a1;
    v16 = 0;
    v14 = 0x8000000000000000;
    v17 = 0;
    v7 = uu_csplit::patterns::get_patterns(a2, a3);
    v29 = v7;
    v0 = *((&v7 as &char + 8) as &i128);
    v1 = *((&v7 as &char + 24) as &i64);
    if v29 != 12 {
        v30 = *((&v7 as &char + 32) as &i64);
        *((a0 + 24) as &i64) = v1;
        *((a0 + 8) as &i128) = v0;
        *(a0 as &i64) = v29;
        *((a0 + 32) as &i64) = v30;
        return v38;
    }
    v0 = uu_csplit::do_csplit(&v14, &v25, &v18);
    if v0 == 12 {
        v24 = 1;
        v27 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v18);
        if *((&v27 as &char + 8) as &i64) != 9223372036854775809 {
            v3 = *((&v27 as &char + 24) as &i64);
            v2 = *((&v27 as &char + 8) as &i128);
            if uu_csplit::SplitWriter::new_writer() as u64 {
                return v38;
            }
            v31 = v2;
            v32 = *((&v2 as &char + 8) as &i64);
            if v7 == 0x8000000000000000 {
                *(a0 as &i64) = 0;
                *((a0 + 8) as &i64) = v8;
                return v38;
            }
            v33 = v3;
            v7 = v31;
            v8 = v32;
            v9 = v33;
            if uu_csplit::SplitWriter::writeln(v8, v33) as u64 {
                return v38;
            }
            v13 = v23;
            v12 = *((&v21 as &char + 40) as &i128);
            v34 = *(&v18 as &i128);
            v11 = *((&v21 as &char + 24) as &i128);
            v10 = *((&v21 as &char + 8) as &i128);
            v9 = v20;
            v7 = v34;
            loop {
                v26 = <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v7);
                v35 = *((&v26 as &char + 8) as &i64);
                if v35 == 9223372036854775809 {
                    break;
                }
                if v35 == 0x8000000000000000 {
                    *(a0 as &i64) = 0;
                    *((a0 + 8) as &i64) = v5;
                    return v38;
                }
                v4 = v35;
                v5 = *((&v26 as &char + 16) as &i64);
                v6 = *((&v26 as &char + 24) as &i64);
                if uu_csplit::SplitWriter::writeln(v5, v6) as u64 {
                    return v38;
                }
            }
            v14 = uu_csplit::SplitWriter::finish_split();
        }
    }
    if *((a1 + 96) as &i8) {
        return v38;
    }
    v37 = uu_csplit::SplitWriter::delete_all_splits(&v14);
    if v37 {
        *(a0 as &i64) = 0;
        *((a0 + 8) as &i64) = v37;
        return v38;
    }
}
