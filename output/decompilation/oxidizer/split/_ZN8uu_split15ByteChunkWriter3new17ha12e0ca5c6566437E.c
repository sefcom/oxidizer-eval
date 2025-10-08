fn uu_split::ByteChunkWriter::new(a0: i64, a1: i64, a2: i64) -> int {
    let v0: i64;  // [bp-0x110]
    let v1: Result<struct65, struct24>;  // [bp-0x108]
    let v2: u128;  // [bp-0x108]
    let v3: struct41;  // [bp-0x108]
    let v4: u64;  // [bp-0x100]
    let v5: u64;  // [bp-0xf8]
    let v6: u32;  // [bp-0xf0]
    let v7: u128;  // [bp-0xe0]
    let v8: u64;  // [bp-0xb8]
    let v9: Option<struct24>;  // [bp-0xb0]
    let v10: u64;  // [bp-0xa8]
    let v11: u64;  // [bp-0xa0]
    let v12: void*;  // [bp-0x98], Other Possible Types: struct24
    let v13: u64;  // [bp-0x90]
    let v14: u64;  // [bp-0x88]
    let v15: u8;  // [bp-0x80]
    let v16: struct72;  // [bp-0x78]
    let v17: u64;  // [bp-0x70]
    let v19: iNone;  // xmm0
    let v20: u64;  // rdx
    let v21: u64;  // rdx
    let v22: iNone;  // xmm0
    let v23: iNone;  // xmm0
    let v24: iNone;  // xmm1
    let v25: Result<struct32, struct16>;  // xmm2

    v1 = uu_split::filenames::FilenameIterator::new(*((a2 + 48) as &i64), *((a2 + 56) as &i64), a2 + 64);
    match v1 {
        Err(_) => {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: v17
                field_16: v5
            };
        },
        Ok(_) => {
            v19 = *((&v1 as &char + 24) as &i128);
            v16 = struct72 {
                field_0: v1 as i64
                field_8: v4
                field_16: v5
                field_24: v19
                field_40: v7
                field_56: *((&v1 as &char + 56) as &i128)
            };
            v9 = <uu_split::filenames::FilenameIterator as core::iter::traits::iterator::Iterator>::next(&v16);
            match v9 {
                None => {
                    v12 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("output file suffixes exhausted");
                    v5 = v14;
                    v2 = *(&v12.field_0 as &i128) as u128;
                    v6 = 1;
                    return struct24 {
                        field_0: 0x8000000000000000
                        field_8: alloc::boxed::Box<T>::new(&v1) as u64
                        field_16: &g_50ab40
                    };
                },
                Some(_) => {
                    v20 = v10;
                    v0 = v20;
                    if *((a2 + 160) as &i8) {
                        v12 = 0;
                        v13 = v20;
                        v14 = v11;
                        v15 = 1;
                        println!("creating file {}", &v12);
                        v20 = v0;
                    }
                    vvar_290{stack -264} = struct41 OrderedDict([(0, 𝜙@64b [((4650303, None), vvar_264{stack -264}), ((4650162, None), vvar_230{stack -264})]), (8, 𝜙@64b [((4650303, None), vvar_265{stack -256}), ((4650162, None), vvar_231{stack -256})]), (16, 𝜙@64b [((4650303, None), vvar_267{stack -248}), ((4650162, None), vvar_232{stack -248})])])
                    uu_split::Settings::instantiate_current_writer(&v3, a2, v20, v11, 1);
                    if v3.field_0 != 0x8000000000000000 {
                        v22 = *(&v3.field_16 as &i128);
                        v23 = *(&v16.field_0 as &i128);
                        v24 = *(&v16.field_16 as &i128);
                        v25 = *((&v16.field_24 as &char + 8) as &i128);
                        return struct152 {
                            field_0: v3.field_0
                            field_8: v4
                            field_16: v22
                            field_32: *(&v3.field_32 as &i128)
                            field_48: v23
                            field_64: v24
                            field_80: v25
                            field_96: *((&v16.field_40 as &char + 8) as &i128)
                            field_112: *((&v16.field_56 as &char + 8) as &i64)
                            field_120: a2
                            field_128: v8
                            field_136: 0
                            field_144: v8
                        };
                    }
                    return struct24 {
                        field_0: 0x8000000000000000
                        field_8: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4)
                        field_16: v21
                    };
                },
            }
        },
    }
}
