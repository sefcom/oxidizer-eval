fn meilitool::upgrade::OfflineUpgrade::upgrade(a0: i64) -> long long {
    let v0: u32;  // [bp-0x188]
    let v1: u32;  // [bp-0x184]
    let v2: u32;  // [bp-0x180]
    let v3: u32;  // [bp-0x17c]
    let v4: u32;  // [bp-0x178]
    let v5: u32;  // [bp-0x174]
    let v6: u32;  // [bp-0x10c]
    let v7: struct24;  // [bp-0x108]
    let v8: u64;  // [bp-0xd8]
    let v9: u64;  // [bp-0xd0]
    let v10: u32;  // [bp-0xc8]
    let v11: u64;  // [bp-0xc0]
    let v12: u64;  // [bp-0xb8]
    let v13: u32;  // [bp-0xb0]
    let v14: u64;  // [bp-0xa8]
    let v15: u64;  // [bp-0xa0]
    let v16: u32;  // [bp-0x98]
    let v17: u64;  // [bp-0x90]
    let v18: u64;  // [bp-0x88]
    let v19: u32;  // [bp-0x80]
    let v20: alloc::string::String;  // [bp-0x78]
    let v21: alloc::string::String;  // [bp-0x60]
    let v23: alloc::string::String;  // [bp-0x48]
    let v25: u64;  // r15
    let v26: u64;  // r14
    let v27: void*;  // rax
    let v29: u64;  // r14
    let v30: u8;  // r15b
    let v31: u64;  // r12
    let v32: void*;  // r12
    let v35: u64;  // rax
    let v36: u32;  // ebp
    let v37: u32;  // r13d
    let v38: u64;  // r15
    let v39: u64;  // r14
    let v40: core::option::Option<usize>;  // rax:rdx
    let v42: u32;  // [bp-0xcc]

    v25 = a0 + 24;
    v26 = a0 + 36;
    if core::tuple::<impl core::cmp::PartialEq for (V,U,T)>::eq(v25, v26) {
        println!("Database is already at the target version. Exiting.");
    } else {
        if core::tuple::<impl core::cmp::PartialOrd for (V,U,T)>::gt(v25, v26) {
            v20 = format!("Cannot downgrade from {}.{}.{} to {}.{}.{}. Downgrade not supported", v25, a0 + 28, a0 + 32, v26, a0 + 40, a0 + 44);
            v27 = anyhow::error::<impl anyhow::Error>::msg(&v20);
            goto LABEL_75a863;
        }
        v8 = meilitool::upgrade::v1_10::v1_9_to_v1_10;
        v9 = 42949672961;
        v10 = 0;
        v11 = meilitool::upgrade::v1_11::v1_10_to_v1_11;
        v12 = 47244640257;
        v13 = 0;
        v14 = meilitool::upgrade::v1_12::v1_11_to_v1_12;
        v15 = 51539607553;
        v16 = 0;
        v17 = meilitool::upgrade::v1_12::v1_12_to_v1_12_3;
        v18 = 51539607553;
        v19 = 3;
        v0 = *((a0 + 24) as &i32);
        v1 = *((a0 + 28) as &i32);
        v2 = *((a0 + 32) as &i32);
        if v0 != 1 {
LABEL_75a7a4:
            v21 = format!("Unsupported current version {}.{}.{}. Can only upgrade from versions in range [{}-{}]", &v0, &v1, &v2, "1.9.0", "1.12.7");
            goto LABEL_75a856;
        }
        match (v1) {
            12 => {
                if v2 > 2 && v2 >= 8 {
                    goto LABEL_75a7a4;
                }
                break;
            }
            _ => {
LABEL_75a7a4:
                v21 = format!("Unsupported current version {}.{}.{}. Can only upgrade from versions in range [{}-{}]", &v0, &v1, &v2, "1.9.0", "1.12.7");
LABEL_75a856:
                v27 = anyhow::error::<impl anyhow::Error>::msg(&v21);
            }
        }
        v3 = *((a0 + 36) as &i32);
        v4 = *((a0 + 40) as &i32);
        v5 = *((a0 + 44) as &i32);
        if v3 == 1 {
            if v4 != 10 && v4 != 11 {
                if v4 != 12 {
                    goto LABEL_75a6cb;
                }
                v31 = 2;
                if v5 > 2 {
                    v31 = 3;
                    if v5 >= 8 {
                        goto LABEL_75a6cb;
                    }
                }
            }
            println!("Starting the upgrade from {}.{}.{} to {}.{}.{}", &v0, &v1, &v2, &v3, &v4, &v5);
            if v30 {
                println!("No upgrade operation to perform, writing VERSION file");
                v32 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(meilisearch_types::versioning::create_version_file(*((a0 + 8) as &i64), *((a0 + 16) as &i64), v3, v4, v5));
                if !v32 {
                    println!("Success");
                }
            } else {
                v7 = struct24 {
                    field_0: v29
                    field_8: v31
                    field_16: 0
                };
                do {
                    v40 = <core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v7);
                    match v40 {
                        Some(_) => {
                            v35 = *((&v40 as &char + 8) as &i64) * 3;
                            v36 = *(&(&v9 as u8)[8 * v35] as &i32);
                            v37 = (&v42)[2 * v35];
                            v6 = (&v10 as u64)[v35] as i32;
                            v38 = *((a0 + 8) as &i64);
                            v39 = *((a0 + 16) as &i64);
                            v32 = (&v8)[v35](v38, v39, v0 as u64, v1 as u64, v2 as u64) as i64;
                            if v32 {
                                break;
                            }
                            continue;
                        },
                        None => {
                            println!("Success");
                        },
                    }
                    println!("Done");
                    println!("Writing VERSION file");
                    v32 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(meilisearch_types::versioning::create_version_file(v38, v39, v36, v37, v6));
                } while (!v32);
            }
        } else {
LABEL_75a6cb:
            v23 = format!("Unsupported target version {}.{}.{}. Can only upgrade to versions in range [{}-{}]", &v3, &v4, &v5, "1.10.0", "1.12.7");
            v27 = anyhow::error::<impl anyhow::Error>::msg(&v23);
LABEL_75a863:
            v32 = v27;
        }
    }
    return v32;
}
