fn uu_split::LineChunkWriter::new(a0: i64, a1: u64, a2: i64) -> int {
    let v0: struct72;  // [bp-0xb0]
    let v1: struct16;  // [bp-0xa8]
    let v2: struct24;  // [bp-0x70]
    let v3: Result<struct65, struct24>;  // [bp-0x68]
    let v4: Result<struct41, struct16>;  // [bp-0x68]
    let v5: u64;  // [bp-0x60]
    let v6: u64;  // [bp-0x58]
    let v7: u128;  // [bp-0x40]
    let v9: iNone;  // xmm0
    let v10: u64;  // rdx
    let v11: iNone;  // xmm0
    let v12: iNone;  // xmm0
    let v13: iNone;  // xmm1
    let v14: iNone;  // xmm2

    v3 = uu_split::filenames::FilenameIterator::new(*((a2 + 48) as &i64), *((a2 + 56) as &i64), a2 + 64);
    match v3 {
        Err(_) => {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: v1
                field_16: v6
            };
        },
        Ok(_) => {
            v9 = *((&v3 as &char + 24) as &i128);
            v0 = struct72 {
                field_0: v3 as i64
                field_8: v5
                field_16: v6
                field_24: v9
                field_40: v7
                field_56: *((&v3 as &char + 56) as &i128)
            };
            v4 = uu_split::LineChunkWriter::start_new_chunk(a2, &v0);
            match v4 {
                Ok(_) => {
                    v11 = *((&v4 as &char + 16) as &i128);
                    v12 = *(&v0.field_0 as &i128);
                    v13 = *(&v0.field_16 as &i128);
                    v14 = *((&v0.field_24 as &char + 8) as &i128);
                    return struct152 {
                        field_0: v4 as i64
                        field_8: v5
                        field_16: v11
                        field_32: *((&v4 as &char + 32) as &i128)
                        field_48: v12
                        field_64: v13
                        field_80: v14
                        field_96: *((&v0.field_40 as &char + 8) as &i128)
                        field_112: v2
                        field_120: a2
                        field_128: a1
                        field_136: 0
                        field_144: a1
                    };
                },
                Err(_) => {
                    return struct24 {
                        field_0: 0x8000000000000000
                        field_8: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5)
                        field_16: v10
                    };
                },
            }
        },
    }
}
