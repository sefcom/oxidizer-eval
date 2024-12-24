fn uu_split::ByteChunkWriter::new(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i192;  // [sp-0x110]
    let v1: i64;  // [sp-0x108]
    let v2: i64;  // [sp-0x100]
    let v3: i64;  // [sp-0xf8], Other Possible Types: Result<struct57, struct16>
    let v4: i64;  // [sp-0xf0]
    let v5: i32;  // [bp-0xe0]
    let v6: Option<struct24>;  // [sp-0xa8], Other Possible Types: i192
    let v7: i64;  // [sp-0xa0]
    let v8: i192;  // [sp-0x90], Other Possible Types: struct24
    let v9: i64;  // [sp-0x88]
    let v10: i64;  // [sp-0x80]
    let v11: i8;  // [sp-0x78]
    let v12: i576;  // [sp-0x70]
    let v16: i64;  // rcx
    let v17: i64;  // rax
    let v18: i64;  // rdi
    let v19: i128;  // xmm0
    let v20: i128;  // xmm0
    let v21: i128;  // xmm1
    let v22: i128;  // xmm2
    let v23: i64;  // rdx

    v3 = uu_split::filenames::FilenameIterator::new(*((a2 + 48) as &i64), *((a2 + 56) as &i64), a2 + 64);
    if v12 == 9223372036854775809 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: v13
            field_16: v14
        };
    }
    v12 = v3;
    v6 = <uu_split::filenames::FilenameIterator as core::iter::traits::iterator::Iterator>::next(&v12);
    if v0 == 0x8000000000000000 {
        v8 = <T as alloc::slice::hack::ConvertVec>::to_vec("output file suffixes exhausted");
        v3 = v8;
        v5 = 1;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v3);
        *((a0 + 16) as &&i64) = &g_548938;
        *(a0 as &i64) = 0x8000000000000000;
    } else {
        v16 = *((&v6 as &char + 16) as &i64);
        v0 = v6;
        v9 = v9;
        v10 = v10;
        if *((a2 + 160) as &i8) {
            v8 = 0;
            v9 = v7;
            v10 = v16;
            v11 = 1;
            println!("creating file {:?}", &v8);
            v9 = v1;
            v10 = v2;
        }
        uu_split::Settings::instantiate_current_writer(&v3, a2, v9, v10, 1);
        v17 = v3;
        v18 = v4;
        if v17 != 0x8000000000000000 {
            v19 = *((&v3 as &char + 16) as &i128);
            v20 = v12;
            v21 = *((&v12 as &char + 16) as &i128);
            v22 = *((&v12 as &char + 32) as &i128);
            return struct152 {
                field_0: v17
                field_8: v18
                field_16: v19
                field_32: *((&v3 as &char + 32) as &i128)
                field_48: v20
                field_64: v21
                field_80: v22
                field_96: *((&v12 as &char + 48) as &i128)
                field_112: *((&v12 as &char + 64) as &i64)
                field_120: a2
                field_128: a1
                field_136: 0
                field_144: a1
            };
        }
        *((a0 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v18);
        *((a0 + 16) as &i64) = v23;
        *(a0 as &i64) = 0x8000000000000000;
    }
    return v4;
}
