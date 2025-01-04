fn uu_ls::display_grid(a0: void*, a1: u32, a2: u32, a3: u32, a4: u8) -> u64 {
    let v0: i192;  // [sp-0x150], Other Possible Types: struct24, Option<struct24>
    let v1: i192;  // [bp-0x138], Other Possible Types: Argument
    let v2: i64;  // [sp-0x128]
    let v3: struct33;  // [bp-0x118], Other Possible Types: i128, Arguments
    let v4: i64;  // [bp-0x108]
    let v5: i64;  // [sp-0x100]
    let v6: i64;  // [bp-0xe8], Other Possible Types: struct24, struct40, struct128, Arguments
    let v7: i64;  // [sp-0xe0]
    let v8: i64;  // [sp-0xd8]
    let v9: i128;  // [bp-0xd0]
    let v10: Argument;  // [bp-0x60]
    let v11: i256;  // [sp-0x50], Other Possible Types: struct32
    let v13: i64;  // r14
    let v14: i128;  // xmm0
    let v15: i128;  // xmm0
    let v16: i256;  // ymm0
    let v17: i256;  // ymm0
    let v18: i64;  // rax
    let v19: i128;  // xmm0
    let v20: i64;  // rax
    let v21: i64;  // rsi
    let v22: i64;  // rdx
    let v23: i64;  // rax
    let v24: i64;  // rax
    let v25: i64;  // rax
    let v26: i64;  // rax
    let v27: i64;  // rax

    v13 = a1;
    if !v13 {
        v14 = *(a0 as &i128);
        v4 = *((a0 + 16) as &i128);
        v3 = v14;
        v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3);
        if v0 != 0x8000000000000000 {
            v2 = *((&v0 as &char + 16) as &i64);
            v15 = v0;
            v17 = v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v15;
            v1 = v15;
            loop {
                v10 = Argument {
                    value: &v1
                    formatter: <alloc::string::String as core::fmt::Display>::fmt
                };
                v6 = Arguments {
                    pieces: [""]
                    args: [&v10]
                    fmt: 0
                };
                v18 = std::io::Write::write_fmt(a3, &v6);
                if v18 {
                    v24 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v18);
                    return v24;
                }
                v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3);
                if v0 == 0x8000000000000000 {
                    break;
                }
                v2 = *((&v0 as &char + 16) as &i64);
                v19 = v0;
                v1 = v19;
                v6 = "  ";
                v7 = 1;
                v8 = 8;
                v17 = v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                v9 = 0;
                v20 = std::io::Write::write_fmt(a3, &v6);
                if v20 {
                    v24 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
                    return v24;
                }
            }
            v6 = struct40 {
                field_0: "\n"
                field_8: 1
                field_16: 8
                field_24: 0
                field_32: 0
            };
            v25 = std::io::Write::write_fmt(a3, &v6);
            if !v25 {
                return 0;
            }
            v24 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25);
            return v24;
        }
    } else {
        if !a4 {
            v0 = core::iter::traits::iterator::Iterator::collect(a0, a2);
        } else {
            v11 = core::iter::traits::iterator::Iterator::map(a0);
            v0 = alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(&v11);
        }
        v6 = *((&v0 as &char + 8) as &i128);
        v23 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v6, v21, v22);
        if v23 {
            v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(&g_436242, 1);
            v26 = v8;
        }
        v1 = v0;
        v3 = struct33 {
            field_0: 0x28000000000000000
            field_16: <UNKNOWN>
            field_24: <UNKNOWN>
            field_32: a2 as i8
        };
        v4 = v26;
        v5 = v13 & 4294967295;
        v6 = term_grid::Grid<T>::new(&v1, &v3, v13 & 4294967295);
        v1 = Argument {
            value: &v6
            formatter: <term_grid::Grid<T> as core::fmt::Display>::fmt
        };
        v3 = Arguments {
            pieces: [""]
            args: [&v1]
            fmt: 0
        };
        v27 = std::io::Write::write_fmt(a3, &v3);
        if v27 {
            v24 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v27);
            return v24;
        }
    }
    return 0;
}
