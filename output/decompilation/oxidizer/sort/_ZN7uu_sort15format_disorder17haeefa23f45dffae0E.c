fn uu_sort::format_disorder(a0: i64, a1: u64, a2: i128, a3: u64, a4: u64, a5: u8) -> long long {
    let v0: u64;  // [bp-0x90]
    let v1: u64;  // [bp-0x88]
    let v2: u64;  // [bp-0x80]
    let v3: u64;  // [bp-0x78]
    let v4: &mut [u8];  // [bp-0x70]
    let v5: u8;  // [bp-0x68]

    v0 = a3;
    v1 = a4;
    if !(a5 & 1) {
        v2 = 1;
        v3 = a1;
        v4 = a2;
        v5 = 0;
        return format!("{}:{}: disorder: {}", &v2, &v0, &v1);
    }
    return struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
}
