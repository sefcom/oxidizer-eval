fn linera_summary::github::GithubContext::from_env(a0: i64, a1: u32, a2: u64) -> int {
    let v0: u64;  // [bp-0x1b0]
    let v1: struct16;  // [bp-0x1a8], Other Possible Types: u64
    let v2: struct80;  // [bp-0x1a0], Other Possible Types: u64
    let v3: u64;  // [bp-0x198]
    let v4: u64;  // [bp-0x190]
    let v5: struct48;  // [bp-0x188], Other Possible Types: struct80
    let v6: u64;  // [bp-0x178]
    let v7: u64;  // [bp-0x170]
    let v8: struct48;  // [bp-0x168], Other Possible Types: struct80
    let v9: u128;  // [bp-0x158]
    let v10: u64;  // [bp-0x150]
    let v11: struct80;  // [bp-0x148]
    let v12: u64;  // [bp-0x140]
    let v13: Result<struct72, struct16>;  // [bp-0x140]
    let v14: struct48;  // [bp-0x140]
    let v15: u64;  // [bp-0x138]
    let v16: struct56;  // [bp-0x138]
    let v17: struct80;  // [bp-0x130], Other Possible Types: u64
    let v18: u128;  // [bp-0x128]
    let v19: u64;  // [bp-0x118]
    let v20: iNone;  // [bp-0x110]
    let v21: struct80;  // [bp-0x100]
    let v22: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0xf8]
    let v23: u32;  // [bp-0xf0]
    let v24: u64;  // [bp-0xe8]
    let v25: struct80;  // [bp-0xe0]
    let v26: iNone;  // [bp-0xd8]
    let v27: struct48;  // [bp-0xc8]
    let v28: iNone;  // [bp-0xb8]
    let v29: struct80;  // [bp-0xa8]
    let v30: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0xa0]
    let v31: u64;  // [bp-0x98]
    let v32: u64;  // [bp-0x90]
    let v33: struct48;  // [bp-0x88]
    let v34: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x80]
    let v35: u64;  // [bp-0x78]
    let v36: u64;  // [bp-0x70]
    let v37: struct80;  // [bp-0x68]
    let v38: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x60]
    let v39: u64;  // [bp-0x58]
    let v40: struct16;  // [bp-0x50]
    let v41: u64;  // [bp-0x48]
    let v43: u64;  // rcx
    let v45: u64;  // rbp
    let v47: struct16;  // rsi
    let v48: u64;  // rax
    let v49: u64;  // rax
    let v50: u64;  // rax
    let v52: core::result::Result<u64, core::num::error::ParseIntError>;  // rax:rdx

    v45 = a1;
    v34 = std::env::var("GITHUB_PR_COMMIT_HASH");
    v30 = std::env::var("GITHUB_PR_BRANCH");
    v22 = std::env::var("GITHUB_BASE_BRANCH");
    v38 = std::env::var("GITHUB_PR_NUMBER");
    if v45 {
        v13 = linera_summary::github::GithubContext::get_local_git_info();
        match v13 {
            Err(_) => {
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: v15
                };
            },
            Ok(_) => {
                v5 = v19;
                v3 = *((&v13 as &char + 24) as &i128) as u128;
                v8 = v21;
                *(&v6 as void*) = v20;
                v0 = v13 as i64;
                v1 = v15;
                v2 = v17;
                if !(a2 as u8 & 1) {
                    v12 = "pr_number is None";
                    v15 = 1;
                    v17 = 8;
                    v18 = 0 as u128;
                    return struct16 {
                        field_0: 0x8000000000000000
                        field_8: anyhow::__private::format_err(&v12)
                    };
                }
                v11 = v2;
                v9 = v0;
                v10 = v1;
                v26 = v3;
                v27 = v5;
                v28 = v6;
                v29 = v8;
            },
        }
    } else if (v38 as i8 & 1) {
        linera_summary::github::GithubContext::from_env::{{closure}}(v39, v47);
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v40
        };
    } else if v39 == 0x8000000000000000 {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v40
        };
    } else {
        v0 = v39;
        v1 = v40;
        v2 = v41;
        if (*((&v30 as &char + 32) as &i8) & 1) {
            linera_summary::github::GithubContext::from_env::{{closure}}(v35, v48);
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v36
            };
        } else if v35 == 0x8000000000000000 {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v36
            };
        } else {
            v3 = v35;
            v4 = v36;
            v5 = v37;
            if (v30 as i8 & 1) {
                linera_summary::github::GithubContext::from_env::{{closure}}(v31, v49);
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: v32
                };
            } else if v31 == 0x8000000000000000 {
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: v32
                };
            } else {
                v6 = v31;
                v7 = v32;
                v8 = v33;
                if (v22 as i8 & 1) {
                    linera_summary::github::GithubContext::from_env::{{closure}}(v23, v50);
                    return struct16 {
                        field_0: 0x8000000000000000
                        field_8: v24
                    };
                } else if v23 == 0x8000000000000000 {
                    return struct16 {
                        field_0: 0x8000000000000000
                        field_8: v24
                    };
                } else {
                    v12 = v23;
                    v15 = v24;
                    v17 = v25;
                    v52 = core::num::<impl u64>::from_ascii_radix(&v38 as u8, v47, v2);
                    match v38 as u8 {
                        Err(_) => {
                            return struct16 {
                                field_0: 0x8000000000000000
                                field_8: linera_summary::github::GithubContext::from_env::{{closure}}(&v0, a1 as u64, a2)
                            };
                        },
                        Ok(_) => {
                            v9 = *(&v3 as &i128) as u128;
                            v11 = v5;
                            v26 = *(&v6 as &i128);
                            v27 = v8;
                            v28 = *(&v12 as &i128);
                            v29 = v17;
                        },
                    }
                }
            }
        }
    }
    vvar_685{stack -320} = struct48 OrderedDict([(0, 𝜙@64b [((9539565, None), vvar_646{stack -320}), ((9538731, None), vvar_589{stack -320})]), (16, 𝜙@64b [((9539565, None), vvar_648{stack -304}), ((9538731, None), vvar_591{stack -304})]), (32, 𝜙@64b [((9539565, None), None), ((9538731, None), None)])])
    linera_summary::github::GithubRepository::from_env(&v14, v45);
    if v14.field_0 as i64 != 0x8000000000000000 {
        return struct128 {
            field_0: v14.field_0 as i64
            field_8: v16
            field_16: v14.field_16
            field_32: *(&v14.field_32 as &i128)
            field_48: v9
            field_64: v11
            field_72: v26
            field_88: v27
            field_96: v28
            field_112: v29
            field_120: v43
        };
    }
    return struct16 {
        field_0: 0x8000000000000000
        field_8: v16
    };
}
