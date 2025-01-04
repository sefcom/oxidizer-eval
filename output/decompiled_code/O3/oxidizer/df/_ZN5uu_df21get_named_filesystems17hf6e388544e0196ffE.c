fn uu_df::get_named_filesystems(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [sp-0x390]
    let v1: i64;  // [sp-0x388]
    let v2: i64;  // [sp-0x380]
    let v3: i64;  // [sp-0x378]
    let v4: i64;  // [sp-0x370], Other Possible Types: struct24
    let v5: i64;  // [sp-0x368]
    let v6: i64;  // [sp-0x360]
    let v7: i64;  // [sp-0x350], Other Possible Types: struct16
    let v8: i64;  // [sp-0x348]
    let v9: i64;  // [sp-0x340]
    let v10: struct24;  // [sp-0x338], Other Possible Types: i192
    let v11: i64;  // [sp-0x318]
    let v12: i64;  // [sp-0x310]
    let v13: i192;  // [sp-0x308], Other Possible Types: struct24, Result<struct176, struct16>
    let v14: i64;  // [sp-0x2f8]
    let v15: i32;  // [bp-0x2f0]
    let v16: i192;  // [sp-0x258]
    let v19: i192;  // [sp-0x240]
    let v20: i1856;  // [sp-0x228], Other Possible Types: Option<struct232>, struct24
    let v21: i64;  // [sp-0x220]
    let v22: i32;  // [bp-0x210]
    let v23: struct32;  // [sp-0x138], Other Possible Types: i256
    let v24: i8;  // [bp-0x118]
    let v26: struct8;  // rax
    let v27: i256;  // ymm0
    let v28: i64;  // r8
    let v29: i64;  // r9
    let v30: i64;  // rdx
    let v31: i128;  // xmm0
    let v32: i128;  // xmm0
    let v33: i64;  // rdx

    v20 = uucore::features::fsext::read_fs_list();
    if v16 == 0x8000000000000000 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v17
            field_16: v18
        };
    }
    v16 = v20;
    v13 = uu_df::filter_mount_list(&v16, a3);
    v23 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v13);
    v10 = alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(&v23);
    v7 = 0;
    v8 = 8;
    v9 = 0;
    if !*((&v10 as &char + 16) as &i64) {
        v13 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v20 = v13;
        v22 = 1;
        v0 = alloc::boxed::Box<T>::new(&v20);
        v1 = &g_53ea20;
        <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v0);
        uucore::mods::error::set_exit_code();
        v4 = uucore::util_name();
        v5 = v33;
        eprintln!("{:?}: {:?}", &v4, &v0);
        *((a0 + 16) as &i64) = v9;
        *(a0 as &i64) = v7;
    } else {
        v11 = a1;
        v12 = a1 + a2 * 8;
        v26 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if v26 {
            do {
                v20 = uu_df::filesystem::Filesystem::from_path(*((&v10 as &char + 8) as &i64), *((&v10 as &char + 16) as &i64), v26, v28, v29);
                if v20 != 0x8000000000000000 {
                    memcpy(&v24, &v20, 232);
                    v7 = alloc::vec::Vec<T,A>::push(&v24, v30);
                    v13 = v13;
                    v6 = v6;
                } else {
                    v13 = std::fs::metadata(<&T as core::convert::AsRef<U>>::as_ref(*(v26 as &i64)), v30);
                    if v13 == 2 {
                        v4 = <&T as core::convert::AsRef<U>>::as_ref(*(v26 as &i64));
                        v5 = v30;
                        v19 = format!("{:?}: No such file or directory", &v4);
                        v15 = 1;
                        v32 = v19;
                        v27 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
                        v13 = v32;
                        v14 = *((&v19 as &char + 16) as &i64);
                        v2 = alloc::boxed::Box<T>::new(&v13);
                        v3 = &g_53ea20;
                        <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v2);
                        uucore::mods::error::set_exit_code();
                        v0 = uucore::util_name();
                        v1 = v30;
                        eprintln!("{:?}: {:?}", &v0, &v2);
                        v13 = v13;
                        v6 = v6;
                    } else {
                        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                        v14 = v6;
                        v31 = v4;
                        v27 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31;
                        v13 = v31;
                        v15 = 1;
                        v2 = alloc::boxed::Box<T>::new(&v13);
                        v3 = &g_53ea20;
                        <uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v2);
                        uucore::mods::error::set_exit_code();
                        v0 = uucore::util_name();
                        v1 = v30;
                        eprintln!("{:?}: {:?}", &v0, &v2);
                        v13 = v13;
                        v6 = v6;
                    }
                }
            } while ((v6 = v6, v13 = v13, v26 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v26));
        }
        *((a0 + 16) as &i64) = v9;
        *(a0 as &i128) = v7;
    }
    return v21;
}
