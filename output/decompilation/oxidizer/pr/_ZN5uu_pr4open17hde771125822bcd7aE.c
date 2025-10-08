fn uu_pr::open(a0: u64, a1: u64, a2: u32) -> long long {
    let v0: u128;  // [bp-0xe8]
    let v1: u128;  // [bp-0xd8]
    let v2: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc8]
    let v4: u64;  // rax

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") {
        return struct24 {
            field_0: 9223372036854775813
            field_8: alloc::boxed::Box<T>::new(std::io::stdio::stdin())
            field_16: &g_6693b8
        };
    }
    v2 = std::fs::metadata(a1, a2);
    match v2 {
        Err(_) => {
            return uu_pr::open::{{closure}}(a0, a1, a2, *((&v2 as &char + 8) as &i64)) as u64;
        },
        Ok(_) => {
            v4 = uu_pr::open::{{closure}}(&v0, a1, a2, *((&v2 as &char + 56) as &i32) as u32 as u64);
            return struct32 {
                field_0: v0
                field_16: v1
            };
        },
    }
}
