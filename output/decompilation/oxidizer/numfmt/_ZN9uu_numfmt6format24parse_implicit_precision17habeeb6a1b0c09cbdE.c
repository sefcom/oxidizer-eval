fn uu_numfmt::format::parse_implicit_precision(a0: u32, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x38]
    let v1: u64;  // [sp-0x30]
    let v2: u8;  // [sp-0x28]
    let v3: Option<struct32>;  // [sp-0x20]

    v3 = core::str::<impl str>::split_once(a0, a1);
    match v3 {
        Some(_) => {
            v0 = *((&v3 as &char + 16) as &i64);
            v1 = *((&v3 as &char + 24) as &i64) + v0;
            v2 = 0;
            return <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(&v0);
        },
        None => {
            return 0;
        },
    }
}
