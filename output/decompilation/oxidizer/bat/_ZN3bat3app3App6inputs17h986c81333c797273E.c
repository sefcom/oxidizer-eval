fn bat::app::App::inputs(a0: i64, a1: u64) -> void {
    let v0: <anon>;  // [bp-0x20c], Other Possible Types: u32
    let v1: u64;  // [bp-0x208]
    let v2: u64;  // [bp-0x200]
    let v3: struct24;  // [bp-0x1f8]
    let v4: struct712;  // [bp-0x1f0]
    let v5: void*;  // [bp-0x1e8]
    let v6: void*;  // [bp-0x1e0]
    let v7: struct16;  // [bp-0x1e0]
    let v8: struct16;  // [bp-0x1e0]
    let v9: u64;  // [bp-0x1d8]
    let v10: void*;  // [bp-0x1d0]
    let v11: struct160;  // [bp-0x1c8], Other Possible Types: struct32, u8
    let v12: struct160;  // [bp-0x1c8], Other Possible Types: u64
    let v13: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x1c8]
    let v14: u64;  // [bp-0x1c0]
    let v15: i8;  // [bp-0x1b8]
    let v16: u128;  // [bp-0x1b8]
    let v17: u128;  // [bp-0x1a8]
    let v18: u128;  // [bp-0x198]
    let v19: i8;  // [bp-0x188]
    let v20: struct24;  // [bp-0x128]
    let v22: struct40;  // [bp-0x110]
    let v23: u64;  // [bp-0x108]
    let v24: u32;  // [bp-0x100]
    let v25: u64;  // [bp-0xf8]
    let v26: u64;  // [bp-0xf0]
    let v27: struct56;  // [bp-0xe8]
    let v28: struct64;  // [bp-0xb0]
    let v29: struct64;  // [bp-0x70]
    let v31: u64;  // r14
    let v32: i64;  // r15
    let v33: u64;  // rsi
    let v34: u64;  // rcx
    let v35: u8;  // r12b
    let v36: u32;  // eax
    let v37: u64;  // rcx
    let v38: iNone;  // xmm0
    let v40: u64;  // rbp
    let v41: i64;  // rbx
    let v42: u8;  // r13b
    let v46: u64;  // rsi
    let v48: u64;  // rdi
    let v49: u64;  // rdi
    let v52: void*;  // r14

    v31 = &g_485489;
    v32 = &v11;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v11, a1, "file-name");
    v28 = clap_builder::parser::error::MatchesError::unwrap("file-name", &v11);
    if v28.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v11, &v28);
        v1 = v12;
        v4 = v14;
        v31 = *(&v15 as &i64);
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v11, a1, "FILE");
    v29 = clap_builder::parser::error::MatchesError::unwrap("FILE", &v11);
    if v29.field_0 as i64 {
        core::iter::traits::iterator::Iterator::collect(&v11, &v29);
        v33 = v12;
        v3 = v14;
        v32 = v16 as i64;
        v34 = v1;
        v2 = v33;
        v35 = v33 == 0x8000000000000000;
        v36 = v3 as u32 & -0x100 | v34 == 0x8000000000000000 | v33 == 0x8000000000000000;
        if ((v34 == 0x8000000000000000 | v33 == 0x8000000000000000) & 1) {
            v37 = v34;
            if v37 == 0x8000000000000000 {
                goto LABEL_7a8010;
            }
        } else if v31 == v32 {
            v37 = v1;
        } else {
            v0 = v36 & -0x100 | 1;
            <bat::error::Error as core::convert::From<&str>>::from(&v11, "Must be one file name per input type.");
            *(&v5[64] as &i128) = *(&v19 as &i128);
            v38 = *(&v12 as &i128);
            *(&v5[48] as &u128) = v18;
            *(&v5[32] as &u128) = v17;
            *(&v5[16] as &u128) = v16;
            *(v5) = v38;
            return;
        }
LABEL_7a81c2:
        v20 = struct24 {
            field_0: v37
            field_8: v4
            field_16: v31
        };
        v11 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v20);
        v40 = alloc::boxed::Box<T>::new(&v11) as u64;
        v41 = &g_ac8428.padding_0[0];
        v0 = 0;
        if v35 {
LABEL_7a8225:
            v52 = alloc::alloc::Global::alloc_impl(8, 160);
            *((v41 + 24) as &i64)(&v11, v40);
            v11 = bat::input::new_stdin_input(v14, v11.field_16);
            memcpy(v52, &v11, 160);
            *(&v5[8] as &i64) = 1;
            *(&v5[16] as &void*) = v52;
            *(&v5[24] as &i64) = 1;
            *(v5 as &i8) = 13;
            if v42 {
                return;
            } else if !v0 as i8 {
                return;
            }
            goto LABEL_0x7a8b54;
        }
    } else {
        v35 = 1;
        v36 = 0;
        v2 = 0x8000000000000000;
        v37 = v1;
        if v37 != 0x8000000000000000 {
            goto LABEL_7a81c2;
        }
LABEL_7a8010:
        v0 = alloc::boxed::Box<T>::new() & -0x100 | 1;
        v41 = &g_ac83f0.padding_0[0];
        v42 = 1;
        if v35 {
            goto LABEL_7a8225;
        }
    }
    v6 = 0;
    v9 = 8;
    v10 = 0;
    v27 = core::iter::traits::iterator::Iterator::zip(alloc::boxed::Box<T>::new(v3, v32 * 16 + v3), &g_ac8460, v40, v41);
    loop {
        do {
            vvar_573{stack -272} = struct40 OrderedDict([(0, 𝜙@64b [((8028520, None), vvar_492{stack -272}), ((8028474, None), vvar_492{stack -272}), ((8028334, None), vvar_492{stack -272}), ((8028280, None), None)]), (8, 𝜙@64b [((8028520, None), vvar_493{stack -264}), ((8028474, None), vvar_493{stack -264}), ((8028334, None), vvar_493{stack -264}), ((8028280, None), None)]), (16, 𝜙@64b [((8028520, None), vvar_494{stack -256}), ((8028474, None), vvar_494{stack -256}), ((8028334, None), vvar_494{stack -256}), ((8028280, None), None)]), (24, 𝜙@64b [((8028520, None), vvar_495{stack -248}), ((8028474, None), vvar_495{stack -248}), ((8028334, None), vvar_495{stack -248}), ((8028280, None), None)])])
            <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v22, &v27);
            if v22.field_0 as i32 != 1 {
                *(&v5[24] as &i64) = 0;
                *(&v5[8] as &i128) = *(&v8.field_0 as &i128);
                *(v5 as &i8) = 13;
                return;
            }
        } while (!v23);
        v13 = core::str::converts::from_utf8(v23, v24);
        match v13 {
            Err(_) => {
                v48 = 1;
            },
            Ok(_) => {
                v48 = v14;
            },
        }
        v49 = v48;
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v49, v46, "-") {
            v12 = bat::input::new_stdin_input(v25, v26);
            v7 = alloc::vec::Vec<T,A>::push(&v12, "src/bin/bat/app.rs");
        } else {
            v12 = bat::input::new_file_input(v23, v24, v25, v26);
            v8 = alloc::vec::Vec<T,A>::push(&v12, "src/bin/bat/app.rs");
        }
    }
}
