fn uu_split::ByteChunkWriter::new(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i64;  // [sp-0x110]
    let v1: i64;  // [sp-0x108]
    let v2: i64;  // [sp-0x100]
    let v3: i456;  // [sp-0xf8], Other Possible Types: Result<struct57, struct16>
    let v4: i64;  // [sp-0xf0]
    let v5: i64;  // [sp-0xe8]
    let v6: i32;  // [bp-0xe0]
    let v7: i192;  // [sp-0xa8], Other Possible Types: Option<struct24>
    let v8: i64;  // [sp-0xa0]
    let v9: i64;  // [sp-0x90], Other Possible Types: struct24
    let v10: i64;  // [sp-0x88]
    let v11: i64;  // [sp-0x80]
    let v12: i8;  // [sp-0x78]
    let v13: i64;  // [sp-0x70], Other Possible Types: struct72
    let v18: i64;  // rdx
    let v19: i64;  // rcx
    let v20: i64;  // rdx
    let v21: i64;  // rcx
    let v22: i64;  // rax
    let v23: i64;  // rdi
    let v24: i128;  // xmm0
    let v25: i128;  // xmm0
    let v26: i128;  // xmm1
    let v27: i128;  // xmm2
    let v28: i64;  // rdx

    v3 = uu_split::filenames::FilenameIterator::new(*((a2 + 48) as &i64), *((a2 + 56) as &i64), a2 + 64);
    if v13 == 9223372036854775809 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v14
            field_16: v15
        };
    }
    v13 = struct72 {
        field_0: v3
        field_8: v17
        field_16: v5
        field_24: *((&v3 as &char + 24) as &i128)
        field_40: *((&v3 as &char + 40) as &i128)
        field_56: v5
    };
    v7 = <uu_split::filenames::FilenameIterator as core::iter::traits::iterator::Iterator>::next(&v13);
    if v0 == 0x8000000000000000 {
        v9 = <T as alloc::slice::hack::ConvertVec>::to_vec("output file suffixes exhausted");
        v5 = v9.field_16;
        v3 = v9;
        v6 = 1;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v3);
        *((a0 + 16) as &&i64) = &g_548938;
        *(a0 as &i64) = 0x8000000000000000;
    } else {
        v18 = v8;
        v19 = *((&v7 as &char + 16) as &i64);
        v0 = v7;
        v1 = v18;
        v2 = v19;
        if *((a2 + 160) as &i8) {
            v9 = 0;
            v10 = v18;
            v11 = v19;
            v12 = 1;
            println!("creating file {:?}", &v9);
            v20 = v1;
            v21 = v2;
        }
        uu_split::Settings::instantiate_current_writer(&v3, a2, v20, v21, 1);
        v22 = v3;
        v23 = v4;
        if v22 != 0x8000000000000000 {
            v24 = *((&v3 as &char + 16) as &i128);
            v25 = *(&v13.field_0 as &i128);
            v26 = *(&v13.field_16 as &i128);
            v27 = *((&v13.field_24 as &char + 8) as &i128);
            return struct152 {
                field_0: v22
                field_8: v23
                field_16: v24
                field_32: *((&v3 as &char + 32) as &i128)
                field_48: v25
                field_64: v26
                field_80: v27
                field_96: *((&v13.field_40 as &char + 8) as &i128)
                field_112: *((&v13.field_56 as &char + 8) as &i64)
                field_120: a2
                field_128: a1
                field_136: 0
                field_144: a1
            };
        }
        *((a0 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23);
        *((a0 + 16) as &i64) = v28;
        *(a0 as &i64) = 0x8000000000000000;
    }
    return v4;
}
