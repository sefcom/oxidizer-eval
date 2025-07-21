fn uu_pr::open(a1: i64, a2: i64) -> : struct32 {
    let a0: u64;  // rdi
    let v0: struct32;  // [bp-0xe8]
    let v1: struct48;  // [bp-0xd8]
    let v2: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc8]

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2 as u32, "-") as i8 {
        return struct24 {
            field_0: 9223372036854775813
            field_8: alloc::boxed::Box<T>::new(std::io::stdio::stdin())
            field_16: &g_709430
        };
    }
    v2 = std::fs::metadata(a1, a2);
    match v2 {
        Ok(_) => {
            v0 = uu_pr::open::{{closure}}(a1, a2, *((&v2 as &char + 56) as &i32) as u32 as u64);
            return struct32 {
                field_0: *(&v0.field_0 as &i128)
                field_16: v1
            };
        },
        Err(_) => {
            uu_pr::open::{{closure}}(a0, a1, a2, *((&v2 as &char + 8) as &i64));
            return a0;
        },
    }
}
