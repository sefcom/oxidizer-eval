fn uu_ls::dired::print_positions(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: core::fmt::Arguments;  // [bp-0x88]
    let v1: struct16;  // [bp-0x58]
    let v2: struct24;  // [bp-0x48]
    let v3: u64;  // [bp-0x40]
    let v4: u64;  // [bp-0x38]
    let v6: struct24;  // rax

    v3 = a0;
    v4 = a1;
    print!("{}", &v3);
    v1 = struct16 {
        field_0: a2
        field_8: a3 * 16 + a2
    };
    v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1);
    if v6 {
        do {
            v2 = v6;
            print!(" {}", &v2);
        } while ((v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v1), v6));
    }
    v0 = core::fmt::Arguments {
        pieces: ["\n"]
        args: []
        fmt: 0
    };
    return std::io::stdio::_print(&v0);
}
