fn uu_ls::dired::print_positions(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: core::fmt::Arguments;  // [bp-0x78]
    let v1: u64;  // [bp-0x48]
    let v2: u64;  // [bp-0x40]
    let v3: u64;  // [bp-0x38]
    let v5: u64;  // rbx
    let v6: u64;  // rbx
    let v7: u64;  // rbx

    v2 = a0;
    v3 = a1;
    print!("{}", &v2);
    if a3 {
        do {
            v6 = v5;
            v1 = a2;
            a2 += 16;
            print!(" {}", &v1);
            v7 = v6 - 16;
            v5 = v7;
        } while (v6 != 16);
    }
    v0 = core::fmt::Arguments {
        pieces: ["\n"]
        args: []
        fmt: 0
    };
    return std::io::stdio::_print(&v0);
}
