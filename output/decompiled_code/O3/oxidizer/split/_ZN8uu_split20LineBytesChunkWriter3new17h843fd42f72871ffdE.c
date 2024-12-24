fn uu_split::LineBytesChunkWriter::new(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i64;  // [sp-0x110]
    let v1: i64;  // [sp-0x108]
    let v2: i64;  // [sp-0x100]
    let v3: i64;  // [sp-0xf8], Other Possible Types: Result<struct57, struct16>
    let v4: i64;  // [sp-0xf0]
    let v5: i32;  // [bp-0xe0]
    let v6: i8;  // [bp-0xa8]
    let v7: i64;  // [sp-0xa0]
    let v8: i8;  // [bp-0x98]
    let v9: i192;  // [sp-0x90], Other Possible Types: struct24
    let v10: i64;  // [sp-0x88]
    let v11: i64;  // [sp-0x80]
    let v12: i8;  // [sp-0x78]
    let v13: i64;  // [sp-0x70]
    let v17: i64;  // rdx
    let v18: i64;  // rcx
    let v19: i64;  // rdx
    let v20: i64;  // rcx
    let v21: i64;  // rax
    let v22: i64;  // rdi
    let v23: i128;  // xmm0
    let v24: i128;  // xmm0
    let v25: i128;  // xmm1
    let v26: i128;  // xmm2
    let v27: i64;  // rdx

    v3 = uu_split::filenames::FilenameIterator::new(*((a2 + 48) as &i64), *((a2 + 56) as &i64), a2 + 64);
    if v13 == 9223372036854775809 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v14
            field_16: v15
        };
    }
    v13 = v3;
    <uu_split::filenames::FilenameIterator as core::iter::traits::iterator::Iterator>::next(&v6, &v13);
    if v0 == 0x8000000000000000 {
        v9 = <T as alloc::slice::hack::ConvertVec>::to_vec("output file suffixes exhausted");
        v3 = v9;
        v5 = 1;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v3);
        *((a0 + 16) as &&i64) = &g_548938;
        *(a0 as &i64) = 0x8000000000000000;
    } else {
        v17 = v7;
        v18 = v8;
        v0 = v6;
        v1 = v17;
        v2 = v18;
        if *((a2 + 160) as &i8) {
            v9 = 0;
            v10 = v17;
            v11 = v18;
            v12 = 1;
            println!("creating file {:?}", &v9);
            v19 = v1;
            v20 = v2;
        }
        uu_split::Settings::instantiate_current_writer(&v3, a2, v19, v20, 1);
        v21 = v3;
        v22 = v4;
        if v21 != 0x8000000000000000 {
            v23 = *((&v3 as &char + 16) as &i128);
            v24 = v13;
            v25 = *((&v13 as &char + 16) as &i128);
            v26 = *((&v13 as &char + 32) as &i128);
            return struct152 {
                field_0: v21
                field_8: v22
                field_16: v23
                field_32: *((&v3 as &char + 32) as &i128)
                field_48: v24
                field_64: v25
                field_80: v26
                field_96: *((&v13 as &char + 48) as &i128)
                field_112: *((&v13 as &char + 64) as &i64)
                field_120: a2
                field_128: a1
                field_136: 0
                field_144: a1
            };
        }
        *((a0 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v22);
        *((a0 + 16) as &i64) = v27;
        *(a0 as &i64) = 0x8000000000000000;
    }
    return v4;
}
