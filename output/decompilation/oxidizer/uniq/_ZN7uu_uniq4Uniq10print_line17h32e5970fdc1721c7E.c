fn uu_uniq::Uniq::print_line(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i8) -> long long {
    let v0: i64;  // [bp-0xe8], Other Possible Types: char, int
    let v1: i8;  // [bp-0xe8]
    let v2: i64;  // [bp-0xe8]
    let v3: i64;  // [bp-0xe0]
    let v4: i64;  // [bp-0xd8]
    let v5: i64;  // [bp-0xd0]
    let v6: i64;  // [bp-0xc8]
    let v7: i64;  // [bp-0xc0]
    let v8: i8;  // [bp-0xb8]
    let v9: i64;  // [bp-0xb0]
    let v10: iNone;  // [bp-0xa8]
    let v11: i64;  // [bp-0xa0]
    let v12: i64;  // [bp-0x98]
    let v13: iNone;  // [bp-0x50]
    let v14: i64;  // 4096
    let v15: i64;  // rax
    let v16: i64;  // rax
    let v17: i64;  // rax
    let v19: i64;  // rax

    v9 = a5;
    v14 = a0;
    if a5 == 1 {
        v15 = *((a0 + 54) as &i8);
        v14 = a0;
        if v15 as u8 != 4 && (a6 || (v14 = a0, (v15 as u32 & 255 | 2) == 3)) {
            v2 = v0 & -0x100 | v0;
            v16 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a1, a2, &v2, 1) as u64);
            if v16 {
                return v16;
            }
            v14 = a0;
        }
    }
    if *((v14 + 51) as &i8) {
        v0 = 2;
        v4 = 0;
        v5 = 7;
        v6 = 0;
        v7 = 32;
        v8 = 3;
        v10 = format!("{} ", &v9);
        v13 = core::iter::traits::iterator::Iterator::chain(v11, v12 + v11);
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v13);
        v19 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a1, a2, v3, 0) as u64);
        if v19 {
            return v19;
        }
    } else {
        v17 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a1, a2, a3, a4) as u64);
        if v17 {
            return v17;
        }
    }
    v1 = (*((a0 + 53) as &i8) ? 0 : 10);
    v0 = v0 as i64 & -0x100 | v0 as i8;
    return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a1, a2, &v0, 1) as u64);
}
