fn uu_sort::open(a1: i64) -> Result<struct16, struct16> {
    let a0: i64;  // rdi
    let v0: Result<struct4, struct8>;  // [bp-0x90]
    let v1: u32;  // [bp-0x8c]
    let v2: alloc::raw_vec::Cap;  // [bp-0x88]
    let v3: alloc::raw_vec::Cap;  // [bp-0x80]
    let v4: std::path::PathBuf;  // [bp-0x78]
    let v5: u64;  // [bp-0x68]
    let v6: struct40;  // [bp-0x60]
    let v8: u64;  // r14
    let v9: u64;  // rdx
    let v10: u64;  // rax
    let v11: u64;  // rax
    let v12: u64;  // rax

    v8 = <&T as core::convert::AsRef<U>>::as_ref(a1);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "-") as i8 {
        *((a0 + 8) as &long long) = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
        v10 = &g_5fbff8;
    }
    v0 = std::fs::File::open(v8, v9);
    match v0 {
        Ok(_) => {
            v11 = &g_5fbef8;
            return Ok(struct16 {
                field_0: alloc::boxed::Box<T>::new(v1 as u64)
                field_8: v12
            });
        },
        Err(v3) => {
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
                field_8: &g_5fbf88
            });
        },
    }
}
