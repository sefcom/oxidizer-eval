fn metal_crusher::fun::run_in_terminal(a0: u64, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: struct32;  // [bp-0x78]
    let v1: Result<struct64, struct16>;  // [bp-0x58], Other Possible Types: struct24
    let v2: struct248;  // [bp-0x48]
    let v3: u8;  // [bp-0x30]
    let v4: struct24;  // [bp-0x28]

    v0 = struct32 {
        field_0: a0
        field_8: a1
        field_16: a2
        field_24: a3
    };
    v2 = 0x8000000000000000;
    v1 = 0;
    v3 = 0;
    v4 = std::thread::Builder::spawn_unchecked(&v1, &v0);
    v1 = core::result::Result<T,E>::expect(&v4);
    return 0;
}
