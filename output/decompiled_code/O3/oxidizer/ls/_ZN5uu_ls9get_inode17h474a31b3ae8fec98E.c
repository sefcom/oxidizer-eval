fn uu_ls::get_inode(a0: u32, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x48]
    let v1: Argument;  // [bp-0x40]
    let v2: Arguments;  // [bp-0x30]

    v0 = a1;
    v1 = Argument {
        value: &v0
        formatter: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
    };
    v2 = Arguments {
        pieces: [""]
        args: [&v1]
        fmt: 0
    };
    return core::option::Option<T>::map_or_else(a0, &v2);
}
