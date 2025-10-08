fn uu_unexpand::unexpand_line(a0: i64, a1: i64, a2: i64, a3: u8, a4: u64, a5: u64, a6: u64) -> long long {
    let v0: struct640;  // [bp-0x94]
    let v1: struct640;  // [bp-0x90]
    let v2: struct640;  // [bp-0x88]
    let v3: struct640;  // [bp-0x78]
    let v4: struct640;  // [bp-0x70]
    let v5: struct640;  // [bp-0x60]
    let v6: struct640;  // [bp-0x5c]
    let v7: struct640;  // [bp-0x58]
    let v8: struct640;  // [bp-0x50]
    let v9: u8;  // [bp-0x48]
    let v11: struct640;  // [bp-0x18]
    let v12: struct640;  // r14
    let v13: i64;  // r12
    let v14: struct640;  // rbx
    let v15: i64;  // r14
    let v16: u64;  // rax
    let v17: core::fmt::Arguments;  // r15
    let v18: core::fmt::rt::Argument;  // rbx
    let v19: core::slice::iter::Iter<u8>;  // r11
    let v20: core::slice::iter::Iter<u8>;  // r11
    let v21: core::result::Result<(), std::io::error::Error>;  // rax
    let v23: struct16;  // r13b
    let v24: u8;  // al
    let v25: u64;  // rax

    v11 = v12;
    v13 = a1;
    v14 = a0;
    v4 = *((a0 + 16) as &i64);
    if v4 {
        v14 = a0;
        v0 = v4 as u32 & -0x100 | 1;
        v6 = a3;
        v5 = a2;
        v7 = a2 as u64;
        v3 = 0;
        v2 = *((a0 + 8) as &i64);
        v8 = a4 - 1;
        v1 = 0;
        if v8 >= 0 {
            uu_unexpand::next_char_info(&v9, v6, *((v14 + 8) as &i64), v4, 0);
        }
        v15 = a1;
        v16 = uu_unexpand::write_tabs(a1, a5, a6, 0, 0, 0, v0.field_0, 1);
        if v16 {
            return v16;
        }
        v17 = v4 - 0;
        v18 = *((v15 + 16) as &i64);
        if v17 < *(v15 as &i64) - v18 {
            memcpy(*((v15 + 8) as &i64) + v18, v2, v17);
            *((v15 + 16) as &core::fmt::rt::Argument) = v18 + v17;
            v19 = v1;
            v13 = v15;
            v20 = v19;
        } else {
            std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v15, v2, v17);
            match v21 {
                Err(_) => {
                    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v21);
                },
                Ok(_) => {
                    v20 = v1;
                    v19 = v20;
                    v13 = a1;
                },
            }
        }
    }
    v25 = uu_unexpand::write_tabs(v13, a5, a6, v19, v20, v23 == 2, v24 & 1, 1);
    if v25 {
        return v25;
    }
    <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v13);
    match v21 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v21);
        },
        Ok(_) => {
            *((v14 + 16) as &i64) = 0;
            return 0;
        },
    }
}
