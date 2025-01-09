fn uu_join::parse_file_number(a0: &Result<struct16, struct1>, a1: u32, a2: u32) -> u64 {
    let v0: &u8;  // [sp-0x98]
    let v1: u64;  // [sp-0x90]
    let v2: void*;  // [sp-0x88]
    let v3: u64;  // [sp-0x80]
    let v4: u64;  // [sp-0x78]
    let v5: u8;  // [sp-0x70]
    let v6: u64;  // [sp-0x68]
    let v7: u64;  // [sp-0x60]
    let v8: &&struct_0;  // [sp-0x58]
    let v9: u64;  // [sp-0x50]
    let v10: void*;  // [sp-0x48]
    let v11: u8;  // [bp-0x38]
    let v12: u32;  // [sp-0x20]
    let v14: u64;  // rax

    v14 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "1");
    if v14 {
        return Err(struct1 {
            field_0: 0
        });
    }
    v14 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "2");
    if !v14 {
        v2 = 0;
        v3 = a1;
        v4 = a2;
        v5 = 1;
        v0 = &v2;
        v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        v6 = "invalid file number: ";
        v7 = 1;
        v10 = 0;
        v8 = &v0;
        v9 = 1;
        core::option::Option<T>::map_or_else();
        v12 = 1;
        *(&a0->field_0 as &double) = alloc::boxed::Box<T>::new(&v11);
        v14 = &g_5352b8;
        *(&a0->field_8 as &&u8) = &g_5352b8;
    }
    a0->field_8 = 1;
}
