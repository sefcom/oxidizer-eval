fn uu_cut::cut_files(a0: &struct24, a1: &struct80) {
    let v0: u64;  // [bp-0xe8]
    let v1: u64;  // [bp-0xe0]
    let v2: struct16;  // [bp-0xd8], Other Possible Types: struct24, u64
    let v3: void*;  // [bp-0xd8]
    let v4: void*;  // [bp-0xd8]
    let v5: i64;  // [bp-0xd0], Other Possible Types: u64
    let v6: i64;  // [bp-0xd0]
    let v7: struct24;  // [bp-0xc8]
    let v8: u8;  // [bp-0xc0]
    let v9: u32;  // [bp-0xb4]
    let v10: struct24;  // [bp-0xb0], Other Possible Types: u64
    let v11: struct24;  // [bp-0xb0], Other Possible Types: u64
    let v12: u64;  // [bp-0xb0]
    let v13: struct12;  // [bp-0xb0]
    let v14: struct16;  // [bp-0x80]
    let v15: u64;  // [bp-0x70]
    let v16: u64;  // [bp-0x68]
    let v17: u64;  // [bp-0x60]
    let v18: struct16;  // [bp-0x48]
    let v19: u64;  // [bp-0x38]
    let v21: u64;  // rax
    let v22: i64;  // rax
    let v23: i64;  // rbp
    let v24: struct24;  // rbx
    let v25: u64;  // rdx
    let v26: void*;  // rax
    let v27: i64;  // rcx
    let v29: u64;  // rcx

    if !v21 {
        v10 = <T as alloc::slice::hack::ConvertVec>::to_vec("-");
        v2 = v11;
        alloc::vec::Vec<T,A>::push(a0, &v2);
    }
    v18 = struct16 {
        field_0: *((a0 + 8) as &i64)
        field_8: *((a0 + 8) as &i64) + v21 * 24
    };
    v18 = struct16 {
        field_0: *((a0 + 8) as &i64)
        field_8: *((a0 + 8) as &i64) + v21 * 24
    };
    <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v18);
    if !v22 {
        return;
    }
    v19 = *(a1 as &i64);
    v17 = *((a1 + 64) as &i64);
    v16 = *((a1 + 72) as &i64);
    v15 = a1 + 8;
    v9 = 0;
    do {
        v10 = v12;
        if !(v9 as i8 & 1) {
            loop {
                v10 = v10;
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v22 + 8) as &i64), *((v22 + 16) as &i64), "-") as i8 {
                    if v19 < 2 {
                        uu_cut::cut_bytes(std::io::stdio::stdin(), v17, v16, v15);
                    } else {
                        uu_cut::cut_fields(std::io::stdio::stdin() as u32, v17, v16, v15);
                    }
                    v9 = v29 & -0x100 | 1;
                    if v26 {
                        v14 = struct16 {
                            field_0: v26
                            field_8: &g_528da0.padding_0[0]
                        };
                        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v26) as i32);
                        v0 = uucore::util_name();
                        v1 = v25;
                        eprintln!("{}: {}", &v0, &v14);
                        v10 = v11;
                        v3 = v4;
                        v5 = v6;
                    }
                }
                if !std::path::Path::is_dir(*((v22 + 8) as &i64), *((v22 + 16) as &i64)) {
                    break;
                }
                v2 = uucore::util_name();
                v5 = v25;
                eprint!("{}: ", &v2);
                v3 = 0;
                v5 = v23;
                v7 = v24;
                v8 = 0;
                eprintln!("{}: Is a directory", &v3);
                uucore::mods::error::set_exit_code(1);
                <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v18);
                v10 = v11;
                if !v22 {
                    return;
                }
            }
        } else {
            do {
                v10 = v12;
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v22 + 8) as &i64), *((v22 + 16) as &i64), "-") as i8 {
                    if !std::path::Path::is_dir(*((v22 + 8) as &i64), *((v22 + 16) as &i64)) {
                        goto LABEL_4b70d0;
                    }
                    v2 = uucore::util_name();
                    v5 = v25;
                    eprint!("{}: ", &v2);
                    v3 = 0;
                    v5 = v23;
                    v7 = v24;
                    v8 = 0;
                    eprintln!("{}: Is a directory", &v3);
                    uucore::mods::error::set_exit_code(1);
                    v10 = v11;
                }
            } while ((v12 = v10, <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v18), v22));
        }
LABEL_4b70d0:
        vvar_607{stack -176} = struct12 OrderedDict({0: 𝜙@64b [((4943864, None), vvar_435{stack -176}), ((4943555, None), vvar_448{stack -176})]})
        std::fs::File::open(&v13, v23, v24);
        v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v13, v22);
        if v2.field_0 {
            v27 = v5;
            v2 = v3;
        } else {
            v10 = v11;
            v2 = uu_cut::cut_files::{{closure}}(a1, v2.field_8);
            if !v2 {
                continue;
            }
        }
        v14 = struct16 {
            field_0: v2
            field_8: v27
        };
        uucore::mods::error::set_exit_code(*((v27 + 96) as &i64)(v2) as u32);
        v0 = uucore::util_name();
        v1 = v25;
        eprintln!("{}: {}", &v0, &v14);
        v10 = v11;
        v3 = v4;
        v5 = v6;
    } while ((v12 = v10, <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v18), v22));
    return;
}
