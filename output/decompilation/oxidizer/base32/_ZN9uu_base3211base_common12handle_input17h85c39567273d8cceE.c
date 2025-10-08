fn uu_base32::base_common::handle_input(a0: void*, a1: i64) -> long long {
    let v0: u64;  // [bp-0x48]
    let v1: Result<struct16, struct9>;  // [bp-0x40], Other Possible Types: std::io::stdio::Stdout
    let v3: u64;  // r15
    let v4: void*;  // rdx
    let v5: u64;  // rax

    v1 = uu_base32::base_common::has_padding(a0);
    if let Err(_) = v1 {
        v3 = uu_base32::base_common::get_supports_fast_decode_and_encode(2) as u64;
        v1 = std::io::stdio::stdout();
        v0 = std::io::stdio::Stderr::lock(&v1) as u64;
        v5 = (!*((a1 + 40) as &i8) ? uu_base32::base_common::fast_encode::fast_encode(a0, &g_50cf10, &v0, &g_50cf68, v3, v4, *(a1 as &i128) as i64, *(a1 as &i128) as i64) : uu_base32::base_common::fast_decode::fast_decode(a0, &g_50cf10, &v0, &g_50cf68, v3, v4, *((a1 + 41) as &i8)));
    }
    return v5;
}
