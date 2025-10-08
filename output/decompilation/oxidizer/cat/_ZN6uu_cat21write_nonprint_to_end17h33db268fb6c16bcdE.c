fn uu_cat::write_nonprint_to_end(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: core::fmt::Arguments;  // [bp-0x42]
    let v1: struct2;  // [bp-0x41]
    let v2: struct4;  // [bp-0x3f]
    let v3: struct4;  // [bp-0x3b]
    let v5: i64;  // rbx
    let v6: u64;  // rax
    let v9: struct16;  // rdx
    let v10: u64;  // 4096
    let v11: Result<struct4, struct1>;  // rsi
    let v22: core::result::Result<(), std::io::error::Error>;  // rax

    if !a1 {
        return 0;
    }
    loop {
        v6 = *((a0 + v5) as &i8);
        if v6 == 9 {
            v9 = a4;
            v10 = a2;
            v11 = a3;
        } else if v6 == 127 {
            v9 = 2;
            v10 = a2;
            v11 = &g_41ad9e;
        } else if v6 == 10 {
            return v5;
        } else if (v6 & 255) < 32 {
            v1 = struct2 {
                field_0: 94
                field_1: v6 as u8 | 64
            };
            v9 = 2;
            v10 = a2;
            v11 = &v1;
        } else if (v6 - 32 & 255) < 95 {
            v0 = v6;
            v9 = 1;
            v10 = a2;
            v11 = &v0;
        } else if v6 < 160 {
            v2 = struct4 {
                field_0: 11597
                field_2: 94
                field_3: v6 as u8 - 64
            };
            v9 = 4;
            v10 = a2;
            v11 = &v2;
        } else if v6 + 96 < 95 {
            v3 = struct4 {
                field_0: 11597
                field_2: v6 as u8 & 127
            };
            v9 = 3;
            v10 = a2;
            v11 = &v3;
        } else {
            v9 = 4;
            v10 = a2;
            v11 = &g_4195d4;
        }
        v22 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(v10, v11, v9);
        core::result::Result<T,E>::unwrap(v22, "src/uu/cat/src/cat.rs");
        v5 += 1;
        if a1 == v5 {
            return a1;
        }
    }
}
