fn uu_split::filenames::FilenameIterator::new(a0: void*, a1: u64, a2: u64, a3: void*) -> u64 {
    let v0: i200;  // [sp-0x68], Other Possible Types: Option<struct25>
    let v1: i192;  // [sp-0x48], Other Possible Types: struct24
    let v2: i32;  // [sp-0x30]
    let v4: i64;  // rcx
    let v5: i64;  // rcx
    let v6: i64;  // rax
    let v7: i64;  // r15
    let v8: i64;  // r8
    let v10: i64;  // rdi
    let v11: i128;  // xmm0

    v4 = *((a3 + 41) as &i8);
    v5 = v4 | -0x100 | (v4 & 255) * 8 & 255;
    v6 = 1051162 >> ((v4 & 255) * 8 & 31);
    v7 = 0x8000000000000000;
    if *((a3 + 40) as &i8) {
        v8 = *((a3 + 32) as &i64);
    } else {
        v0 = uu_split::number::FixedWidthNumber::new(v6 & 4294967295, *((a3 + 24) as &i64), *((a3 + 32) as &i64));
        v7 = v0;
        match v0 {
            None => {
                v1 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v2 = 1;
                *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v1);
                *((a0 + 16) as &&i64) = &g_549c08;
                *(a0 as &i64) = 9223372036854775809;
                return struct65 {
                    field_0: v7
                    field_8: v8
                    field_16: v6 as i8
                    field_17: v9 as i32
                    field_21: (v9 >> 32) as i16
                    field_23: (v9 >> 48) as i8
                    field_24: v5
                    field_32: a1
                    field_40: a2
                    field_48: v11
                    field_64: 1
                };
            },
            Some(_) => {
                v8 = *((&v0 as &char + 8) as &i64);
                v6 = *((&v0 as &char + 16) as &i64);
                v5 = v0;
                v10 = v6 >> 8;
            },
        }
    }
    v11 = *((a3 + 8) as &i128);
    return struct65 {
        field_0: v7
        field_8: v8
        field_16: v6 as i8
        field_17: v9 as i32
        field_21: (v9 >> 32) as i16
        field_23: (v9 >> 48) as i8
        field_24: v5
        field_32: a1
        field_40: a2
        field_48: v11
        field_64: 1
    };
}
