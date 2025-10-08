fn uu_who::platform::unix::Who::print_user(a0: i64, a1: i64) -> u64 {
    let v0: void*;  // [bp-0x200]
    let v1: struct712;  // [bp-0x1f0]
    let v2: u32;  // [bp-0x1ec]
    let v3: struct24;  // [bp-0x1e8], Other Possible Types: u64
    let v4: alloc::string::String;  // [bp-0x1e0]
    let v5: struct24;  // [bp-0x1d8]
    let v6: Result<struct24, struct24>;  // [bp-0x1d0]
    let v7: alloc::string::String;  // [bp-0x1c8]
    let v8: u64;  // [bp-0x1c0]
    let v9: struct16;  // [bp-0x1b8]
    let v10: struct16;  // [bp-0x1b0], Other Possible Types: struct24
    let v11: u64;  // [bp-0x1a8]
    let v12: u64;  // [bp-0x1a0]
    let v13: struct24;  // [bp-0x198], Other Possible Types: u64
    let v14: &str;  // [bp-0x190]
    let v15: u64;  // [bp-0x178]
    let v16: u32;  // [bp-0x170]
    let v17: u128;  // [bp-0x168]
    let v18: u64;  // [bp-0x160]
    let v19: struct24;  // [bp-0x158], Other Possible Types: u64
    let v20: u64;  // [bp-0x148]
    let v21: u64;  // [bp-0x140]
    let v22: u64;  // [bp-0x138]
    let v23: u64;  // [bp-0x130]
    let v24: struct24;  // [bp-0x128]
    let v25: u64;  // [bp-0x120]
    let v26: u64;  // [bp-0x118]
    let v27: struct24;  // [bp-0x110]
    let v28: u64;  // [bp-0x108]
    let v29: u64;  // [bp-0x100]
    let v30: Result<struct24, struct16>;  // [bp-0xe8]
    let v31: struct24;  // [bp-0xe8]
    let v32: u128;  // [bp-0xe8]
    let v33: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe8]
    let v34: u32;  // [bp-0xe0]
    let v35: u64;  // [bp-0xd8]
    let v37: u32;  // ebp
    let v39: struct24;  // r14
    let v40: u64;  // [bp-0x190]
    let v41: u64;  // [bp-0x188]
    let v42: struct24;  // [bp-0x180]

    v10 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("/dev");
    v31 = uucore::features::utmpx::Utmpx::tty_device(a1);
    v10 = std::path::PathBuf::push(v34, v35);
    v33 = std::fs::metadata(v11, v12);
    match v33 {
        Ok(_) => {
            if *((&v33 as &char + 104) as &i64) {
                v13 = uu_who::platform::unix::idle_string(*((&v33 as &char + 104) as &i64));
                if !*((a0 + 24) as &i8) {
                    goto LABEL_4688b4;
                }
LABEL_46880f:
                v30 = uucore::features::utmpx::Utmpx::canon_host(a1);
                v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v30, a1);
                v39 = v8;
                if let Err(_) = v6 {
                    return v7;
                }
                v3 = v6 as i64;
                v4 = v7;
                v5 = v39;
                if v39 {
                    goto LABEL_4688cc;
                }
LABEL_468867:
                v19 = v5;
                v17 = *(&v3 as &i128) as u128;
            }
        },
        Err(_) => {
            v14 = "  ?";
            v13 = 0x8000000000000000;
            if *((a0 + 24) as &i8) {
                goto LABEL_46880f;
            }
LABEL_4688b4:
            v3 = uucore::features::utmpx::Utmpx::host(a1);
            v39 = v5;
            if !v39 {
                goto LABEL_468867;
            }
LABEL_4688cc:
            format!("({})", &v3);
            v17 = v6 as i128 as u128;
            v19 = v8;
        },
    }
    v9 = v39;
    v24 = uucore::features::utmpx::Utmpx::user(a1);
    v1 = v37;
    v27 = uucore::features::utmpx::Utmpx::tty_device(a1);
    v22 = v26;
    v23 = v25;
    v21 = v28;
    v20 = v29;
    v42 = uu_who::platform::unix::time_string(a1);
    v2 = *((a1 + 4) as &i32);
    format!("{}", &v2);
    v35 = v8;
    v32 = v6 as i128;
    v0 = 0;
    uu_who::platform::unix::Who::print_line(a0, v23, v22, v1, v21, v20, v15, v16, v40, v41, *((&v32 as &char + 8) as &i128), *((&v32 as &char + 8) as &i128), *(&v18 as &i128), *(&v18 as &i128), 1);
    return v7;
}
