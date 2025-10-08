fn starship::modules::package::get_maven_version(a0: i64, a1: void*, a2: i64) -> long long {
    let v0: Result<struct24, struct24>;  // [bp-0x190], Other Possible Types: struct24, u64
    let v1: Option<struct169>;  // [bp-0x188], Other Possible Types: struct24, struct48
    let v2: Result<struct72, struct24>;  // [bp-0x180], Other Possible Types: struct24, u64, unsigned long
    let v3: struct32;  // [bp-0x178]
    let v4: struct24;  // [bp-0x170]
    let v5: u64;  // [bp-0x160]
    let v6: struct48;  // [bp-0x160], Other Possible Types: u64
    let v7: struct48;  // [bp-0x160]
    let v8: i64;  // [bp-0x158]
    let v9: i64;  // [bp-0x158]
    let v10: struct24;  // [bp-0x150]
    let v11: u64;  // [bp-0x148]
    let v12: u64;  // [bp-0x148]
    let v13: u64;  // [bp-0x140]
    let v14: u64;  // [bp-0x140]
    let v15: u64;  // [bp-0x138]
    let v16: u64;  // [bp-0x138]
    let v17: struct72;  // [bp-0x130]
    let v18: struct40;  // [bp-0x128]
    let v19: struct16;  // [bp-0x120]
    let v20: struct40;  // [bp-0x110]
    let v21: struct40;  // [bp-0x108]
    let v22: struct24;  // [bp-0xf8], Other Possible Types: struct48
    let v23: Result<struct72, struct24>;  // [bp-0xc8], Other Possible Types: struct40
    let v24: i64;  // [bp-0xa0]
    let v25: u64;  // [bp-0x98]
    let v26: Option<struct24>;  // [bp-0x90], Other Possible Types: Result<struct24, struct16>
    let v27: u64;  // [bp-0x90]
    let v28: struct24;  // [bp-0x88]
    let v29: struct24;  // [bp-0x80]
    let v30: Result<struct72, struct24>;  // [bp-0x70]
    let v31: void*;  // [bp-0x68]
    let v32: Option<struct24>;  // [bp-0x61]
    let v33: struct48;  // [bp-0x59]
    let v34: struct92;  // [bp-0x58]
    let v35: Option<struct32>;  // [bp-0x48]
    let v36: Option<struct162>;  // [bp-0x40]
    let v38: &str;  // ebx
    let v39: &mut [u8];  // r13b
    let v40: Option<struct24>;  // rax
    let v41: u64;  // rdx
    let v42: struct40;  // rbx
    let v43: Option<struct153>;  // rbx
    let v44: struct48;  // r15
    let v45: Option<struct137>;  // r14
    let v46: &mut [u8];  // rax:rdx

    v26 = starship::context::Context::read_file_from_pwd(a1, "pom.xml");
    if (((0 ^ v26 as i64) & (0 ^ -(v27))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v21 = *((&v26 as &char + 8) as &i128);
    v20 = v26 as i64;
    v36 = v21;
    v26 = 0;
    v28 = 1;
    v29 = 0;
    v30 = 8;
    v32 = 0x101000100000000;
    v31 = 0;
    v34 = 0;
    v35 = 0;
    v33 = 1;
    v17 = 0;
    v18 = 1;
    v19 = 0;
    v38 = 0;
    loop {
        vvar_628{stack -352} = struct48 OrderedDict([(0, 𝜙@64b [((12255285, None), vvar_498{stack -352}), ((12255264, None), vvar_487{stack -352})]), (8, 𝜙@64b [((12255285, None), vvar_499{stack -344}), ((12255264, None), vvar_488{stack -344})]), (24, 𝜙@64b [((12255285, None), vvar_483{stack -328}), ((12255264, None), vvar_489{stack -328})]), (32, 𝜙@64b [((12255285, None), vvar_484{stack -320}), ((12255264, None), vvar_490{stack -320})]), (40, 𝜙@64b [((12255285, None), vvar_485{stack -312}), ((12255264, None), vvar_491{stack -312})])])
        quick_xml::reader::Reader<R>::read_event_impl(&v7, &v26, &v17);
        if v7.field_0 == 9223372036854775822 {
            v11 = v12;
            v13 = v14;
            v15 = v16;
            match (v9) {
                0 => {
                    v11 = v12;
                    v13 = v14;
                    v15 = v16;
                    if v38 == 1 {
                        v40 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v16, v12, v14, "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/quick-xml-0.38.3/src/events/mod.rs");
                        v11 = v12;
                        v13 = v14;
                        v15 = v16;
                        if v41 == 7 {
                            v39 = (*(v40 as &i32) | (*((v40 + 6) as &i8) * 0x10000 | *((v40 + 4) as &i16)) * 0x100000000) == 31084746137298294;
                            v38 += 1;
                            v11 = v12;
                            v13 = v14;
                            v15 = v16;
                            goto LABEL_bb0035;
                        }
                    }
                    break;
                }
                1 => {
                    v38 -= 1;
                    v11 = v12;
                    v13 = v14;
                    v15 = v16;
                    goto LABEL_bb0035;
                }
                3 => {
                    if !(v39 & 1) {
                        v5 = v6;
                        v8 = v9;
                        v11 = v12;
                        v13 = v14;
                        v15 = v16;
                        break;
                    } else {
                        v22 = v10;
                        v0 = quick_xml::events::BytesRef::decode(&v22);
                        v43 = a0;
                        if let Ok(_) = v0 {
                            v44 = v1;
                            v45 = v2;
                            if v0 as i64 == 0x8000000000000000 {
                                v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v1, v2);
                                v44 = v1;
                                v45 = v2;
                                v1 = v44;
                                v2 = v45;
                                if v0.field_0 as i64 == 0x8000000000000000 {
                                    goto LABEL_bb0331;
                                }
                            } else {
                                v1 = v44;
                                v2 = v45;
                            }
                            v23 = 0;
                            v46 = core::char::methods::encode_utf8_raw(36, &v23 as u64, 4);
                            if !core::slice::<impl [T]>::starts_with(v44 as u32, v45 as u32) as u8 {
                                starship::modules::package::format_version(a0, v44, v45, *((a2 + 48) as &i64), *((a2 + 56) as &i64));
                            }
                        }
LABEL_bb0331:
                        return struct8 {
                            field_0: 0x8000000000000000
                        };
                    }
                }
                _ => {
LABEL_bb0035:
                }
            }
        } else {
            v22 = v6;
            v42 = a0;
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 2 {
                v24 = &v22;
                v25 = <quick_xml::errors::Error as core::fmt::Display>::fmt;
                v0 = "Error parsing pom.xml`:\n";
                v1 = 1;
                v4 = 0;
                v2 = &v24;
                v3 = 1;
                v23 = struct40 {
                    field_0: "starship::modules::package"
                    field_16: "starship::modules::package"
                    field_32: log::__private_api::loc("src/modules/package.rs")
                };
                log::__private_api::log(&v0, 2, &v23);
            }
        }
    }
}
