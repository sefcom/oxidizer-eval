fn uu_numfmt::format::remove_suffix(a0: &u64, a1: i64, a2: u8, a3: u64) -> u64 {
    let v0: u64;  // [sp-0x78]
    let v1: Arguments;  // [bp-0x70]
    let v2: Argument;  // [bp-0x30]
    let v4: u256;  // ymm0
    let v5: u8;  // al
    let v6: u32;  // r8d

    v0 = v4;
    v5 = a3 - 2 & 4294967295;
    if a2 != 2 {
        v6 = (v5 < 4 ? v5 : 2);
        goto *((4337252 + vvar_5{reg 80} * 4) as &i32) + 4337252;
    } else {
        if !((a3 & 1) && !(v5 < 4 & v5 != 2)) {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v4 as u64
            };
        }
        v2 = Argument {
            value: &v0
            formatter: core::fmt::float::<impl core::fmt::Display for f64>::fmt
        };
        v1 = Arguments {
            pieces: ["missing 'i' suffix in input: '", "' (e.g Ki/Mi/Gi)"]
            args: [&v2]
            fmt: 0
        };
        return core::option::Option<T>::map_or_else(a0, &v1);
    }
}
