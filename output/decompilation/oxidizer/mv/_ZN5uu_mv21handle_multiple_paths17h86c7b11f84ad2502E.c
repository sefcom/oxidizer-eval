fn uu_mv::handle_multiple_paths(a0: void*, a1: u32, a2: void*) -> u64 {
    let v0: &u8;  // [sp-0x98]
    let v1: u64;  // [sp-0x90]
    let v2: u64;  // [sp-0x88]
    let v3: u64;  // [sp-0x80]
    let v4: &&struct_1;  // [sp-0x78]
    let v5: u64;  // [sp-0x70]
    let v6: void*;  // [sp-0x68]
    let v7: u64;  // [sp-0x58]
    let v8: u128;  // [sp-0x50]
    let v9: u8;  // [sp-0x40]
    let v10: u8;  // [bp-0x38]
    let v11: u32;  // [sp-0x20]
    let v13: u64;  // rax

    if a2->field_30 {
        v7 = 1;
        v8 = *(&(&a0->padding_0)[1] as &i128);
        v9 = 1;
        v0 = &v7;
        v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        v2 = "mv: extra operand ";
        v3 = 1;
        v6 = 0;
        v4 = &v0;
        v5 = 1;
        core::option::Option<T>::map_or_else();
        v11 = 1;
        v13 = alloc::boxed::Box<T>::new(&v10);
        return v13;
    } else if !a1 {
        core::option::unwrap_failed("src/uu/mv/src/mv.rs"); /* do not return */
    } else {
        <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1 - 1, a0, a1);
        v13 = uu_mv::move_files_into_dir();
        return v13;
    }
}
