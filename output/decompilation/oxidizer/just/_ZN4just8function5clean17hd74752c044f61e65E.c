fn just::function::clean(a0: i64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x38], Other Possible Types: struct24
    let v1: void*;  // [bp-0x30]
    let v2: u64;  // [bp-0x28]
    let v3: struct24;  // [bp-0x20]
    let v4: u64;  // [bp-0x18]

    v3 = <&std::path::Path as lexiclean::Lexiclean>::lexiclean(a2, a3);
    v0 = core::str::converts::from_utf8(v4, v3.field_16);
    core::option::unwrap(v0);
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v1, v2);
    return struct32 {
        field_0: 0
        field_8: v0.field_0
        field_24: v2
    };
}
