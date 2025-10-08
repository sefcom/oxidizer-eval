fn uu_id::pretty(a0: &struct128) -> int {
    let v0: u64;  // [bp-0x1b8]
    let v1: u64;  // [bp-0x1b8]
    let v2: u64;  // [bp-0x1b8]
    let v3: u64;  // [bp-0x1b0]
    let v4: struct640;  // [bp-0x1a8], Other Possible Types: u32
    let v5: Result<struct32, struct16>;  // [bp-0x1a0], Other Possible Types: u64
    let v6: u64;  // [bp-0x1a0]
    let v7: u64;  // [bp-0x1a0]
    let v8: u64;  // [bp-0x198]
    let v9: u64;  // [bp-0x198]
    let v10: u64;  // [bp-0x198]
    let v11: u32;  // [bp-0x190]
    let v12: u32;  // [bp-0x190]
    let v13: u32;  // [bp-0x190]
    let v14: u32;  // [bp-0x170]
    let v15: struct712;  // [bp-0x16c]
    let v16: Result<struct24, struct24>;  // [bp-0x168], Other Possible Types: struct24, u64
    let v17: u128;  // [bp-0x168]
    let v18: u64;  // [bp-0x168]
    let v19: struct24;  // [bp-0x168], Other Possible Types: u64
    let v20: u64;  // [bp-0x168]
    let v21: u64;  // [bp-0x160]
    let v22: u128;  // [bp-0x158]
    let v23: u64;  // [bp-0x158]
    let v24: core::result::Result<(), core::fmt::Error>;  // [bp-0x158], Other Possible Types: u64
    let v25: struct640;  // [bp-0x158], Other Possible Types: u64
    let v26: iNone;  // [bp-0x148], Other Possible Types: struct640, u128
    let v27: iNone;  // [bp-0x138], Other Possible Types: struct640, u128
    let v28: iNone;  // [bp-0x128], Other Possible Types: struct640, u128
    let v29: iNone;  // [bp-0x118], Other Possible Types: struct640, u128
    let v30: iNone;  // [bp-0x108], Other Possible Types: struct24, u128
    let v31: iNone;  // [bp-0xf8], Other Possible Types: struct712, u128
    let v32: u128;  // [bp-0xe8]
    let v33: u64;  // [bp-0xd8]
    let v34: Result<struct128, struct16>;  // [bp-0xc8], Other Possible Types: struct712, struct24
    let v35: struct712;  // [bp-0xc8]
    let v36: Result<struct128, struct16>;  // [bp-0xc8]
    let v37: struct712;  // [bp-0xc8]
    let v38: u128;  // [bp-0xc8]
    let v39: struct712;  // [bp-0xc0]
    let v40: struct712;  // [bp-0xc0]
    let v41: struct712;  // [bp-0xc0]
    let v42: u128;  // [bp-0xb8]
    let v43: iNone;  // [bp-0x98]
    let v44: iNone;  // [bp-0x88]
    let v45: iNone;  // [bp-0x78]
    let v46: iNone;  // [bp-0x68]
    let v47: struct640;  // [bp-0x40]
    let v49: u64;  // rax
    let v51: iNone;  // xmm0
    let v52: iNone;  // xmm0
    let v53: iNone;  // xmm0
    let v54: u32;  // edx
    let v55: u128;  // xmm0

    if !((((0 ^ *(a0 as &i64)) & (0 ^ -(*(a0 as &i64)))) >> 63) as char) {
        v31 = a0[112] as i128;
        v30 = a0[96] as i128;
        v29 = a0[80] as i128;
        v28 = a0[64] as i128;
        v55 = *(a0 as &i128);
        v27 = a0[48] as i128;
        v26 = a0[32] as i128;
        v22 = a0[16] as i128;
        v16 = v55;
        print!("uid\t{}\ngroups\t", &v16 as u8);
        uucore::features::entries::Passwd::belongs_to(&v5 as u128, &v16);
        core::iter::traits::iterator::Iterator::collect(&v0, <alloc::string::String as core::fmt::Display>::fmt, <alloc::string::String as core::fmt::Display>::fmt + v11 * 4);
        v34 = alloc::str::join_generic_copy(v3, v4, &g_419edd);
        v33 = v42;
        v32 = v34.field_0;
        println!("{}", &v32 as u8);
        return;
    }
    v49 = getlogin();
    if v49 {
        v16 = alloc::ffi::c_str::<impl core::ffi::c_str::CStr>::to_string_lossy(v49, strlen(v49) + 1);
        v16 = v18;
        v24 = v23;
    }
    v20 = v16;
    v14 = uucore::features::process::getuid();
    v34 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(v14);
    match v34 {
        Err(_) => {
            println!("uid\t{}", &v14);
            v16 = v17;
        },
        Ok(_) => {
            v31 = *((&v34 as &char + 112) as &i128);
            v30 = v46;
            v29 = v45;
            v28 = v44;
            v51 = v34 as i128;
            v27 = v43;
            v26 = *((&v34 as &char + 32) as &i128);
            v22 = *((&v34 as &char + 16) as &i128) as u128;
            *(&v17 as void*) = v51;
            if v18 != 9223372036854775809 {
                v0 = v18;
                v3 = v21;
                v4 = v23;
                println!("login\t{}", &v0);
            }
            println!("uid\t{}", &v17 as u8);
            v16 = v20;
            v22 = v24;
        },
    }
    v15 = uucore::features::process::getegid();
    v17 = v16;
    v23 = v22;
    v34 = v35;
    v40 = v39;
    v0 = v1;
    v6 = v5;
    v9 = v8;
    v12 = v11;
    if v15 == v14 {
        v36 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(v15);
        match v36 {
            Err(_) => {
                println!("euid\t{}", &v15);
                v17 = v19;
                v23 = v25;
                v34 = v37;
                v40 = v41;
                v0 = v1;
                v6 = v5;
                v9 = v8;
                v12 = v11;
            },
            Ok(_) => {
                v31 = *((&v36 as &char + 112) as &i128);
                v30 = v46;
                v29 = v45;
                v28 = v44;
                v52 = v36 as i128;
                v27 = v43;
                v26 = *((&v36 as &char + 32) as &i128);
                v22 = *(&v42 as &i128) as u128;
                *(&v20 as void*) = v52;
                println!("euid\t{}", &v16);
                v17 = v16;
                v23 = v22;
                v34 = v35;
                v40 = v39;
                v0 = v2;
                v6 = v7;
                v9 = v10;
                v12 = v13;
            },
        }
    }
    v47 = uucore::features::process::getgid();
    v35 = v34;
    v39 = v40;
    v1 = v0;
    if v47 != v15 {
        v5 = <uucore::features::entries::Group as uucore::features::entries::Locate<u32>>::locate(v47);
        match v5 {
            Err(_) => {
                println!("euid\t{}", &v47 as u64);
                v35 = v37;
                v39 = v41;
                v1 = v0;
            },
            Ok(_) => {
                v53 = v5 as i128;
                v42 = *(&v12 as &i128) as u128;
                *(&v38 as void*) = v53;
                println!("euid\t{}", &v34);
                v35 = v34;
                v39 = v40;
                v1 = v2;
            },
        }
    }
    vvar_748{stack -360} = struct24 OrderedDict([(0, 𝜙@64b [((4577491, None), vvar_645{stack -360}), ((4577493, None), vvar_655{stack -360}), ((4577358, None), vvar_530{stack -360})]), (16, 𝜙@64b [((4577491, None), vvar_650{stack -344}), ((4577493, None), vvar_660{stack -344}), ((4577358, None), vvar_532{stack -344})])])
    uucore::features::entries::get_groups_gnu(&v19, 0, v54);
    v34 = core::result::Result<T,E>::unwrap(&v19);
    core::iter::traits::iterator::Iterator::collect(&v6, v39, v39 + v42 * 4);
    v16 = alloc::str::join_generic_copy(v9, v12, &g_419edd);
    v4 = v25;
    v0 = v16.field_0;
    println!("groups\t{}", &v0 as u64);
    return;
}
