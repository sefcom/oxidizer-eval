fn uu_touch::stat(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i8;  // [sp-0x178], Other Possible Types: Result<struct176, struct16>
    let v1: Result<struct176, struct16>;  // [sp-0xc8], Other Possible Types: i1408
    let v3: i64;  // rax
    let v4: i32;  // ecx
    let v5: i64;  // rdx
    let v6: i32;  // esi

    if !a3 {
        v0 = std::fs::symlink_metadata(a1, a2);
        if v0 == 2 {
            return struct16 {
                field_0: 1
                field_8: *((&v0 as &char + 8) as &i64)
            };
        }
    } else {
        v1 = std::fs::metadata(a1, a2);
        match v1 {
            Ok(_) => {
                memcpy(&v0, &v1, 176);
            },
            Err(_) => {
                uu_touch::stat::{{closure}}(&v0, a1, a2, *((&v1 as &char + 8) as &i64));
                if v0 == 2 {
                    return struct16 {
                        field_0: 1
                        field_8: *((&v0 as &char + 8) as &i64)
                    };
                }
            },
        }
    }
    v4 = *((&v0 as &char + 112) as &i32);
    v5 = *((&v0 as &char + 120) as &i64);
    v6 = *((&v0 as &char + 128) as &i32);
    v3 = 0;
    return struct32 {
        field_0: v3
        field_8: *((&v0 as &char + 104) as &i64)
        field_16: v4
        field_24: <UNKNOWN>
        field_32: <UNKNOWN>
    };
}
