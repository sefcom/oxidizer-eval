fn fuel_core_client::client::schema::tx::<impl core::convert::TryFrom<fuel_core_client::client::schema::tx::ProgramState> for fuel_vm::state::ProgramState>::try_from(a0: i64, a1: i64) -> long long {
    let v0: struct10;  // [bp-0x60]
    let v1: i8;  // [bp-0x58]
    let v5: u64;  // rbp
    let v6: i64;  // rax
    let v7: u64;  // rcx
    let v8: u32;  // edi
    let v9: struct80;  // rdi
    let v10: struct130;  // rsi

    v5 = *((a1 + 24) as &i8);
    if v5 && v5 == 1 {
        v6 = *((a1 + 8) as &i64);
        if *((a1 + 16) as &i64) != 32 {
            return struct16 {
                field_0: 5
                padding_1: <UNKNOWN>
                field_8: 8
            };
        }
        v7 = *((v6 + 7) as &i64);
        v8 = *((v6 + 3) as &i32);
        return struct48 {
            field_0: 1
            field_1: v8
            field_4: v7
            field_8: *((v6 + 15) as &i128)
            field_16: <UNKNOWN>
            field_32: <UNKNOWN>
        };
    }
    alloc::vec::<impl core::convert::TryFrom<alloc::vec::Vec<T,A>> for [T; N]>::try_from(v9, v10);
    if !((((0 ^ v0) & (0 ^ -(v0))) >> 63) as char) {
        return struct16 {
            field_0: 5
            padding_1: <UNKNOWN>
            field_8: 8
        };
    }
    return struct16 {
        field_0: v5 as u8
        padding_1: <UNKNOWN>
        field_8: (((((*(&v1 as &i64) & -0xff00ff00ff0100) >> 8 | *(&v1 as &i64) * 0x100 & -0xff00ff00ff0100) & -0xffff00010000) >> 16 | ((*(&v1 as &i64) & -0xff00ff00ff0100) >> 8 | *(&v1 as &i64) * 0x100 & -0xff00ff00ff0100) * 0x10000 & -0xffff00010000) & -0x100000000) >> 32 | ((((*(&v1 as &i64) & -0xff00ff00ff0100) >> 8 | *(&v1 as &i64) * 0x100 & -0xff00ff00ff0100) & -0xffff00010000) >> 16 | ((*(&v1 as &i64) & -0xff00ff00ff0100) >> 8 | *(&v1 as &i64) * 0x100 & -0xff00ff00ff0100) * 0x10000 & -0xffff00010000) * 0x100000000 & -0x100000000
    };
}
