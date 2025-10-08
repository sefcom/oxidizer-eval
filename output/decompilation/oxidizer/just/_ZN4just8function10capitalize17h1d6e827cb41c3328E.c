fn just::function::capitalize(a0: i64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: void*;  // [bp-0x90]
    let v1: u64;  // [bp-0x88]
    let v2: void*;  // [bp-0x80]
    let v3: u64;  // [bp-0x78]
    let v4: u64;  // [bp-0x70]
    let v5: void*;  // [bp-0x68]
    let v6: u96;  // [bp-0x5c]
    let v7: struct32;  // [sp-0x50]
    let v9: core::slice::iter::Iter<u8>;  // rax
    let v10: u32;  // edx

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = a2;
    v4 = a3 + a2;
    v5 = 0;
    v9 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v3);
    if v10 != 0x110000 {
        do {
            if v9 {
                core::unicode::unicode_data::conversions::to_lower(&v6 as u8);
                v7 = core::char::CaseMappingIter::new(&v6);
                <alloc::string::String as core::iter::traits::collect::Extend<char>>::extend(&v0, &v7);
            } else {
                core::unicode::unicode_data::conversions::to_upper(&v6 as u8);
                v7 = core::char::CaseMappingIter::new(&v6);
                <alloc::string::String as core::iter::traits::collect::Extend<char>>::extend(&v0, &v7);
            }
            v9 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v3);
        } while (v10 != 0x110000);
    }
    return struct32 {
        field_0: 0
        field_8: *(&v0 as &i128)
        field_24: 0
    };
}
