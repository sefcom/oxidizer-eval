fn uu_test::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [bp-0x3e0]
    let v1: i8;  // [bp-0x3d8]
    let v2: i64;  // [sp-0x3d0]
    let v3: i128;  // [bp-0x3c8]
    let v4: i64;  // [sp-0x3b9]
    let v5: i128;  // [bp-0x3a8]
    let v6: i64;  // [sp-0x399]
    let v7: i8;  // [bp-0x388]
    let v8: i192;  // [sp-0x378], Other Possible Types: struct24
    let v9: i64;  // [sp-0x368]
    let v10: i64;  // [sp-0x358], Other Possible Types: struct56, struct32
    let v11: i64;  // [sp-0x348]
    let v12: i256;  // [sp-0x320], Other Possible Types: struct24, struct32
    let v13: i224;  // [sp-0x2e8], Other Possible Types: struct25, struct8, Option<Result<struct33, struct9>>, struct712
    let v14: i8;  // [sp-0x2e0]
    let v15: i64;  // [sp-0x2d8]
    let v16: i64;  // [bp-0x2d0]
    let v19: i64;  // rdx
    let v20: i64;  // rax
    let v21: i64;  // rax
    let v22: i64;  // rax
    let v23: i64;  // rax
    let v24: i64;  // rsi
    let v25: i64;  // rcx
    let v26: i64;  // rax
    let v27: i64;  // rdx
    let v28: i64;  // rcx
    let v29: i64;  // r8
    let v30: i64;  // r9
    let v31: i64;  // rbx
    let v32: i64;  // rdx
    let v35: i64;  // rcx

    v13 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v7);
    if v13 != 0x8000000000000000 {
        v9 = v15;
        v8 = v13;
    } else {
        v8 = std::sys::os_str::bytes::Slice::to_owned("test");
    }
    core::iter::traits::iterator::Iterator::collect(&v0, a0, a1);
    v13 = 0;
    if core::slice::<impl [T]>::ends_with(uucore::util_name(), v19, core::char::methods::encode_utf8_raw(&v13), v19) as i8 {
        v20 = v2;
        if v20 == 1 {
            v22 = v1;
            if !(!<std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(*((v22 + 8) as &i64), *((v22 + 16) as &i64)) as i8) || !((v23 = v1, !<std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(*((v23 + 8) as &i64), *((v23 + 16) as &i64)) as i8)) {
                v13 = uu_test::uu_app(v24, v19);
                v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
                v12 = core::iter::traits::iterator::Iterator::chain(&v8, &v10);
                v10 = clap_builder::builder::command::Command::get_matches_from(&v13, &v12, v28, v29, v30);
                return 0;
            }
            v21 = v2;
        }
        if !v21 {
            v10 = 0x8000000000000000;
            vvar_426{stack -800} = <T as alloc::slice::hack::ConvertVec>::to_vec();
            v13 = v12;
            alloc::boxed::Box<T>::new(&v13);
            return v31;
        }
        v2 = v21 - 1;
        v25 = v1;
        v26 = v2 * 3;
        v27 = *((v25 + v26 * 8 + 16) as &i64);
        v10 = *((v25 + v26 * 8) as &i128);
        v11 = v27;
        if !(v10 != 0x8000000000000000) || !(<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v10 as &char + 8) as &i64), v11, "]") as i8) {
            v12 = <T as alloc::slice::hack::ConvertVec>::to_vec();
            v13 = v12;
            v31 = alloc::boxed::Box<T>::new(&v13);
            return v31;
        }
    }
    v13 = v0;
    v12 = uu_test::parser::parse(&v13, v32);
    if v12 != 7 {
        v5 = *((&v12 as &char + 9) as &i128);
        v6 = *((&v12 as &char + 24) as &i64);
        v3 = v5;
        v4 = v6;
        v16 = v4;
        v13 = struct25 {
            field_0: v33
            field_8: v34
            field_9: v3
        };
        v31 = alloc::boxed::Box<T>::new(&v13);
        goto LABEL_46422b;
    } else {
        v10 = *((&v12 as &char + 8) as &i192);
        v13 = uu_test::uumain::uumain::{{closure}}(&v10);
        v35 = v13;
        v5 = *((&v13 as &char + 9) as &i128);
        v6 = *((&v13 as &char + 24) as &i64);
        v3 = v5;
        v4 = v6;
        if v35 == 7 {
            v31 = (!(v14 & 1) ? uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1) : 0);
        } else {
            v16 = v4;
            v13 = struct25 {
                field_0: v35
                field_8: v14
                field_9: v3
            };
            v31 = alloc::boxed::Box<T>::new(&v13);
LABEL_46422b:
        }
    }
    return v31;
}
