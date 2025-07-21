fn uu_sort::open(a1: i64, a2: i64) -> Result<struct16, struct16> {
    let a0: i64;  // rdi
    let v0: alloc::raw_vec::Cap;  // [bp-0x90]
    let v1: u32;  // [bp-0x8c]
    let v2: u64;  // [bp-0x88]
    let v3: core::fmt::Arguments;  // [bp-0x80]
    let v4: std::path::PathBuf;  // [bp-0x78]
    let v5: struct16;  // [bp-0x68]
    let v6: struct40;  // [bp-0x60]
    let v8: u64;  // r14
    let v9: u64;  // rdx
    let v10: u64;  // rcx
    let v11: u64;  // rax
    let v12: u64;  // rax
    let v13: u64;  // rax

    v8 = <&T as core::convert::AsRef<U>>::as_ref(a1, a2);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "-") as i8 {
        *((a0 + 8) as &long long) = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
        v11 = &g_5fff98;
    }
    std::fs::File::open(v8, v9, v10);
    if !v0 {
        v12 = &g_5fff40;
        return Ok(struct16 {
            field_0: alloc::boxed::Box<T>::new(v1)
            field_8: v13
        });
    }
    v3 = v2;
    v4 = std::sys::pal::unix::os::split_paths::bytes_to_path(v8, v9);
    v6 = struct40 {
        field_0: 2
        padding_1: <UNKNOWN>
        field_8: v3
        field_16: *(&v4.inner.inner.inner.buf.cap as &i128)
        field_32: v5
    };
    return Err(struct16 {
        field_0: alloc::boxed::Box<T>::new(&v6)
        field_8: &g_5ff678
    });
}
