fn uu_uniq::Uniq::print_line(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i8;  // [bp-0xe8], Other Possible Types: struct24
    let v1: i64;  // [sp-0xd8]
    let v2: i64;  // [sp-0xd0]
    let v3: i64;  // [sp-0xc8]
    let v4: i64;  // [sp-0xc0]
    let v5: i8;  // [sp-0xb8]
    let v6: i64;  // [sp-0xb0]
    let v7: struct24;  // [sp-0xa8], Other Possible Types: i192
    let v8: i64;  // [sp-0x90]
    let v9: i64;  // [sp-0x88]
    let v10: struct48;  // [bp-0x80]
    let v11: i256;  // [sp-0x50], Other Possible Types: struct32
    let v12: i64;  // [bp+0x8]
    let v13: i8;  // bpl
    let v14: i64;  // rax
    let v15: i64;  // rax

    v6 = a5;
    v13 = (*((a0 + 53) as &i8) ? 10 : 0);
    if a5 == 1 {
        v14 = *((a0 + 54) as &i8);
        if v14 != 4 && (v12 || (v14 | 2) == 3) {
            v0 = v13;
            v15 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a1, a2, &v0, 1));
            if v15 {
                return v15;
            }
        }
    }
    if !*((a0 + 51) as &i8) {
        v15 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a1, a2, a3, a4));
        if v15 {
            return v15;
        }
    } else {
        v8 = &v6;
        v9 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v0 = 2;
        v1 = 0;
        v2 = 7;
        v3 = 0;
        v4 = 32;
        v5 = 3;
        v10 = struct48 {
            field_0: &g_52e4e8
            field_8: 2
            field_16: &v8
            field_24: 1
            field_32: &v0
            field_40: 1
        };
        v7 = core::option::Option<T>::map_or_else(&v10);
        v11 = core::iter::traits::iterator::Iterator::chain(*((&v7 as &char + 8) as &i64), *((&v7 as &char + 16) as &i64) + *((&v7 as &char + 8) as &i64), a3, a4 + a3);
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v11);
        v15 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a1, a2, *((&v0 as &char + 8) as &i64), v0.field_16));
        if v15 {
            return v15;
        }
    }
    v0 = v13;
    v15 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a1, a2, &v0, 1));
    return v15;
}
