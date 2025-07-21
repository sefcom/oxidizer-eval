fn uu_shred::wipe_file(a0: i64, a1: i64, a2: i64, a3: i32, a4: i64, a5: i64, a6: i8, a7: i8, a8: i8, a9: i8) -> long long {
    let v0: u32;  // [bp-0x2c4]
    let v1: u64;  // [bp-0x2c0]
    let v2: u32;  // [bp-0x2b4]
    let v5: struct16;  // [bp-0x2b0]
    let v6: struct16;  // [bp-0x2b0]
    let v7: struct16;  // [bp-0x2b0]
    let v8: struct16;  // [bp-0x2b0]
    let v9: u64;  // [bp-0x2a8]
    let v10: void*;  // [bp-0x2a0]
    let v11: Result<struct16, struct12>;  // [bp-0x298], Other Possible Types: core::fmt::Arguments, struct48, u64
    let v12: i64;  // [bp-0x290]
    let v15: u64;  // [bp-0x268]
    let v16: u64;  // [bp-0x258]
    let v17: struct12;  // [bp-0x250]
    let v18: u64;  // [sp-0x250]
    let v19: struct16;  // [bp-0x240], Other Possible Types: u64
    let v20: u64;  // [bp-0x238]
    let v21: u64;  // [bp-0x230]
    let v22: u8;  // [bp-0x228]
    let v23: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [sp-0x220], Other Possible Types: void*, u64
    let v24: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x220], Other Possible Types: u64
    let v25: u64;  // [bp-0x218]
    let v26: u8;  // [bp-0x217]
    let v27: u16;  // [bp-0x214]
    let v28: i64;  // [bp-0x210], Other Possible Types: u128
    let v29: u128;  // [bp-0x210]
    let v30: u64;  // [bp-0x208]
    let v31: void*;  // [bp-0x200], Other Possible Types: u128
    let v32: u128;  // [bp-0x200]
    let v33: u64;  // [bp-0x1f8]
    let v34: u8;  // [bp-0x1f0]
    let v35: u128;  // [bp-0x1f0]
    let v36: u64;  // [bp-0x1e8]
    let v37: u128;  // [bp-0x1e0]
    let v38: void*;  // [bp-0x1d8]
    let v39: u128;  // [bp-0x1d0]
    let v40: u128;  // [bp-0x1d0]
    let v41: u64;  // [bp-0x1c8]
    let v42: u64;  // [bp-0x1c0]
    let v43: u8;  // [bp-0x1b8]
    let v44: u64;  // [bp-0x1b0]
    let v45: u64;  // [bp-0x1a0]
    let v46: u64;  // [bp-0x190]
    let v47: u64;  // [bp-0x188]
    let v48: u8;  // [bp-0x180]
    let v49: u64;  // [bp-0x178]
    let v50: u64;  // [bp-0x168]
    let v51: u64;  // [bp-0x158]
    let v52: u64;  // [bp-0x150]
    let v53: u8;  // [bp-0x148]
    let v54: struct32;  // [bp-0x140], Other Possible Types: struct_0 *
    let v56: void*;  // [bp-0x120]
    let v57: u64;  // [bp-0x118]
    let v58: u64;  // [bp-0x108]
    let v59: u64;  // [bp-0x100]
    let v60: u192;  // [bp-0xf8]
    let v61: u128;  // [bp-0xe0]
    let v62: i64;  // [bp-0xe0], Other Possible Types: Result<struct176, struct24>, u64
    let v63: i64;  // [bp-0xd8], Other Possible Types: u64
    let v64: u128;  // [bp-0xd0]
    let v65: i64;  // [bp-0xd0]
    let v66: u64;  // [bp-0xc8]
    let v67: u128;  // [bp-0xc0]
    let v68: i64;  // [bp-0xc0]
    let v69: u64;  // [bp-0xb8]
    let v70: u128;  // [bp-0xb0]
    let v71: i64;  // [bp-0xb0]
    let v72: u64;  // [bp-0xa8]
    let v73: u64;  // rax
    let v74: u64;  // rax
    let v75: u64;  // rax
    let v76: u64;  // rsi
    let v77: u64;  // rbx
    let v78: void*;  // r12
    let v79: u64;  // rbx
    let v80: void*;  // r15
    let v81: u64;  // rax
    let v82: u64;  // rcx
    let v83: u64;  // rax
    let v84: u64;  // rax
    let v85: u64;  // rbp
    let v86: u64;  // rbp
    let v87: void*;  // rdi
    let v88: u64;  // rax
    let v89: u64;  // r15
    let v92: &u8;  // rdx
    let v93: i64;  // rdx
    let v94: u64;  // rax
    let v96: u64;  // rax

    v15 = a5;
    v23 = std::fs::metadata(a0, a1);
    if let Ok(_) = v23 {
        if std::path::Path::is_file() as u8 {
            v24 = std::fs::metadata(a0, a1);
            v62 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v24);
            match v62 {
                Err(_) => {
                    return v63;
                },
                Ok(_) => {
                    v1 = a1;
                    if a9 {
                        v74 = *((&v62 as &char + 56) as &i32) as u32 as u64;
                        v75 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::set_permissions(a0, v1, (v74 as u8 < 0 ? v74 as u32 : 128)));
                        if v75 {
                            return v75;
                        }
                    }
                    v7 as u64 = 0;
                    v9 = &g_1.field_0;
                    v10 = 0;
                    v57 = *((&v62 as &char + 80) as &i64);
                    v77 = v1;
                    if *((&v62 as &char + 80) as &i64) {
                        if a2 <= 3 {
                            loop {
                                v79 = v77;
                                if v78 >= a2 {
                                    break;
                                }
                                v78 = <usize as core::iter::range::Step>::forward_unchecked(v78, v76);
                                v5 = alloc::vec::Vec<T,A>::push(0x2);
                            }
                        } else {
                            v16 = a2 / 22;
                            if a2 >= 22 {
                                do {
                                    v80 = <usize as core::iter::range::Step>::forward_unchecked(v80, v76);
                                    v23 = 0;
                                    v25 = 22 as u64;
                                    v40 = 0xcc000000bb000000990000008800 as u128;
                                    v37 = 0x7700000066000000440000003300 as u128;
                                    v35 = 689601926604450170026677061268993 as u128;
                                    v32 = 48234206897958065916534445818495771649 as u128;
                                    v29 = 0xaa00000055000000ff0000000000 as u128;
                                    v42 = 0xee000000dd00;
                                    loop {
                                        v81 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v23);
                                        if v81 as u8 == 2 {
                                            break;
                                        }
                                        v6 = alloc::vec::Vec<T,A>::push(v81 & 4294967295);
                                    }
                                } while (v80 < v16);
                            }
                            v82 = v16 * 22;
                            v23 = 0;
                            v25 = 22 as u64;
                            v28 = 0xaa00000055000000ff0000000000 as u128;
                            v31 = 48234206897958065916534445818495771649 as u128;
                            v34 = 689601926604450170026677061268993 as u128;
                            v37 = 0x7700000066000000440000003300 as u128;
                            v39 = 0xcc000000bb000000990000008800 as u128;
                            v42 = 0xee000000dd00;
                            v83 = a2 - v82;
                            if a2 != v82 {
                                do {
                                    v43 = v83 - &g_1.field_0;
                                    v84 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(&v23);
                                } while (v84 as u8 != 2 && (v7 = alloc::vec::Vec<T,A>::push(v84 & 4294967295), v43));
                            }
                            v23 = rand::rngs::thread::thread_rng();
                            <[T] as rand::seq::SliceRandom>::shuffle(v9, v10, &v23);
                            v85 = a2 / 10;
                            v86 = v85 + 2;
                            v87 = 0;
                            do {
                                v88 = (a2 - &g_1.field_0) * v87;
                            } while ((v89 = (!(v88 | v86) >> 32 ? (((0 CONCAT v88 as u32) % (v86 & 4294967295)) as u32 CONCAT ((0 CONCAT v88 as u32) / (v86 & 4294967295)) as u32) & 4294967295 : (((0 CONCAT v88) % v86 as u128) as u64 CONCAT ((0 CONCAT v88) / v86 as u128) as u64) as u64), v87 = <usize as core::iter::range::Step>::forward_unchecked(v87, v10), *((v9 + (!(v88 | v86) >> 32 ? (((0 CONCAT v88 as u32) % (v86 & 4294967295)) as u32 CONCAT ((0 CONCAT v88 as u32) / (v86 & 4294967295)) as u32) & 4294967295 : (((0 CONCAT v88) % v86 as u128) as u64 CONCAT ((0 CONCAT v88) / v86 as u128) as u64) as u64) * 4) as &i8) = 2, v87 < v85 + 3));
                            v79 = v1;
                        }
                        v77 = v79;
                        if a7 {
                            v8 = alloc::vec::Vec<T,A>::push(None);
                        }
                    }
                    v58 = v10;
                    v23 = 0x1b600000000;
                    v25 = 0 as u32;
                    v27 = 0;
                    v26 = &g_1.field_0;
                    v62 = std::fs::OpenOptions::open(&v23, a0, v77);
                    v11 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v62, a0, v77);
                    match v11 {
                        Ok(_) => {
                            return v11 as i64;
                        },
                        Err(_) => {
                            v0 = *((&v11 as &char + 8) as &i32);
                            if !a4 {
                                v57 = v57;
                            } else {
                                v57 = v15;
                            }
                            v15 = v57;
                            v54 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v7 as u64);
                            v56 = 0;
                            v17 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v54);
                            if v17.field_8 as i8 != 3 {
                                do {
                                    v2 = v17.field_8;
                                    if a8 {
                                        v2 as u192 = uu_shred::pass_name(v92);
                                        v62 = uucore::util_name();
                                        v63 = v93;
                                        eprint!("{}: ", &v62);
                                        v19 = &g_1.field_0;
                                        v20 = a0;
                                        v21 = v1;
                                        v22 = 0;
                                        v59 = v18 + &g_1.field_0;
                                        v62 = &v19;
                                        v63 = <os_display::Quoted as core::fmt::Display>::fmt;
                                        v65 = &v59;
                                        v66 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                                        v68 = &v58;
                                        v69 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                                        v71 = &v60;
                                        v72 = <alloc::string::String as core::fmt::Display>::fmt;
                                        v23 = 2;
                                        v28 = 2;
                                        v31 = 0;
                                        v33 = 32;
                                        v34 = 3;
                                        v36 = 2;
                                        v38 = 0;
                                        v39 = 2;
                                        v41 = &g_1.field_0;
                                        v42 = 32;
                                        v43 = 3;
                                        v44 = 2;
                                        v45 = 2;
                                        v46 = 2;
                                        v47 = 32;
                                        v48 = 3;
                                        v49 = 2;
                                        v50 = 2;
                                        v51 = 3;
                                        v52 = 32;
                                        v53 = 3;
                                        v11 = struct48 {
                                            field_0: &g_538808
                                            field_8: 5
                                            field_16: &v62
                                            field_24: 4
                                            field_32: &v23
                                            field_40: 4
                                        };
                                        v11 = core::fmt::Arguments {
                                            pieces: [&g_538808, ": pass ", "/", " (", ")...\n"]
                                            args: [v61, v64, v67, v70]
                                            fmt: &v23
                                        };
                                        std::io::stdio::_eprint(&v11);
                                    }
                                    v94 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_shred::do_pass(&v0, &v2 as u192, a6 as u64, v15) as i64, a0, v1);
                                    if v94 {
                                        v19 = struct16 {
                                            field_0: v94
                                            field_8: v93
                                        };
                                        uucore::mods::error::set_exit_code(*((v93 + 96) as &i64)(v94) as u32 as u64);
                                        v11 = uucore::util_name();
                                        v12 = v93;
                                        eprintln!("{}: {}", &v11, &v19);
                                    }
                                    v17 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v54);
                                } while (v17.field_8 as i8 != 3);
                            }
                            v96 = a3 as u64;
                            if v96 as u8 {
                                return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_shred::do_remove(a0, v1, a0, v1, a8 as u32, v96 as u32), a0, v1);
                            }
                            return 0;
                        },
                    }
                },
            }
        }
    }
    v24 = v73;
    v25 = 2;
    v31 = 0;
    v28 = &v54;
    v30 = &g_1.field_0;
    core::option::Option<T>::map_or_else(&v62 as u8, &v24);
    return alloc::boxed::Box<T>::new(&v62 as u8);
}
