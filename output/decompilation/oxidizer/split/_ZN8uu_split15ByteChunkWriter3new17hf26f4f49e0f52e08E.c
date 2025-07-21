fn uu_split::ByteChunkWriter::new(a1: i64, a2: i64) -> Result<struct152, struct24> {
    let a0: i64;  // rdi
    let v0: struct8;  // [bp-0x110]
    let v1: &u64;  // [bp-0x108]
    let v2: u64;  // [bp-0x100]
    let v3: Result<struct65, struct24>;  // [bp-0xf8]
    let v4: u128;  // [bp-0xf8]
    let v5: u64;  // [bp-0xf8]
    let v6: u64;  // [bp-0xf0]
    let v7: u64;  // [bp-0xe8]
    let v8: u32;  // [bp-0xe0]
    let v9: u128;  // [bp-0xd0]
    let v10: struct8;  // [bp-0xa8]
    let v11: &u64;  // [bp-0xa0]
    let v12: u64;  // [bp-0x98]
    let v13: void*;  // [bp-0x90], Other Possible Types: char
    let v14: u64;  // [bp-0x88]
    let v15: u64;  // [bp-0x80]
    let v16: u8;  // [bp-0x78]
    let v17: struct72;  // [bp-0x70]
    let v18: u64;  // [bp-0x68]
    let v20: u128;  // xmm0
    let v21: void*;  // rcx
    let v22: &u64;  // rdx
    let v23: u64;  // rcx
    let v24: u8;  // r9b
    let v25: u128;  // xmm0
    let v26: u128;  // xmm0
    let v27: u128;  // xmm1
    let v28: u128;  // xmm2
    let v29: u64;  // rdx

    v3 = uu_split::filenames::FilenameIterator::new(*((a2 + 48) as &i64), *((a2 + 56) as &i64), a2 + 64);
    match v3 {
        Err(_) => {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: v18
                field_16: v7
            };
        },
        Ok(_) => {
            v20 = *((&v3 as &char + 24) as &i128);
            v17 = struct72 {
                field_0: v3 as i64
                field_8: v6
                field_16: v7
                field_24: v20
                field_40: v9
                field_56: *((&v3 as &char + 56) as &i128)
            };
            v10 = <uu_split::filenames::FilenameIterator as core::iter::traits::iterator::Iterator>::next(&v17);
            if v10 == 0x8000000000000000 {
                <T as alloc::slice::hack::ConvertVec>::to_vec("output file suffixes exhausted", v21);
                v7 = v15;
                v4 = *(&v13 as &i128) as u128;
                v8 = 1;
                return struct24 {
                    field_0: 0x8000000000000000
                    field_8: alloc::boxed::Box<T>::new(&v3)
                    field_16: &g_548438
                };
            }
            v22 = v11;
            v23 = v12;
            v0 = v10;
            v1 = v22;
            v2 = v23;
            if *((a2 + 160) as &i8) {
                v13 = 0;
                v14 = v22;
                v15 = v23;
                v16 = 1;
                println!("creating file {}", &v13);
                v22 = v1;
                v23 = v2;
            }
            uu_split::Settings::instantiate_current_writer(a2, v22, v23, 1, v24);
            if v5 != 0x8000000000000000 {
                v25 = *((&v3 as &char + 16) as &i128);
                v26 = *(&v17.field_0 as &i128);
                v27 = *(&v17.field_16 as &i128);
                v28 = *((&v17.field_24 as &char + 8) as &i128);
                return Ok(struct152 {
                    field_0: v5
                    field_8: v6
                    field_16: v25
                    field_32: *((&v3 as &char + 32) as &i128)
                    field_48: v26
                    field_64: v27
                    field_80: v28
                    field_96: *((&v17.field_40 as &char + 8) as &i128)
                    field_112: *((&v17.field_56 as &char + 8) as &i64)
                    field_120: a2
                    field_128: a1
                    field_136: 0
                    field_144: a1
                });
            }
            return struct24 {
                field_0: 0x8000000000000000
                field_8: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6)
                field_16: v29
            };
        },
    }
}
