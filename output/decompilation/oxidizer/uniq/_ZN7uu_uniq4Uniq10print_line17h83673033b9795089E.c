fn uu_uniq::Uniq::print_line(a0: i64, a1: u64, a2: void*, a3: u64, a4: u64, a5: u64, a6: u8) -> long long {
    let v0: u64;  // [bp-0xa0]
    let v1: struct24;  // [bp-0x98]
    let v2: u64;  // [bp-0x90]
    let v3: u32;  // [bp-0x88]
    let v4: u64;  // [bp-0x78]
    let v6: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0x70], Other Possible Types: struct64, u8
    let v7: i8;  // [bp-0x40]
    let v8: u8;  // bl
    let v9: u32;  // eax
    let v10: u64;  // rax
    let v12: u64;  // rax

    v4 = a5;
    v8 = (*((a0 + 53) as &i8) ? 0 : 10);
    v9 = *((a0 + 54) as &i8);
    if !a5 != 1 && !v9 == 4 && (a6 || (v9 | 2) == 3) {
        v10 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a1, a2, &v6, 1) as u64);
        if v10 {
            return v10;
        }
    }
    if !*((a0 + 51) as &i8) {
        return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a1, a2, a3, a4) as u64);
    }
    v6 = struct64 {
        field_0: &g_4f46e0
        field_8: 2
        field_16: &v7 as u64
        field_24: 1
        field_32: "\x02"
        field_48: &v4
        field_56: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
    };
    v1 = core::option::Option<T>::map_or_else(&v6);
    v0 = v1.field_0;
    v6 = core::iter::traits::iterator::Iterator::chain(v2, v3 + v2);
    core::iter::traits::iterator::Iterator::collect(&v1, &v6);
    v12 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a1, a2, v2, v3) as u64);
    return v12;
}
