fn uu_echo::execute(a0: u32, a1: u32, a2: u32, a3: &u64) -> u64 {
    let v0: i32;  // [sp-0x8c]
    let v1: struct9;  // [sp-0x88], Other Possible Types: i72
    let v2: i128;  // [sp-0x78]
    let v3: i128;  // [sp-0x68]
    let v4: i128;  // [sp-0x58]
    let v5: i128;  // [sp-0x48]
    let v6: i64;  // [sp-0x38]
    let v8: struct8;  // rax
    let v9: i64;  // rdx
    let v10: i64;  // rdx
    let v13: i64;  // rax
    let v14: i64;  // rsi
    let v17: i64;  // rsi
    let v18: i64;  // rax

    v0 = a1;
    v5 = *((a3 + 48) as &i128);
    v4 = *((a3 + 32) as &i128);
    v3 = *((a3 + 16) as &i128);
    v2 = *(a3 as &i128);
    v6 = 0;
    v8 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a1, a2);
    if !v9 {
LABEL_4a52dc:
        if !(v0) || !((v13 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a0, &g_41b508, 1), v13)) {
            return 0;
        }
    } else if !a2 {
        loop {
            if !(!v8) && !((v13 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a0, " "), !v13)) || !((v13 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a0, *((v10 + 8) as &i64), *((v10 + 16) as &i64)), !v13)) {
                break;
            }
            v8 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v17, v9);
            if !v9 {
                goto LABEL_4a52dc;
            }
        }
    } else {
        loop {
            if v8 && (v13 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a0, " "), v13) {
                break;
            }
            v1 = uu_echo::print_escaped(*((v10 + 8) as &i64), *((v10 + 16) as &i64), a0);
            if v1 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
                return v18;
            }
            if *((&v1 as &char + 1) as &i8) {
                return 0;
            }
            v8 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v14, v9);
            if !v9 {
                goto LABEL_4a52dc;
            }
        }
    }
    v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
    return v18;
}
