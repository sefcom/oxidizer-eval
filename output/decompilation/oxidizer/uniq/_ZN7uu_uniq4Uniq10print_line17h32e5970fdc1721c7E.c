fn uu_uniq::Uniq::print_line(a0: &u64, a1: u64, a2: u64, a3: u32, a4: u64, a5: u32) -> u64 {
    let v0: i8;  // [bp-0xe8], Other Possible Types: struct24
    let v1: i64;  // [sp-0xd8]
    let v2: i64;  // [sp-0xd0]
    let v3: i64;  // [sp-0xc8]
    let v4: i64;  // [sp-0xc0]
    let v5: i8;  // [sp-0xb8]
    let v6: i64;  // [sp-0xb0]
    let v7: i8;  // [bp-0xa0]
    let v8: i8;  // [bp-0x98]
    let v9: i64;  // [sp-0x90]
    let v10: i64;  // [sp-0x88]
    let v11: i64;  // [sp-0x80]
    let v12: i64;  // [sp-0x78]
    let v13: i64;  // [sp-0x70]
    let v14: i64;  // [sp-0x68]
    let v15: i64;  // [sp-0x60]
    let v16: i64;  // [sp-0x58]
    let v17: struct32;  // [sp-0x50], Other Possible Types: i256
    let v18: i64;  // [bp+0x8]
    let v19: i8;  // bpl
    let v20: i64;  // rax
    let v21: i64;  // rax

    v6 = a5;
    v19 = (*((a0 + 53) as &i8) ? 10 : 0);
    if a5 == 1 {
        v20 = *((a0 + 54) as &i8);
        if v20 != 4 && (v18 || (v20 | 2) == 3) {
            v0 = v19;
            v21 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a1, a2, &v0, 1));
            if v21 {
                return v21;
            }
        }
    }
    if !*((a0 + 51) as &i8) {
        v21 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a1, a2, a3, a4));
        if v21 {
            return v21;
        }
    } else {
        v9 = &v6;
        v10 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v0 = 2;
        v1 = 0;
        v2 = 7;
        v3 = 0;
        v4 = 32;
        v5 = 3;
        v11 = &g_52d918;
        v12 = 2;
        v15 = &v0;
        v16 = 1;
        v13 = &v9;
        v14 = 1;
        core::option::Option<T>::map_or_else();
        v17 = core::iter::traits::iterator::Iterator::chain(v7, v8 + v7, a3, a4 + a3);
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v17);
        v21 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a1, a2, *((&v0 as &char + 8) as &i64), v1));
        if v21 {
            return v21;
        }
    }
    v0 = v19;
    v21 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a1, a2, &v0, 1));
    return v21;
}
