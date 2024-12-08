fn uu_join::parse_file_number(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: void*;  // [sp-0x88]
    let v1: u64;  // [sp-0x80]
    let v2: u64;  // [sp-0x78]
    let v3: u8;  // [sp-0x70]
    let v4: u8;  // [bp-0x38]
    let v5: u32;  // [sp-0x20]
    let v7: u64;  // rax

    v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "1");
    if v7 {
        a0->field_8 = 0;
    } else {
        v7 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "2");
        if !v7 {
            v0 = 0;
            v1 = a1;
            v2 = a2;
            v3 = 1;
            format!("invalid file number: {:?}", &v0);
            v5 = 1;
            *(&a0->field_0 as &double) = alloc::boxed::Box<T>::new(&v4);
            *(&a0->field_8 as &&u8) = &g_535e48;
            return &g_535e48;
        }
        a0->field_8 = 1;
    }
    return struct8 {
        field_0: 0
    };
}
