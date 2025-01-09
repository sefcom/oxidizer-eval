fn uu_head::arg_iterate(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0x1a8]
    let v1: i256;  // [sp-0x198], Other Possible Types: struct28, struct32, Result<struct16, struct10>, struct88, struct8, struct48, struct24
    let v2: i64;  // [sp-0x190]
    let v3: i64;  // [sp-0x188]
    let v4: i64;  // [bp-0x180]
    let v5: i64;  // [sp-0x178]
    let v6: i128;  // [sp-0x138]
    let v7: i64;  // [sp-0x128]
    let v8: struct8;  // [sp-0x120], Other Possible Types: i64
    let v9: i8;  // [bp-0x110]
    let v10: i64;  // [bp-0x108]
    let v11: i64;  // [sp-0x100]
    let v12: i128;  // [sp-0xf8]
    let v13: i256;  // [sp-0xe8], Other Possible Types: struct24, struct32
    let v14: i64;  // [sp-0xe0]
    let v15: i64;  // [sp-0xd8]
    let v16: i8;  // [sp-0xd0]
    let v17: i128;  // [sp-0xa8]
    let v18: i64;  // [sp-0x98]
    let v19: i80;  // [sp-0x88], Other Possible Types: Option<struct9>
    let v20: i8;  // [bp-0x78]
    let v21: i8;  // [bp-0x70]
    let v27: i64;  // rax
    let v28: i64;  // r15
    let v29: i64;  // r14
    let v30: i64;  // rax
    let v31: i64;  // rax
    let v32: i64;  // rax
    let v34: i64;  // rax
    let v35: i64;  // rax

    v1 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v1 == 0x8000000000000000 {
        core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/head/src/head.rs"); /* do not return */
    }
    v7 = v3;
    v6 = v1;
    v8 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v8 == 0x8000000000000000 {
        v27 = alloc::alloc::Global::alloc_impl();
        *((v27 + 16) as &i64) = v7;
        *(v27 as &i128) = v6;
        v13 = alloc::slice::hack::into_vec(v27, 1);
        v1 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v13);
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v1);
        *((a0 + 16) as &&i64) = &g_52a500;
        *(a0 as &i64) = 0;
        v34 = &g_52a500;
        v34 = v35;
    }
    v17 = v8;
    v18 = v9;
    v1 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((&v17 as &char + 8) as &i64), v9);
    if v1 {
        v13 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v1 = struct28 {
            field_0: v13
            field_16: v15
            field_24: 1
        };
        v30 = alloc::boxed::Box<T>::new(&v1);
    }
    v28 = v2;
    v29 = v3;
    v19 = uu_head::parse::parse_obsolete(v28, v29);
    if !v19 {
        v31 = alloc::alloc::Global::alloc_impl();
        v3 = v18;
        v1 = v17;
        *((v31 + 16) as &i64) = v7;
        *(v31 as &i128) = v6;
        *((v31 + 24) as &i128) = v1;
        *((v31 + 40) as &i64) = v3;
        v1 = alloc::slice::hack::into_vec(v31, 2);
        v13 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v1);
        v1 = core::iter::traits::iterator::Iterator::chain(&v13, a1, a2);
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v1);
        v34 = &g_52a3e8;
        *((a0 + 16) as &&i64) = &g_52a3e8;
        *(a0 as &i64) = 0;
    }
    if !v19 {
        if !v20 {
            v13 = 0;
            v14 = v28;
            v15 = v29;
            v16 = 1;
            v10 = &v13;
            v11 = <os_display::Quoted as core::fmt::Display>::fmt;
            v1 = "bad argument format: ";
            v2 = 1;
            v5 = 0;
            v3 = &v10;
            v4 = 1;
            core::option::Option<T>::map_or_else();
            v1 = struct28 {
                field_0: v22
                field_16: v23
                field_24: 1
            };
            v30 = alloc::boxed::Box<T>::new(&v1);
        } else {
            v13 = 0;
            v14 = v28;
            v15 = v29;
            v16 = 1;
            v10 = &v13;
            v11 = <os_display::Quoted as core::fmt::Display>::fmt;
            v1 = "invalid argument: ";
            v2 = 2;
            v5 = 0;
            v3 = &v10;
            v4 = 1;
            core::option::Option<T>::map_or_else();
            v1 = struct28 {
                field_0: v24
                field_16: v25
                field_24: 1
            };
            v30 = alloc::boxed::Box<T>::new(&v1);
        }
        return struct24 {
            field_0: 1
            field_8: v30
            field_16: &g_52a490
        };
    }
    v12 = v21;
    v10 = v19;
    v32 = alloc::alloc::Global::alloc_impl();
    *((v32 + 16) as &i64) = v7;
    *(v32 as &i128) = v6;
    v13 = alloc::slice::hack::into_vec(v32, 1);
    v1 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v13);
    v13 = core::iter::traits::iterator::Iterator::chain(&v1, &v10);
    v1 = core::iter::traits::iterator::Iterator::chain(&v13, a1, a2);
    *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v1);
    *((a0 + 16) as &&i64) = &g_52a420;
    *(a0 as &i64) = 0;
}
