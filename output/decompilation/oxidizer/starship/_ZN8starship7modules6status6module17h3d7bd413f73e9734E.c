fn starship::modules::status::module(a0: i64, a1: i64) -> void {
    let v0: i64;  // [bp-0x288]
    let v1: u64;  // [bp-0x280]
    let v2: struct1;  // [bp-0x278]
    let v3: struct1;  // [bp-0x278]
    let v4: u8;  // [bp-0x270]
    let v5: struct40;  // [bp-0x270]
    let v6: Option<struct162>;  // [bp-0x268]
    let v7: Result<struct24, struct16>;  // [bp-0x260]
    let v8: struct24;  // [bp-0x258]
    let v9: Result<struct24, struct24>;  // [bp-0x238], Other Possible Types: struct40
    let v10: u192;  // [bp-0x238]
    let v11: struct16;  // [bp-0x210], Other Possible Types: struct24, struct40, struct48
    let v12: &str;  // [bp-0x208], Other Possible Types: struct72
    let v13: struct40;  // [bp-0x200], Other Possible Types: u128
    let v14: u128;  // [bp-0x1f8]
    let v15: void*;  // [bp-0x1f0]
    let v16: u64;  // [bp-0x1d0]
    let v17: std::fs::File;  // [bp-0x1c8]
    let v18: Result<struct72, struct24>;  // [bp-0x1c0]
    let v19: struct24;  // [bp-0x1b8]
    let v20: Option<struct24>;  // [bp-0x1b0]
    let v21: struct32;  // [bp-0x1a8]
    let v22: struct24;  // [bp-0x1a0]
    let v23: struct92;  // [bp-0x198]
    let v24: Option<struct24>;  // [bp-0x190]
    let v25: struct32;  // [bp-0x188]
    let v26: struct92;  // [bp-0x168]
    let v27: struct24;  // [bp-0x168]
    let v28: struct92;  // [bp-0x158]
    let v29: struct72;  // [bp-0x148]
    let v30: struct64;  // [bp-0x138]
    let v31: iNone;  // [bp-0x128]
    let v32: u64;  // [bp-0x110]
    let v33: u8;  // [bp-0x108]
    let v34: struct1;  // [bp-0xe8]
    let v35: &str;  // [bp-0xe0]
    let v36: struct1;  // [bp-0xd8]
    let v37: i8;  // [bp-0xd0]
    let v38: i8;  // [bp-0xb0]
    let v39: u128;  // [bp-0x58]
    let v40: u64;  // [bp-0x48]
    let v42: i8;  // [bp-0x36]
    let v43: u8;  // [bp-0x35]
    let v45: &str;  // rax
    let v46: &mut [u8];  // rcx
    let v47: u64;  // rcx
    let v49: struct32;  // r12
    let v50: Option<struct48>;  // rbx
    let v51: &str;  // r15b
    let v52: struct120;  // al
    let v53: struct40;  // cl
    let v55: &str;  // r15
    let v56: struct24;  // rbp
    let v58: struct24;  // r8

    v26 = starship::context::Context::new_module(a1, "status");
    starship::config::ModuleConfig::try_load(&v33, v32);
    if v43 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    if v46 {
        v47 = v46;
    } else {
        v47 = &g_5354a1.inner.iter.iter;
    }
    v49 = v47;
    v52 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v49, v45, "0");
    v53 = !*(&v38 as &i64) & v52;
    if v42 {
        if v53 {
            if v51 {
                v11 = struct16 {
                    field_0: *((a1 + 72) as &i64)
                    field_8: *((a1 + 72) as &i64) + *((a1 + 80) as &i64) * 24
                };
                if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v11) {
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                }
            } else {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
        }
    } else {
        if v53 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    }
    v1 = *(&v37 as &i64);
    v2 = v36;
    v3 = v2;
    v55 = *(&v37 as &i64);
    if v34 {
        v3 = v34;
        v55 = v35;
    }
    v56 = v3;
    v11 = v56;
    v12 = v55;
    v13 = v39;
    v9 = alloc::str::join_generic_copy(&v11, 2, 1, 0);
    v8 = v10;
    if v50 as u32 == 2 {
        v11 = 0;
        v15 = 0;
        v16 = *((a1 + 72) as &i64);
        v17 = *((a1 + 72) as &i64) + *((a1 + 80) as &i64) * 24;
        v18 = 0;
        v19 = a1 + 64;
        v20 = v56;
        v21 = v55;
        v22 = &v8;
        v23 = &v33;
        v24 = a1;
        core::iter::traits::iterator::Iterator::collect(&v4, &v11);
        if v50 == 2 {
            goto LABEL_bbd4d2;
        }
    } else {
        v5 = 0;
        v6 = 8;
        v7 = 0;
        if v50 == 2 {
LABEL_bbd4d2:
        }
    }
    v25 = starship::modules::status::format_exit_code(v49, v45, v40, v58, &v4, &v33, a1);
    if v25.field_0 as i32 != 1 {
        v27 = starship::module::Module::set_segments(&v25 as u8);
        *((v0 + 80) as &i128) = *(&v26.field_80 as &i128);
        *((v0 + 64) as void*) = v31;
        *((v0 + 48) as &struct64) = v30;
        *((v0 + 32) as &struct72) = v29;
        *((v0 + 16) as &struct92) = v28;
        *(v0 as &i128) = *(&v27.field_0 as &i128);
        return;
    }
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v11 = "Error parsing format string in `status.format`";
    v12 = 1;
    v13 = 8;
    v14 = 0;
    v9 = struct40 {
        field_0: "starship::modules::status"
        field_16: "starship::modules::status"
        field_32: log::__private_api::loc("src/modules/status.rs")
    };
    log::__private_api::log(&v11, 2, &v9);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
