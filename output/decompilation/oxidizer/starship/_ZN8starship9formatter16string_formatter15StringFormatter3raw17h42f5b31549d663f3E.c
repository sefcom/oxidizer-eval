fn starship::formatter::string_formatter::StringFormatter::raw(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: i8;  // [bp-0x28]
    let v2: i64;  // rax

    v2 = alloc::alloc::Global::alloc_impl(8, 48, 0);
    *(v2 as &i64) = 0x8000000000000000;
    *((v2 + 8) as &i64) = 0x8000000000000000;
    *((v2 + 16) as &u64) = a1;
    *((v2 + 24) as &u64) = a2;
    *((v2 + 32) as &i128) = *(&v0 as &i128);
    return struct72 {
        field_0: 1
        field_8: v2
        field_16: 1
        field_24: 0
        padding_32: <UNKNOWN>
        field_40: 0
        padding_56: <UNKNOWN>
        field_64: 0
    };
}
