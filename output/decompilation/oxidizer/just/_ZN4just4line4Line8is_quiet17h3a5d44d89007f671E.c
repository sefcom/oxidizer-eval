fn just::line::Line::is_quiet(a0: void*, a1: u64) -> long long {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: u32;  // rdx

    v0 = v2;
    v3 = just::line::Line::first(a0, a1);
    if v3 {
        return just::line::Line::is_quiet::{{closure}}(v3, v4);
    }
    return 0;
}
