fn forc_crypto::keys::vanity::Arg::validate(a0: i64) -> long long {
    let v0: struct40;  // [bp-0x48]
    let v2: std::io::stdio::Stdin;  // rdi
    let v3: struct120;  // rax
    let v4: i64;  // rdi

    v2 = a0 + 16;
    v3 = core::option::Option<T>::map_or(v2);
    if core::option::Option<T>::map_or(v4) + v3 >= 65 {
        v0 = struct40 {
            field_0: "Combined pattern length exceeds 64 characters"
            field_8: 1
            field_16: 8
            field_24: 0
        };
        return anyhow::__private::format_err(&v0);
    }
    return 0;
}
