fn uu_ls::calculate_padding_collection(a0: &struct72, a1: u32, a2: u32, a3: void*, a4: u32) -> u64 {
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
    let v17: struct24;  // [sp-0x70], Other Possible Types: struct48
    let v18: i64;  // [sp-0x40]
    let v19: i64;  // [sp-0x38]
    let v21: i64;  // r12
    let v22: i64;  // rax
    let v23: i64;  // rbx
    let v24: i64;  // r13
    let v25: i64;  // r15
    let v26: struct8;  // rax
    let v27: struct8;  // r12
    let v28: i64;  // rax
    let v29: struct8;  // rax
    let v30: i64;  // r15
    let v31: i64;  // r15
    let v32: i64;  // r13
    let v33: i64;  // r15
    let v34: i64;  // r15
    let v35: i64;  // rax

    v18 = a1;
    v19 = a2 * 304 + a1;
    v4 = *((a3 + 233) as &i8);
    v3 = *((a3 + 234) as &i8);
    v16 = *((a3 + 216) as &i64);
    v1 = *((a3 + 241) as &i8);
    v2 = *((a3 + 248) as &i8);
    v0 = *((a3 + 235) as &i8);
    v21 = 1;
    v22 = 1;
    v6 = 1;
    v9 = 1;
    v8 = 1;
    v7 = 1;
    v23 = 1;
    v24 = 1;
    v25 = 1;
    loop {
        do {
            v12 = v24;
            v11 = v22;
            v10 = v21;
            do {
                if !v4 {
                    v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    if !v29 {
                        goto LABEL_52d2f2;
                    }
                    v27 = v29;
                    v30 = v25;
                    v31 = v25;
                    if !v3 {
                        continue;
                    }
                } else {
                    do {
                        v26 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                        if !v26 {
LABEL_52d2f2:
                            return struct72 {
                                field_0: v23
                                field_8: v7
                                field_16: v8
                                field_24: v9
                                field_32: v6
                                field_40: v11
                                field_48: v10
                                field_56: v12
                                field_64: v25
                            };
                        }
                    } while ((v27 = v26, v28 = uu_ls::PathData::get_metadata(v26, a4), !v28));
                    v5 = v23;
                    v17 = uu_ls::display_inode(*((v28 + 40) as &i64));
                    v23 = core::cmp::max_by(v32, v5);
                    v30 = v33;
                    v31 = v33;
                    if !v3 {
                        continue;
                    }
                }
                v34 = v30;
                v35 = uu_ls::PathData::get_metadata(v27, a4);
                v31 = v34;
                if v35 {
                    v5 = v23;
                    v17 = uu_ls::display_size(uu_ls::get_block_size(*((v35 + 56) as &i32), *((v35 + 96) as &i64), v16, v1), v1);
                    v23 = v5;
                    v31 = core::cmp::max_by(v32, v34);
                }
            } while ((v25 = v31, v2 != 1));
            v5 = *((v27 + 64) as &i64);
            v17 = uu_ls::display_dir_entry_size(v27, a3, a4);
            v15 = *((&v17.field_16 as &char + 8) as &i64);
            v13 = v17.field_32 as i64;
            v14 = *((&v17.field_32 as &char + 8) as &i64);
            v7 = core::cmp::max_by(v17.field_0 as i64, v7);
            v8 = core::cmp::max_by(*((&v17.field_0 as &char + 8) as &i64), v8);
            v9 = core::cmp::max_by(v17.field_16 as i64, v9);
            if v0 {
                v6 = core::cmp::max_by(v5, v6);
            }
            v21 = 0;
            v22 = 0;
            v24 = 0;
        } while (a2 == 1);
        v21 = core::cmp::max_by(v13, v10);
        v24 = core::cmp::max_by(v14, v12);
        v22 = core::cmp::max_by(core::cmp::max_by(v15, v11), v21);
    }
}
