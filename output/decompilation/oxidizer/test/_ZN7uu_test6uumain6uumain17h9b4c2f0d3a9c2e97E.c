fn uu_test::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x3e0], Other Possible Types: u8
    let v1: i64;  // [bp-0x3d8]
    let v2: u64;  // [bp-0x3d0]
    let v3: u128;  // [bp-0x3c8]
    let v4: u64;  // [bp-0x3b9]
    let v5: u128;  // [bp-0x3a8]
    let v6: u64;  // [bp-0x399]
    let v7: u64;  // [bp-0x388]
    let v8: std::sys::os_str::bytes::Buf;  // [bp-0x378]
    let v9: u128;  // [bp-0x378]
    let v10: struct24;  // [bp-0x358], Other Possible Types: struct32, struct56, u128
    let v11: void*;  // [bp-0x350]
    let v12: core::fmt::rt::Argument;  // [bp-0x348]
    let v13: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0x320], Other Possible Types: struct24
    let v14: struct32;  // [bp-0x320]
    let v15: struct24;  // [bp-0x318], Other Possible Types: u8
    let v16: u64;  // [bp-0x310]
    let v17: struct24;  // [bp-0x2e8], Other Possible Types: struct28, struct25, u64
    let v18: alloc::raw_vec::Cap;  // [bp-0x2e8]
    let v19: struct33;  // [bp-0x2e8]
    let v20: u8;  // [bp-0x2e0]
    let v21: u64;  // [bp-0x2d0]
    let v23: u64;  // rax
    let v24: u64;  // rdx
    let v26: core::fmt::Arguments;  // rax
    let v27: core::fmt::rt::Argument;  // rdx
    let v28: u64;  // rax
    let v29: u64;  // rbx
    let v30: &str;  // rax:rdx

    v7 = a0;
    v18 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v7);
    if v18 == 0x8000000000000000 {
        v8 = std::sys::os_str::bytes::Slice::to_owned("test");
    }
    v23 = uucore::util_name();
    core::iter::traits::iterator::Iterator::collect(&v0, v7, a1);
    v17 = 0;
    v17 = v18 & -0x100000000;
    v30 = core::char::methods::encode_utf8_raw(&v17 as u32, a1, v24);
    if core::slice::<impl [T]>::ends_with(v23, v24, v30.data_ptr, v30.length) {
        if v2 == 1 && (<std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(*((v1 + 8) as &i64), *((v1 + 16) as &i64)) as i8 || <std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(*((v1 + 8) as &i64), *((v1 + 16) as &i64)) as i8) {
            uu_test::uu_app(&v17);
            v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
            v13 = core::iter::traits::iterator::Iterator::chain(&v9, &v10);
            v10 = clap_builder::builder::command::Command::get_matches_from(&v17, &v13);
            return 0;
        }
        if v2 {
            v2 -= 1;
            v26 = v2 * 3;
            v27 = *((v1 + v26 * 8 + 16) as &i64);
            v10 = *((v1 + v26 * 8) as &i128);
            v12 = v27;
            if !(v10 == 0x8000000000000000 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v12, "]") as i8) {
                goto LABEL_4640ab;
            }
        }
        v13 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v17 = struct28 {
            field_0: v13.field_0
            field_16: v16
            field_24: 2
        };
        v29 = alloc::boxed::Box<T>::new(&v17);
    } else {
LABEL_4640ab:
        v17 = v0;
        v14 = uu_test::parser::parse(&v17);
        if v14.field_0 == 7 {
            v10 = v15;
            v19 = uu_test::uumain::uumain::{{closure}}(&v10);
            v5 = *(&(&v19.field_8)[1] as &i128);
            v6 = v21;
            v3 = v5;
            v4 = v6;
            if v19.field_0 == 7 {
                v29 = (!(v20 & 1) ? uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1) : 0);
            } else {
                v17 = struct25 {
                    field_0: v19.field_0
                    field_8: <UNKNOWN>
                    field_9: v3
                };
                v28 = alloc::boxed::Box<T>::new(&v17);
LABEL_46422b:
                v29 = v28;
            }
        } else {
            v5 = *((&v14.field_8 as &char + 1) as &i128);
            v6 = v14.field_24;
            v3 = v5;
            v4 = v6;
            v17 = struct25 {
                field_0: v14.field_0
                field_8: v15
                field_9: v3
            };
            v28 = alloc::boxed::Box<T>::new(&v17);
            goto LABEL_46422b;
        }
    }
    return v29;
}
