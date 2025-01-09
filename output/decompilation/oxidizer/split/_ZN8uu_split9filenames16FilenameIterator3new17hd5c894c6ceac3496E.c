fn uu_split::filenames::FilenameIterator::new(a0: &Result<struct57, struct16>, a1: u64, a2: u64, a3: void*) -> u64 {
    let v0: i208;  // [sp-0x68], Other Possible Types: struct25
    let v1: struct24;  // [sp-0x48], Other Possible Types: i192
    let v2: i32;  // [sp-0x30]

    if !*((a3 + 40) as &i8) {
        v0 = uu_split::number::FixedWidthNumber::new(1051162 >> ((*((a3 + 41) as &i8) & 255) * 8 & 31) & 4294967295, *((a3 + 24) as &i64), *((a3 + 32) as &i64));
        if v0 == 0x8000000000000000 {
            v1 = <T as alloc::slice::hack::ConvertVec>::to_vec();
            v2 = 1;
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v1);
            *((a0 + 16) as &&i64) = &g_549160;
            *(a0 as &i64) = 9223372036854775809;
        }
    }
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
