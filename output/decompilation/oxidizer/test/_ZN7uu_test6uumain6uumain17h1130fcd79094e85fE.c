fn uu_test::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x3e0]
    let v1: u128;  // [bp-0x3d8]
    let v2: u64;  // [bp-0x3d0]
    let v3: u64;  // [bp-0x3c9]
    let v4: u64;  // [bp-0x3c8]
    let v5: struct24;  // [bp-0x3c0], Other Possible Types: u64
    let v6: i64;  // [bp-0x3b8]
    let v7: u64;  // [bp-0x3b0], Other Possible Types: unsigned long
    let v8: u128;  // [bp-0x3a8]
    let v9: u64;  // [bp-0x399]
    let v10: u64;  // [bp-0x388]
    let v11: u64;  // [bp-0x378]
    let v12: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0x370], Other Possible Types: struct24, struct8
    let v13: u64;  // [bp-0x370]
    let v14: Result<struct32, struct32>;  // [bp-0x370]
    let v15: struct24;  // [bp-0x368], Other Possible Types: char
    let v16: u8;  // [bp-0x368]
    let v17: u64;  // [bp-0x360]
    let v18: u64;  // [bp-0x360]
    let v19: struct24;  // [bp-0x338], Other Possible Types: struct32, struct56
    let v20: struct24;  // [bp-0x2f8], Other Possible Types: struct28, struct712, struct25, u32
    let v21: struct9;  // [bp-0x2f8]
    let v22: struct24;  // [bp-0x2f8]
    let v23: u8;  // [bp-0x2f0]
    let v24: u64;  // [bp-0x2e0]
    let v26: u64;  // r14
    let v27: u64;  // rax
    let v28: u64;  // rdx
    let v30: u64;  // rcx
    let v31: u64;  // rax
    let v32: u64;  // r12
    let v33: u64;  // rax
    let v34: &mut [u8];  // rax:rdx

    v10 = a0;
    v12 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v10);
    if (((0 ^ v12) & (0 ^ -(v13))) >> 63) as char {
        v22 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("test");
    } else {
        v26 = *(&v15 as &i64);
        v17 = v18;
    }
    v27 = uucore::util_name();
    core::iter::traits::iterator::Iterator::collect(&v5, v10, a1);
    v20 = 0;
    v34 = core::char::methods::encode_utf8_raw(&v20 as u32, a1, v28);
    if core::slice::<impl [T]>::ends_with(v27, v28, v34.data_ptr, v30) {
        if v7 {
            v0 = v26;
            if v7 == 1 {
                v11 = v18;
                if <std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(*((v6 + 8) as &i64), *((v6 + 16) as &i64), "--help") || <std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(*((v6 + 8) as &i64), *((v6 + 16) as &i64), "--version") {
                    v20 = uu_test::uu_app();
                    v1 = v13;
                    v2 = v0;
                    v4 = v11;
                    v19 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
                    v12 = core::iter::traits::iterator::Iterator::chain(&v1, &v19);
                    v19 = clap_builder::builder::command::Command::get_matches_from(&v20, &v12);
                    return 0;
                }
            }
            v7 -= 1;
            v31 = v7 * 3;
            if !!*((v6 + v31 * 8 + 8) as &i64) && !*((v6 + v31 * 8) as &i64) == 0x8000000000000000 && <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v6 + v31 * 8 + 8) as &i64), *((v6 + v31 * 8 + 16) as &i64), "]") {
                goto LABEL_4533c5;
            }
        }
        v12 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("missing ']'");
        v20 = struct28 {
            field_0: *(&v12.field_0 as &i128)
            field_16: v17
            field_24: 2
        };
        v32 = alloc::boxed::Box<T>::new(&v20) as u64;
    } else {
LABEL_4533c5:
        v20 = v5;
        v14 = uu_test::parser::parse(&v20);
        match v14 {
            Err(_) => {
                v19 = v15;
                v21 = uu_test::uumain::uumain::{{closure}}(&v19);
                v1 = *(&v23 as &i128) as u128;
                v3 = v24;
                v8 = v1;
                v9 = v3;
                if v21.field_0 == 7 {
                    v32 = (!(v23 & 1) ? uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1) : 0);
                } else {
                    v20 = struct25 {
                        field_0: v21.field_0
                        field_8: <UNKNOWN>
                        field_9: v8
                    };
                    v33 = alloc::boxed::Box<T>::new(&v20) as u64;
LABEL_4535a8:
                    v32 = v33;
                }
            },
            Ok(_) => {
                v1 = *((&v14 as &char + 9) as &i128) as u128;
                v3 = *((&v14 as &char + 24) as &i64) as u64;
                v8 = v1;
                v9 = v3;
                v20 = struct25 {
                    field_0: v14 as i64
                    field_8: v16
                    field_9: v8
                };
                v33 = alloc::boxed::Box<T>::new(&v20) as u64;
                goto LABEL_4535a8;
            },
        }
    }
    return v32;
}
