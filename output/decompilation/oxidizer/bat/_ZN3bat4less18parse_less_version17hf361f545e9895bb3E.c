fn bat::less::parse_less_version(a0: &[u8]) -> u64 {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x30]
    let v1: u64;  // [bp-0x28]
    let v3: u32;  // edi
    let v4: u32;  // esi
    let v5: u64;  // rdi
    let v6: u64;  // rsi
    let v7: u64;  // r15
    let v8: u64;  // rdx
    let v10: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx

    if !core::slice::<impl [T]>::starts_with(v3, v4) {
        return 2;
    }
    v0 = core::str::converts::from_utf8(v5 + 5, v6 - 5);
    match v0 {
        Err(_) => {
            return 2;
        },
        Ok(_) => {
            v7 = *((&v0 as &char + 16) as &i64);
            if (core::str::<impl str>::find(v1, v7) as u8 & 1) {
                v10 = core::num::<impl usize>::from_ascii_radix(&v0, core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v8, v1, v7) as u64, v8);
                return (v0 as i8 as u8 as u32 * 2) as u64;
            }
            return 2;
        },
    }
}
