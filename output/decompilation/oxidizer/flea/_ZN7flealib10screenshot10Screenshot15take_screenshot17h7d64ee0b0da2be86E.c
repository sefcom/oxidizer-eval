fn flealib::screenshot::Screenshot::take_screenshot(a0: i64, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: u64;  // [bp-0x198]
    let v1: struct24;  // [bp-0x190], Other Possible Types: struct_0 *
    let v2: struct16;  // [bp-0x190]
    let v3: u64;  // [bp-0x188]
    let v4: &str;  // [bp-0x180], Other Possible Types: core::result::Result<std::fs::File, std::io::error::Error>, u64
    let v5: struct24;  // [bp-0x180]
    let v6: struct24;  // [bp-0x180], Other Possible Types: u64
    let v7: &str;  // [bp-0x180]
    let v8: u64;  // [bp-0x178]
    let v9: alloc::string::String;  // [bp-0x170], Other Possible Types: struct_0 *, u64
    let v10: u128;  // [bp-0x168]
    let v12: u128;  // [bp-0x150]
    let v13: &str;  // [bp-0x140], Other Possible Types: struct24, struct40
    let v14: Result<struct48, struct24>;  // [bp-0x130]
    let v15: u64;  // [bp-0x128]
    let v16: void*;  // [bp-0x120]
    let v17: struct24;  // [bp-0x110], Other Possible Types: u64
    let v18: u64;  // [bp-0x108]
    let v19: void*;  // [bp-0x100]
    let v20: u64;  // [bp-0xf0]
    let v22: struct40;  // [bp-0xe0], Other Possible Types: struct24
    let v23: struct24;  // [bp-0xe0]
    let v24: u64;  // [bp-0xb8]
    let v25: u64;  // [bp-0xb0]
    let v26: core::fmt::rt::Argument;  // [bp-0xa8], Other Possible Types: struct40
    let v27: core::fmt::Arguments;  // [bp-0x98]
    let v28: u128;  // [bp-0x88]
    let v29: u16;  // [bp-0x84]
    let v30: u128;  // [bp-0x78]
    let v31: u64;  // [bp-0x50]
    let v32: struct24;  // [bp-0x48]
    let v35: u32;  // edx
    let v36: u64;  // rax
    let v38: core::fmt::rt::Argument;  // xmm0
    let v39: core::fmt::Arguments;  // xmm1
    let v40: i64;  // rbp
    let v41: core::str::pattern::CharSearcher;  // r15
    let v42: u64;  // rbx
    let v43: u64;  // rdx
    let v44: u64;  // rcx
    let v46: &str;  // rax
    let v47: u64;  // rsi
    let v48: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // rbx
    let v49: u64;  // r13
    let v50: struct60;  // rsi
    let v53: struct40;  // r14
    let v54: i64;  // rdi
    let v55: struct136;  // rax
    let v57: void*;  // rax
    let v58: alloc::borrow::Cow<str>;  // rax
    let v59: alloc::raw_vec::RawVecInner<alloc::alloc::Global>;  // rax:rdx
    let v60: core::time::Duration;  // rax:rdx
    let v61: struct6;  // [bp-0x180], Other Possible Types: struct64, struct24

    v60 = core::time::Duration::new(1, 0);
    v36 = core::time::Duration::checked_div(v60.secs, v60.nanos.fd);
    if v35 == 0x3b9aca00 {
        core::option::expect_failed("divide by zero error when dividing duration by scalar"); /* do not return */
    }
    v22 = scrap::common::x11::Display::primary();
    if *((&v22.field_16 as &char + 4) as &i8) == 2 {
        v1 = v22.field_0 as i64;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) {
            v13 = <T as alloc::string::SpecToString>::spec_to_string(&v1);
            v26 = struct40 {
                field_0: "flealib::screenshot"
                field_16: "flealib::screenshot"
                field_32: log::__private_api::loc("flealib/src/screenshot.rs")
            };
            log::__private_api::log(&v4 as u8, 1, &v26);
        }
        v61 = <T as alloc::string::SpecToString>::spec_to_string(&v1);
        return struct24 {
            field_0: v61.field_0
            field_16: v9
        };
    } else {
        v32 = v23;
        v7 as u512 = scrap::common::x11::Capturer::new(&v32);
        if *((&v61.field_32 as &char + 12) as &i8) == 2 {
            v0 = v61.field_0;
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) {
                v17 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
                v1 = &v17;
                v3 = <alloc::string::String as core::fmt::Display>::fmt;
                v13 = "\x01";
                v16 = 0;
                v14 = &v1;
                v15 = 1;
                v22 = struct40 {
                    field_0: "flealib::screenshot"
                    field_16: "flealib::screenshot"
                    field_32: log::__private_api::loc("flealib/src/screenshot.rs")
                };
                log::__private_api::log(&v13 as u64, 1, &v22);
            }
            v13 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
            return struct24 {
                field_0: v13.field_0
                field_16: v14
            };
        } else {
            v38 = v61.field_0;
            v39 = v61.field_16;
            v30 = v12;
            v28 = v61.field_32;
            v27 = v39;
            v26 = v38;
            v20 = v29;
            v25 = *((&v28 as &char + 6) as &i16);
            loop {
                vvar_969{stack -400} = struct16 OrderedDict([(0, 𝜙@64b [((8014259, None), vvar_727{stack -400}), ((8014055, None), None)]), (8, 𝜙@64b [((8014259, None), vvar_728{stack -392}), ((8014055, None), None)])])
                scrap::common::x11::Capturer::frame(&v2, &v26 as u8);
                if v2.field_0 {
                    break;
                }
                if std::io::error::Error::kind(v3) == 13 {
                    std::thread::sleep(v36, v35);
                } else {
                    v0 = std::io::error::Error::new(40, "Exception while sleeping in thread");
                    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) {
                        v22 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
                        v13 = struct40 {
                            field_0: "flealib::screenshot"
                            field_16: "flealib::screenshot"
                            field_32: log::__private_api::loc("flealib/src/screenshot.rs")
                        };
                        log::__private_api::log(&v7 as u512, 1, &v13);
                    }
                    v61 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
                    return struct24 {
                        field_0: v61.field_0
                        field_16: v9
                    };
                }
            }
            v41 = v3;
            v42 = v25;
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 4 {
                *(&v4 as &&str) = "Screen captured! Saving...";
                v8 = 1;
                v9 = 8;
                v10 = 0;
                v13 = struct40 {
                    field_0: "flealib::screenshot"
                    field_16: "flealib::screenshot"
                    field_32: log::__private_api::loc("flealib/src/screenshot.rs")
                };
                log::__private_api::log(&v7 as u512, 4, &v13);
            }
            v59 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v42 * v20 * 4, "flealib/src/screenshot.rs", v43, v44);
            v17 = v59.cap.__0;
            v18 = v59.ptr.pointer.pointer;
            v19 = 0;
            if v41 >> 32 {
                v24 = ((0 CONCAT v41) % v42) as u64 CONCAT ((0 CONCAT v41) / v42) as u64;
                if !v20 {
                    goto LABEL_7a4cc0;
                }
                do {
LABEL_7a4acb:
                    v31 = <usize as core::iter::range::Step>::forward_unchecked(v46, v47);
                    v48 = v24 * v46;
                    v49 = 0;
                    do {
                        v53 = <usize as core::iter::range::Step>::forward_unchecked(v49, v50);
                        v54 = v48 + v49 * 4;
                        v55 = v54 + 1;
                        v61 = struct6 {
                            field_0: *((v40 + v54 + 2) as &i8)
                            field_1: <UNKNOWN>
                            field_3: <UNKNOWN>
                        };
                        alloc::vec::Vec<T,A>::append_elements(&v17, &v61, 0x4, "flealib/src/screenshot.rs");
                        v49 = v53;
                    } while (v53 < v20);
                    v42 = v25;
                    v46 = v31;
                    v61 = v6;
                } while (v31 < v25);
            } else {
                v24 = ((0 CONCAT v41 as u32) % (v42 & 4294967295) CONCAT (0 CONCAT v41 as u32) / (v42 & 4294967295)) & 4294967295;
                if !(!v20) {
                    goto LABEL_7a4acb;
                }
                do {
LABEL_7a4cc0:
                    v57 = <usize as core::iter::range::Step>::forward_unchecked(v57, a1);
                    v61 = v5;
                } while (v57 < v42);
            }
            v4 = std::fs::File::create(a2, a3);
            v58 = repng::encode(core::result::Result<T,E>::unwrap(&v4) as i32, v20, v42 & 4294967295, v18, 0);
            if v58 {
                v0 = v58;
                if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) {
                    v22 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
                    v13 = struct40 {
                        field_0: "flealib::screenshot"
                        field_16: "flealib::screenshot"
                        field_32: log::__private_api::loc("flealib/src/screenshot.rs")
                    };
                    log::__private_api::log(&v4, 1, &v13);
                }
                v61 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
                return struct24 {
                    field_0: v61.field_0
                    field_16: v9
                };
            } else {
                if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) <= 3 {
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                }
                *(&v6 as &&str) = "Image saved.";
                v8 = 1;
                v9 = 8;
                v10 = 0;
                v13 = struct40 {
                    field_0: "flealib::screenshot"
                    field_16: "flealib::screenshot"
                    field_32: log::__private_api::loc("flealib/src/screenshot.rs")
                };
                log::__private_api::log(&v4, 4, &v13);
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
        }
    }
}
