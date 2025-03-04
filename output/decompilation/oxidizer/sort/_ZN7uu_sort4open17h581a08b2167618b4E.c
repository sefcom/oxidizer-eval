fn uu_sort::open(a0: &struct24, a1: u64) -> u64 {
    let v0: Result<struct4, struct8>;  // [sp-0x90]
    let v1: i64;  // [sp-0x80]
    let v2: struct24;  // [sp-0x78]
    let v3: i8;  // [sp-0x60]
    let v4: i64;  // [sp-0x58]
    let v5: struct24;  // [sp-0x50]
    let v7: i64;  // r14
    let v8: i64;  // rdx

    v7 = <&T as core::convert::AsRef<U>>::as_ref(a1);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "-") as i8 {
        *((a0 + 8) as &long long) = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
    } else {
        v0 = std::fs::File::open(v7, v8);
        match v0 {
            Err(_) => {
                v1 = v4;
                v2 = std::sys::pal::unix::os::split_paths::bytes_to_path(v7, v8);
                v5 = v2;
                v4 = v1;
                v3 = 2;
                *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v3);
                *((a0 + 16) as &&i64) = &g_5ff678;
                *(a0 as &i64) = 1;
            },
            Ok(_) => {
                *((a0 + 8) as &long long) = alloc::boxed::Box<T>::new(*((&v0 as &char + 4) as &i32) as u32 as u64);
            },
        }
    }
    return struct16 {
        field_0: 0
        field_16: <UNKNOWN>
    };
}
