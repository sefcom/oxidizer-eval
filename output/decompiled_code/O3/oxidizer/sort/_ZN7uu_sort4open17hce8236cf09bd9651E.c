fn uu_sort::open(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i64;  // [sp-0x90], Other Possible Types: Result<struct4, struct8>
    let v1: i64;  // [sp-0x80]
    let v2: struct24;  // [sp-0x78], Other Possible Types: i192
    let v3: i8;  // [sp-0x60]
    let v4: i64;  // [sp-0x58]
    let v5: i128;  // [sp-0x50]
    let v6: i64;  // [sp-0x40]
    let v8: i64;  // r14
    let v9: i64;  // rdx
    let v10: i64;  // rax

    v8 = <&T as core::convert::AsRef<U>>::as_ref(a1);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "-") as i8 {
        *((a0 + 8) as &long long) = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
        v10 = &g_5ff470;
    } else {
        v0 = std::fs::File::open(v8, v9);
        if v0 {
            v1 = v4;
            v2 = std::sys::pal::unix::os::split_paths::bytes_to_path(v8, v9);
            v6 = *((&v2 as &char + 16) as &i64);
            v5 = v2;
            v4 = v1;
            v3 = 2;
            *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v3);
            *((a0 + 16) as &&i64) = &g_5feb50;
            *(a0 as &i64) = 1;
            return struct16 {
                field_0: 0
                field_16: <UNKNOWN>
            };
        }
        *((a0 + 8) as &long long) = alloc::boxed::Box<T>::new(*((&v0 as &char + 4) as &i32));
        v10 = &g_5ff418;
    }
    return struct16 {
        field_0: 0
        field_16: <UNKNOWN>
    };
}
