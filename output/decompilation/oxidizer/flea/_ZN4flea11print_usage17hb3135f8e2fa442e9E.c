fn flea::print_usage(a0: u64, a1: u64, a2: u64) -> void {
    let v0: u64;  // [bp-0xb0]
    let v1: u64;  // [bp-0xa8]
    let v2: i64;  // [bp-0xa0]
    let v3: u64;  // [bp-0x98]
    let v4: void*;  // [bp-0x90]
    let v5: struct24;  // [bp-0x80], Other Possible Types: struct_0 *
    let v6: u64;  // [bp-0x78]
    let v7: u128;  // [bp-0x68]
    let v8: u64;  // [bp-0x60]
    let v9: u64;  // [bp-0x58]
    let v10: u64;  // [bp-0x48]
    let v11: u64;  // [bp-0x40]
    let v12: alloc::string::String;  // [bp-0x28]
    let v14: u64;  // rcx
    let v15: u64;  // r8

    v10 = a0;
    v11 = a1;
    v5 = &v10;
    v6 = <&T as core::fmt::Display>::fmt;
    v0 = "Usage: ";
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    v12 = core::option::Option<T>::map_or_else(&v0, a2, v14, v15);
    v7 = *(&v12.vec.buf.inner.cap as &i128);
    v9 = v12.vec.len;
    v5 = getopts::Options::usage(a2, v8, v12.vec.len);
    println!("{}", &v5);
    return;
}
