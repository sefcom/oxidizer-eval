fn uu_ls::dired::print_positions(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0x88], Other Possible Types: Arguments
    let v1: u64;  // [sp-0x80]
    let v2: u64;  // [sp-0x78]
    let v3: u128;  // [bp-0x70]
    let v4: u64;  // [sp-0x58]
    let v5: u64;  // [sp-0x50]
    let v6: u64;  // [sp-0x48]
    let v7: u64;  // [sp-0x40]
    let v8: u64;  // [sp-0x38]
    let v10: struct8;  // rax

    v7 = a0;
    v8 = a1;
    print!("{:?}", &v7);
    v4 = a2;
    v5 = a3 * 16 + a2;
    v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v10 {
        do {
            v6 = v10;
            print!(" {:?}", &v6);
            v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        } while (v10);
    }
    v0 = "\n";
    v1 = 1;
    v2 = 8;
    v3 = 0;
    return std::io::stdio::_print(&v0);
}
