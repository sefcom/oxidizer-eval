fn uu_kill::table() -> u64 {
    let v0: u64;  // [bp-0xa8]
    let v1: u64;  // [bp-0xa0]
    let v2: struct24;  // [bp-0x98]
    let v4: u64;  // rax
    let v5: u64;  // rdx
    let v6: u64;  // rdx

    v2 = struct24 {
        field_0: "EXIT"
        field_8: ""
    };
    v4 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v2);
    if !v5 {
        return v4;
    }
    do {
        v0 = v4;
        v1 = v5;
        println!("{} {}", &v0, &v1);
        v4 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v2);
    } while (v6);
    return v4;
}
