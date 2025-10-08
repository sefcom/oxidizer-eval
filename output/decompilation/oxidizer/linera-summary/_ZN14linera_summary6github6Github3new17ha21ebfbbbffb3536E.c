fn linera_summary::github::Github::new(a0: i64, a1: u32, a2: u64, a3: i64) -> long long {
    let v0: alloc::string::String;  // [bp-0x428]
    let v1: u32;  // [bp-0x420]
    let v2: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x410]
    let v3: alloc::string::String;  // [bp-0x408], Other Possible Types: u32
    let v4: u64;  // [bp-0x3f0]
    let v5: u64;  // [bp-0x3e8]
    let v6: iNone;  // [bp-0x3e0]
    let v7: iNone;  // [bp-0x3d0]
    let v8: iNone;  // [bp-0x3c0]
    let v9: iNone;  // [bp-0x3b0]
    let v10: iNone;  // [bp-0x3a0]
    let v11: iNone;  // [bp-0x390]
    let v12: iNone;  // [bp-0x380]
    let v13: u128;  // [bp-0x370]
    let v14: u64;  // [bp-0x360]
    let v15: struct24;  // [bp-0x358], Other Possible Types: u64
    let v16: iNone;  // [bp-0x350], Other Possible Types: struct24
    let v17: iNone;  // [bp-0x340]
    let v18: iNone;  // [bp-0x330]
    let v19: iNone;  // [bp-0x320]
    let v20: iNone;  // [bp-0x310]
    let v21: iNone;  // [bp-0x300]
    let v22: iNone;  // [bp-0x2f0]
    let v23: struct20;  // [bp-0x2e0], Other Possible Types: u128
    let v24: Result<struct24, struct16>;  // [bp-0x2d8]
    let v25: core::result::Result<u64, core::num::error::ParseIntError>;  // [bp-0x2d0]
    let v26: struct40;  // [bp-0x2c0]
    let v27: struct40;  // [bp-0x2b8]
    let v28: u32;  // [bp-0x2a8]
    let v29: u32;  // [bp-0x298]
    let v30: u32;  // [bp-0x288]
    let v31: u8;  // [bp-0x280]
    let v32: u8;  // [bp-0x228]
    let v33: void*;  // [bp-0x1d0]
    let v34: struct416;  // [bp-0x1c0], Other Possible Types: u64
    let v35: struct24;  // [bp-0x1c0]
    let v36: Result<struct128, struct16>;  // [bp-0x1c0]
    let v37: u64;  // [bp-0x1c0]
    let v38: u64;  // [bp-0x1b8]
    let v39: u64;  // [bp-0x1b8]
    let v40: u64;  // [bp-0x1b0]
    let v41: u128;  // [bp-0x1a0]
    let v42: u128;  // [bp-0x190]
    let v43: u128;  // [bp-0x180]
    let v44: u128;  // [bp-0x170]
    let v45: u128;  // [bp-0x160]
    let v46: u128;  // [bp-0x150]
    let v47: void*;  // [bp-0x140]
    let v48: u64;  // [bp-0x138]
    let v49: u128;  // [bp-0x130]
    let v50: u64;  // [bp-0x120]
    let v51: void*;  // [bp-0x118]
    let v52: u32;  // [bp-0x108]
    let v53: u32;  // [bp-0xf8]
    let v54: u32;  // [bp-0xe8]
    let v55: u8;  // [bp-0xe0]
    let v56: u8;  // [bp-0x88]
    let v57: void*;  // [bp-0x30]
    let v59: u64;  // rbp
    let v60: iNone;  // xmm0

    v59 = a1;
    if a1 {
        v34 = 1;
        v38 = 3;
        v40 = 2;
        v47 = 0;
        v48 = 8;
        v49 = 0;
        v50 = 8;
        v51 = 0;
        v52 = 0x3b9aca00;
        v53 = 0x3b9aca00;
        v54 = 0x3b9aca00;
        v55 = 3;
        v56 = 3;
        v57 = 0;
    } else {
        v14 = 1;
        v15 = 3;
        v16 = 2;
        v23 = 0;
        v24 = 8;
        v25 = 0;
        v26 = 8;
        v27 = 0;
        v28 = 0x3b9aca00;
        v29 = 0x3b9aca00;
        v30 = 0x3b9aca00;
        v31 = 3;
        v32 = 3;
        v33 = 0;
        v2 = std::env::var("GITHUB_TOKEN");
        match v2 {
            Err(_) => {
                return struct16 {
                    field_0: 4
                    field_8: linera_summary::github::Github::new::{{closure}}(v3, v1)
                };
            },
            Ok(v0) => {
                v34 = octocrab::OctocrabBuilder<octocrab::NoSvc,octocrab::DefaultOctocrabBuilderConfig,octocrab::NoAuth,octocrab::NotLayerReady>::personal_token(&v14, &v0);
            },
        }
    }
    vvar_337{stack -448} = struct24 OrderedDict([(0, 𝜙@64b [((9540592, None), vvar_256{stack -448}), ((9540982, None), None)]), (8, 𝜙@64b [((9540592, None), vvar_257{stack -440}), ((9540982, None), None)]), (16, 𝜙@64b [((9540592, None), vvar_258{stack -432}), ((9540982, None), None)])])
    octocrab::OctocrabBuilder<octocrab::NoSvc,octocrab::DefaultOctocrabBuilderConfig,octocrab::NoAuth,octocrab::NotLayerReady>::build(&v2 as u8, &v35);
    if v4 == 4 {
        return struct16 {
            field_0: 4
            field_8: linera_summary::github::Github::new::{{closure}}(&v2 as u8)
        };
    }
    v23 = v13;
    v22 = v12;
    v21 = v11;
    v20 = v10;
    v19 = v9;
    v18 = v8;
    v17 = v7;
    v16 = v6;
    v14 = v4;
    v15 = v5;
    v36 = linera_summary::github::GithubContext::from_env(v59, a2);
    if !((((0 ^ v36 as i64) & (0 ^ -(v37))) >> 63) as char) {
        *((a0 + 0x100) as &u128) = v46;
        *((a0 + 240) as &u128) = v45;
        *((a0 + 224) as &u128) = v44;
        v60 = *((&v36 as &char + 16) as &i128);
        *((a0 + 208) as &u128) = v43;
        *((a0 + 192) as &u128) = v42;
        *((a0 + 176) as &u128) = v41;
        *((a0 + 160) as void*) = v60;
        memcpy(a0, &v14, 144);
        *((a0 + 144) as &i64) = v36 as i64;
        *((a0 + 152) as &u64) = v39;
        *((a0 + 272) as &u8) = v59;
        return a0;
    }
    return struct16 {
        field_0: 4
        field_8: v39
    };
}
