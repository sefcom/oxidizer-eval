fn uu_ln::numbered_backup_path(a0: u64, a1: u64, a2: u64) -> int {
    let v0: i64;  // [sp-0x130]
    let v1: struct24;  // [sp-0x128], Other Possible Types: i192
    let v2: Argument;  // [bp-0x108]
    let v3: i192;  // [sp-0xf8], Other Possible Types: String
    let v4: i1408;  // [bp-0xe0], Other Possible Types: Enum, Arguments
    let v6: i128;  // xmm0
    let v7: i256;  // ymm0

    v0 = 1;
    loop {
        v2 = Argument {
            value: &v0
            formatter: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
        };
        v4 = Arguments {
            pieces: [".~", "~"]
            args: [&v2]
            fmt: None
        };
        v3 = alloc::fmt::format::format_inner(&v4);
        v1 = uu_ln::simple_backup_path(a1, a2, *((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64));
        v4 = std::sys::pal::unix::fs::stat(*((&v1 as &char + 8) as &i64), *((&v1 as &char + 16) as &i64));
        if v4 == 2 {
            *((a0 + 16) as &i64) = *((&v1 as &char + 16) as &i64);
            v6 = v1;
            *(a0 as &i128) = v6;
            return Conv(256->64, ((vvar_95{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_94{reg 224})));
        }
        v0 += 1;
    }
}
