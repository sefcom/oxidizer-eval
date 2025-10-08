fn uu_csplit::csplit(a0: i64, a1: i64, a2: u64, a3: u64, a4: i64) -> int {
    let v0: u128;  // [bp-0x1c8]
    let v1: struct24;  // [bp-0x1c8]
    let v2: struct40;  // [bp-0x1c8]
    let v3: u64;  // [bp-0x1b8]
    let v4: u64;  // [bp-0x1a8]
    let v5: u8;  // [bp-0x1a0]
    let v6: u64;  // [bp-0x198]
    let v7: void*;  // [bp-0x190]
    let v8: u64;  // [bp-0x188]
    let v9: u64;  // [bp-0x180]
    let v10: void*;  // [bp-0x178]
    let v11: u64;  // [bp-0x170]
    let v12: Result<struct40, struct32>;  // [bp-0x168], Other Possible Types: u64
    let v13: u128;  // [bp-0x168]
    let v14: void*;  // [bp-0x160]
    let v15: u64;  // [bp-0x158]
    let v16: u64;  // [bp-0x150]
    let v17: u128;  // [bp-0x148]
    let v18: iNone;  // [bp-0x138]
    let v19: iNone;  // [bp-0x128]
    let v20: iNone;  // [bp-0x118]
    let v21: void*;  // [bp-0x108]
    let v22: u64;  // [bp-0x100]
    let v23: void*;  // [bp-0xf8]
    let v24: u128;  // [bp-0xf0]
    let v25: u128;  // [bp-0xe0]
    let v26: u128;  // [bp-0xd0]
    let v27: void*;  // [bp-0xc0]
    let v28: u64;  // [bp-0xb8]
    let v29: u8;  // [bp-0xb0]
    let v30: struct8;  // [bp-0xa8], Other Possible Types: u64
    let v31: i64;  // [bp-0x88]
    let v32: u128;  // [bp-0x80]
    let v33: u8;  // [bp-0x70]
    let v34: struct24;  // [bp-0x68]
    let v36: struct32;  // [bp-0x50]
    let v37: u64;  // [bp-0x48]
    let v38: void*;  // [bp-0x40]
    let v40: u128;  // xmm0
    let v41: iNone;  // xmm1
    let v42: void*;  // r12
    let v43: u64;  // r14
    let v44: u64;  // rax
    let v45: u64;  // rax
    let v46: u128;  // xmm0
    let v47: u64;  // rax
    let v48: u64;  // rax
    let v49: u64;  // rcx

    v40 = *(a4 as &i128);
    v41 = *((a4 + 16) as &i128);
    v26 = *((a4 + 32) as &i128);
    *(&v25 as void*) = v41;
    v24 = v40;
    v27 = 0;
    v21 = 0;
    v22 = 8;
    v23 = 0;
    v28 = 1;
    v29 = 0;
    v31 = a1;
    v32 = 0;
    v30 = 0x8000000000000000;
    v33 = 0;
    v12 = uu_csplit::patterns::get_patterns(a2, a3);
    v0 = *((&v12 as &char + 8) as &i128);
    v3 = v16;
    match v12 {
        Ok(_) => {
            v49 = *((&v12 as &char + 32) as &i64);
            return struct40 {
                field_0: v12 as i64
                field_8: v0
                field_24: v3
                field_32: v49
            };
        },
        Err(_) => {
            v34 = v1;
            v2 = uu_csplit::do_csplit(&v30, &v34, &v21);
            if v2.field_0 as i32 == 13 {
                v29 = 1;
                <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v5, &v21);
                if v6 != 9223372036854775809 {
                    v42 = v7;
                    v43 = v8;
                    v44 = uu_csplit::SplitWriter::new_writer(&v30) as u64;
                    if v44 {
                        return struct16 {
                            field_0: 0
                            field_8: v44
                        };
                    }
                    if v6 == 0x8000000000000000 {
                        return struct24 {
                            field_0: 12
                            field_8: v42
                            field_16: v43
                        };
                    }
                    v12 = v6;
                    v14 = v42;
                    v15 = v43;
                    v45 = uu_csplit::SplitWriter::writeln(&v30, v42, v43);
                    if v45 {
                        return struct16 {
                            field_0: 0
                            field_8: v45
                        };
                    }
                    v20 = *(&v28 as &i128);
                    v19 = *((&v26 as &char + 8) as &i128);
                    v46 = *(&v21 as &i128);
                    v18 = *((&v25 as &char + 8) as &i128);
                    v17 = *((&v24 as &char + 8) as &i128);
                    v15 = *(&v23 as &i128) as u128;
                    v13 = v46;
                    loop {
                        vvar_528{stack -80} = struct32 OrderedDict([(0, 𝜙@64b [((5344100, None), vvar_428{stack -80}), ((5343904, None), None)]), (8, 𝜙@64b [((5344100, None), vvar_429{stack -72}), ((5343904, None), None)])])
                        <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(&v36, &v12);
                        if v37 == 9223372036854775809 {
                            break;
                        }
                        if v37 == 0x8000000000000000 {
                            return struct24 {
                                field_0: 12
                                field_8: v10
                                field_16: v11
                            };
                        }
                        v9 = v37;
                        v10 = v38;
                        v11 = v36.field_24;
                        v47 = uu_csplit::SplitWriter::writeln(&v30, v10, v11);
                        if v47 {
                            return struct16 {
                                field_0: 0
                                field_8: v47
                            };
                        }
                    }
                    v30 = uu_csplit::SplitWriter::finish_split();
                }
            } else if !*((a1 + 96) as &i8) {
                v48 = uu_csplit::SplitWriter::delete_all_splits(&v30);
                if v48 {
                    return struct16 {
                        field_0: 0
                        field_8: v48
                    };
                }
            }
            return struct40 {
                field_0: *(&v2.field_0 as &i128)
                field_16: v2.field_16
                field_32: v4
            };
        },
    }
}
