fn bat::line_range::LineRanges::all(a0: i64) -> long long {
    let v0: struct24;  // [bp-0x20]
    let v2: i64;  // rax

    v2 = alloc::alloc::Global::alloc_impl(8, 32, 0);
    *(v2 as &i128) = 0;
    *((v2 + 16) as &i64) = 0;
    *((v2 + 24) as &i64) = -1;
    v0 = struct24 {
        field_0: 1
        field_8: v2
        field_16: 1
    };
    bat::line_range::LineRanges::from(a0, &v0);
    return a0;
}
