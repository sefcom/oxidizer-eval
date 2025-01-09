fn uu_ls::dired::print_positions(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: Arguments;  // [bp-0x88]
    let v1: u128;  // [bp-0x70]
    let v2: u64;  // [sp-0x58]
    let v3: u64;  // [sp-0x50]
    let v4: struct8;  // [sp-0x48]
    let v5: u64;  // [sp-0x40]
    let v6: u64;  // [sp-0x38]
    let v8: struct8;  // rax

    v5 = a0;
    v6 = a1;
    print!("{:?}", &v5);
    v2 = a2;
    v3 = a3 * 16 + a2;
    v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v8 {
        do {
            v4 = v8;
            print!(" {:?}", &v4);
            v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        } while (v8);
    }
    v0 = Arguments {
        pieces: ["\n"]
        args: [8]
        fmt: 0
    };
    v1 = 0;
    return std::io::stdio::_print(&v0);
}
