fn uu_echo::execute(a0: u32, a1: u32, a2: u8, a3: &u64) -> u64 {
    let v0: i32;  // [sp-0x8c]
    let v1: struct9;  // [sp-0x88]
    let v2: iNone;  // [sp-0x78]
    let v3: iNone;  // [sp-0x68]
    let v4: iNone;  // [sp-0x58]
    let v5: iNone;  // [sp-0x48]
    let v6: i64;  // [sp-0x38]
    let v8: struct8;  // rax
    let v9: i64;  // rdx
    let v10: i64;  // rdx
    let v13: i64;  // rax
    let v16: i64;  // rdi
    let v17: i64;  // rax

    v0 = a1;
    v5 = *((a3 + 48) as &i128);
    v4 = *((a3 + 32) as &i128);
    v3 = *((a3 + 16) as &i128);
    v2 = *(a3 as &i128);
    v6 = 0;
    v8 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
    if !v9 {
LABEL_4a4d7c:
        if !(v0 as i8) || !((v13 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a0, "
"), v13)) {
            return 0;
        }
    } else if !a2 {
        loop {
            if !(!v8) && !((v13 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a0, " "), !v13)) || !((v13 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a0, *((v10 + 8) as &i64), *((v10 + 16) as &i64)), !v13)) {
                break;
            }
            v8 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
            if !v9 {
                goto LABEL_4a4d7c;
            }
        }
    } else {
        loop {
            if v8 && (v13 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a0, " "), v13) {
                break;
            }
            v1 = uu_echo::print_escaped(*((v10 + 8) as &i64), *((v10 + 16) as &i64), a0);
            if v1.field_0 {
                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
                return v17;
            }
            if v1.field_8 as i8 {
                return 0;
            }
            v8 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next();
            if !v9 {
                goto LABEL_4a4d7c;
            }
        }
    }
    v16 = v13;
    v17 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
    return v17;
}
