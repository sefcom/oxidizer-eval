fn uu_ls::display_grid(a0: &struct32, a1: i32, a2: i8, a3: i64, a4: i8, a5: i64) -> u64 {
    let v0: i64;  // [bp-0x130], Other Possible Types: Option<struct24>
    let v1: u64;  // [bp-0x128]
    let v2: u64;  // [bp-0x120]
    let v3: struct24;  // [bp-0x118], Other Possible Types: struct33, struct40
    let v4: u128;  // [bp-0x108]
    let v5: u64;  // [bp-0xe0]
    let v6: struct24;  // [bp-0xe0]
    let v7: struct128;  // [bp-0xc8], Other Possible Types: struct32, struct40
    let v8: u8;  // [bp-0x48]
    let v10: u64;  // r15
    let v12: u64;  // rax
    let v13: struct16;  // rax
    let v15: struct24;  // xmm0
    let v16: u64;  // rax
    let v17: u64;  // rbp
    let v18: u64;  // rax
    let v19: Result<struct40, struct16>;  // rax
    let v20: u64;  // rax

    v10 = a1;
    if v10 {
        if a4 {
            v7 = core::iter::traits::iterator::Iterator::map(a0);
            core::iter::traits::iterator::Iterator::collect(&v5, &v7);
        } else {
            v6 = core::iter::traits::iterator::Iterator::collect(a0);
        }
        v7 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v6);
        core::iter::traits::iterator::Iterator::collect(&v8, &v7);
        v3 = struct33 {
            field_0: v12
            field_8: 2
            field_16: a5
            field_24: v10 & 4294967295
            field_32: a2
        };
        v7 = term_grid::Grid<T>::new(&v8, &v3);
        v0 = &v7;
        v1 = <term_grid::Grid<T> as core::fmt::Display>::fmt;
        v3 = struct40 {
            field_0: "\x01"
            field_16: &v0
            field_24: 1
        };
        v13 = std::io::Write::write_fmt(a3, &v3);
        if v13 {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
        }
    } else {
        v15 = *(a0 as &i128);
        v4 = *((a0 + 16) as &i128);
        v3 = v15;
        v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3 as u8);
        if let Some(_) = v0 {
            uu_ls::write_os_str(a3, v1, v2);
            if !v16 {
                v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3 as u8);
                if let None = v0 {
                    v7 = struct40 {
                        field_0: "\n"
                        field_8: 1
                        field_16: 8
                        field_24: 0
                    };
                    v20 = std::io::Write::write_fmt(a3, &v7);
                    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
                }
                loop {
                    v7 = struct40 {
                        field_0: "  "
                        field_8: 1
                        field_16: 8
                        field_24: 0
                    };
                    v18 = std::io::Write::write_fmt(a3, &v7);
                    if v18 {
                        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v18);
                    }
                    uu_ls::write_os_str(a3, v1, v2);
                    if v16 {
                        break;
                    }
                    v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3 as u8);
                    if v0 as i64 == v17 {
                        v7 = struct40 {
                            field_0: "\n"
                            field_8: 1
                            field_16: 8
                            field_24: 0
                        };
                        v20 = std::io::Write::write_fmt(a3, &v7);
                        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
                    }
                }
                goto LABEL_0x59d150;
            }
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
            return v19;
        }
    }
    return 0;
}
