fn uu_shred::wipe_file(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i32;  // [sp-0x2c4]
    let v1: i64;  // [sp-0x2c0]
    let v2: i32;  // [sp-0x2b4]
    let v3: struct16;  // [sp-0x2b0], Other Possible Types: i64
    let v4: i64;  // [sp-0x2a8]
    let v5: i64;  // [sp-0x2a0]
    let v6: i64;  // [sp-0x298], Other Possible Types: Result<struct16, struct4>, Arguments
    let v7: i64;  // [sp-0x290]
    let v8: i64;  // [sp-0x288]
    let v9: i8;  // [bp-0x280]
    let v10: i64;  // [sp-0x270]
    let v11: i64;  // [sp-0x268]
    let v12: i64;  // [sp-0x258]
    let v13: i96;  // [sp-0x250], Other Possible Types: struct12
    let v14: i64;  // [sp-0x240]
    let v15: i64;  // [sp-0x238]
    let v16: i64;  // [sp-0x230]
    let v17: i8;  // [sp-0x228]
    let v18: i64;  // [sp-0x220], Other Possible Types: struct16, struct14
    let v19: i64;  // [bp-0x218]
    let v20: i8;  // [sp-0x217]
    let v21: i128;  // [sp-0x210]
    let v22: i64;  // [sp-0x208]
    let v23: i64;  // [sp-0x200]
    let v24: i64;  // [sp-0x1f8]
    let v25: i8;  // [bp-0x1f0]
    let v26: i64;  // [sp-0x1e8]
    let v27: i128;  // [bp-0x1e0]
    let v28: i64;  // [sp-0x1d8]
    let v29: i64;  // [bp-0x1d0]
    let v30: i64;  // [sp-0x1c8]
    let v31: i64;  // [sp-0x1c0]
    let v32: i64;  // [bp-0x1b8]
    let v33: i64;  // [sp-0x1b0]
    let v34: i64;  // [sp-0x1a0]
    let v35: i64;  // [sp-0x190]
    let v36: i64;  // [sp-0x188]
    let v37: i8;  // [sp-0x180]
    let v38: i64;  // [sp-0x178]
    let v39: i64;  // [sp-0x168]
    let v40: i64;  // [sp-0x158]
    let v41: i64;  // [sp-0x150]
    let v42: i8;  // [sp-0x148]
    let v43: i64;  // [sp-0x140], Other Possible Types: struct32
    let v44: i64;  // [sp-0x138]
    let v45: i64;  // [sp-0x120]
    let v46: i64;  // [sp-0x118]
    let v47: i64;  // [sp-0x108]
    let v48: i64;  // [sp-0x100]
    let v49: struct24;  // [sp-0xf8]
    let v50: i96;  // [sp-0xe0], Other Possible Types: Result<struct176, struct16>, Argument
    let v51: i64;  // [sp-0xd8]
    let v52: Argument;  // [bp-0xd0]
    let v53: i32;  // [bp-0xc8]
    let v54: Argument;  // [bp-0xc0]
    let v55: Argument;  // [bp-0xb0]
    let v57: i8;  // [bp+0x10]
    let v58: i8;  // [bp+0x18]
    let v59: i8;  // [bp+0x20]
    let v60: i32;  // ebx
    let v61: i64;  // rax
    let v62: i64;  // rax
    let v64: i64;  // rax
    let v66: i64;  // rbx
    let v67: i64;  // r12
    let v68: i64;  // rbx
    let v69: i64;  // r15
    let v70: i256;  // ymm0
    let v71: struct8;  // rax
    let v72: i64;  // rcx
    let v73: i64;  // rax
    let v74: struct8;  // rax
    let v75: i64;  // rbp
    let v76: i64;  // rdi
    let v77: i64;  // r15
    let v79: i64;  // rdx
    let v80: i64;  // rax
    let v81: i64;  // rax

    v11 = a5;
    v18 = std::fs::metadata(a0, a1);
    if v60 == 2 {
        v6 = &g_1;
        v7 = a0;
        v8 = a1;
        v9 = 0;
        v43 = &v6;
        v44 = <os_display::Quoted as core::fmt::Display>::fmt;
        v61 = &g_5386d8;
    } else if !std::path::Path::is_file(a0, a1) as i8 {
        v6 = &g_1;
        v7 = a0;
        v8 = a1;
        v9 = 0;
        v43 = &v6;
        v44 = <os_display::Quoted as core::fmt::Display>::fmt;
        v61 = &g_5386f8;
    } else {
        v18 = std::fs::metadata(a0, a1);
        v50 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v18);
        match v50 {
            Err(_) => {
                return v62;
            },
            Ok(_) => {
                v1 = a1;
                if v59 {
                    v64 = *((&v50 as &char + 56) as &i32) as u32 as u64;
                    v62 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::set_permissions(a0, v1, (v64 as i8 < 0 ? v64 & 4294967295 : 128)));
                    if v62 {
                        return v62;
                    }
                }
                v3 = 0;
                v4 = &g_1;
                v5 = 0;
                v46 = *((&v50 as &char + 80) as &i64);
                v66 = v1;
                if v46 {
                    if a2 > 3 {
                        v12 = a2 / 22;
                        if a2 >= 22 {
                            v69 = 0;
                            do {
                                v69 = <usize as core::iter::range::Step>::forward_unchecked(v69);
                                v18 = 0;
                                v19 = 22;
                                v29 = 0xcc000000bb000000990000008800;
                                v27 = 0x7700000066000000440000003300;
                                v25 = 689601926604450170026677061268993;
                                v23 = 48234206897958065916534445818495771649;
                                v70 = ((((v70 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xcc000000bb000000990000008800) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x7700000066000000440000003300) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 689601926604450170026677061268993) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 48234206897958065916534445818495771649) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xaa00000055000000ff0000000000;
                                v21 = 0xaa00000055000000ff0000000000;
                                v31 = 0xee000000dd00;
                                loop {
                                    v71 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next();
                                    if v71 as u8 == 2 {
                                        break;
                                    }
                                    v3 = alloc::vec::Vec<T,A>::push(v71 & 4294967295);
                                }
                            } while (v69 < v12);
                        }
                        v72 = v12 * 22;
                        v18 = 0;
                        v19 = 22;
                        v21 = 0xaa00000055000000ff0000000000;
                        v23 = 48234206897958065916534445818495771649;
                        v25 = 689601926604450170026677061268993;
                        v27 = 0x7700000066000000440000003300;
                        v29 = 0xcc000000bb000000990000008800;
                        v31 = 0xee000000dd00;
                        v73 = a2 - v72;
                        v32 = v73;
                        if a2 != v72 {
                            do {
                                v32 = (v73 - &g_1) as i64;
                                v74 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next();
                            } while (v74 as u8 != 2 && (v3 = alloc::vec::Vec<T,A>::push(v74 & 4294967295), v73 = v32, v73));
                        }
                        v18 = rand::rngs::thread::thread_rng();
                        <[T] as rand::seq::SliceRandom>::shuffle(v4, v5, &v18);
                        v75 = a2 / 10;
                        v76 = 0;
                        do {
                            v77 = (!((a2 - &g_1) * v76 | v75 + 2) >> 32 ? (((0 CONCAT ((a2 - &g_1) * v76) as u32) % (v75 + 2 & 4294967295)) as i32 CONCAT ((0 CONCAT ((a2 - &g_1) * v76) as u32) / (v75 + 2 & 4294967295)) as i32) & 4294967295 & 4294967295 : (((0 CONCAT (a2 - &g_1) * v76) % (v75 + 2) as u64 as u128) as u64 CONCAT ((0 CONCAT (a2 - &g_1) * v76) / (v75 + 2) as u64 as u128) as u64) as u64);
                        } while ((v76 = <usize as core::iter::range::Step>::forward_unchecked(v76), *((v4 + v77 * 4) as &i8) = 2, v76 < v75 + 3));
                        v68 = v1;
                    } else {
                        v67 = 0;
                        loop {
                            v68 = v66;
                            if v67 >= a2 {
                                break;
                            }
                            v67 = <usize as core::iter::range::Step>::forward_unchecked(v67);
                            v3 = alloc::vec::Vec<T,A>::push(0x2);
                        }
                    }
                    if v57 {
                        v3 = alloc::vec::Vec<T,A>::push(None);
                    }
                }
                v47 = v5;
                v18 = struct14 {
                    field_0: 0x1b600000000
                    field_8: 0
                    field_12: 0
                };
                v20 = &g_1;
                v50 = std::fs::OpenOptions::open(&v18, a0, v66);
                v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v50, a0, v66);
                v62 = v6;
                if v62 {
                    return v62;
                }
                v0 = *((&v6 as &char + 8) as &i32);
                if a4 {
                    v46 = v11;
                } else {
                    v46 = v46;
                }
                v11 = v46;
                v43 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v3);
                v45 = 0;
                v13 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v43);
                if *((&v13 as &char + 8) as &i8) != 3 {
                    do {
                        v2 = *((&v13 as &char + 8) as &i32);
                        if v58 {
                            v49 = uu_shred::pass_name(&v2);
                            v50 = uucore::util_name();
                            v51 = v79;
                            eprint!("{}: ", &v50);
                            v14 = &g_1;
                            v15 = a0;
                            v16 = v1;
                            v17 = 0;
                            v48 = v13 + &g_1;
                            v50 = Argument {
                                value: &v14
                                formatter: <os_display::Quoted as core::fmt::Display>::fmt
                            };
                            v52 = Argument {
                                value: &v48
                                formatter: <UNKNOWN>
                            };
                            v53 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt as i64;
                            v54 = Argument {
                                value: &v47
                                formatter: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
                            };
                            v55 = Argument {
                                value: &v49
                                formatter: <alloc::string::String as core::fmt::Display>::fmt
                            };
                            v18 = 2;
                            v21 = 2;
                            v23 = 0;
                            v24 = 32;
                            v25 = 3;
                            v26 = 2;
                            v28 = 0;
                            v29 = 2;
                            v30 = &g_1;
                            v31 = 32;
                            v32 = 3;
                            v33 = 2;
                            v34 = 2;
                            v35 = 2;
                            v36 = 32;
                            v37 = 3;
                            v38 = 2;
                            v39 = 2;
                            v40 = 3;
                            v41 = 32;
                            v42 = 3;
                            v6 = Arguments {
                                pieces: ["", ": pass ", "/", " (", ")...\n"]
                                args: [&v50, &v52, &v54, &v55]
                                fmt: &v18
                            };
                            v10 = 4;
                            std::io::stdio::_eprint(&v6);
                        }
                        v80 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_shred::do_pass() as i64, a0, v1);
                        if v80 {
                            v14 = v80;
                            v15 = v79;
                            uucore::mods::error::set_exit_code(*((v79 + 96) as &i64)() as u64);
                            v6 = uucore::util_name();
                            v7 = v79;
                            eprintln!("{}: {}", &v6, &v14);
                        }
                        v13 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v43);
                    } while (*((&v13 as &char + 8) as &i8) != 3);
                }
                v81 = a3 as u32 as u64;
                if !v81 as i8 {
                    return 0;
                }
                v62 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_shred::do_remove(a0, v1, a0, v1, v58 as u8 as u64, v81 & 4294967295), a0, v1);
                if v62 {
                    return v62;
                }
            },
        }
    }
    v18 = v61;
    v19 = 2;
    v23 = 0;
    v21 = &v43;
    v22 = &g_1;
    core::option::Option<T>::map_or_else();
    *(&v53 as &&i64) = &g_1;
    v62 = alloc::boxed::Box<T>::new(&v50);
    return v62;
}
