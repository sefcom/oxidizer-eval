fn uu_uniq::Uniq::print_line(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i64;  // [bp-0xe8], Other Possible Types: struct24
    let v1: i64;  // [sp-0xd8]
    let v2: i64;  // [sp-0xd0]
    let v3: i64;  // [sp-0xc8]
    let v4: i64;  // [sp-0xc0]
    let v5: i8;  // [sp-0xb8]
    let v6: String;  // [sp-0xb0], Other Possible Types: i192
    let v7: i64;  // [sp-0x98]
    let v8: Argument;  // [bp-0x90]
    let v9: i256;  // [bp-0x80]
    let v10: Arguments;  // [bp-0x60]
    let v11: i64;  // [bp+0x8]
    let v12: i8;  // bpl
    let v13: i64;  // rax
    let v14: i64;  // rax
    let v15: i64;  // r13

    v7 = a5;
    v12 = (*((a0 + 53) as &i8) ? 10 : 0);
    if a5 == 1 {
        v13 = *((a0 + 54) as &i8);
        if v13 != 4 && (v11 || (v13 | 2) == 3) {
            v0 = v12;
            v14 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(*((a2 + 56) as &i64)());
            if v14 {
                return v14;
            }
        }
    }
    if !*((a0 + 51) as &i8) {
        v15 = *((a2 + 56) as &i64);
        v14 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v15());
        if v14 {
            return v14;
        }
    } else {
        v8 = Argument {
            value: &v7
            formatter: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
        };
        v0 = 2;
        v1 = 0;
        v2 = 7;
        v3 = 0;
        v4 = 32;
        v5 = 3;
        v10 = Arguments {
            pieces: [&g_4f01e8, " "]
            args: [&v8]
            fmt: 
        };
        v6 = alloc::fmt::format::format_inner(&v10);
        v9 = *((&v6 as &char + 8) as &i256);
        v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9);
        v15 = *((a2 + 56) as &i64);
        v14 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v15());
        if v14 {
            return v14;
        }
    }
    v0 = v12;
    v14 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v15());
    return v14;
}
