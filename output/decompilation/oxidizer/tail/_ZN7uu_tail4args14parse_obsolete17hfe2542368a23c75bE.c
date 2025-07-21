fn uu_tail::args::parse_obsolete(a0: &struct80, a1: i64, a2: i64) -> long long {
    let v0: alloc::borrow::Cow<str>;  // [bp-0xa8]
    let v1: struct11;  // [bp-0x90], Other Possible Types: struct80
    let v3: u32;  // eax
    let v4: u64;  // rcx

    v1 = uu_tail::parse::parse_obsolete(a1);
    v3 = v1.field_10;
    if v3 == 2 {
        v0 = std::sys::os_str::bytes::Slice::to_string_lossy(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    } else if v3 == 3 {
        return struct8 {
            field_0: 5
        };
    } else {
        v1 = uu_tail::args::Settings::from_obsolete_args(a2, v4);
        return a0;
    }
}
