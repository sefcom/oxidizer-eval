fn uu_test::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [bp-0x3e0]
    let v1: i8;  // [bp-0x3d8]
    let v2: i64;  // [sp-0x3d0]
    let v3: i128;  // [bp-0x3c8]
    let v4: i64;  // [sp-0x3b9]
    let v5: i128;  // [bp-0x3a8]
    let v6: i64;  // [sp-0x399]
    let v7: i8;  // [bp-0x388]
    let v8: i128;  // [sp-0x378], Other Possible Types: struct24
    let v9: i64;  // [sp-0x368]
    let v10: i64;  // [sp-0x358], Other Possible Types: struct32
    let v11: i64;  // [sp-0x348]
    let v12: i192;  // [sp-0x320], Other Possible Types: struct24
    let v14: i8;  // [bp-0x317]
    let v15: i64;  // [bp-0x308]
    let v16: i224;  // [sp-0x2e8], Other Possible Types: struct25, Option<Result<struct33, struct1>>, struct8, struct712
    let v17: i8;  // [sp-0x2e0]
    let v18: i64;  // [sp-0x2d8]
    let v19: i64;  // [bp-0x2d0]
    let v22: i64;  // rdx
    let v23: i64;  // rax
    let v24: i64;  // rax
    let v25: i64;  // rax
    let v26: i64;  // rax
    let v27: i64;  // rcx
    let v28: i64;  // rax
    let v29: i64;  // rdx
    let v30: i64;  // rbx
    let v34: i64;  // rcx
    let v35: i64;  // rax

    v16 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v7);
    if v16 != 0x8000000000000000 {
        v9 = v18;
        v8 = v16;
    } else {
        v8 = std::sys::os_str::bytes::Slice::to_owned("test");
    }
    core::iter::traits::iterator::Iterator::collect(&v0, a0, a1);
    v16 = 0;
    if core::slice::<impl [T]>::ends_with(uucore::util_name(), v22, core::char::methods::encode_utf8_raw(&v16), v22) as i8 {
        v23 = v2;
        if v23 == 1 {
            v25 = v1;
            if !(!<std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(*((v25 + 8) as &i64), *((v25 + 16) as &i64)) as i8) || !((v26 = v1, !<std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(*((v26 + 8) as &i64), *((v26 + 16) as &i64)) as i8)) {
                v16 = uu_test::uu_app();
                v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
                v12 = core::iter::traits::iterator::Iterator::chain(&v8, &v10);
                clap_builder::builder::command::Command::get_matches_from(&v10, &v16, &v12);
                return 0;
            }
            v24 = v2;
        }
        if !v24 {
            v10 = 0x8000000000000000;
            vvar_416{stack -800} = <T as alloc::slice::hack::ConvertVec>::to_vec();
            vvar_418{stack -744} = v12;
            alloc::boxed::Box<T>::new(&v16);
            return v30;
        }
        v2 = v24 - 1;
        v27 = v1;
        v28 = v2 * 3;
        v29 = *((v27 + v28 * 8 + 16) as &i64);
        v10 = *((v27 + v28 * 8) as &i128);
        v11 = v29;
        if !(v10 != 0x8000000000000000) || !(<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v10 as &char + 8) as &i64), v11, "]") as i8) {
            v12 = <T as alloc::slice::hack::ConvertVec>::to_vec();
            v16 = v12;
            alloc::boxed::Box<T>::new(&v16);
            return v30;
        }
    }
    v16 = v0;
    uu_test::parser::parse(&v12, &v16);
    if v12 != 7 {
        v5 = v14;
        v6 = v15;
        v3 = v5;
        v4 = v6;
        v19 = v4;
        v16 = struct25 {
            field_0: v31
            field_8: v32
            field_9: v3
        };
        alloc::boxed::Box<T>::new(&v16);
    } else {
        v16 = uu_test::uumain::uumain::{{closure}}(&v10);
        v34 = v16;
        v5 = *((&v16 as &char + 9) as &i128);
        v6 = *((&v16 as &char + 24) as &i64);
        v3 = v5;
        v4 = v6;
        if v34 == 7 {
            v35 = (!(v17 & 1) ? uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from() : 0);
            return v30;
        }
        v19 = v4;
        v16 = struct25 {
            field_0: v34
            field_8: v17
            field_9: v3
        };
        alloc::boxed::Box<T>::new(&v16);
    }
    return v30;
}
