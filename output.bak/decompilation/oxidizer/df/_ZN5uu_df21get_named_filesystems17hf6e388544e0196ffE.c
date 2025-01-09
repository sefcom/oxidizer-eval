fn uu_df::get_named_filesystems(a0: &struct24, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x390]
    let v1: i64;  // [sp-0x388]
    let v2: i64;  // [sp-0x380]
    let v3: i64;  // [sp-0x378]
    let v4: i64;  // [sp-0x370], Other Possible Types: struct24
    let v5: i64;  // [sp-0x368]
    let v6: i64;  // [sp-0x360]
    let v7: struct16;  // [sp-0x350], Other Possible Types: i64
    let v8: i64;  // [sp-0x348]
    let v9: i64;  // [sp-0x340]
    let v10: i192;  // [sp-0x338], Other Possible Types: struct24
    let v11: i64;  // [sp-0x318]
    let v12: i64;  // [sp-0x310]
    let v13: i128;  // [sp-0x308], Other Possible Types: struct24, struct16
    let v14: i64;  // [sp-0x300]
    let v15: i64;  // [sp-0x2f8]
    let v16: i64;  // [bp-0x2f0]
    let v17: i64;  // [sp-0x2e8]
    let v18: struct24;  // [bp-0x258]
    let v21: i8;  // [bp-0x240]
    let v22: i8;  // [bp-0x230]
    let v23: i64;  // [sp-0x228], Other Possible Types: struct24, Option<struct232>
    let v25: i32;  // [bp-0x210]
    let v26: struct32;  // [sp-0x138], Other Possible Types: i256
    let v27: i8;  // [bp-0x118]
    let v30: i64;  // rcx
    let v31: i64;  // rdx
    let v32: struct8;  // rax
    let v33: i256;  // ymm0
    let v34: i128;  // xmm0
    let v35: i128;  // xmm0
    let v36: i64;  // rdx

    v23 = uucore::features::fsext::read_fs_list();
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v19
        field_16: v20
    };
    *(&v18.field_0 as &struct24) = struct24 {
        field_0: v23
        field_8: v29
        field_16: v24
    };
    v13 = uu_df::filter_mount_list(&v18, v30);
    v26 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v13);
    v10 = alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(&v26);
    v7 = 0;
    v8 = 8;
    v9 = 0;
    if !*((&v10 as &char + 16) as &i64) {
        v13 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v23 = v13;
        v25 = 1;
        v0 = alloc::boxed::Box<T>::new(&v23);
        v1 = &g_53ea20;
        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v0) as i32);
        v4 = uucore::util_name();
        v5 = v36;
        eprintln!("{:?}: {:?}", &v4, &v0);
        return struct24 {
            field_0: v7
            field_16: v9
        };
    }
    v11 = a1;
    v12 = a1 + v31 * 8;
    v32 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    return struct24 {
        field_0: v7
        field_16: v9
    };
    loop {
        v23 = uu_df::filesystem::Filesystem::from_path(*((&v10 as &char + 8) as &i64), *((&v10 as &char + 16) as &i64), v32);
        if v23 != 0x8000000000000000 {
            memcpy(&v27, &v23, 232);
            v7 = alloc::vec::Vec<T,A>::push(&v27);
            v13 = v13;
            v6 = v6;
        } else {
            v13 = std::fs::metadata(<&T as core::convert::AsRef<U>>::as_ref(*(v32 as &i64)), v31);
            if v13 != 2 {
                v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v15 = v6;
                v34 = v4;
                v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34;
                v13 = v34;
                v16 = 1;
                v2 = alloc::boxed::Box<T>::new(&v13);
                v3 = &g_53ea20;
                uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v2) as i32);
                v0 = uucore::util_name();
                v1 = v31;
                eprintln!("{:?}: {:?}", &v0, &v2);
                v13 = v13;
                v6 = v6;
            } else {
                v4 = <&T as core::convert::AsRef<U>>::as_ref(*(v32 as &i64));
                v5 = v31;
                v0 = &v4;
                v1 = <std::path::Display as core::fmt::Display>::fmt;
                v13 = &g_53e9c8;
                v14 = 2;
                v17 = 0;
                v15 = &v0;
                v16 = 1;
                core::option::Option<T>::map_or_else();
                v16 = 1;
                v35 = v21;
                v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35;
                v13 = v35;
                v15 = v22;
                v2 = alloc::boxed::Box<T>::new(&v13);
                v3 = &g_53ea20;
                uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v2) as i32);
                v0 = uucore::util_name();
                v1 = v31;
                eprintln!("{:?}: {:?}", &v0, &v2);
                v13 = v13;
                v6 = v6;
            }
        }
        v6 = v6;
        v13 = v13;
        v32 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        return struct24 {
            field_0: v7
            field_16: v9
        };
    }
}
