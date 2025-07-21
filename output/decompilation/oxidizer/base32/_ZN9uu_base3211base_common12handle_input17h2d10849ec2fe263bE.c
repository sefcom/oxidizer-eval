fn uu_base32::base_common::handle_input(a0: &struct16, a1: i8, a2: &struct48) -> long long {
    let v0: std::io::stdio::StderrLock;  // [bp-0x38]
    let v1: std::io::stdio::Stdout;  // [bp-0x30]
    let v3: u64;  // r15
    let v4: void*;  // rdx

    v3 = uu_base32::base_common::get_supports_fast_decode_and_encode(a1) as u64;
    v1 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v1);
    return (!*((a2 + 40) as &i8) ? uu_base32::base_common::fast_encode::fast_encode(a0, &v0, v3, v4, *(a2 as &i64), *((a2 + 8) as &i64)) : uu_base32::base_common::fast_decode::fast_decode(a0, &v0, v3, v4, *((a2 + 41) as &i8)));
}
