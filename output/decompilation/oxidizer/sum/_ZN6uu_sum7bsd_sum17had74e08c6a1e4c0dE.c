fn uu_sum::bsd_sum(a1: i64, a2: i64) -> : struct8 {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0x1040]
    let v1: void*;  // [bp-0x1038]
    let v2: void*;  // [bp-0x1030]
    let v4: void*;  // r12
    let v5: u64;  // rdx
    let v6: &u8;  // rax
    let v7: i64;  // rcx
    let v8: u64;  // rax

    v2 = 0;
    v0 = 0;
    memset(&v2, 0, 0x1000);
    loop {
        if (std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(a1, a2, &v2) as u64 & 1) {
            if std::io::error::Error::kind(v5) as u8 == 35 {
                continue;
            }
            v7 = a0;
            *(&v1[8] as &u64) = v5;
            v8 = 1;
            break;
        } else if v5 {
            v6 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v5, &v2, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/sum/src/sum.rs");
            v0 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v6, &v6[v5], v0);
        } else {
            v7 = a0;
            *(&v1[8] as &u64) = (v4 >> 10) + 1 - ((v4 as u32 & 1023) < 1);
            *(&v1[16] as &u16) = v0 as u16;
            v8 = 0;
            break;
        }
    }
    *(v7 as &u64) = v8;
    return;
}
