fn uu_df::get_named_filesystems(a1: i64, a2: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x390], Other Possible Types: void*
    let v1: u64;  // [bp-0x388]
    let v2: void*;  // [bp-0x380]
    let v3: u64;  // [bp-0x378]
    let v4: u64;  // [bp-0x370], Other Possible Types: struct24
    let v5: u64;  // [bp-0x370]
    let v6: u64;  // [bp-0x368]
    let v7: u64;  // [bp-0x360]
    let v8: u64;  // [bp-0x360]
    let v9: struct16;  // [bp-0x350]
    let v10: void*;  // [bp-0x350]
    let v11: u64;  // [bp-0x348]
    let v12: void*;  // [bp-0x340]
    let v13: struct24;  // [bp-0x338]
    let v14: u64;  // [bp-0x330]
    let v15: u64;  // [bp-0x328]
    let v16: u64;  // [bp-0x318]
    let v17: u64;  // [bp-0x310]
    let v18: u8;  // [bp-0x308], Other Possible Types: struct24
    let v20: u64;  // [bp-0x308]
    let v21: u64;  // [bp-0x2f8]
    let v22: u32;  // [bp-0x2f0]
    let v23: u192;  // [bp-0x258]
    let v24: u64;  // [bp-0x250]
    let v25: alloc::string::String;  // [bp-0x240]
    let v26: u64;  // [bp-0x230]
    let v27: Option<struct232>;  // [bp-0x228], Other Possible Types: struct24
    let v28: u192;  // [bp-0x228]
    let v29: u64;  // [bp-0x218]
    let v30: u32;  // [bp-0x210]
    let v31: struct32;  // [bp-0x138]
    let v32: u8;  // [bp-0x118]
    let v34: u64;  // rcx
    let v35: i64;  // rax
    let v36: i64;  // rbx
    let v39: u64;  // rdx
    let v42: u64;  // rdx

    v27 = uucore::features::fsext::read_fs_list();
    if v27.field_0 == 0x8000000000000000 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v24
            field_16: v29
        };
    }
    v23 = v28;
    uu_df::filter_mount_list(&v18, &v23, v34);
    v31 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v18);
    v13 = alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(&v31);
    v10 = 0;
    v11 = 8;
    v12 = 0;
    if !v15 {
        v18 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v29 = v21;
        memcpy(&v27, &v18, 16);
        v30 = 1;
        v0 = alloc::boxed::Box<T>::new(&v27);
        v1 = &g_53ea20;
        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v0) as i32);
        v4 = uucore::util_name();
        v6 = v42;
        eprintln!("{}: {}", &v4, &v0);
        return struct24 {
            field_0: *(&v10 as &i128)
            field_16: v12
        };
    }
    v16 = a1;
    v17 = a1 + a2 * 8;
    v35 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v16);
    if !v35 {
        return struct24 {
            field_0: *(&v9.field_0 as &i128)
            field_16: v12
        };
    }
    do {
        v27 = uu_df::filesystem::Filesystem::from_path(v14, v15, v36);
        match v27 {
            Some(_) => {
                memcpy(&v32, &v27, 232);
                v9 = alloc::vec::Vec<T,A>::push(&v32);
            },
            None => {
                v18 as u1536 = std::fs::metadata(<&T as core::convert::AsRef<U>>::as_ref(*(v36 as &i64)), a2);
                match v18 as u1536 {
                    Err(_) => {
                        v4 = <&T as core::convert::AsRef<U>>::as_ref(*(v36 as &i64));
                        v6 = v39;
                        v25 = format!("{}: No such file or directory", &v4);
                        v22 = 1;
                        v20 = *(&v25.vec.buf.cap as &i128) as u128;
                        v21 = v26;
                        v2 = alloc::boxed::Box<T>::new(&v20 as u384);
                        v3 = &g_53ea20;
                        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v2) as i32 as u32 as u64);
                        v0 = uucore::util_name();
                        v1 = v39;
                        eprintln!("{}: {}", &v0, &v2);
                        v18 = v20;
                        v4 = v5;
                        v7 = v8;
                    },
                    Ok(_) => {
                        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                        v21 = v7;
                        v18 = *(&v4.field_0 as &i128) as u128;
                        v22 = 1;
                        v2 = alloc::boxed::Box<T>::new(&v18 as u1536);
                        v3 = &g_53ea20;
                        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v2) as i32 as u32 as u64);
                        v0 = uucore::util_name();
                        v1 = v39;
                        eprintln!("{}: {}", &v0, &v2);
                        v18 = v20;
                        v4 = v5;
                        v7 = v8;
                    },
                }
            },
        }
        v36 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v16);
    } while (v35);
    return struct24 {
        field_0: *(&v9.field_0 as &i128)
        field_16: v12
    };
}
