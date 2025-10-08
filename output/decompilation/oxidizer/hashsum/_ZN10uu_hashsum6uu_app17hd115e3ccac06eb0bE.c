fn uu_hashsum::uu_app(a1: i64, a2: i64) -> : struct712 {
    let a0: i64;  // rdi

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "md5sum") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "sha1sum") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "sha224sum") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "sha256sum") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "sha384sum") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "sha512sum") {
LABEL_483694:
        uu_hashsum::uu_app_common(a0);
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "b2sum") {
        uu_hashsum::uu_app_length(a0);
    } else {
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "sha3-224sum") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "sha3-256sum") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "sha3-384sum") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "sha3-512sum") {
            goto LABEL_483694;
        }
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "sha3sum") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "shake128sum") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "shake256sum") {
            uu_hashsum::uu_app_bits(a0);
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "b3sum") {
            uu_hashsum::uu_app_b3sum(a0);
        } else {
            uu_hashsum::uu_app_custom(a0);
            *((a0 + 712) as &i8) = 1;
            return;
        }
    }
    *((a0 + 712) as &i8) = 0;
    return;
}
