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
    let v17: i192;  // [bp-0x70], Other Possible Types: struct48, struct24
    let v18: i8;  // [bp-0x60]
    let v19: i64;  // [sp-0x40]
    let v20: i64;  // [sp-0x38]
    let v22: i64;  // r12
    let v23: i64;  // rax
    let v24: i64;  // rbx
    let v25: i64;  // r13
    let v26: i64;  // r15
    let v27: struct8;  // rax
    let v28: struct8;  // r12
    let v29: i64;  // rax
    let v32: i64;  // rax

    v19 = a1;
    v20 = a2 * 304 + a1;
    v4 = *((a3 + 233) as &i8);
    v3 = *((a3 + 234) as &i8);
    v16 = *((a3 + 216) as &i64);
    v1 = *((a3 + 241) as &i8);
    v2 = *((a3 + 248) as &i8);
    v0 = *((a3 + 235) as &i8);
    v22 = 1;
    v23 = 1;
    v6 = 1;
    v9 = 1;
    v8 = 1;
    v7 = 1;
    v24 = 1;
    v25 = 1;
    v26 = 1;
    loop {
        do {
            v12 = v25;
            v11 = v23;
            v10 = v22;
            do {
                if v4 {
                    do {
                        v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                        return struct72 {
                            field_0: v24
                            field_8: v7
                            field_16: v8
                            field_24: v9
                            field_32: v6
                            field_40: v11
                            field_48: v10
                            field_56: v12
                            field_64: v26
                        };
                    } while ((v28 = v27, v29 = uu_ls::PathData::get_metadata(v27, a4), !v29));
                    v5 = v24;
                    uu_ls::display_inode(&v17, *((v29 + 40) as &i64));
                    v26 = v26;
                    v24 = core::cmp::max_by(v18, v5);
                    if !v3 {
                        continue;
                    }
                } else {
                    return struct72 {
                        field_0: v24
                        field_8: v7
                        field_16: v8
                        field_24: v9
                        field_32: v6
                        field_40: v11
                        field_48: v10
                        field_56: v12
                        field_64: v26
                    };
                    v28 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                    if !v3 {
                        continue;
                    }
                }
                v32 = uu_ls::PathData::get_metadata(v28, a4);
                if v32 {
                    v24 = v24;
                    v17 = uu_ls::display_size(uu_ls::get_block_size(*((v32 + 56) as &i32), *((v32 + 96) as &i64), v16, v1), v1);
                    v26 = core::cmp::max_by(*((&v17 as &char + 16) as &i64), v26);
                }
            } while (v2 != 1);
            v5 = *((v28 + 64) as &i64);
            v17 = uu_ls::display_dir_entry_size(v28, a3, a4);
            v15 = *((&v17 as &char + 24) as &i64);
            v13 = *((&v17 as &char + 32) as &i64);
            v14 = *((&v17 as &char + 40) as &i64);
            v7 = core::cmp::max_by(v17, v7);
            v8 = core::cmp::max_by(*((&v17 as &char + 8) as &i64), v8);
            v9 = core::cmp::max_by(*((&v17 as &char + 16) as &i64), v9);
            if v0 {
                v6 = core::cmp::max_by(v5, v6);
            }
            v22 = 0;
            v23 = 0;
            v25 = 0;
        } while (a2 == 1);
        v22 = core::cmp::max_by(v13, v10);
        v25 = core::cmp::max_by(v14, v12);
        v23 = core::cmp::max_by(core::cmp::max_by(v15, v11), v22);
    }
}
