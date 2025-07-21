fn uu_df::get_named_filesystems(a1: i64, a2: i64) -> Result<struct24, struct24> {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0x390], Other Possible Types: u64
    let v1: u64;  // [bp-0x388]
    let v2: struct16;  // [bp-0x380]
    let v3: struct24;  // [bp-0x370], Other Possible Types: u64
    let v4: u64;  // [bp-0x368]
    let v5: u64;  // [bp-0x360]
    let v6: u64;  // [bp-0x360]
    let v7: struct16;  // [bp-0x350]
    let v8: void*;  // [bp-0x350]
    let v9: u64;  // [bp-0x348]
    let v10: void*;  // [bp-0x340]
    let v11: struct24;  // [bp-0x338]
    let v12: u64;  // [bp-0x330]
    let v13: u64;  // [bp-0x328]
    let v14: struct16;  // [bp-0x318]
    let v15: struct24;  // [bp-0x308], Other Possible Types: u64
    let v16: u64;  // [bp-0x308]
    let v17: u64;  // [bp-0x308]
    let v18: u64;  // [bp-0x2f8]
    let v19: u32;  // [bp-0x2f0]
    let v20: struct24;  // [bp-0x258]
    let v21: u64;  // [bp-0x250]
    let v22: alloc::string::String;  // [bp-0x240]
    let v23: u64;  // [bp-0x230]
    let v24: Option<struct232>;  // [bp-0x228], Other Possible Types: struct24
    let v25: u128;  // [bp-0x228]
    let v26: struct24;  // [bp-0x228]
    let v27: u64;  // [bp-0x218]
    let v28: u32;  // [bp-0x210]
    let v29: struct32;  // [bp-0x138]
    let v30: u8;  // [bp-0x118]
    let v32: u64;  // rcx
    let v33: i64;  // rax
    let v34: i64;  // rbx
    let v37: u64;  // rdx
    let v40: u64;  // rdx

    v24 = uucore::features::fsext::read_fs_list();
    if v24.field_0 == 0x8000000000000000 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v21
            field_16: v27
        };
    }
    v20 = v26;
    uu_df::filter_mount_list(&v15, &v20, v32);
    v29 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v15);
    v11 = alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(&v29);
    v8 = 0;
    v9 = 8;
    v10 = 0;
    if !v13 {
        v15 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v27 = v18;
        v25 = *(&v15.field_0 as &i128);
        v28 = 1;
        v0 = struct16 {
            field_0: alloc::boxed::Box<T>::new(&v24)
            field_8: &g_53ea20
        };
        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v0.field_0) as i32);
        v3 = uucore::util_name();
        v4 = v40;
        eprintln!("{}: {}", &v3, &v0);
        return Ok(struct24 {
            field_0: *(&v8 as &i128)
            field_16: v10
        });
    }
    v14 = struct16 {
        field_0: a1
        field_8: a1 + a2 * 8
    };
    v33 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v14);
    if !v33 {
        return Ok(struct24 {
            field_0: *(&v7.field_0 as &i128)
            field_16: v10
        });
    }
    do {
        v24 = uu_df::filesystem::Filesystem::from_path(v12, v13, v34);
        match v24 {
            Some(_) => {
                memcpy(&v30, &v24, 232);
                v7 = alloc::vec::Vec<T,A>::push(&v30);
            },
            None => {
                v16 as u1536 = std::fs::metadata(<&T as core::convert::AsRef<U>>::as_ref(*(v34 as &i64)), a2);
                match v16 as u1536 {
                    Err(_) => {
                        v3 = <&T as core::convert::AsRef<U>>::as_ref(*(v34 as &i64));
                        v4 = v37;
                        v22 = format!("{}: No such file or directory", &v3);
                        v19 = 1;
                        *(&v17 as &i128) = *(&v22.vec.buf.cap as &i128);
                        v18 = v23;
                        v2 = struct16 {
                            field_0: alloc::boxed::Box<T>::new(&v17 as u384)
                            field_8: &g_53ea20
                        };
                        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v2.field_0) as i32 as u32 as u64);
                        v0 = uucore::util_name();
                        v1 = v37;
                        eprintln!("{}: {}", &v0, &v2);
                        v5 = v6;
                    },
                    Ok(_) => {
                        v3 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                        v18 = v5;
                        *(&v16 as &i128) = *(&v3.field_0 as &i128);
                        v19 = 1;
                        v2 = struct16 {
                            field_0: alloc::boxed::Box<T>::new(&v16 as u1536)
                            field_8: &g_53ea20
                        };
                        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v2.field_0) as i32 as u32 as u64);
                        v0 = uucore::util_name();
                        v1 = v37;
                        eprintln!("{}: {}", &v0, &v2);
                        v5 = v6;
                    },
                }
            },
        }
        v34 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v14);
    } while (v33);
    return Ok(struct24 {
        field_0: *(&v7.field_0 as &i128)
        field_16: v10
    });
}
