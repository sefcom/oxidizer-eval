fn fd::walk::WorkerState::build_walker(a0: i64, a1: i64, a2: u32) -> int {
    let v0: struct24;  // [bp-0x358]
    let v1: struct24;  // [bp-0x330], Other Possible Types: alloc::string::String
    let v2: Result<struct56, struct32>;  // [bp-0x330], Other Possible Types: alloc::string::String
    let v3: u64;  // [bp-0x330]
    let v4: &mut [u8];  // [bp-0x330]
    let v5: Result<struct56, struct32>;  // [bp-0x330]
    let v6: void*;  // [bp-0x328]
    let v7: iNone;  // [bp-0x320], Other Possible Types: struct8
    let v8: iNone;  // [bp-0x310], Other Possible Types: struct8
    let v9: struct8;  // [bp-0x300], Other Possible Types: u64
    let v10: struct104;  // [bp-0x2f8]
    let v11: struct24;  // [bp-0x2f8]
    let v12: u128;  // [bp-0x2f8]
    let v13: u128;  // [bp-0x2f8]
    let v14: void*;  // [bp-0x2f0]
    let v15: iNone;  // [bp-0x2e8]
    let v16: iNone;  // [bp-0x2d8]
    let v17: struct8;  // [bp-0x2c8], Other Possible Types: u64
    let v18: struct24;  // [bp-0x280]
    let v19: u64;  // [bp-0x278]
    let v20: u64;  // [bp-0x270]
    let v21: Option<struct24>;  // [bp-0x228]
    let v22: struct24;  // [bp-0x228]
    let v23: u64;  // [bp-0x210]
    let v24: struct104;  // [bp-0x210]
    let v25: u64;  // [bp-0x208]
    let v26: iNone;  // [bp-0x200]
    let v27: iNone;  // [bp-0x1f0]
    let v28: iNone;  // [bp-0x1e0]
    let v29: iNone;  // [bp-0x1d0]
    let v30: iNone;  // [bp-0x1c0]
    let v31: u64;  // [bp-0x1b0]
    let v32: struct170;  // [bp-0x1a8], Other Possible Types: u8
    let v33: u64;  // [bp-0x1a0]
    let v34: iNone;  // [bp-0x198]
    let v35: iNone;  // [bp-0x188]
    let v36: iNone;  // [bp-0x178]
    let v37: iNone;  // [bp-0x168]
    let v38: iNone;  // [bp-0x158]
    let v39: i8;  // [bp-0x148]
    let v40: u8;  // [bp-0x110]
    let v41: u8;  // [bp-0x10f]
    let v42: u8;  // [bp-0x10e]
    let v43: u8;  // [bp-0x10d]
    let v44: u8;  // [bp-0x10c]
    let v45: u8;  // [bp-0x10b]
    let v46: u8;  // [bp-0x109]
    let v47: u64;  // [bp-0xf8]
    let v48: alloc::string::String;  // [bp-0xd0]
    let v49: struct106;  // [bp-0xb8]
    let v50: u128;  // [bp-0xa8]
    let v51: u128;  // [bp-0x98]
    let v52: u128;  // [bp-0x88]
    let v53: u128;  // [bp-0x78]
    let v54: u128;  // [bp-0x68]
    let v55: u128;  // [bp-0x58]
    let v56: alloc::string::String;  // [bp-0x48]
    let v58: u8;  // al
    let v59: u8;  // al
    let v60: i64;  // rax
    let v61: u64;  // rbp
    let v62: u64;  // r14
    let v63: u64;  // r14
    let v64: u64;  // r14
    let v66: struct40;  // r14
    let v67: struct16;  // r15

    fd::walk::WorkerState::build_overrides(&v32, *((a1 + 88) as &i64), *((a1 + 96) as &i64), a2);
    if (((0 ^ v32) & (0 ^ -(v32))) >> 63) as char {
        return struct16 {
            field_0: 2
            field_8: v25
        };
    }
    v31 = *(&v39 as &i64);
    v30 = v38;
    v29 = v37;
    v28 = v36;
    v27 = v35;
    v26 = v34;
    v23 = v32;
    v25 = v33;
    v32 = ignore::walk::WalkBuilder::new(a2);
    v40 = *((a1 + 474) as &i8);
    v41 = *((a1 + 475) as &i8);
    v42 = v58;
    v59 = *((a1 + 477) as &i8);
    v44 = v59;
    v43 = v59;
    v45 = v59;
    v46 = *((a1 + 478) as &i8);
    v10 = v24;
    v60 = ignore::walk::WalkBuilder::overrides(&v32, &v10);
    *((v60 + 208) as &i8) = *((a1 + 480) as &i8);
    *((v60 + 209) as &i8) = *((a1 + 481) as &i8);
    *(v60 as &i128) = *(a1 as &i128);
    if v41 {
        ignore::dir::IgnoreBuilder::add_custom_ignore_filename(&v32 as u128);
    }
    if *((a1 + 479) as &i8) {
        v21 = etcetera::base_strategy::choose_native_strategy();
        if let Some(v0) = v21 {
            v12 as u192 = <etcetera::base_strategy::xdg::Xdg as etcetera::base_strategy::BaseStrategy>::config_dir(&v0);
            v1 = std::path::Path::join(v14, v11.field_16, "fd");
            v18 = std::path::Path::join(v6, v1.field_16, "ignore");
            core::mem::drop(v1.field_0 as i64, v6);
            core::mem::drop(v11.field_0 as i64, v14);
            if std::path::Path::is_file(v19, v20) as u8 {
                v2 = ignore::walk::WalkBuilder::add_ignore(&v32, &v18);
                v1 = v3;
                v4 = v3;
                if let Ok(_) = v2 {
                    v1 = v3;
                    v4 = v3;
                    if let Ok(_) = v2 {
                        v17 = v9;
                        v16 = v8;
                        v15 = v7;
                        v12 = v2 as i128 as u128;
                        v48 = format!("Malformed pattern in global ignore file. {}.", &v12 as u192);
                        fd::error::print_error(&v48);
                        v1 = v3;
                        v4 = v3;
                    }
                }
            } else {
                core::mem::drop(v18.field_0 as i64, v19);
                v1 = v3;
            }
            v1 = v1;
        }
    }
    if *((a1 + 120) as &i64) {
        do {
            v63 = v62;
            v5 = ignore::walk::WalkBuilder::add_ignore(&v32, v61);
            v2 = v1;
            if let Ok(_) = v5 {
                v2 = v1;
                if let Ok(_) = v5 {
                    v17 = v9;
                    v16 = v8;
                    v15 = v7;
                    v13 = v5 as i128 as u128;
                    v56 = format!("Malformed pattern in custom ignore file. {}.", &v10);
                    fd::error::print_error(&v56);
                }
            }
            v61 += 24;
            v64 = v63 - 24;
            v62 = v64;
        } while (v63 != 24);
    }
    while (v66) {
        v66 -= 24;
        ignore::walk::WalkBuilder::add(&v32, v67);
    }
    v47 = *((a1 + 416) as &i64);
    v49 = ignore::walk::WalkBuilder::build_parallel(&v32);
    return struct112 {
        field_0: v49.field_0
        field_16: v50
        field_32: v51
        field_48: v52
        field_64: v53
        field_80: v54
        field_96: v55
    };
}
