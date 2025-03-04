fn uu_test::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i8;  // [bp-0x3e0]
    let v1: i8;  // [bp-0x3d8]
    let v2: i64;  // [sp-0x3d0]
    let v3: iNone;  // [bp-0x3c8]
    let v4: i64;  // [sp-0x3b9]
    let v5: iNone;  // [bp-0x3a8]
    let v6: i64;  // [sp-0x399]
    let v7: i8;  // [bp-0x388]
    let v8: iNone;  // [sp-0x378], Other Possible Types: struct24, unsigned long
    let v9: iNone;  // [sp-0x358], Other Possible Types: unsigned long, struct32
    let v10: i64;  // [sp-0x348]
    let v11: struct24;  // [sp-0x320], Other Possible Types: char
    let v13: i8;  // [bp-0x317]
    let v14: i64;  // [bp-0x308]
    let v15: struct25;  // [sp-0x2e8], Other Possible Types: Option<Result<struct33, struct1>>, struct712, struct24, int, unsigned int, struct8
    let v16: i8;  // [sp-0x2e0]
    let v17: i64;  // [sp-0x2d8]
    let v18: i64;  // [bp-0x2d0], Other Possible Types: unsigned int
    let v21: i64;  // rdx
    let v22: i64;  // rax
    let v23: i64;  // rax
    let v24: i64;  // rax
    let v25: i64;  // rcx
    let v26: i64;  // rax
    let v27: i64;  // rdx
    let v28: i64;  // rbx
    let v31: i64;  // rax
    let v32: i64;  // rcx

    v15 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v7);
    if v15.field_0 != 0x8000000000000000 {
        v8 = v17;
        v8 = *(&v15 as &i128);
    } else {
        v8 = std::sys::os_str::bytes::Slice::to_owned("test");
    }
    core::iter::traits::iterator::Iterator::collect(&v0, a0, a1);
    *(&v15 as &i32) = 0;
    if core::slice::<impl [T]>::ends_with(uucore::util_name(), v21, core::char::methods::encode_utf8_raw(&v15), v21) as i8 {
        v22 = v2;
        if v22 == 1 {
            v23 = *(&v1 as &i64);
            if !(!<std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(*((v23 + 8) as &i64), *((v23 + 16) as &i64)) as i8) || !((v24 = *(&v1 as &i64), !<std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(*((v24 + 8) as &i64), *((v24 + 16) as &i64)) as i8)) {
                v15 = uu_test::uu_app();
                v9 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
                v11 = core::iter::traits::iterator::Iterator::chain(&v8, &v9);
                clap_builder::builder::command::Command::get_matches_from(&v9, &v15, &v11);
                return 0;
            }
            v22 = v2;
        }
        if !v22 {
            *(&v9 as &i64) = 0x8000000000000000;
            vvar_412{stack -800} = <T as alloc::slice::hack::ConvertVec>::to_vec();
            vvar_414{stack -744} = v11;
            *(&v18 as &i32) = 2;
            return v28;
        }
        v2 = v22 - 1;
        v25 = *(&v1 as &i64);
        v26 = v2 * 3;
        v27 = *((v25 + v26 * 8 + 16) as &i64);
        *(&v9 as &i128) = *((v25 + v26 * 8) as &i128);
        v10 = v27;
        if !(v9 as i64 != 0x8000000000000000) || !(<[A] as core::slice::cmp::SlicePartialEq<B>>::equal((&v9)[8] as i64, v10, "]") as i8) {
            v11 = <T as alloc::slice::hack::ConvertVec>::to_vec();
            v15 = v11;
            *(&v18 as &i32) = 2;
            return v28;
        }
    }
    v15 = *(&v0 as &i192);
    uu_test::parser::parse(&v11, &v15);
    if v11.field_0 != 7 {
        *(&v5 as &i128) = *(&v13 as &i128);
        v6 = v14;
        *(&v3 as &i128) = v5 as i128;
        v4 = v6;
        v18 = v4;
        v15 = struct25 {
            field_0: v29
            field_8: v30
            field_9: v3 as i128
        };
        v31 = alloc::boxed::Box<T>::new(&v15);
    } else {
        v15 = uu_test::uumain::uumain::{{closure}}(&v9);
        v32 = v15 as i64;
        *(&v5 as &i128) = *((&v15 as &char + 9) as &i128);
        v6 = *((&v15 as &char + 24) as &i64);
        *(&v3 as &i128) = v5 as i128;
        v4 = v6;
        if v32 == 7 {
            v28 = (!(v16 & 1) ? uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1) : 0);
            return v28;
        }
        v18 = v4;
        v15 = struct25 {
            field_0: v32
            field_8: v16
            field_9: v3 as i128
        };
        v31 = alloc::boxed::Box<T>::new(&v15);
    }
    v28 = v31;
    return v28;
}
