fn uu_stty::print_in_save_format(a0: i64) -> long long {
    let v0: u8;  // [bp-0xbc]
    let v1: u32;  // [bp-0xb8]
    let v2: u32;  // [bp-0xb4]
    let v3: core::fmt::Arguments;  // [bp-0xb0]
    let v4: struct48;  // [bp-0x70]
    let v5: u32;  // [bp-0x40]
    let v7: u8;  // dl

    v1 = *((a0 + 104) as &i32);
    v2 = *((a0 + 108) as &i32);
    v0 = *((a0 + 112) as &i32);
    v5 = *((a0 + 116) as &i32);
    print!("{}:{}:{}:{}", &v1, &v2, &v0, &v5 as u64);
    v4 = struct48 {
        field_0: 0
        field_8: 32
        field_16: *(a0 as &i128)
        field_32: *((a0 + 16) as &i128)
    };
    if (core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v4) & 1) {
        do {
            v0 = v7;
            print!(":{}", &v0 as u32);
        } while ((core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v4) & 1));
    }
    v3 = core::fmt::Arguments {
        pieces: ["\n"]
        args: []
        fmt: 0
    };
    return std::io::stdio::_print(&v3);
}
