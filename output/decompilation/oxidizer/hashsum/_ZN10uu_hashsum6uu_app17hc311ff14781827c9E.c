fn uu_hashsum::uu_app(a1: i64, a2: i64) -> : struct712 {
    let a0: void*;  // rsi
    let v1: i64;  // rdi
    let v2: i64;  // rdi

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "md5sum") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "sha1sum") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "sha224sum") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "sha256sum") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "sha384sum") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "sha512sum") as i8 {
LABEL_5db8e4:
        uu_hashsum::uu_app_common(v1);
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "b2sum") as i8 {
        uu_hashsum::uu_app_length(v1);
    } else {
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "sha3-224sum") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "sha3-256sum") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "sha3-384sum") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "sha3-512sum") as i8 {
            goto LABEL_5db8e4;
        }
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "sha3sum") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "shake128sum") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "shake256sum") as i8 {
            uu_hashsum::uu_app_bits(v1);
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "b3sum") as i8 {
            uu_hashsum::uu_app_b3sum(v1);
        } else {
            uu_hashsum::uu_app_custom(v2);
            *((v2 + 712) as &i8) = 1;
            return;
        }
    }
    *((v1 + 712) as &i8) = 0;
    return;
}
