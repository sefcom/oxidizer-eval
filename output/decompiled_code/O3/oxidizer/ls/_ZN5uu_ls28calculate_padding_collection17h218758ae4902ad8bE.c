fn uu_ls::calculate_padding_collection(a0: &u64, a1: u32, a2: u32, a3: void*, a4: u64) -> u64 {
    let v0: i8;  // [sp-0xed]
    let v1: i8;  // [sp-0xec]
    let v2: i8;  // [sp-0xeb]
    let v3: i8;  // [sp-0xea]
    let v4: i8;  // [sp-0xe9]
    let v5: i64;  // [sp-0xe8]
    let v6: i64;  // [sp-0xe0]
    let v7: i64;  // [sp-0xd8]
    let v8: i64;  // [sp-0xd0]
    let v9: i64;  // [sp-0xc8]
    let v10: i64;  // [sp-0xc0]
    let v11: i64;  // [sp-0xb8]
    let v12: i64;  // [sp-0xb0]
    let v13: i64;  // [sp-0xa8]
    let v14: i64;  // [sp-0xa0]
    let v15: i64;  // [sp-0x98]
    let v16: i64;  // [sp-0x80]
    let v17: i384;  // [sp-0x70], Other Possible Types: struct24, struct48
    let v18: i64;  // [sp-0x40]
    let v19: i64;  // [sp-0x38]
    let v21: i64;  // rax
    let v22: i64;  // r12
    let v23: i64;  // r13
    let v24: i64;  // r15
    let v25: struct8;  // rax
    let v26: struct8;  // r13
    let v27: i64;  // rax
    let v28: struct8;  // rax
    let v30: i64;  // rax

    v18 = a1;
    v19 = a2 * 304 + a1;
    v4 = *((a3 + 233) as &i8);
    v3 = *((a3 + 234) as &i8);
    v16 = *((a3 + 216) as &i64);
    v1 = *((a3 + 241) as &i8);
    v2 = *((a3 + 248) as &i8);
    v0 = *((a3 + 235) as &i8);
    v21 = 1;
    v9 = 1;
    v22 = 1;
    v23 = 1;
    v5 = 1;
    v8 = 1;
    v7 = 1;
    v6 = 1;
    v24 = 1;
    loop {
        do {
            v12 = v21;
            v10 = v23;
            v11 = v22;
            do {
                if !v4 {
                    v28 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    if !v28 {
                        goto LABEL_52d287;
                    }
                    v26 = v28;
                    if !v3 {
                        continue;
                    }
                } else {
                    do {
                        v25 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                        if !v25 {
LABEL_52d287:
                            return struct72 {
                                field_0: v24
                                field_8: v6
                                field_16: v7
                                field_24: v8
                                field_32: v5
                                field_40: v12
                                field_48: v10
                                field_56: v11
                                field_64: v9
                            };
                        }
                    } while ((v26 = v25, v27 = uu_ls::PathData::get_metadata(v25, a4), !v27));
                    v17 = uu_ls::display_inode(*((v27 + 40) as &i64));
                    v24 = core::cmp::max_by(*((&v17 as &char + 16) as &i64), v24);
                    if !v3 {
                        continue;
                    }
                }
                v30 = uu_ls::PathData::get_metadata(v26, a4);
                if v30 {
                    v17 = uu_ls::display_size(uu_ls::get_block_size(*((v30 + 56) as &i32), *((v30 + 96) as &i64), v16, v1), v1);
                    v9 = core::cmp::max_by(*((&v17 as &char + 16) as &i64), v9);
                }
            } while (v2 != 1);
            v15 = *((v26 + 64) as &i64);
            v17 = uu_ls::display_dir_entry_size(v26, a3, a4);
            v13 = *((&v17 as &char + 32) as &i64);
            v14 = *((&v17 as &char + 40) as &i64);
            v6 = core::cmp::max_by(v17, v6);
            v7 = core::cmp::max_by(*((&v17 as &char + 8) as &i64), v7);
            v8 = core::cmp::max_by(*((&v17 as &char + 16) as &i64), v8);
            if v0 {
                v5 = core::cmp::max_by(v15, v5);
            }
            v22 = 0;
            v23 = 0;
            v21 = 0;
        } while (a2 == 1);
        v23 = core::cmp::max_by(v13, v10);
        v22 = core::cmp::max_by(v14, v11);
        v21 = core::cmp::max_by(core::cmp::max_by(*((&v17 as &char + 24) as &i64), v12), v23);
    }
}
