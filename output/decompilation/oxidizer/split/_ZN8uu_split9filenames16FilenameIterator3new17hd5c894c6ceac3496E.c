fn uu_split::filenames::FilenameIterator::new(a0: &Result<struct65, struct16>, a1: u64, a2: u64, a3: void*) -> u64 {
    let v0: struct25;  // [sp-0x68]
    let v1: struct24;  // [sp-0x48]
    let v2: i32;  // [sp-0x30]

    if !*((a3 + 40) as &i8) {
        v0 = uu_split::number::FixedWidthNumber::new(1051162 >> ((*((a3 + 41) as &i8) & 255) * 8 & 31) & 4294967295, *((a3 + 24) as &i64), *((a3 + 32) as &i64));
        if v0.field_0 as i64 == 0x8000000000000000 {
            v1 = <T as alloc::slice::hack::ConvertVec>::to_vec();
            v2 = 1;
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v1);
            *((a0 + 16) as &&i64) = &g_549160;
            *(a0 as &i64) = 9223372036854775809;
        }
    }
    return Ok(struct66 {
        field_0: v9
        field_8: v8
        field_16: v6 as u8
        field_17: v10 as u32
        field_21: (v10 >> 32) as u16
        field_23: (v10 >> 48) as u8
        field_24: v5
        field_32: a1
        field_40: a2
        field_48: v15
        field_64: 1
    });
}
