fn uu_ls::display_grid(a0: &u64, a1: u32, a2: u32, a3: u32, a4: u8) -> u64 {
    let v0: i192;  // [sp-0x150], Other Possible Types: Option<struct24>, struct24
    let v1: i128;  // [bp-0x138], Other Possible Types: struct24
    let v2: i64;  // [sp-0x130]
    let v3: i64;  // [sp-0x128]
    let v4: i64;  // [bp-0x118], Other Possible Types: struct33
    let v5: i64;  // [sp-0x110]
    let v6: i128;  // [bp-0x108]
    let v7: i64;  // [sp-0x100]
    let v8: i64;  // [bp-0xf8]
    let v9: i64;  // [bp-0xe8], Other Possible Types: struct72, struct128, struct16, struct24
    let v10: i64;  // [sp-0xe0]
    let v11: i64;  // [sp-0xd8]
    let v12: i128;  // [bp-0xd0]
    let v13: i64;  // [sp-0x60]
    let v14: i64;  // [sp-0x58]
    let v15: i256;  // [sp-0x50], Other Possible Types: struct32
    let v17: i64;  // r14
    let v18: i128;  // xmm0
    let v19: i128;  // xmm0
    let v20: i256;  // ymm0
    let v21: i256;  // ymm0
    let v22: i64;  // rax
    let v23: i128;  // xmm0
    let v24: i64;  // rax
    let v25: i64;  // rsi
    let v26: i64;  // rax
    let v27: i64;  // rdx
    let v28: i64;  // rax
    let v30: i64;  // rax

    v17 = a1;
    if !v17 {
        v18 = *(a0 as &i128);
        v6 = *((a0 + 16) as &i128);
        v4 = v18;
        v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v4);
        if v0 != 0x8000000000000000 {
            v3 = *((&v0 as &char + 16) as &i64);
            v19 = v0;
            v21 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19;
            v1 = v19;
            loop {
                v13 = &v1;
                v14 = <alloc::string::String as core::fmt::Display>::fmt;
                v9 = struct72 {
                    field_0: &g_423d10
                    field_8: <UNKNOWN>
                    field_16: <UNKNOWN>
                    field_24: <UNKNOWN>
                    field_32: <UNKNOWN>
                };
                v22 = std::io::Write::write_fmt(a3, &v9);
                if v22 {
                    v26 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v22);
                    return v26;
                }
                v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v4);
                if v0 == 0x8000000000000000 {
                    break;
                }
                v3 = *((&v0 as &char + 16) as &i64);
                v23 = v0;
                v1 = v23;
                v9 = "  ";
                v10 = 1;
                v11 = 8;
                v21 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                v12 = 0;
                v24 = std::io::Write::write_fmt(a3, &v9);
                if v24 {
                    v26 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
                    return v26;
                }
            }
            v9 = struct72 {
                field_0: "\n"
                field_8: <UNKNOWN>
                field_16: <UNKNOWN>
                field_24: <UNKNOWN>
                field_32: <UNKNOWN>
            };
            v28 = std::io::Write::write_fmt(a3, &v9);
            if !v28 {
                return 0;
            }
            v26 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v28);
            return v26;
        }
    } else {
        if !a4 {
            v0 = core::iter::traits::iterator::Iterator::collect(a0, a2);
        } else {
            v15 = core::iter::traits::iterator::Iterator::map(a0);
            v0 = alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(&v15);
        }
        v9 = struct16 {
            field_0: *((&v0 as &char + 8) as &i64)
            field_8: v9 + *((&v0 as &char + 16) as &i64) * 24
        };
        if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v9, v25, v27) as i8 {
            v9 = <T as alloc::slice::hack::ConvertVec>::to_vec(&g_436342, 1);
        }
        *(&v1.field_0 as &struct24) = struct24 {
            field_0: v0
            field_16: *((&v0 as &char + 16) as &i64)
        };
        v4 = struct33 {
            field_0: 0x28000000000000000
            field_16: v29
            field_24: v17 & 4294967295
            field_32: a2 as i8
        };
        v9 = term_grid::Grid<T>::new(&v1, &v4, v17 & 4294967295);
        v1 = &v9;
        v2 = <term_grid::Grid<T> as core::fmt::Display>::fmt;
        v4 = &g_423d10;
        v5 = 1;
        v8 = 0;
        v6 = &v1;
        v7 = 1;
        v30 = std::io::Write::write_fmt(a3, &v4);
        if v30 {
            v26 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v30);
            return v26;
        }
    }
    return 0;
}
