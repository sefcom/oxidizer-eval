fn uu_df::get_named_filesystems(a0: &struct24, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x390]
    let v1: i64;  // [sp-0x388]
    let v2: i64;  // [sp-0x380]
    let v3: i64;  // [sp-0x378]
    let v4: i64;  // [sp-0x370], Other Possible Types: struct24
    let v5: i64;  // [sp-0x368]
    let v6: i64;  // [sp-0x360]
    let v7: i64;  // [sp-0x350], Other Possible Types: struct16, int
    let v8: i64;  // [sp-0x340]
    let v9: i8;  // [bp-0x338]
    let v10: i8;  // [bp-0x330]
    let v11: i8;  // [bp-0x328]
    let v12: struct16;  // [bp-0x318]
    let v13: iNone;  // [sp-0x308], Other Possible Types: struct24, Result<struct176, struct8>, unsigned long
    let v14: i64;  // [sp-0x2f8]
    let v15: i32;  // [bp-0x2f0]
    let v16: struct24;  // [sp-0x258], Other Possible Types: unsigned long
    let v17: i64;  // [sp-0x250]
    let v18: i64;  // [sp-0x248]
    let v19: String;  // [sp-0x240]
    let v20: struct24;  // [sp-0x228], Other Possible Types: unsigned long, struct232
    let v21: i64;  // [sp-0x220]
    let v22: i32;  // [bp-0x210]
    let v23: struct32;  // [sp-0x138]
    let v24: i8;  // [bp-0x118]
    let v27: i64;  // rax
    let v28: i64;  // rcx
    let v29: i64;  // rdx
    let v30: i64;  // rax
    let v31: i64;  // rbx
    let v32: iNone;  // ymm0
    let v33: iNone;  // xmm0
    let v34: iNone;  // xmm0
    let v35: i64;  // rax
    let v37: i64;  // rdx

    v20 = uucore::features::fsext::read_fs_list();
    if v16 == 0x8000000000000000 {
        *((a0 + 8) as &unsigned long) = v17;
        *((a0 + 16) as &unsigned long) = v18;
        *(a0 as &i64) = 0x8000000000000000;
        v27 = v21;
        return v27;
    }
    v16 = v20;
    v13 = uu_df::filter_mount_list(&v16, v28);
    v23 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v13);
    alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(&v9, &v23);
    v7 = 0;
    v7 = 8;
    v8 = 0;
    if !*(&v11 as &i64) {
        v13 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v20 = v13;
        *(&v22 as &i32) = 1;
        v0 = alloc::boxed::Box<T>::new(&v20);
        v1 = &g_53ea20;
        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v0) as i32);
        v4 = uucore::util_name();
        v5 = v37;
        eprintln!("{}: {}", &v4, &v0);
        *((a0 + 16) as &unsigned long) = v8;
        *(a0 as &i128) = *(&v7 as &i128);
        v27 = v35;
        return v27;
    }
    v12 = struct16 {
        field_0: a1
        field_8: a1 + v29 * 8
    };
    v30 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v12);
    if v30 {
        v31 = v30;
        do {
            v20 = uu_df::filesystem::Filesystem::from_path(*(&v10 as &i64), *(&v11 as &i64), v31);
            if v20 != 0x8000000000000000 {
                memcpy(&v24, &v20, 232);
                v7 = alloc::vec::Vec<T,A>::push(&v24);
            } else {
                v13 = std::fs::metadata(<&T as core::convert::AsRef<U>>::as_ref(*(v31 as &i64)), v29);
                if v13 == 2 {
                    v4 = <&T as core::convert::AsRef<U>>::as_ref(*(v31 as &i64));
                    v5 = v29;
                    v19 = format!("{}: No such file or directory", &v4);
                    *(&v15 as &i32) = 1;
                    v34 = *(&v19.ptr as &i128);
                    v32 = v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34 as u256;
                    v13 = v34;
                    v14 = v19.len;
                    v2 = alloc::boxed::Box<T>::new(&v13);
                    v3 = &g_53ea20;
                    uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v2) as i32);
                    v0 = uucore::util_name();
                    v1 = v29;
                    eprintln!("{}: {}", &v0, &v2);
                } else {
                    v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                    v14 = v6;
                    v33 = v4.field_0;
                    v32 = v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33 as u256;
                    v13 = v33;
                    *(&v15 as &i32) = 1;
                    v2 = alloc::boxed::Box<T>::new(&v13);
                    v3 = &g_53ea20;
                    uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v2) as i32);
                    v0 = uucore::util_name();
                    v1 = v29;
                    eprintln!("{}: {}", &v0, &v2);
                }
            }
        } while ((v31 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v12), v31));
    }
    *((a0 + 16) as &unsigned long) = v8;
    *(a0 as &i128) = v7 as i128;
    return v27;
}
