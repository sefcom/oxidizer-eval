fn uu_tr::operation::Sequence::parse_char_repeat(a1: i64, a2: i64) -> : struct8 {
    let a0: i64;  // rdi
    let v0: u384;  // [bp-0x60]
    let v1: Result<struct40, struct40>;  // [bp-0x30]
    let v2: struct33;  // [bp-0x28]
    let v4: u64;  // rdi
    let v5: u64;  // rax

    v0 = core::fmt::Arguments {
        pieces: [&g_41e611]
        args: [&g_41e614]
        fmt: &g_41e615
    };
    v1 = nom::sequence::delimited::{{closure}}(&v0, a1, a2);
    v4 = a0 + 8;
    match v1 {
        Ok(_) => {
            uu_tr::operation::Sequence::parse_char_repeat::{{closure}}(v4, &v1);
        },
        Err(_) => {
            *((v4 + 16) as &i128) = *((&v1 as &char + 24) as &i128);
            *(v4 as &struct33) = v2;
            v5 = 1;
        },
    }
    return struct8 {
        field_0: v5
    };
}
