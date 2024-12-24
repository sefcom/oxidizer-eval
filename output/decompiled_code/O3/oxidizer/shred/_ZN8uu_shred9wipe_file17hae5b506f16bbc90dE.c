fn uu_shred::wipe_file(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i32;  // [sp-0x2c4]
    let v1: i64;  // [sp-0x2c0]
    let v2: i32;  // [sp-0x2b4]
    let v3: struct16;  // [sp-0x2b0], Other Possible Types: i64
    let v4: i64;  // [sp-0x2a8]
    let v5: i64;  // [sp-0x2a0]
    let v6: i64;  // [sp-0x298], Other Possible Types: Result<struct16, struct12>
    let v7: i64;  // [sp-0x290]
    let v8: i64;  // [sp-0x288]
    let v9: i8;  // [bp-0x280]
    let v10: i64;  // [sp-0x278]
    let v11: i64;  // [sp-0x270]
    let v12: i64;  // [sp-0x268]
    let v13: i64;  // [sp-0x258]
    let v14: struct12;  // [sp-0x250], Other Possible Types: i96
    let v15: i64;  // [sp-0x240]
    let v16: i64;  // [sp-0x238]
    let v17: i64;  // [sp-0x230]
    let v18: i8;  // [sp-0x228]
    let v19: i1408;  // [sp-0x220], Other Possible Types: Result<struct176, struct16>, Arguments, struct14
    let v20: i64;  // [bp-0x218]
    let v21: i8;  // [sp-0x217]
    let v22: i64;  // [sp-0x210]
    let v23: i64;  // [sp-0x208]
    let v24: i64;  // [sp-0x200]
    let v25: i64;  // [sp-0x1f8]
    let v26: i128;  // [bp-0x1f0]
    let v27: i64;  // [sp-0x1e8]
    let v28: i128;  // [bp-0x1e0]
    let v29: i64;  // [sp-0x1d8]
    let v30: i64;  // [bp-0x1d0]
    let v31: i64;  // [sp-0x1c8]
    let v32: i64;  // [sp-0x1c0]
    let v33: i8;  // [bp-0x1b8]
    let v34: i64;  // [sp-0x1b0]
    let v35: i64;  // [sp-0x1a0]
    let v36: i64;  // [sp-0x190]
    let v37: i64;  // [sp-0x188]
    let v38: i8;  // [sp-0x180]
    let v39: i64;  // [sp-0x178]
    let v40: i64;  // [sp-0x168]
    let v41: i64;  // [sp-0x158]
    let v42: i64;  // [sp-0x150]
    let v43: i8;  // [sp-0x148]
    let v44: i64;  // [sp-0x140], Other Possible Types: struct32
    let v45: i64;  // [sp-0x138]
    let v46: i64;  // [sp-0x120]
    let v47: i64;  // [sp-0x118]
    let v48: i64;  // [sp-0x108]
    let v49: i64;  // [sp-0x100]
    let v50: i192;  // [sp-0xf8], Other Possible Types: struct24
    let v51: i192;  // [sp-0xe0], Other Possible Types: Result<struct176, struct24>, struct24
    let v52: i64;  // [sp-0xd8]
    let v53: Argument;  // [sp-0xd0], Other Possible Types: i64
    let v54: i32;  // [bp-0xc8]
    let v55: i64;  // [sp-0xc0]
    let v56: i64;  // [sp-0xb8]
    let v57: i64;  // [sp-0xb0]
    let v58: i64;  // [sp-0xa8]
    let v60: i8;  // [bp+0x10]
    let v61: i8;  // [bp+0x18]
    let v62: i8;  // [bp+0x20]
    let v64: i64;  // rax
    let v65: i64;  // rax
    let v67: i64;  // rax
    let v69: i64;  // rsi
    let v70: i64;  // rdx
    let v71: i64;  // rbx
    let v72: i64;  // r12
    let v73: i64;  // rbx
    let v74: i64;  // rdx
    let v75: i64;  // r15
    let v76: i256;  // ymm0
    let v77: i64;  // rsi
    let v78: struct8;  // rax
    let v79: i64;  // rcx
    let v80: i64;  // rax
    let v81: struct8;  // rax
    let v82: i64;  // rcx
    let v83: i64;  // rbp
    let v84: i64;  // rdi
    let v85: i64;  // r15
    let v87: i64;  // rax
    let v88: i64;  // rax

    v12 = a5;
    v19 = std::fs::metadata(a0, a1);
    if v19 == 2 {
        v6 = 1;
        v7 = a0;
        v8 = a1;
        v9 = 0;
        v44 = &v6;
        v45 = <os_display::Quoted as core::fmt::Display>::fmt;
        v64 = &g_537d90;
    } else if !std::path::Path::is_file(a0, a1) as i8 {
        v6 = 1;
        v7 = a0;
        v8 = a1;
        v9 = 0;
        v44 = &v6;
        v45 = <os_display::Quoted as core::fmt::Display>::fmt;
        v64 = &g_537c30;
    } else {
        v19 = std::fs::metadata(a0, a1);
        v51 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v19);
        if v51 == 2 {
            return v65;
        }
        v1 = a1;
        if v62 {
            v67 = *((&v51 as &char + 56) as &i32);
            v65 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::fs::set_permissions(a0, v1, (v67 < 0 ? v67 & 4294967295 : 128)));
            if v65 {
                return v65;
            }
        }
        v3 = 0;
        v4 = 1;
        v5 = 0;
        v47 = *((&v51 as &char + 80) as &i64);
        v71 = v1;
        if v47 {
            if a2 > 3 {
                v13 = a2 / 22;
                if a2 >= 22 {
                    v75 = 0;
                    do {
                        v75 = <usize as core::iter::range::Step>::forward_unchecked(v75);
                        v19 = 0;
                        v20 = 22;
                        v30 = 0xcc000000bb000000990000008800;
                        v28 = 0x7700000066000000440000003300;
                        v26 = 689601926604450170026677061268993;
                        v24 = 48234206897958065916534445818495771649;
                        v76 = v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xcc000000bb000000990000008800 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0x7700000066000000440000003300 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 689601926604450170026677061268993 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 48234206897958065916534445818495771649 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xaa00000055000000ff0000000000;
                        v22 = 0xaa00000055000000ff0000000000;
                        v32 = 0xee000000dd00;
                        loop {
                            v78 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(v77, v74);
                            if v78 as u8 == 2 {
                                break;
                            }
                            v3 = alloc::vec::Vec<T,A>::push(v78 & 4294967295, v74);
                        }
                    } while (v75 < v13);
                }
                v79 = v13 * 22;
                v19 = 0;
                v20 = 22;
                v22 = 0xaa00000055000000ff0000000000;
                v24 = 48234206897958065916534445818495771649;
                v26 = 689601926604450170026677061268993;
                v28 = 0x7700000066000000440000003300;
                v30 = 0xcc000000bb000000990000008800;
                v32 = 0xee000000dd00;
                v80 = a2 - v79;
                v33 = v80;
                if a2 != v79 {
                    do {
                        v33 = v80 - 1;
                        v81 = <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next(v69, 0xee000000dd00);
                    } while (v81 as u8 != 2 && (v3 = alloc::vec::Vec<T,A>::push(v81 & 4294967295, v74), v80 = v33, v80));
                }
                v19 = rand::rngs::thread::thread_rng();
                <[T] as rand::seq::SliceRandom>::shuffle(v3.field_8, v5, &v19, v82);
                v83 = a2 / 10;
                v84 = 0;
                do {
                    v85 = (!((a2 - 1) * v84 | v83 + 2) >> 32 ? (0 CONCAT (a2 - 1) * v84) /m (v83 + 2) & 4294967295 & 4294967295 : (0 CONCAT (a2 - 1) * v84) /m (v83 + 2));
                } while ((v84 = <usize as core::iter::range::Step>::forward_unchecked(v84), *((v3.field_8 + v85 * 4) as &i8) = 2, v84 < v83 + 3));
                v73 = v1;
            } else {
                for (v72 = 0; v72 < a2; v3 = alloc::vec::Vec<T,A>::push(2, v74)) {
                    v72 = <usize as core::iter::range::Step>::forward_unchecked(v72);
                }
            }
            if v60 {
                v3 = alloc::vec::Vec<T,A>::push(0, v70);
            }
        }
        v48 = v5;
        v19 = struct14 {
            field_0: 0x1b600000000
            field_8: 0
            field_12: 0
        };
        v21 = 1;
        v51 = std::fs::OpenOptions::open(&v19, a0, v71);
        v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v51, a0, v71);
        v65 = v6;
        if v65 {
            return v65;
        }
        v0 = *((&v6 as &char + 8) as &i32);
        if a4 {
            v47 = v12;
        } else {
            v47 = v47;
        }
        v12 = v47;
        v44 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v3);
        v46 = 0;
        v14 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v44);
        if *((&v14 as &char + 8) as &i8) != 3 {
            do {
                v2 = *((&v14 as &char + 8) as &i32);
                if v61 {
                    v50 = uu_shred::pass_name(&v2);
                    v51 = uucore::util_name();
                    v52 = v74;
                    eprint!("{:?}: ", &v51);
                    v15 = 1;
                    v16 = a0;
                    v17 = v1;
                    v18 = 0;
                    v49 = v14 + 1;
                    v51 = &v15;
                    v52 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v53 = &v49;
                    v54 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                    v55 = &v48;
                    v56 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                    v57 = &v50;
                    v58 = <alloc::string::String as core::fmt::Display>::fmt;
                    v19 = 2;
                    v22 = 2;
                    v24 = 0;
                    v25 = 32;
                    v26 = 3;
                    v27 = 2;
                    v29 = 0;
                    v30 = 2;
                    v31 = 1;
                    v32 = 32;
                    v33 = 3;
                    v34 = 2;
                    v35 = 2;
                    v36 = 2;
                    v37 = 32;
                    v38 = 3;
                    v39 = 2;
                    v40 = 2;
                    v41 = 3;
                    v42 = 32;
                    v43 = 3;
                    v6 = &g_537d10;
                    v7 = 5;
                    v10 = &v19;
                    v11 = 4;
                    v8 = &v51;
                    v9 = 4;
                    std::io::stdio::_eprint(&v6);
                }
                v87 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_shred::do_pass() as i64, a0);
                if v87 {
                    v15 = v87;
                    v16 = v74;
                    *((v74 + 96) as &i64)();
                    uucore::mods::error::set_exit_code();
                    v6 = uucore::util_name();
                    v7 = v74;
                    v51 = &v6;
                    v52 = <&T as core::fmt::Display>::fmt;
                    v53 = Argument {
                        value: &v15
                        formatter: <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt
                    };
                    v19 = Arguments {
                        pieces: ["", ": ", "\n"]
                        args: [&v51, &v53]
                        fmt: 0
                    };
                    std::io::stdio::_eprint(&v19);
                }
                v14 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v44);
            } while (*((&v14 as &char + 8) as &i8) != 3);
        }
        v88 = a3;
        if !v88 {
            return 0;
        }
        v65 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_shred::do_remove(a0, v1, a0, v1, v61, v88 & 4294967295), a0);
        if v65 {
            return v65;
        }
    }
    v19 = v64;
    v20 = 2;
    v24 = 0;
    v22 = &v44;
    v23 = 1;
    v51 = core::option::Option<T>::map_or_else(&v19);
    v54 = 1;
    v65 = alloc::boxed::Box<T>::new(&v51);
    return v65;
}
