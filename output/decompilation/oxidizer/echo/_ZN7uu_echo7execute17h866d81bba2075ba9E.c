fn uu_echo::execute(a0: i64, a1: &struct24, a2: i32, a3: i8) -> u64 {
    let v0: struct12;  // [bp-0xb4]
    let v1: u32;  // [bp-0xac]
    let v2: struct32;  // [bp-0xa8], Other Possible Types: u64
    let v3: u64;  // [bp-0xa0]
    let v4: u64;  // [bp-0x98]
    let v5: u64;  // [bp-0x90]
    let v6: u64;  // [bp-0x88]
    let v7: u8;  // [bp-0x80]
    let v9: u64;  // [bp-0x78]
    let v10: struct32;  // [bp-0x70]
    let v11: void*;  // [bp-0x50]
    let v12: struct24;  // [bp-0x48]
    let v15: core::result::Result<(), std::io::error::Error>;  // rax
    let v16: u64;  // rax
    let v17: struct48;  // rax
    let v18: core::result::Result<(), std::io::error::Error>;  // rax
    let v19: core::result::Result<(), std::io::error::Error>;  // rax

    v1 = a2;
    v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
    v11 = 0;
    v2 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v10);
    if !((((0 ^ v3) & (0 ^ -(v3))) >> 63) as char) {
        if a3 {
            do {
                v6 = v5;
                if !v2 {
                    continue;
                }
                v15 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a0, &g_413394);
                if !v15 {
                    goto LABEL_4283cb;
                } else {
                    goto LABEL_0x428517;
                }
LABEL_4283cb:
                v12 = struct24 {
                    field_0: v4
                    field_8: v6
                    field_16: 3
                };
                loop {
                    v16 = uucore::features::format::parse_escape_only::{{closure}}(&v12);
                    if v16 == 4 {
                        break;
                    }
                    v0 = struct12 {
                        field_0: v16 as u8
                        field_1: <UNKNOWN>
                        field_5: <UNKNOWN>
                        field_7: <UNKNOWN>
                    };
                    <uucore::features::format::escape::EscapedChar as uucore::features::format::FormatChar>::write(&v7, &v0, a0);
                    if !v7 {
                        goto LABEL_0x42853e;
                    } else {
                        v17 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
                    }
                }
                v2 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v10);
            } while (v3 != 0x8000000000000000);
            goto LABEL_0x42853e;
        } else {
            do {
                if !v2 {
                    continue;
                }
                v15 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a0, &g_413394);
                if !v15 {
                    goto LABEL_4284b9;
                } else {
                    goto LABEL_0x428517;
                }
LABEL_4284b9:
                v18 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a0, v4);
                if let Err(_) = v18 {
                    v17 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v18);
                }
                v2 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v10);
            } while (v3 != 0x8000000000000000);
            return v17;
        }
    }
    if v0.field_5 as i8 {
        v19 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a0, &g_413393);
    }
    return 0;
}
