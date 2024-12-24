fn uu_mv::handle_multiple_paths(a0: &struct_1, a1: u64, a2: &struct_0, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: u64;  // [sp-0x58]
    let v1: u128;  // [sp-0x50]
    let v2: u8;  // [sp-0x40]
    let v3: u192;  // [sp-0x38], Other Possible Types: i192
    let v4: u32;  // [sp-0x20]
    let v6: u64;  // rax
    let v7: u64;  // rdx
    let v8: u64;  // r9

    if a2->field_30 {
        v0 = 1;
        v1 = *(&(&a0->padding_0)[1] as &i128);
        v2 = 1;
        v3 = format!("mv: extra operand {:?}", &v0);
        v4 = 1;
        v6 = alloc::boxed::Box<T>::new(&v3);
        return v6;
    } else if !a1 {
        core::option::unwrap_failed(); /* do not return */
    } else {
        v6 = uu_mv::move_files_into_dir(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1 - 1, a0, a1), v7, *(&a0->padding_0[16 + 24 * a1] as &i64), *(&a0->padding_0[8 + 24 * a1] as &i64), a2, v8);
        return v6;
    }
}
