fn uu_df::get_named_filesystems(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0x390]
    let v1: i64;  // [sp-0x388]
    let v2: i64;  // [sp-0x380]
    let v3: i64;  // [sp-0x378]
    let v4: i64;  // [sp-0x370], Other Possible Types: struct24
    let v5: i64;  // [sp-0x368]
    let v6: i64;  // [sp-0x350], Other Possible Types: struct16
    let v7: i64;  // [sp-0x348]
    let v8: i64;  // [sp-0x340]
    let v9: i192;  // [sp-0x338], Other Possible Types: struct24
    let v10: i64;  // [sp-0x318]
    let v11: i64;  // [sp-0x310]
    let v12: i64;  // [sp-0x308], Other Possible Types: struct24, Result<struct176, struct16>
    let v13: i64;  // [sp-0x2f8]
    let v14: i32;  // [bp-0x2f0]
    let v15: i64;  // [sp-0x258], Other Possible Types: struct24
    let v18: i192;  // [sp-0x240]
    let v19: i64;  // [sp-0x228], Other Possible Types: struct24, Option<struct232>
    let v21: i32;  // [bp-0x210]
    let v22: i256;  // [sp-0x138], Other Possible Types: struct32
    let v23: i8;  // [bp-0x118]
    let v26: i64;  // rax
    let v27: struct8;  // rax
    let v28: i256;  // ymm0
    let v29: i64;  // r8
    let v30: i64;  // r9
    let v31: i128;  // xmm0
    let v32: i128;  // xmm0
    let v33: i64;  // rdx
    let v34: i64;  // rdx

    v19 = uucore::features::fsext::read_fs_list();
    if v15 == 0x8000000000000000 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v16
            field_16: v17
        };
    }
    v15 = struct24 {
        field_0: v19
        field_8: v25
        field_16: v20
    };
    v12 = uu_df::filter_mount_list(&v15, a3);
    v22 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v12);
    v9 = alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(&v22);
    v6 = 0;
    v7 = 8;
    v8 = 0;
    if !*((&v9 as &char + 16) as &i64) {
        v12 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v19.field_16 = v12.field_16;
        v19 = v12;
        v21 = 1;
        v0 = alloc::boxed::Box<T>::new(&v19);
        v1 = &g_53f6b0;
        <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v0);
        uucore::mods::error::set_exit_code();
        v4 = uucore::util_name();
        v5 = v34;
        eprintln!("{:?}: {:?}", &v4, &v0);
        *((a0 + 16) as &i64) = v8;
        *(a0 as &i64) = v6;
    } else {
        v10 = a1;
        v11 = a1 + a2 * 8;
        v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if v27 {
            do {
                v19 = uu_df::filesystem::Filesystem::from_path(*((&v9 as &char + 8) as &i64), *((&v9 as &char + 16) as &i64), v27, v29, v30);
                if v19 != 0x8000000000000000 {
                    memcpy(&v23, &v19, 232);
                    v6 = alloc::vec::Vec<T,A>::push(&v23, v33);
                    v12 = v12;
                } else {
                    v12 = std::fs::metadata(<&T as core::convert::AsRef<U>>::as_ref(*(v27 as &i64)), v33);
                    if v12 != 2 {
                        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                        v13 = v4.field_16;
                        v31 = v4;
                        v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31;
                        v12 = v31;
                        v14 = 1;
                        v2 = alloc::boxed::Box<T>::new(&v12);
                        v3 = &g_53f6b0;
                        <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v2);
                        uucore::mods::error::set_exit_code();
                        v0 = uucore::util_name();
                        v1 = v33;
                        eprintln!("{:?}: {:?}", &v0, &v2);
                        v12 = v12;
                    } else {
                        v4 = <&T as core::convert::AsRef<U>>::as_ref(*(v27 as &i64));
                        v4.field_8 = vvar_196{reg 32};
                        v18 = format!("{:?}: No such file or directory", &v4);
                        v14 = 1;
                        v32 = v18;
                        v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
                        v12 = v32;
                        v13 = *((&v18 as &char + 16) as &i64);
                        v2 = alloc::boxed::Box<T>::new(&v12);
                        v3 = &g_53f6b0;
                        <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v2);
                        uucore::mods::error::set_exit_code();
                        v0 = uucore::util_name();
                        v1 = v33;
                        eprintln!("{:?}: {:?}", &v0, &v2);
                        v12 = v12;
                    }
                }
            } while ((v12 = v12, v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v27));
        }
        *((a0 + 16) as &i64) = v8;
        *(a0 as &i128) = v6;
    }
    return v26;
}
