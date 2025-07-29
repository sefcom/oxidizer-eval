fn flealib::fileencrypter::FileEncrypter::decrypt(a1: i64, a2: &struct24) -> Result<struct24, struct24> {
    let a0: i64;  // rdi
    let v0: struct32;  // [bp-0x810]
    let v1: struct24;  // [bp-0x810]
    let v2: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x7f0]
    let v3: Option<struct24>;  // [bp-0x7d8], Other Possible Types: core::result::Result<alloc::string::String, alloc::string::FromUtf8Error>, struct960
    let v4: u192;  // [bp-0x7d8]
    let v5: void*;  // [bp-0x418], Other Possible Types: struct960
    let v7: u64;  // r15
    let v8: u64;  // rax
    let v9: u64;  // rdx

    v7 = *((a2 + 16) as &i64);
    v8 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(12, *((a2 + 8) as &i64), v7, "flealib/src/fileencrypter.rs");
    if v9 != 12 {
        v5 = 0;
        core::panicking::assert_failed(0, &vvar_41{reg 32}, &g_450af0, &v5, "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/generic-array-0.14.7/src/lib.rs"); /* do not return */
    }
    v0 = generic_array::functional::FunctionalSequence::map(a1);
    v3 = <aes::autodetect::Aes256 as crypto_common::KeyInit>::new(&v0);
    v5 = <aes_gcm::AesGcm<Aes,NonceSize,TagSize> as core::convert::From<Aes>>::from(&v3);
    v3 = <Alg as aead::Aead>::decrypt(&v5, v8, *((a2 + 8) as &i64) + 12, v7 - 12);
    if !((((0 ^ v3 as i64) & (0 ^ -(v4))) >> 63) as char) {
        v2 = v4;
        v3 = alloc::string::String::from_utf8(&v2);
        v1 = core::result::Result<T,E>::unwrap(&v3);
        return Ok(struct24 {
            field_0: v1.field_0
            field_16: v1.field_16
        });
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: anyhow::error::<impl core::convert::From<anyhow::Error> for alloc::boxed::Box<dyn core::error::Error+core::marker::Send>>::from(core::ops::function::FnOnce::call_once()) as u64
        field_16: v9
    };
}
