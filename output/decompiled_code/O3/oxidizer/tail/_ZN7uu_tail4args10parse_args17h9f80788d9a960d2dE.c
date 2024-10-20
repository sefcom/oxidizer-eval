fn uu_tail::args::parse_args(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i192;  // [sp-0x400], Other Possible Types: struct24
    let v1: i192;  // [sp-0x3e8], Other Possible Types: struct24
    let v2: i64;  // [sp-0x3e0]
    let v3: i64;  // [sp-0x3d8]
    let v4: i128;  // [sp-0x3d0]
    let v5: i128;  // [sp-0x3c0]
    let v6: i128;  // [sp-0x3b0]
    let v7: i64;  // [sp-0x3a0]
    let v8: i128;  // [bp-0x398]
    let v9: i128;  // [sp-0x388]
    let v10: i128;  // [sp-0x378]
    let v11: i64;  // [sp-0x368]
    let v12: i128;  // [sp-0x358]
    let v13: i128;  // [sp-0x348]
    let v14: i128;  // [sp-0x338]
    let v15: i64;  // [sp-0x328]
    let v16: i128;  // [sp-0x318], Other Possible Types: struct16
    let v17: i8;  // [bp-0x308]
    let v18: i8;  // [bp-0x2f8]
    let v19: i8;  // [bp-0x2e8]
    let v20: i192;  // [sp-0x2e0], Other Possible Types: struct712, struct24
    let v22: i64;  // rdx
    let v26: i64;  // rax
    let v27: i64;  // r14
    let v28: i64;  // rdi
    let v29: i64;  // rsi
    let v30: i64;  // rcx
    let v31: i128;  // xmm0
    let v32: i128;  // xmm1
    let v33: i128;  // xmm2
    let v34: i64;  // rdx
    let v35: i64;  // rax
    let v36: i64;  // rcx
    let v37: i128;  // xmm0
    let v38: i128;  // xmm1
    let v39: i128;  // xmm2

    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, a2);
    v20 = uu_tail::args::uu_app();
    v1 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v0);
    v16 = clap_builder::builder::command::Command::try_get_matches_from(&v20, &v1);
    if v16 == 0x8000000000000000 {
        v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v16 as &char + 8) as &i64));
        v3 = v22;
        v1 = 5;
    } else {
        v11 = v19;
        v10 = v18;
        v9 = v17;
        v8 = v16;
        uu_tail::args::Settings::from(&v20, &v8);
        if v1 == 5 {
            *((a0 + 8) as &i64) = v2;
            *((a0 + 16) as &i64) = v3;
            *(a0 as &i64) = 5;
            return a0;
        }
        v7 = *((&v20 as &char + 72) as &i64);
        v6 = *((&v20 as &char + 56) as &i128);
        v5 = *((&v20 as &char + 40) as &i128);
        v4 = *((&v20 as &char + 24) as &i128);
        v1 = v20;
        v2 = *((&v20 as &char + 8) as &i64);
        v3 = *((&v20 as &char + 16) as &i64);
    }
    v26 = *((&v0 as &char + 16) as &i64);
    if (v26 & -2) == 2 {
        v27 = *((&v0 as &char + 8) as &i64);
        if v1 == 5 {
LABEL_45560e:
            uu_tail::args::parse_obsolete();
            v34 = v20;
            v35 = *((&v20 as &char + 8) as &i64);
            v36 = *((&v20 as &char + 16) as &i64);
            if v34 == 6 {
                *((a0 + 8) as &i64) = v35;
                *((a0 + 16) as &i64) = v36;
                *(a0 as &i64) = 5;
                return a0;
            }
            v15 = *((&v20 as &char + 72) as &i64);
            v14 = *((&v20 as &char + 56) as &i128);
            v13 = *((&v20 as &char + 40) as &i128);
            v12 = *((&v20 as &char + 24) as &i128);
            if v34 == 5 {
                *((a0 + 64) as &i128) = *((&v6 as &char + 8) as &i128);
                v37 = v1;
                v38 = v3;
                v39 = *((&v4 as &char + 8) as &i128);
                *((a0 + 48) as &i128) = *((&v5 as &char + 8) as &i128);
                *((a0 + 32) as &i128) = v39;
                *((a0 + 16) as &i128) = v38;
                *(a0 as &i128) = v37;
            } else {
                *((a0 + 72) as &i64) = v15;
                *((a0 + 56) as &i128) = v14;
                *((a0 + 40) as &i128) = v13;
                *((a0 + 24) as &i128) = v12;
                *(a0 as &i64) = v34;
                *((a0 + 8) as &i64) = v35;
                *((a0 + 16) as &i64) = v36;
            }
            return a0;
        } else {
            v20 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v27 + 32) as &i64), *((v27 + 40) as &i64));
            v28 = *((&v20 as &char + 8) as &i64);
            v29 = *((&v20 as &char + 16) as &i64);
            v8 = 43;
            v30 = v20;
            if core::slice::<impl [T]>::starts_with(v28, v29, &v8, 1) as i8 {
                v26 = *((&v0 as &char + 16) as &i64);
                goto LABEL_45560e;
            }
        }
    }
    *((a0 + 64) as &i128) = *((&v6 as &char + 8) as &i128);
    v31 = v1;
    v32 = v3;
    v33 = *((&v4 as &char + 8) as &i128);
    *((a0 + 48) as &i128) = *((&v5 as &char + 8) as &i128);
    *((a0 + 32) as &i128) = v33;
    *((a0 + 16) as &i128) = v32;
    *(a0 as &i128) = v31;
    return a0;
}
