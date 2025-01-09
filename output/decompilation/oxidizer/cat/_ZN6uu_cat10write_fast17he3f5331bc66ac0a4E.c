fn uu_cat::write_fast(a0: &Option<Result<struct25, struct8>>, a1: u32) -> u64 {
    let <0x4af950[is_3]|Stack bp-0x10030, 1 B>: i64;  // [bp-0x10030]
    let v0: i64;  // [sp-0x10058]
    let v1: i64;  // [sp-0x10048]
    let v2: i64;  // [sp-0x10040]
    let v3: i64;  // [sp-0x10038]
    let v4: Result<struct4, struct1>;  // [sp-0x10030], Other Possible Types: i96
    let v6: i64;  // [sp-0x2030]
    let v12: i64;  // rdx

    do {
        v6 = 0;
    } while (&v6 != &<0x4af950[is_3]|Stack bp-0x10030, 1 B>);
    v3 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v3);
    v4 = uu_cat::splice::write_fast_using_splice(a1, &v0);
    if v4 != 9223372036854775814 {
        return Some(struct25 {
            field_0: v8
            field_8: v9
            field_9: v10
            field_16: <UNKNOWN>
        });
    } else if !*((&v4 as &char + 8) as &i8) {
        return struct8 {
            field_0: 9223372036854775814
        };
    } else {
        memset(&v4, 0, 0x10000);
        loop {
            v1 = <std::fs::File as std::io::Read>::read(a1, &v4, 0x10000);
            v2 = v12;
            if !(!v1) || !(v12) {
                break;
            }
        }
        if <std::io::stdio::StdoutLock as std::io::Write>::flush(&v0) {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v13
            };
        }
        return struct8 {
            field_0: 9223372036854775814
        };
    }
}
