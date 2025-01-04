fn uu_sort::open(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i64;  // [sp-0x90], Other Possible Types: Result<struct4, struct8>
    let v1: i64;  // [sp-0x80]
    let v2: struct24;  // [sp-0x78], Other Possible Types: i192
    let v3: i8;  // [sp-0x60]
    let v4: i64;  // [sp-0x58]
    let v5: i192;  // [bp-0x50]
    let v7: i64;  // r14
    let v8: i64;  // rdx
    let v9: i64;  // rax

    v7 = <&T as core::convert::AsRef<U>>::as_ref(a1, a2);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "-") as i8 {
        *((a0 + 8) as &long long) = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
        v9 = &g_5fff98;
    } else {
        v0 = std::fs::File::open(v7, v8);
        if v0 {
            v1 = v4;
            v2 = std::sys::pal::unix::os::split_paths::bytes_to_path(v7, v8);
            v5 = v2;
            v4 = v1;
            v3 = 2;
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v3);
            *((a0 + 16) as &&i64) = &g_5ff678;
            *(a0 as &i64) = 1;
            return struct16 {
                field_0: 0
                field_16: <UNKNOWN>
            };
        }
        *((a0 + 8) as &long long) = alloc::boxed::Box<T>::new(*((&v0 as &char + 4) as &i32));
        v9 = &g_5fff40;
    }
    return struct16 {
        field_0: 0
        field_16: <UNKNOWN>
    };
}
