fn just::search::Search::clean(a0: u64, a1: void*, a2: &u8, a3: u64, a4: u64) -> int {
    let v0: struct16;  // [bp-0x118]
    let v1: struct24;  // [bp-0x118]
    let v2: struct56;  // [bp-0x110]
    let v3: struct24;  // [bp-0x108]
    let v4: struct24;  // [bp-0x100]
    let v5: u64;  // [bp-0xf8]
    let v6: u64;  // [bp-0xf0]
    let v7: struct32;  // [bp-0xe8], Other Possible Types: struct64
    let v8: struct20;  // [bp-0xa8]
    let v9: struct64;  // [bp-0xa8]
    let v10: core::option::Option<std::path::Component>;  // [bp-0x68]
    let v12: u64;  // rax

    v4 = std::path::Path::join(a1, a2, a3, a4);
    v1 = 0;
    v2 = 8;
    v3 = 0;
    v8 = std::path::Path::components(v5, v6);
    v7 = v9;
    loop {
        do {
            loop {
                v10 = <std::path::Components as core::iter::traits::iterator::Iterator>::next(&v7);
                if &v10 == "\n" {
                    v7 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v0);
                    core::iter::traits::iterator::Iterator::collect(a0, &v7);
                    return;
                }
                if !<std::path::Component as core::cmp::PartialEq>::eq(&v10, &g_471728) {
                    v0 = alloc::vec::Vec<T,A>::push(&v10);
                } else if v3 {
                    break;
                }
            }
            v12 = v3 - 1;
        } while (8 + v12 * 56 != "\t");
        v3 = v12;
    }
}
