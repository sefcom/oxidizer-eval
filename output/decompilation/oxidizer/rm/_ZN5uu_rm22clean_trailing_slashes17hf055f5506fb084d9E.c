fn uu_rm::clean_trailing_slashes(a0: &[u8]) -> u64 {
    let v0: void*;  // [bp-0x40]
    let v1: u64;  // [bp-0x38]
    let v2: u64;  // [bp-0x30]
    let v3: core::ops::range::RangeInclusive<usize>;  // [bp-0x28]
    let v5: u64;  // rdi
    let v6: u64;  // rsi
    let v7: u64;  // rsi
    let v8: u64;  // rcx
    let v9: u64;  // rdx
    let v10: u64;  // r14
    let v11: &[u8];  // rax:rdx

    v1 = v5;
    v2 = v6;
    v0 = 0;
    if v6 >= 2 && v5 + v6 - 1 == "/" {
        v7 = v6;
        loop {
            v8 = v9;
            if v8 <= 1 {
                break;
            }
            v9 = v8 - 1;
            if v5 + v8 - 2 != "/" {
                break;
            }
        }
        v3 = core::ops::range::RangeInclusive<usize> {
            start: 0
            end: v9
            exhausted: 0
        };
        v11 = <core::ops::range::RangeInclusive<usize> as core::slice::index::SliceIndex<[T]>>::index(&v3, a0);
    }
    return v10;
}
