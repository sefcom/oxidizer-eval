fn firecracker::_::<impl core::fmt::Display for firecracker::RunWithoutApiError>::fmt(a0: i64, a1: u64, a2: u64) -> long long {
    let v1: i64;  // [bp-0x40]
    let v3: struct40;  // [bp-0x30]
    let v5: struct12;  // rax

    v3 = struct40 {
        field_0: v5
        field_8: 1
        field_16: &v1
        field_24: ""
    };
    return core::fmt::Formatter::write_fmt(a1, a2, &v3);
}
