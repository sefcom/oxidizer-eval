fn uu_ls::calculate_padding_collection(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: u8;  // [bp-0xe4]
    let v1: u8;  // [bp-0xe3]
    let v2: u8;  // [bp-0xe2]
    let v3: u8;  // [bp-0xe1]
    let v4: u64;  // [bp-0xe0]
    let v5: struct24;  // [bp-0xd8]
    let v6: u32;  // [bp-0xd8]
    let v7: struct24;  // [bp-0xc8], Other Possible Types: u64
    let v9: struct32;  // [bp-0xc0]
    let v10: u64;  // [bp-0xb8]
    let v11: u64;  // [bp-0xb0]
    let v12: u64;  // [bp-0xa0]
    let v13: u64;  // [bp-0x98]
    let v14: u64;  // [bp-0x90]
    let v15: struct24;  // [bp-0x88], Other Possible Types: u64
    let v16: struct24;  // [bp-0x88]
    let v17: struct48;  // [bp-0x88]
    let v18: u64;  // [bp-0x88]
    let v19: u64;  // [bp-0x80]
    let v20: struct24;  // [bp-0x78], Other Possible Types: u64
    let v21: u64;  // [bp-0x78]
    let v22: u64;  // [bp-0x70]
    let v23: u64;  // [bp-0x68]
    let v24: u64;  // [bp-0x60]
    let v25: u64;  // [bp-0x58]
    let v26: u64;  // [bp-0x50]
    let v27: u64;  // [bp-0x48]
    let v28: struct24;  // [bp-0x40]
    let v30: core::fmt::rt::Argument;  // rbp, Other Possible Types: unsigned long
    let v31: u64;  // r14
    let v32: u64;  // rax
    let v33: struct24;  // r13
    let v34: Option<struct48>;  // rbx
    let v35: u64;  // r10
    let v36: void*;  // rbp
    let v37: i64;  // rax
    let v38: Result<struct40, struct16>;  // rax
    let v40: struct48;  // rdi
    let v41: struct48;  // rdi
    let v42: i64;  // rax
    let v43: core::option::Option<&str>;  // rax
    let v45: core::fmt::rt::Argument;  // rdi
    let v46: i64;  // rax

    v31 = a2 * 304 + a1;
    v0 = *((a3 + 241) as &i8);
    v12 = *((a3 + 216) as &i64);
    if *((a3 + 0x100) as &i8) == 1 {
        v3 = *((a3 + 242) as &i8);
        v1 = *((a3 + 249) as &i8);
        v2 = *((a3 + 243) as &i8);
        v4 = 1;
        v9 = 1;
        v5 = 1;
        v11 = 1;
        v10 = 1;
        v7 = 1;
        loop {
            v35 = v34;
            v7 = v33;
            v14 = v32;
            v13 = v35;
            if (v0 & 1) {
                do {
                    v36 = a1;
                    if v36 == v31 {
                        v13 = v13;
                        v14 = v14;
                        *(a0 as &struct24) = v7;
                        *((a0 + 8) as &u64) = v10;
                        *((a0 + 16) as &u64) = v11;
                        *((a0 + 24) as &struct24) = v5;
                        *((a0 + 32) as &struct32) = v9;
                        *((a0 + 40) as &u64) = v14;
                        *((a0 + 48) as &u64) = v13;
                        *((a0 + 56) as &struct24) = v7;
                        *((a0 + 64) as &u64) = v4;
                        return v4;
                    }
                    v37 = uu_ls::PathData::get_metadata(v36, a4);
                } while (!v37);
                v16 = uu_ls::display_inode(*((v37 + 40) as &i64));
                v7 = core::cmp::Ord::max(v20, v7);
                v28 = v7;
                if (v3 & 1) {
                    goto LABEL_59f5ff;
                }
            } else {
                if a1 == v31 {
                    v13 = v35;
                    v14 = v32;
                    break;
                }
                v28 = v7;
                if (v3 & 1) {
LABEL_59f5ff:
                    v38 = uu_ls::PathData::get_metadata(a1, a4);
                    if let Ok(_) = v38 {
                        v15 = uu_ls::display_size(uu_ls::get_block_size(*((v38 + 56) as &i32), *((v38 + 96) as &i64), v12, v1), v1);
                        v4 = core::cmp::Ord::max(v20, v4);
                    }
                }
            }
            vvar_611{stack -136} = struct48 OrderedDict([(0, 𝜙@64b [((5895763, None), vvar_624{stack -136}), ((5895657, None), vvar_473{stack -136}), ((5895690, None), vvar_624{stack -136}), ((5895604, None), vvar_473{stack -136})]), (16, 𝜙@64b [((5895763, None), vvar_497{stack -120}), ((5895657, None), vvar_474{stack -120}), ((5895690, None), vvar_497{stack -120}), ((5895604, None), vvar_474{stack -120})])])
            uu_ls::display_dir_entry_size(&v17, a1, a3, a4);
            v27 = v22;
            v25 = v23;
            v26 = v24;
            v10 = core::cmp::Ord::max(v17.field_0, v10);
            v11 = core::cmp::Ord::max(v19, v11);
            v5 = core::cmp::Ord::max(v21, v5);
            if (v2 & 1) {
                v9 = core::cmp::Ord::max(*((a1 + 64) as &i64), v9);
            }
            v15 = v18;
            v20 = v21;
            if a2 != 1 {
                v34 = core::cmp::Ord::max(v25, v13);
                core::cmp::Ord::max(v26, v28);
                core::cmp::Ord::max(core::cmp::Ord::max(v27, v14), v34);
                v15 = v18;
                v20 = v21;
            }
        }
    } else if (*((a3 + 242) as &i8) & 1) {
        loop {
            v40 = v30;
            if (v0 & 1) {
                v41 = v40;
                if v41 == v31 {
                    break;
                }
                v42 = uu_ls::PathData::get_metadata(v41, a4);
                v40 = v30;
                if !v42 {
                    continue;
                }
                v16 = uu_ls::display_inode(*((v42 + 40) as &i64));
                core::cmp::Ord::max(v20, v7);
            } else {
                if v40 == v31 {
                    break;
                }
            }
            v43 = uu_ls::PathData::get_metadata(v40, a4);
            if let None = v43 {
                continue;
            }
            v16 = uu_ls::display_size(uu_ls::get_block_size(*((v43 + 56) as &i32), *((v43 + 96) as &i64), v12, v6), v6);
            v4 = core::cmp::Ord::max(v20, v4);
        }
    } else if (v0 & 1) {
        loop {
            v45 = a1;
            if v45 == v31 {
                break;
            }
            v46 = uu_ls::PathData::get_metadata(v45, a4);
            if !v46 {
                continue;
            }
            v15 = uu_ls::display_inode(*((v46 + 40) as &i64));
            core::cmp::Ord::max(v20, v7);
        }
    }
    *(a0 as &struct24) = v7;
    *((a0 + 8) as &u64) = v10;
    *((a0 + 16) as &u64) = v11;
    *((a0 + 24) as &struct24) = v5;
    *((a0 + 32) as &struct32) = v9;
    *((a0 + 40) as &u64) = v14;
    *((a0 + 48) as &u64) = v13;
    *((a0 + 56) as &struct24) = v7;
    *((a0 + 64) as &u64) = v4;
    return v4;
}
