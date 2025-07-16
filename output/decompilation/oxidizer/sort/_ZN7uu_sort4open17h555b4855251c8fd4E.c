fn uu_sort::open(a1: i64) -> Result<struct16, struct16> {
    let a0: i64;  // rdi
    let v0: Result<struct4, struct8>;  // [bp-0x90]
    let v1: u32;  // [bp-0x8c]
    let v2: struct8;  // [bp-0x88]
    let v3: struct8;  // [bp-0x80]
    let v4: std::path::PathBuf;  // [bp-0x78]
    let v5: u64;  // [bp-0x68]
    let v6: u8;  // [bp-0x60]
    let v7: struct8;  // [bp-0x58]
    let v8: u8;  // [bp-0x50]
    let v9: u64;  // [bp-0x40]
    let v11: u64;  // r14
    let v12: u64;  // rdx
    let v13: u64;  // rax
    let v14: u64;  // rax
    let v15: u64;  // rax

    v11 = <&T as core::convert::AsRef<U>>::as_ref(a1);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v12, "-") as i8 {
        v13 = &g_5fbff8;
        return Ok(struct16 {
            field_0: alloc::boxed::Box<T>::new(std::io::stdio::stdin())
            field_8: v14
        });
    }
    v0 = std::fs::File::open(v11, v12);
    match v0 {
        Ok(_) => {
            *((a0 + 8) as &long long) = alloc::boxed::Box<T>::new(v1 as u64);
            v15 = &g_5fbef8;
        },
        Err(v3) => {
            v4 = std::sys::pal::unix::os::split_paths::bytes_to_path(v11, v12);
            v9 = v5;
            memcpy(&v8, &v4, 16);
            v7 = v3;
            v6 = 2;
            return Err(struct16 {
                field_0: alloc::boxed::Box<T>::new(&v6)
                field_8: &g_5fbf88
            });
        },
    }
}
