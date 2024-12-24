fn uu_basenc::parse_cmd_args(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: struct16;  // [sp-0x370], Other Possible Types: i192, struct24
    let v1: struct56;  // [sp-0x358]
    let v3: struct24;  // [sp-0x320], Other Possible Types: Result<struct56, struct16>, i192
    let v4: i192;  // [sp-0x2e8], Other Possible Types: struct712, Result<struct34, struct16>
    let v5: i64;  // [sp-0x2d8]
    let v7: i64;  // rcx
    let v10: i64;  // rax
    let v11: i64;  // rax
    let v12: i8;  // bpl
    let v13: i64;  // rdx
    let v14: i64;  // rax
    let v15: i64;  // rcx

    v4 = uu_basenc::uu_app();
    v0 = uucore::Args::collect_lossy(a1, a2);
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v4, &v0, v7);
    match v3 {
        Err(_) => {
            return struct24 {
                field_0: 2
                field_8:                 alloc::boxed::Box<T>::new(v2)
                field_16: &g_54d520
            };
        },
        Ok(_) => {
            v1 = struct56 {
                field_0: v8
                field_8: v9
                field_16: *((&v3 as &char + 16) as &i32)
                field_20: *((&v3 as &char + 20) as &i128)
                field_36: *((&v3 as &char + 36) as &i128)
                field_52: *((&v3 as &char + 52) as &i32)
            };
            v0 = struct16 {
                field_0: "base64"
                field_8: &g_54d440
            };
            v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v0, &v1);
            if !v10 {
                v3 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v4 = v3;
                v4.24 = 1;
                *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v4);
                *((a0 + 16) as &&i64) = &g_54d478;
                goto LABEL_47c2ab;
            } else {
                v12 = *((v10 + 16) as &i8);
                v4 = uu_base32::base_common::Config::from(&v1);
                v13 = v4;
                v14 = *((&v4 as &char + 8) as &i64);
                v15 = v5;
                match v4 {
                    Ok(_) => {
                        *((a0 + 40) as &i64) = *((&v4 as &char + 40) as &i64);
                        *((a0 + 24) as &i128) = *((&v4 as &char + 24) as &i128);
                        *(a0 as &i64) = v13;
                        *((a0 + 8) as &i64) = v14;
                        *((a0 + 16) as &i64) = v15;
                        *((a0 + 48) as &i8) = v12;
                    },
                    Err(_) => {
                        *((a0 + 8) as &i64) = v14;
                        *((a0 + 16) as &i64) = v15;
LABEL_47c2ab:
                        *(a0 as &i64) = 2;
                    },
                }
            }
            return v11;
        },
    }
}
