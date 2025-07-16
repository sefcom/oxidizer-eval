fn uu_test::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: i8;  // [bp-0x3e0]
    let v1: i64;  // [bp-0x3d8]
    let v2: i64;  // [bp-0x3d0]
    let v3: iNone;  // [bp-0x3c8]
    let v4: i64;  // [bp-0x3b9]
    let v5: i8;  // [bp-0x3a8], Other Possible Types: int
    let v6: i64;  // [bp-0x399]
    let v7: i64;  // [bp-0x388]
    let v8: iNone;  // [bp-0x378]
    let v9: i64;  // [bp-0x368]
    let v10: iNone;  // [bp-0x358], Other Possible Types: unsigned long
    let v11: i64;  // [bp-0x350]
    let v12: i64;  // [bp-0x348]
    let v13: iNone;  // [bp-0x320]
    let v14: iNone;  // [bp-0x320]
    let v15: i8;  // [bp-0x318]
    let v16: i64;  // [bp-0x310]
    let v17: iNone;  // [bp-0x2e8], Other Possible Types: unsigned long
    let v18: iNone;  // [bp-0x2e8]
    let v19: i32;  // [bp-0x2e8]
    let v20: i8;  // [bp-0x2e0]
    let v21: i64;  // [bp-0x2d8]
    let v22: i64;  // [bp-0x2d0]
    let v24: i64;  // rax
    let v25: i64;  // rdx
    let v27: i64;  // rax
    let v28: i64;  // rdx
    let v29: i64;  // rax
    let v30: i64;  // rbx
    let v31: iNone;  // rax:rdx

    v7 = a0;
    v17 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v7);
    if v17 == 0x8000000000000000 {
        v8 = std::sys::os_str::bytes::Slice::to_owned("test");
    } else {
        v9 = v21;
        memcpy(&v8, &v17, 16);
    }
    v24 = uucore::util_name();
    core::iter::traits::iterator::Iterator::collect(&v0, v7, a1);
    v19 = 0;
    v17 &= -0x100000000;
    v31 = core::char::methods::encode_utf8_raw(&v17 as u32, a1, v25);
    if core::slice::<impl [T]>::ends_with(v24, v25, v31 as i64, (&v31)[8] as i64) {
        if v2 == 1 && (<std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(*((v1 + 8) as &i64), *((v1 + 16) as &i64)) as i8 || <std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(*((v1 + 8) as &i64), *((v1 + 16) as &i64)) as i8) {
            uu_test::uu_app(&v17);
            v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
            v13 = core::iter::traits::iterator::Iterator::chain(&v8, &v10);
            v10 = clap_builder::builder::command::Command::get_matches_from(&v17, &v13);
            return 0;
        }
        if v2 {
            v2 -= 1;
            v27 = v2 * 3;
            v28 = *((v1 + v27 * 8 + 16) as &i64);
            *(&v10 as &i128) = *((v1 + v27 * 8) as &i128);
            v12 = v28;
            if !(v10 == 0x8000000000000000 || !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v12, "]") as i8) {
                goto LABEL_4640ab;
            }
        }
        v13 = <T as alloc::slice::hack::ConvertVec>::to_vec();
        v17 = struct28 {
            field_0: v13 as i128
            field_16: v16
            field_24: 2
        };
        v30 = alloc::boxed::Box<T>::new(&v17);
    } else {
LABEL_4640ab:
        v21 = v2;
        memcpy(&v17, &v0, 16);
        v14 = uu_test::parser::parse(&v17);
        if v14 as i64 == 7 {
            v12 = (&v14)[24] as i64;
            memcpy(&v10, &v14 as u8, 16);
            v18 = uu_test::uumain::uumain::{{closure}}(&v10);
            *(&v5 as &i128) = (&v18)[9] as i128;
            v6 = v22;
            *(&v3 as &i128) = v5 as i128;
            v4 = v6;
            if v18 as i64 == 7 {
                v30 = (!(v20 & 1) ? uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1) : 0);
            } else {
                v17 = struct25 {
                    field_0: v18 as i64
                    field_8: <UNKNOWN>
                    field_9: v3 as i128
                };
                v29 = alloc::boxed::Box<T>::new(&v17);
LABEL_46422b:
                v30 = v29;
            }
        } else {
            memcpy(&v5, &v14 as u8, 16);
            v6 = (&v14)[24] as i64;
            *(&v3 as &i128) = *(&v5 as &i128);
            v4 = v6;
            v17 = struct25 {
                field_0: v14 as i64
                field_8: v15
                field_9: v3 as i128
            };
            v29 = alloc::boxed::Box<T>::new(&v17);
            goto LABEL_46422b;
        }
    }
    return v30;
}
