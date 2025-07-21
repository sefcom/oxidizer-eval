fn uu_ls::calculate_padding_collection(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u8;  // [bp-0xed]
    let v1: u8;  // [bp-0xec]
    let v2: u8;  // [bp-0xeb]
    let v3: u8;  // [bp-0xea]
    let v4: u8;  // [bp-0xe9]
    let v5: core::fmt::Arguments;  // [bp-0xe8], Other Possible Types: struct40
    let v6: u64;  // [bp-0xe0]
    let v7: core::fmt::Arguments;  // [bp-0xd8]
    let v8: struct24;  // [bp-0xd0]
    let v9: struct40;  // [bp-0xc8]
    let v10: u64;  // [bp-0xc0]
    let v11: u64;  // [bp-0xb8]
    let v12: u64;  // [bp-0xb0]
    let v13: core::fmt::Arguments;  // [bp-0xa8]
    let v14: core::fmt::rt::Argument;  // [bp-0xa0]
    let v15: u64;  // [bp-0x98]
    let v16: u64;  // [bp-0x80]
    let v17: i64;  // [bp-0x78]
    let v18: u64;  // [bp-0x70]
    let v19: u64;  // [bp-0x68]
    let v20: u64;  // [bp-0x60]
    let v21: u64;  // [bp-0x58]
    let v22: u64;  // [bp-0x50]
    let v23: u64;  // [bp-0x48]
    let v24: u64;  // [bp-0x40]
    let v25: u64;  // [bp-0x38]
    let v27: u64;  // r12
    let v28: u64;  // rax
    let v29: struct40;  // rbx
    let v30: u64;  // r13
    let v31: core::fmt::Arguments;  // r15
    let v32: struct8;  // rax
    let v33: core::fmt::Arguments;  // r12
    let v34: i64;  // rax
    let v35: struct8;  // rax
    let v36: i64;  // rax

    v24 = a1;
    v25 = a2 * 304 + a1;
    v4 = *((a3 + 233) as &i8);
    v3 = *((a3 + 234) as &i8);
    v16 = *((a3 + 216) as &i64);
    v1 = *((a3 + 241) as &i8);
    v2 = *((a3 + 248) as &i8);
    v0 = *((a3 + 235) as &i8);
    v6 = 1;
    v9 = 1;
    v8 = 1;
    v7 = 1;
    loop {
        do {
            v12 = v30;
            v11 = v28;
            v10 = v27;
            do {
                if v4 {
                    do {
                        v32 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(a1);
                        if !v32 {
                            *(v17 as &struct40) = v29;
                            *((v17 + 8) as &core::fmt::Arguments) = v7;
                            *((v17 + 16) as &struct24) = v8;
                            *((v17 + 24) as &struct40) = v9;
                            *((v17 + 32) as &u64) = v6;
                            *((v17 + 40) as &u64) = v11;
                            *((v17 + 48) as &u64) = v10;
                            *((v17 + 56) as &u64) = v12;
                            *((v17 + 64) as &core::fmt::Arguments) = v31;
                            return v12;
                        }
                        v33 = v32;
                        v34 = uu_ls::PathData::get_metadata(v32, a4);
                    } while (!v34);
                    v5 = v29;
                    uu_ls::display_inode(&v18 as u32, *((v34 + 40) as &i64));
                    core::cmp::max_by(v20, v5);
                    if !(!v3) {
                        goto LABEL_52d16f;
                    }
                } else {
                    v35 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(a1);
                    if !v35 {
                        *(v17 as &struct40) = v29;
                        *((v17 + 8) as &core::fmt::Arguments) = v7;
                        *((v17 + 16) as &struct24) = v8;
                        *((v17 + 24) as &struct40) = v9;
                        *((v17 + 32) as &u64) = v6;
                        *((v17 + 40) as &u64) = v11;
                        *((v17 + 48) as &u64) = v10;
                        *((v17 + 56) as &u64) = v12;
                        *((v17 + 64) as &core::fmt::Arguments) = v31;
                        return v12;
                    }
                    v33 = v35;
                    if v3 {
LABEL_52d16f:
                        v36 = uu_ls::PathData::get_metadata(v33, a4);
                        if v36 {
                            uu_ls::display_size(&v18, uu_ls::get_block_size(*((v36 + 56) as &i32), *((v36 + 96) as &i64), v16, v1), v1);
                            core::cmp::max_by(v20, v31);
                        }
                    }
                }
            } while (v2 != 1);
            v5 = *((v33 + 64) as &i64);
            uu_ls::display_dir_entry_size(v33, a3 as u32, a4, a4);
            v15 = v21;
            v13 = v22;
            v14 = v23;
            v7 = core::cmp::max_by(v18, v7);
            v8 = core::cmp::max_by(v19, v8);
            v9 = core::cmp::max_by(v20, v9);
            if v0 {
                v6 = core::cmp::max_by(v5, v6);
            }
        } while (a2 == 1);
        v27 = core::cmp::max_by(v13, v10);
        core::cmp::max_by(v14, v12);
        core::cmp::max_by(core::cmp::max_by(v15, v11), v27);
    }
}
