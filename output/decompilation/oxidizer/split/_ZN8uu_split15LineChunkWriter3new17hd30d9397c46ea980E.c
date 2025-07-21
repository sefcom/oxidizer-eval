fn uu_split::LineChunkWriter::new(a1: i64, a2: i64) -> Result<struct152, struct24> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x110]
    let v1: &u64;  // [bp-0x108]
    let v2: u64;  // [bp-0x100]
    let v3: u64;  // [bp-0xf8]
    let v4: u64;  // [bp-0xf0]
    let v5: u64;  // [bp-0xe8]
    let v6: i8;  // [bp-0xe0], Other Possible Types: u32
    let v7: u64;  // [bp-0xd8]
    let v8: u128;  // [bp-0xd0]
    let v9: i8;  // [bp-0xc0]
    let v10: u64;  // [bp-0xa8]
    let v11: &u64;  // [bp-0xa0]
    let v12: u64;  // [bp-0x98]
    let v13: void*;  // [bp-0x90], Other Possible Types: char
    let v14: u64;  // [bp-0x88]
    let v15: u64;  // [bp-0x80]
    let v16: u8;  // [bp-0x78]
    let v17: struct8;  // [bp-0x70], Other Possible Types: u64
    let v18: u64;  // [bp-0x68]
    let v19: u64;  // [bp-0x60]
    let v20: u128;  // [bp-0x58]
    let v21: u128;  // [bp-0x48]
    let v22: u128;  // [bp-0x38]
    let v24: void*;  // r8
    let v25: u128;  // xmm0
    let v26: void*;  // rcx
    let v27: &u64;  // rdx
    let v28: u64;  // rcx
    let v29: u8;  // r9b
    let v30: u128;  // xmm0
    let v31: u128;  // xmm0
    let v32: u128;  // xmm1
    let v33: u128;  // xmm2
    let v34: u64;  // rdx

    uu_split::filenames::FilenameIterator::new(*((a2 + 48) as &i64), *((a2 + 56) as &i64), a2 + 64, v24);
    if v3 == 9223372036854775809 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v18
            field_16: v5
        };
    }
    v25 = *(&v6 as &i128);
    v22 = *(&v9 as &i128);
    v21 = v8;
    v20 = v25;
    v17 = v3;
    v18 = v4;
    v19 = v5;
    v17 = <uu_split::filenames::FilenameIterator as core::iter::traits::iterator::Iterator>::next(v3);
    if v10 == 0x8000000000000000 {
        <T as alloc::slice::hack::ConvertVec>::to_vec("output file suffixes exhausted", v26);
        v5 = v15;
        v3 = *(&v13 as &i128);
        v6 = 1;
        return struct24 {
            field_0: 0x8000000000000000
            field_8: alloc::boxed::Box<T>::new(&v3 as u8)
            field_16: &g_548438
        };
    }
    v27 = v11;
    v28 = v12;
    v0 = v10;
    v1 = v27;
    v2 = v28;
    if *((a2 + 160) as &i8) {
        v13 = 0;
        v14 = v27;
        v15 = v28;
        v16 = 1;
        println!("creating file {}", &v13);
        v27 = v1;
        v28 = v2;
    }
    uu_split::Settings::instantiate_current_writer(a2, v27, v28, 1, v29);
    if v3 != 0x8000000000000000 {
        v30 = *(&v5 as &i128);
        v31 = *(&v17 as &i128);
        v32 = *(&v19 as &i128);
        v33 = *((&v20 as &char + 8) as &i128);
        return Ok(struct152 {
            field_0: v3
            field_8: v4
            field_16: v30
            field_32: *(&v7 as &i128)
            field_48: v31
            field_64: v32
            field_80: v33
            field_96: *((&v21 as &char + 8) as &i128)
            field_112: *((&v22 as &char + 8) as &i64)
            field_120: a2
            field_128: a1
            field_136: 0
            field_144: a1
        });
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4)
        field_16: v34
    };
}
