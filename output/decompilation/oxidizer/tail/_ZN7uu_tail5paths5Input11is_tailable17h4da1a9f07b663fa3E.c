fn uu_tail::paths::Input::is_tailable(a0: i64) -> long long {
    let v0: struct32;  // [bp-0x20]
    let v2: i64;  // rsi
    let v3: u64;  // rbx

    v2 = a0;
    if !((((0 ^ *((a0 + 24) as &i64)) & (0 ^ -(*((a0 + 24) as &i64)))) >> 63) as char) {
        return uu_tail::paths::path_is_tailable(*((a0 + 32) as &i64), *((a0 + 40) as &i64));
    }
    v0 = struct32 {
        field_0: uu_tail::paths::Input::resolve(a0)
        field_24: v3
    };
    match v0 {
        Some(_) => {
            return uu_tail::paths::Input::is_tailable::{{closure}}(&v0);
        },
        None => {
            return 0;
        },
    }
}
