fn uu_hashsum::uu_app(a0: void*, a1: u32, a2: u32) -> u64 {
    let v1: u64;  // rsi
    let v2: u64;  // rdx
    let v3: u64;  // rsi
    let v4: u64;  // rdx
    let v5: u64;  // rsi
    let v6: u64;  // rdx
    let v7: u64;  // rsi
    let v8: u64;  // rdx
    let v9: u64;  // rsi
    let v10: u64;  // rdx

    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "md5sum") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "sha1sum") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "sha224sum") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "sha256sum") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "sha384sum") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "sha512sum") as i8 {
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "b2sum") as i8 {
            uu_hashsum::uu_app_length(a0, v1, v2);
            *(&a0[712] as &i8) = 0;
            return a0;
        } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "sha3-224sum") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "sha3-256sum") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "sha3-384sum") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "sha3-512sum") as i8 {
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "sha3sum") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "shake128sum") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "shake256sum") as i8 {
                uu_hashsum::uu_app_bits(a0, v5, v6);
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "b3sum") as i8 {
                uu_hashsum::uu_app_b3sum(a0, v7, v8);
            } else {
                uu_hashsum::uu_app_custom(a0, v9, v10);
                *(&a0[712] as &i8) = 1;
                return a0;
            }
            *(&a0[712] as &i8) = 0;
            return a0;
        }
    }
    uu_hashsum::uu_app_common(a0, v3, v4);
    *(&a0[712] as &i8) = 0;
    return a0;
}
