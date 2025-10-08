fn uu_echo::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: std::io::stdio::Stdout;  // [bp-0xd8], Other Possible Types: struct48, struct24
    let v1: u64;  // [bp-0xd8]
    let v2: void*;  // [bp-0xd0]
    let v3: u32;  // [bp-0xc8]
    let v4: struct48;  // [bp-0xa8], Other Possible Types: u64
    let v5: struct24;  // [bp-0xa8]
    let v6: void*;  // [bp-0xa0]
    let v7: u64;  // [bp-0x98]
    let v8: struct24;  // [bp-0x90]
    let v9: struct24;  // [bp-0x78]
    let v10: iNone;  // [bp-0x78]
    let v12: core::iter::adapters::skip::Skip<core::iter::adapters::zip::Zip<core::slice::iter::Iter<u16>, core::slice::iter::IterMut<u32>>>;  // [bp-0x60]
    let v13: struct24;  // [bp-0x60]
    let v16: u8;  // bl
    let v17: u8;  // bpl

    v0 = std::env::var_os();
    v12 = core::iter::traits::iterator::Iterator::skip(a0, a1);
    if (((0 ^ v0.field_0) & (0 ^ -(v1))) >> 63) as char {
        uu_echo::filter_echo_flags(&v0, &v12);
    } else {
        v8 = v13;
        v5 = 9223372036854775809;
        core::option::Option<T>::get_or_insert_with(&v5, &v8);
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-n");
        if v5 != 0x8000000000000000 && <std::ffi::os_str::OsString as core::cmp::PartialEq>::eq(v6, v7, v2, v3) {
            v0 = v4;
            uu_echo::filter_echo_flags(&v12 as u8, &v0);
        } else {
            v0 = v4;
            core::iter::traits::iterator::Iterator::collect(&v10 as u8, &v0);
        }
    }
    v0 = std::io::stdio::stdout();
    v4 = std::io::stdio::Stderr::lock(&v0);
    v0 = v9;
    return uu_echo::execute(&v4, &v0, v16, v17);
}
