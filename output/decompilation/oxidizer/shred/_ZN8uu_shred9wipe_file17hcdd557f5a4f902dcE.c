fn uu_shred::wipe_file(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i32;  // [sp-0x2c4]
    let v1: i64;  // [sp-0x2c0]
    let v2: i32;  // [sp-0x2b4]
    let v3: struct16;  // [sp-0x2b0], Other Possible Types: unsigned long, int
    let v4: i64;  // [sp-0x2a0]
    let v5: i64;  // [sp-0x298], Other Possible Types: Arguments, Result<struct16, struct4>
    let v6: i64;  // [sp-0x290]
    let v7: i64;  // [sp-0x288]
    let v8: i8;  // [bp-0x280]
    let v9: i64;  // [sp-0x270]
    let v10: i64;  // [sp-0x268]
    let v11: i64;  // [sp-0x258]
    let v12: struct12;  // [sp-0x250]
    let v13: i64;  // [sp-0x240]
    let v14: i64;  // [sp-0x238]
    let v15: i64;  // [sp-0x230]
    let v16: i8;  // [sp-0x228]
    let v17: i64;  // [sp-0x220], Other Possible Types: Result<struct176, struct8>, struct14
    let v18: i64;  // [bp-0x218]
    let v19: i8;  // [sp-0x217]
    let v20: i64;  // [sp-0x210], Other Possible Types: int
    let v21: i64;  // [sp-0x208]
    let v22: iNone;  // [sp-0x200], Other Possible Types: unsigned long
    let v23: i64;  // [sp-0x1f8]
    let v24: iNone;  // [sp-0x1f0], Other Possible Types: char
    let v25: i64;  // [sp-0x1e8]
    let v26: iNone;  // [bp-0x1e0]
    let v27: i64;  // [sp-0x1d8]
    let v28: iNone;  // [sp-0x1d0], Other Possible Types: unsigned long
    let v29: i64;  // [sp-0x1c8]
    let v30: i64;  // [sp-0x1c0]
    let v31: i64;  // [bp-0x1b8], Other Possible Types: char
    let v32: i64;  // [sp-0x1b0]
    let v33: i64;  // [sp-0x1a0]
    let v34: i64;  // [sp-0x190]
    let v35: i64;  // [sp-0x188]
    let v36: i8;  // [sp-0x180]
    let v37: i64;  // [sp-0x178]
    let v38: i64;  // [sp-0x168]
    let v39: i64;  // [sp-0x158]
    let v40: i64;  // [sp-0x150]
    let v41: i8;  // [sp-0x148]
    let v42: i64;  // [sp-0x140]
    let v43: struct32;  // [sp-0x140]
    let v44: i64;  // [sp-0x138]
    let v45: i64;  // [sp-0x120]
    let v46: i64;  // [sp-0x118]
    let v47: i64;  // [sp-0x108]
    let v48: i64;  // [sp-0x100]
    let v49: struct24;  // [sp-0xf8]
    let v50: Result<struct176, struct16>;  // [bp-0xe0], Other Possible Types: Argument, unsigned long, struct24
    let v51: i64;  // [sp-0xd8]
    let v52: Argument;  // [bp-0xd0]
    let v53: i32;  // [bp-0xc8], Other Possible Types: unsigned long
    let v54: Argument;  // [bp-0xc0]
    let v55: Argument;  // [bp-0xb0]
    let v57: i8;  // [bp+0x10]
    let v58: i8;  // [bp+0x18]
    let v59: i8;  // [bp+0x20]
    let v60: i32;  // ebx
    let v61: i64;  // rax
    let v62: i64;  // rbp
    let v64: i64;  // rax
    let v66: i64;  // rax
    let v67: i64;  // rbx
    let v68: i64;  // r12
    let v69: i64;  // r15
    let v70: iNone;  // ymm0
    let v71: struct8;  // rax
    let v72: i64;  // rcx
    let v73: i64;  // rax
    let v74: struct8;  // rax
    let v75: i64;  // rbp
    let v76: i64;  // rdi
    let v77: i64;  // r15
    let v78: i64;  // rax
    let v80: i64;  // rdx
    let v81: i64;  // rax
    let v82: i64;  // rax

    v10 = a5;
    v17 = std::fs::metadata(a0, a1);
    if v60 == 2 {
        v5 = &g_1;
        v6 = a0;
        v7 = a1;
        *(&v8 as &i8) = 0;
        v42 = &v5;
        v44 = <os_display::Quoted as core::fmt::Display>::fmt;
        v61 = &g_5386d8;
    } else if !std::path::Path::is_file(a0, a1) as i8 {
        v5 = &g_1;
        v6 = a0;
        v7 = a1;
        *(&v8 as &i8) = 0;
        v42 = &v5;
        v44 = <os_display::Quoted as core::fmt::Display>::fmt;
        v61 = &g_5386f8;
    } else {
        v17 = std::fs::metadata(a0, a1);
        v50 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v17);
        match v50 {
            Err(_) => {
                v62 = v51;
                return v62;
            },
            Ok(_) => {
                v1 = a1;
                if v59 {
                    v64 = *((&v50 as &char + 56) as &i32) as u32 as u64;
                    v66 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::set_permissions(a0, v1, (v64 as u8 < 0 ? v64 & 4294967295 : 128)));
                    if v66 {
                        v62 = v66;
                        return v62;
                    }
                }
                v3 = 0;
                v3 = &g_1;
                v4 = 0;
                v46 = *((&v50 as &char + 80) as &i64);
                v67 = v1;
                if v46 {
                    if a2 > 3 {
                        v11 = a2 / 22;
                        if a2 >= 22 {
                            v69 = 0;
                            do {
                                v69 = <usize as core::iter::range::Step>::forward_unchecked(v69);
                                v17 = 0;
                                *(&v18 as &i64) = 22;
                                *(&v28 as &i128) = 0xcc000000bb000000990000008800;
                                *(&v26 as &i128) = 0x7700000066000000440000003300;
                                *(&v24 as &i128) = 689601926604450170026677061268993;
                                *(&v22 as &i128) = 48234206897958065916534445818495771649;
                                v70 = ((((v70 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xcc000000bb000000990000008800) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x7700000066000000440000003300) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 689601926604450170026677061268993) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 48234206897958065916534445818495771649) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xaa00000055000000ff0000000000;
                                *(&v20 as &i128) = 0xaa00000055000000ff0000000000;
                                v30 = 0xee000000dd00;
                                loop {
                                    v71 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next();
                                    if v71 as u8 == 2 {
                                        break;
                                    }
                                    v3 = alloc::vec::Vec<T,A>::push(v71 & 4294967295);
                                }
                            } while (v69 < v11);
                        }
                        v72 = v11 * 22;
                        v17 = 0;
                        *(&v18 as &i64) = 22;
                        *(&v20 as &i128) = 0xaa00000055000000ff0000000000;
                        *(&v22 as &i128) = 48234206897958065916534445818495771649;
                        *(&v24 as &i128) = 689601926604450170026677061268993;
                        *(&v26 as &i128) = 0x7700000066000000440000003300;
                        *(&v28 as &i128) = 0xcc000000bb000000990000008800;
                        v30 = 0xee000000dd00;
                        v73 = a2 - v72;
                        v31 = v73;
                        if a2 != v72 {
                            do {
                                *(&v31 as &&i64) = v73 - &g_1;
                                v74 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next();
                            } while (v74 as u8 != 2 && (v3 = alloc::vec::Vec<T,A>::push(v74 & 4294967295), v73 = v31, v73));
                        }
                        v17 = rand::rngs::thread::thread_rng();
                        <[T] as rand::seq::SliceRandom>::shuffle(v3, v4, &v17);
                        v75 = a2 / 10;
                        v76 = 0;
                        do {
                            v77 = (!((a2 - &g_1) * v76 | v75 + 2) >> 32 ? (((0 CONCAT ((a2 - &g_1) * v76) as u32) % (v75 + 2 & 4294967295)) as u32 CONCAT ((0 CONCAT ((a2 - &g_1) * v76) as u32) / (v75 + 2 & 4294967295)) as u32) & 4294967295 & 4294967295 : (((0 CONCAT (a2 - &g_1) * v76) % (v75 + 2) as u128) as u64 CONCAT ((0 CONCAT (a2 - &g_1) * v76) / (v75 + 2) as u128) as u64) as u64);
                        } while ((v76 = <usize as core::iter::range::Step>::forward_unchecked(v76), *((v3 + v77 * 4) as &i8) = 2, v76 < v75 + 3));
                        v67 = v1;
                    } else {
                        for (v68 = 0; v68 < a2; v3 = alloc::vec::Vec<T,A>::push(0x2)) {
                            v68 = <usize as core::iter::range::Step>::forward_unchecked(v68);
                        }
                    }
                    if v57 {
                        v3 = alloc::vec::Vec<T,A>::push(None);
                    }
                }
                v47 = v4;
                v17 = struct14 {
                    field_0: 0x1b600000000
                    field_8: 0
                    field_12: 0
                };
                v19 = &g_1;
                v50 = std::fs::OpenOptions::open(&v17, a0, v67);
                v5 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v50, a0, v67);
                v62 = v5;
                if v62 {
                    return v62;
                }
                v0 = *((&v5 as &char + 8) as &i32);
                v78 = v10;
                if !a4 {
                    v78 = v46;
                }
                v10 = v78;
                v43 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v3);
                v45 = 0;
                v12 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v43);
                if v12.field_8 as i8 != 3 {
                    do {
                        v2 = v12.field_8;
                        if v58 {
                            v49 = uu_shred::pass_name(&v2);
                            v50 = uucore::util_name();
                            v51 = v80;
                            eprint!("{}: ", &v50);
                            v13 = &g_1;
                            v14 = a0;
                            v15 = v1;
                            v16 = 0;
                            v48 = v12.field_0 + &g_1;
                            v50 = Argument {
                                value: &v13
                                formatter: <os_display::Quoted as core::fmt::Display>::fmt
                            };
                            v52 = Argument {
                                value: &v48
                                formatter: <UNKNOWN>
                            };
                            *(&v53 as &void*) = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                            v54 = Argument {
                                value: &v47
                                formatter: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
                            };
                            v55 = Argument {
                                value: &v49
                                formatter: <alloc::string::String as core::fmt::Display>::fmt
                            };
                            v17 = 2;
                            v20 = 2;
                            v22 = 0;
                            v23 = 32;
                            v24 = 3;
                            v25 = 2;
                            v27 = 0;
                            v28 = 2;
                            v29 = &g_1;
                            v30 = 32;
                            *(&v31 as &i8) = 3;
                            v32 = 2;
                            v33 = 2;
                            v34 = 2;
                            v35 = 32;
                            v36 = 3;
                            v37 = 2;
                            v38 = 2;
                            v39 = 3;
                            v40 = 32;
                            v41 = 3;
                            v5 = Arguments {
                                pieces: ["", ": pass ", "/", " (", ")...\n"]
                                args: [&v50, &v52, &v54, &v55]
                                fmt: &v17
                            };
                            v9 = 4;
                            std::io::stdio::_eprint(&v5);
                        }
                        v81 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_shred::do_pass() as i64, a0, v1);
                        if v81 {
                            v13 = v81;
                            v14 = v80;
                            uucore::mods::error::set_exit_code(*((v80 + 96) as &i64)() as u64);
                            v5 = uucore::util_name();
                            v6 = v80;
                            eprintln!("{}: {}", &v5, &v13);
                        }
                        v12 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v43);
                    } while (v12.field_8 as i8 != 3);
                }
                v82 = a3 as u64;
                if !v82 as u8 {
                    return 0;
                }
                v62 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_shred::do_remove(a0, v1, a0, v1, v58 as u64, v82 & 4294967295), a0, v1);
                if v62 {
                    return v62;
                }
            },
        }
    }
    v17 = v61;
    *(&v18 as &i64) = 2;
    v22 = 0;
    v20 = &v42;
    v21 = &g_1;
    v50 = core::option::Option<T>::map_or_else(&v17);
    *(&v53 as &&i64) = &g_1;
    v62 = alloc::boxed::Box<T>::new(&v50);
    return v62;
}
