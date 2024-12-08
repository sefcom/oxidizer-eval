fn uu_head::arg_iterate(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i8;  // [bp-0x1a8]
    let v1: i384;  // [sp-0x198], Other Possible Types: struct28, struct32, struct48, struct8, struct88, struct24, Result<struct16, struct10>
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
    let v13: i64;  // [sp-0xe8], Other Possible Types: struct24, struct32
    let v14: i64;  // [sp-0xe0]
    let v15: i64;  // [sp-0xd8]
    let v16: i8;  // [sp-0xd0]
    let v17: i128;  // [sp-0xa8]
    let v18: i64;  // [sp-0x98]
    let v19: i72;  // [sp-0x88], Other Possible Types: Option<struct9>
    let v20: i8;  // [bp-0x78]
    let v21: i8;  // [bp-0x70]
    let v22: struct24;  // [sp-0x60]
    let v23: struct24;  // [sp-0x48]
    let v25: i64;  // rax
    let v26: i64;  // r15
    let v27: i64;  // r14
    let v28: i64;  // rax
    let v29: i64;  // rax
    let v30: i64;  // rax
    let v32: i64;  // rax

    v1 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v1 == 0x8000000000000000 {
        core::option::unwrap_failed(); /* do not return */
    }
    v7 = v3;
    v6 = v1;
    v8 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v8 != 0x8000000000000000 {
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
            v28 = alloc::boxed::Box<T>::new(&v1);
            goto LABEL_46c41f;
        } else {
            v26 = v2;
            v27 = v3;
            v19 = uu_head::parse::parse_obsolete(v26, v27);
            if !v19 {
                v29 = alloc::alloc::Global::alloc_impl(48);
                v3 = v18;
                v1 = v17;
                *((v29 + 16) as &i64) = v7;
                *(v29 as &i128) = v6;
                *((v29 + 24) as &i128) = v1;
                *((v29 + 40) as &i64) = v3;
                v1 = alloc::slice::hack::into_vec(v29, 2);
                v13 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v1);
                v1 = core::iter::traits::iterator::Iterator::chain(&v13, a1, a2);
                *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v1);
                *((a0 + 16) as &&i64) = &g_52abf8;
                *(a0 as &i64) = 0;
                return &g_52abf8;
            }
            if v19 {
                v12 = v21;
                v10 = v19;
                v30 = alloc::alloc::Global::alloc_impl(24);
                *((v30 + 16) as &i64) = v7;
                *(v30 as &i128) = v6;
                v13 = alloc::slice::hack::into_vec(v30, 1);
                v1 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v13);
                v13 = core::iter::traits::iterator::Iterator::chain(&v1, &v10);
                v1 = core::iter::traits::iterator::Iterator::chain(&v13, a1, a2);
                *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v1);
                *((a0 + 16) as &&i64) = &g_52ac30;
                *(a0 as &i64) = 0;
            } else {
                if !v20 {
                    v13 = 0;
                    v14 = v26;
                    v15 = v27;
                    v16 = 1;
                    v10 = &v13;
                    v11 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v1 = "bad argument format: ";
                    v2 = 1;
                    v5 = 0;
                    v3 = &v10;
                    v4 = 1;
                    v22 = core::option::Option<T>::map_or_else(&v1);
                    v1 = struct28 {
                        field_0: v22
                        field_16: *((&v22 as &char + 16) as &i64)
                        field_24: 1
                    };
                    v28 = alloc::boxed::Box<T>::new(&v1);
                } else {
                    v13 = 0;
                    v14 = v26;
                    v15 = v27;
                    v16 = 1;
                    v10 = &v13;
                    v11 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v1 = "invalid argument: ";
                    v2 = 2;
                    v5 = 0;
                    v3 = &v10;
                    v4 = 1;
                    v23 = core::option::Option<T>::map_or_else(&v1);
                    v1 = struct28 {
                        field_0: v23
                        field_16: *((&v23 as &char + 16) as &i64)
                        field_24: 1
                    };
                    v28 = alloc::boxed::Box<T>::new(&v1);
                }
LABEL_46c41f:
                *((a0 + 8) as &i64) = v28;
                *((a0 + 16) as &&i64) = &g_52acb0;
                *(a0 as &i64) = 1;
            }
            return v32;
        }
    } else {
        v25 = alloc::alloc::Global::alloc_impl(24);
        *((v25 + 16) as &i64) = v7;
        *(v25 as &i128) = v6;
        v13 = alloc::slice::hack::into_vec(v25, 1);
        v1 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v13);
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v1);
        *((a0 + 16) as &&i64) = &g_52ad40;
        *(a0 as &i64) = 0;
        if v8 != 0x8000000000000000 {
            return v32;
        }
        return v32;
    }
}
