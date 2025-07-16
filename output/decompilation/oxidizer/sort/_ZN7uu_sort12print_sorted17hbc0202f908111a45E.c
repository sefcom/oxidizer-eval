fn uu_sort::print_sorted(a0: i64, a1: i64, a2: i64) -> void {
    let v0: u128;  // [bp-0xc8]
    let v1: core::result::Result<(), std::io::error::Error>;  // [bp-0xb8]
    let v2: u128;  // [bp-0xa8]
    let v3: u128;  // [bp-0x98]
    let v4: core::option::Option<&str>;  // [bp-0x88]
    let v5: u128;  // [bp-0x78]
    let v6: u128;  // [bp-0x68]
    let v7: u64;  // [bp-0x58]
    let v8: u8;  // [bp-0x48]
    let v10: void*;  // rax

    uu_sort::Output::into_write(&v8, a2);
    v7 = *((a0 + 112) as &i64);
    v6 = *((a0 + 96) as &i128);
    v5 = *((a0 + 80) as &i128);
    v4 = *((a0 + 64) as &i128);
    v3 = *((a0 + 48) as &i128);
    v2 = *((a0 + 32) as &i128);
    v1 = *((a0 + 16) as &i128);
    v0 = *(a0 as &i128);
    loop {
        v10 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v0);
        if !v10 {
            break;
        }
        uu_sort::Line::print(v10, &v8, a1);
    }
    return;
}
