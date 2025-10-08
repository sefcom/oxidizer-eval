fn uu_mv::handle_multiple_paths(a0: i64, a1: u64, a2: i64) -> long long {
    let v0: u64;  // [bp-0x88]
    let v1: u64;  // [bp-0x80]
    let v2: u64;  // [bp-0x78]
    let v3: u8;  // [bp-0x70]
    let v4: alloc::string::String;  // [bp-0x38]
    let v7: u64;  // rax
    let v8: u64;  // rdx

    if !*((a2 + 48) as &i8) {
        core::option::unwrap(a1);
        v7 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(a1 - 1, a0, a1);
        return uu_mv::move_files_into_dir(v7, v8, *((a0 + (a1 - 1) * 24 + 8) as &i64), *((a0 + (a1 - 1) * 24 + 16) as &i64), a2);
    }
    v0 = 1;
    v1 = *((a0 + 56) as &i64);
    v2 = *((a0 + 64) as &i64);
    v3 = 1;
    v4 = format!("mv: extra operand {}", &v0);
    return alloc::boxed::Box<T>::new(&v4) as u64;
}
