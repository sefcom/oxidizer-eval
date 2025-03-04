fn uu_split::ByteChunkWriter::new(a0: &struct24, a1: u32) -> u64 {
    let v0: Option<struct24>;  // [sp-0x110], Other Possible Types: unsigned long
    let v1: i64;  // [sp-0x108]
    let v2: i64;  // [sp-0x100]
    let v3: Result<struct41, struct8>;  // [sp-0xf8], Other Possible Types: struct24, unsigned long
    let v4: i64;  // [sp-0xf0]
    let v5: i32;  // [bp-0xe0]
    let v6: Option<struct24>;  // [sp-0xa8]
    let v7: i64;  // [sp-0xa0]
    let v8: i64;  // [sp-0x90], Other Possible Types: struct24
    let v9: i64;  // [sp-0x88]
    let v10: i64;  // [sp-0x80]
    let v11: i8;  // [sp-0x78]
    let v12: iNone;  // [sp-0x70], Other Possible Types: unsigned long
    let v13: i64;  // [sp-0x68]
    let v14: i64;  // [sp-0x60]
    let v16: i64;  // rdx
    let v18: i64;  // rax
    let v19: i64;  // rdx
    let v20: i64;  // rcx
    let v21: i64;  // rax

    v3 = uu_split::filenames::FilenameIterator::new(*((v16 + 48) as &i64), *((v16 + 56) as &i64), v16 + 64);
    if v12 == 9223372036854775809 {
        *((a0 + 8) as &unsigned long) = v13;
        *((a0 + 16) as &unsigned long) = v14;
        *(a0 as &i64) = 0x8000000000000000;
        v18 = v4;
        return v18;
    }
    v12 = *(&v3 as &i576);
    v6 = <uu_split::filenames::FilenameIterator as core::iter::traits::iterator::Iterator>::next(&v12);
    if v0 == 0x8000000000000000 {
        v8 = <T as alloc::slice::hack::ConvertVec>::to_vec("output file suffixes exhausted");
        v3 = v8;
        *(&v5 as &i32) = 1;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v3);
        *((a0 + 16) as &&i64) = &g_548438;
        *(a0 as &i64) = 0x8000000000000000;
    } else {
        v19 = v7;
        v20 = *((&v6 as &char + 16) as &i64);
        v0 = v6;
        if *((v16 + 160) as &i8) {
            v8 = 0;
            v9 = v19;
            v10 = v20;
            v11 = 1;
            println!("creating file {}", &v8);
            v19 = v1;
            v20 = v2;
        }
        v3 = uu_split::Settings::instantiate_current_writer(v16, v19, v20, 1);
        v18 = v21;
        if v3 != 0x8000000000000000 {
            return v18;
        }
    }
    v18 = v21;
    return v18;
}
