fn uu_sort::open(a0: i64, a1: void*) -> long long {
    let v0: Result<struct4, struct8>;  // [bp-0x90]
    let v1: u32;  // [bp-0x8c]
    let v2: struct8;  // [bp-0x88]
    let v3: struct8;  // [bp-0x80]
    let v4: std::path::PathBuf;  // [bp-0x78]
    let v5: u64;  // [bp-0x68]
    let v6: struct40;  // [bp-0x60]
    let v8: u64;  // r14
    let v9: u64;  // rdx
    let v10: u64;  // rax
    let v11: u64;  // rax
    let v12: u64;  // rax

    v8 = <&T as core::convert::AsRef<U>>::as_ref(a1);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "-") {
        v10 = &g_58a3e0;
        return struct24 {
            field_0: 0
            field_8: alloc::boxed::Box<T>::new(std::io::stdio::stdin())
            field_16: v11
        };
    }
    v0 = std::fs::File::open(v8, v9);
    match v0 {
        Ok(_) => {
            *((a0 + 8) as &u64) = alloc::boxed::Box<T>::new(v1 as u64);
            v12 = &g_58a300;
        },
        Err(v3) => {
            v4 = std::sys::pal::unix::os::split_paths::bytes_to_path(v8, v9);
            v6 = struct40 {
                field_0: 9223372036854775810
                field_8: *(&v4.inner.inner.inner.buf.inner.cap as &i128)
                field_24: v5
                field_32: v3
            };
            return struct24 {
                field_0: 1
                field_8: alloc::boxed::Box<T>::new(&v6) as u64
                field_16: &g_58a378
            };
        },
    }
}
