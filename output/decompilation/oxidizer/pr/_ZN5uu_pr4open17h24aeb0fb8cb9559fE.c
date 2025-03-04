fn uu_pr::open(a0: &Result<struct32, struct16>, a1: u32, a2: u32) -> u64 {
    let v0: Result<struct32, struct16>;  // [sp-0xe8]
    let v1: Result<struct176, struct8>;  // [sp-0xc8]
    let v3: iNone;  // xmm0

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") as i8 {
        *((a0 + 8) as &long long) = alloc::boxed::Box<T>::new(std::io::stdio::stdin());
        *((a0 + 16) as &&i64) = &g_709430;
        *(a0 as &i64) = 9223372036854775813;
    }
    v1 = std::fs::metadata(a1, a2);
    match v1 {
        Ok(_) => {
            v0 = uu_pr::open::{{closure}}(a1, a2, *((&v1 as &char + 56) as &i32) as u32 as u64);
            v3 = v0 as i128;
            return Ok(struct32 {
                field_0: v3
                field_16: *((&v0 as &char + 16) as &i128)
            });
        },
        Err(_) => {
            uu_pr::open::{{closure}}(a0, a1, a2, *((&v1 as &char + 8) as &i64));
        },
    }
}
