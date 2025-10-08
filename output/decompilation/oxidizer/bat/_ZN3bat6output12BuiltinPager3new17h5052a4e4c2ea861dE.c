fn bat::output::BuiltinPager::new(a0: i64) -> long long {
    let v0: Result<struct80, struct9>;  // [bp-0xb8], Other Possible Types: struct24
    let v1: struct16;  // [bp-0xa8]
    let v2: struct40;  // [bp-0x90]
    let v3: struct32;  // [bp-0x88]
    let v4: struct24;  // [bp-0x78]
    let v5: struct32;  // [bp-0x68]
    let v6: struct32;  // [bp-0x48]
    let v7: iNone;  // [bp-0x48]
    let v8: struct24;  // [bp-0x28]

    v3 = minus::pager::Pager::new();
    v6 = <minus::pager::Pager as core::clone::Clone>::clone(&v3);
    v5 = v7;
    v1 = 0x8000000000000000;
    v0 = 0;
    v2 = 0;
    v8 = std::thread::Builder::spawn_unchecked(&v0, &v5);
    v0 = core::result::Result<T,E>::expect(&v8);
    return struct56 {
        field_0: v3.field_0
        field_16: v4
        field_32: v0.field_0
        field_48: 0x8000000000000000
    };
}
