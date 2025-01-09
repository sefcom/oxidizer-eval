fn uu_ls::display_grid(a0: void*, a1: u32, a2: u8, a3: u32, a4: u8) -> u64 {
    let v0: Option<struct24>;  // [sp-0x150], Other Possible Types: i192, struct24
    let v1: i128;  // [bp-0x138], Other Possible Types: struct24, Argument
    let v2: i64;  // [sp-0x128]
    let v3: struct33;  // [bp-0x118], Other Possible Types: i128, Arguments
    let v4: i128;  // [bp-0x108]
    let v5: Arguments;  // [bp-0xe8], Other Possible Types: struct40, struct16, struct24, struct128
    let v6: Argument;  // [bp-0x60]
    let v7: struct32;  // [sp-0x50], Other Possible Types: i256
    let v9: i128;  // xmm0
    let v10: i128;  // xmm0
    let v11: i256;  // ymm0
    let v12: i256;  // ymm0
    let v13: i64;  // rax
    let v14: i128;  // xmm0
    let v15: i64;  // rax
    let v16: i64;  // rax
    let v17: i64;  // rax
    let v20: i64;  // rax

    if !a1 {
        v9 = *(a0 as &i128);
        v4 = *((a0 + 16) as &i128);
        v3 = v9;
        v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3);
        if v0 != 0x8000000000000000 {
            v2 = *((&v0 as &char + 16) as &i64);
            v10 = v0;
            v12 = v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v10;
            v1 = v10;
            loop {
                v6 = Argument {
                    value: &v1
                    formatter: <alloc::string::String as core::fmt::Display>::fmt
                };
                v5 = Arguments {
                    pieces: [""]
                    args: [&v6]
                    fmt: 0
                };
                v13 = std::io::Write::write_fmt(a3, &v5);
                if v13 {
                    v16 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
                    return v16;
                }
                v0 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3);
                if v0 == 0x8000000000000000 {
                    break;
                }
                v2 = *((&v0 as &char + 16) as &i64);
                v14 = v0;
                v1 = v14;
                v5 = Arguments {
                    pieces: ["  "]
                    args: []
                    fmt: 0
                };
                v12 = v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                v15 = std::io::Write::write_fmt(a3, &v5);
                if v15 {
                    v16 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
                    return v16;
                }
            }
            v5 = struct40 {
                field_0: "\n"
                field_8: 1
                field_16: 8
                field_24: 0
                field_32: 0
            };
            v17 = std::io::Write::write_fmt(a3, &v5);
            if !v17 {
                return 0;
            }
            v16 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
            return v16;
        }
    } else {
        if !a4 {
            v0 = core::iter::traits::iterator::Iterator::collect();
        } else {
            v7 = core::iter::traits::iterator::Iterator::map(a0);
            v0 = alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(&v7);
        }
        v5 = struct16 {
            field_0: *((&v0 as &char + 8) as &i64)
            field_8: v5 + *((&v0 as &char + 16) as &i64) * 24
        };
        if <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v5) {
            v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(&g_436242, 1);
        }
        v1 = struct24 {
            field_0: v0
            field_16: *((&v0 as &char + 16) as &i64)
        };
        v3 = struct33 {
            field_0: 0x28000000000000000
            field_16: v18
            field_24: v19 & 4294967295
            field_32: a2
        };
        v5 = term_grid::Grid<T>::new(&v1, &v3);
        v1 = Argument {
            value: &v5
            formatter: <term_grid::Grid<T> as core::fmt::Display>::fmt
        };
        v3 = Arguments {
            pieces: [""]
            args: [&v1]
            fmt: 0
        };
        v20 = std::io::Write::write_fmt(a3, &v3);
        if v20 {
            v16 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
            return v16;
        }
    }
    return 0;
}
