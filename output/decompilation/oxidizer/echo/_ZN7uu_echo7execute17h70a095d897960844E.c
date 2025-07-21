fn uu_echo::execute(a0: i64, a1: i32, a2: i8, a3: i64) -> long long {
    let v0: u32;  // [bp-0x8c]
    let v1: u8;  // [bp-0x88]
    let v2: u56;  // [bp-0x87]
    let v3: u128;  // [bp-0x78]
    let v4: u128;  // [bp-0x68]
    let v5: u128;  // [bp-0x58]
    let v6: u128;  // [bp-0x48]
    let v7: void*;  // [bp-0x38]
    let v9: u64;  // rax
    let v10: i64;  // rdx
    let v11: i64;  // rdx
    let v12: i64;  // rdx
    let v13: core::result::Result<(), std::io::error::Error>;  // rax
    let v14: i64;  // rdx

    v0 = a1;
    v6 = *((a3 + 48) as &i128);
    v5 = *((a3 + 32) as &i128);
    v4 = *((a3 + 16) as &i128);
    v3 = *(a3 as &i128);
    v7 = 0;
    v9 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v3);
    if v10 {
        if a2 {
            loop {
                v12 = v11;
                if v9 && !((v13 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a0, " "), !v13)) || !((uu_echo::print_escaped(&v1, *((v12 + 8) as &i64), *((v12 + 16) as &i64), a0), !v1)) {
                    break;
                }
                if v2 as i8 {
                    return 0;
                }
                v9 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v3);
                v10 = v10;
                if !v11 {
                    goto LABEL_4a4d7c;
                }
            }
        } else {
            loop {
                v14 = v11;
                if v9 && !((v13 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a0, " "), !v13)) || !((v13 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a0, *((v14 + 8) as &i64), *((v14 + 16) as &i64)), !v13)) {
                    break;
                }
                v9 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v3);
                v11 = v10;
                if !v11 {
                    goto LABEL_4a4d7c;
                }
            }
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
        }
    }
LABEL_4a4d7c:
    if v0 as i8 {
        v13 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a0, "\n");
    }
    return 0;
}
