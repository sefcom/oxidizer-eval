fn uu_df::get_named_filesystems(a0: i64, a1: i64, a2: u64, a3: void*) -> int {
    let v0: struct16;  // [bp-0x378], Other Possible Types: u64
    let v1: u64;  // [bp-0x370]
    let v2: struct16;  // [bp-0x368]
    let v3: struct16;  // [bp-0x358]
    let v4: void*;  // [bp-0x358]
    let v5: u64;  // [bp-0x350]
    let v6: void*;  // [bp-0x348]
    let v7: u64;  // [bp-0x330]
    let v8: u64;  // [bp-0x328]
    let v9: u64;  // [bp-0x320]
    let v10: struct24;  // [bp-0x318]
    let v11: u64;  // [bp-0x318]
    let v12: u64;  // [bp-0x310]
    let v13: u64;  // [bp-0x308]
    let v14: u64;  // [bp-0x308]
    let v15: u32;  // [bp-0x300]
    let v16: struct24;  // [bp-0x230], Other Possible Types: u64
    let v17: u64;  // [bp-0x230]
    let v18: u64;  // [bp-0x230]
    let v19: u64;  // [bp-0x228]
    let v20: u64;  // [bp-0x220]
    let v21: u64;  // [bp-0x220]
    let v22: i64;  // [bp-0x220]
    let v23: u8;  // [bp-0x218]
    let v24: alloc::string::String;  // [bp-0x148]
    let v25: u64;  // [bp-0x138]
    let v26: alloc::string::String;  // [bp-0x130]
    let v27: u64;  // [bp-0x120]
    let v28: struct232;  // [bp-0x118], Other Possible Types: u64
    let v29: u64;  // [bp-0x110]
    let v30: u64;  // [bp-0x110]
    let v32: i64;  // r12
    let v33: u64;  // r15
    let v34: u64;  // r15
    let v35: u32;  // eax
    let v39: i64;  // rdx
    let v40: u64;  // r15

    v32 = a1;
    v10 = uucore::features::fsext::read_fs_list();
    if (((0 ^ v10.field_0) & (0 ^ -(v11))) >> 63) as char {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v12
            field_16: v14
        };
    }
    v7 = v10.field_0;
    v8 = v12;
    v9 = v14;
    v4 = 0;
    v5 = 8;
    v6 = 0;
    if a2 {
        do {
            v34 = v33;
            vvar_597{stack -280} = struct232 OrderedDict([(0, 𝜙@64b [((4588376, None), vvar_341{stack -280}), ((4588339, None), None)])])
            uu_df::filesystem::Filesystem::from_path(&v28, v12, v14, v32);
            if v28.field_0 == 0x8000000000000000 {
                v35 = (&v28)[1].field_0;
                if !v35 {
                    v16 = 1;
                    v19 = <&T as core::convert::AsRef<U>>::as_ref(*(v32 as &i64));
                    v20 = v39;
                    v23 = 1;
                    v26 = format!("cannot access {}: over-mounted by another device", &v16);
                    v15 = 1;
                    v11 = *(&v26.vec.buf.inner.cap as &i128);
                    v13 = v27;
                    v2 = struct16 {
                        field_0: alloc::boxed::Box<T>::new(&v11 as u384) as u64
                        field_8: &g_502078
                    };
                    uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v2.field_0));
                    v0 = uucore::util_name();
                    v1 = v39;
                    eprintln!("{}: {}", &v0, &v2);
                    v30 = v29;
                    v18 = v17;
                    v22 = v21;
                } else if v35 == 1 {
                    v16 = <&T as core::convert::AsRef<U>>::as_ref(*(v32 as &i64));
                    v19 = v39;
                    v24 = format!("{}: No such file or directory", &v16);
                    v15 = 1;
                    v11 = *(&v24.vec.buf.inner.cap as &i128);
                    v13 = v25;
                    v2 = struct16 {
                        field_0: alloc::boxed::Box<T>::new(&v11 as u384) as u64
                        field_8: &g_502078
                    };
                    uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v2.field_0));
                    v0 = uucore::util_name();
                    v1 = v39;
                    eprintln!("{}: {}", &v0, &v2);
                    v30 = v29;
                    v18 = v17;
                    v22 = v21;
                } else {
                    v16 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("no file systems processed");
                    v13 = v20;
                    v11 = *(&v16.field_0 as &i128);
                    v15 = 1;
                    v2 = struct16 {
                        field_0: alloc::boxed::Box<T>::new(&v11 as u384) as u64
                        field_8: &g_502078
                    };
                    uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v2.field_0));
                    v0 = uucore::util_name();
                    v1 = v39;
                    eprintln!("{}: {}", &v0, &v2);
                    v30 = v29;
                    v18 = v17;
                    v22 = v21;
                }
            } else {
                memcpy(&v16, &v28, 232);
                v30 = v29;
                v18 = v16;
                v22 = v20;
                if uu_df::is_included(&v18, a3) {
                    memcpy(&v11, &v16, 232);
                    v3 = alloc::vec::Vec<T,A>::push(&v11);
                    v30 = v29;
                    v18 = v16;
                    v22 = v20;
                }
            }
            v20 = v22;
            v16 = v18;
            v32 += 8;
            v40 = v34 - 8;
            v33 = v40;
        } while (v34 != 8);
    }
    if uucore::mods::error::get_exit_code() || v6 {
        return struct24 {
            field_0: *(&v3.field_0 as &i128)
            field_16: v6
        };
    }
    v16 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("no file systems processed");
    v13 = v20;
    v11 = *(&v16.field_0 as &i128);
    v15 = 1;
    v0 = struct16 {
        field_0: alloc::boxed::Box<T>::new(&v11 as u384) as u64
        field_8: &g_502078
    };
    uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v0.field_0));
    v28 = uucore::util_name();
    v29 = v39;
    eprintln!("{}: {}", &v28, &v0);
    return struct24 {
        field_0: *(&v3.field_0 as &i128)
        field_16: v6
    };
}
