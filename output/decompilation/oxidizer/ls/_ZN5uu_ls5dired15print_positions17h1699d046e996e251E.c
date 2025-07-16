fn uu_ls::dired::print_positions(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: u384;  // [bp-0x88]
    let v1: u64;  // [bp-0x58]
    let v2: struct24;  // [bp-0x50]
    let v3: struct24;  // [bp-0x48]
    let v4: u64;  // [bp-0x40]
    let v5: u64;  // [bp-0x38]
    let v7: struct24;  // rax

    v4 = a0;
    v5 = a1;
    print!("{}", &v4);
    v1 = a2;
    v2 = a3 * 16 + a2;
    v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
    if v7 {
        do {
            v3 = v7;
            print!(" {}", &v3);
        } while ((v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1), v7));
    }
    v0 = core::fmt::Arguments {
        pieces: ["\n"]
        args: []
        fmt: 0
    };
    return std::io::stdio::_print(&v0);
}
