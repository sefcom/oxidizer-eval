fn flealib::fileencrypter::FileEncrypter::encrypt(a1: i64, a2: &struct24) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x7e5]
    let v1: struct12;  // [bp-0x7e4]
    let v2: struct32;  // [bp-0x7d8]
    let v3: struct24;  // [bp-0x7d8]
    let v4: u64;  // [bp-0x7d0]
    let v5: Option<struct24>;  // [bp-0x7b8], Other Possible Types: struct960
    let v6: struct24;  // [bp-0x7b8]
    let v7: struct960;  // [bp-0x3f8]

    v1 = aead::AeadCore::generate_nonce(&v0);
    v2 = generic_array::functional::FunctionalSequence::map(a1);
    v5 = <aes::autodetect::Aes256 as crypto_common::KeyInit>::new(&v2);
    v7 = <aes_gcm::AesGcm<Aes,NonceSize,TagSize> as core::convert::From<Aes>>::from(&v5);
    v5 = <Alg as aead::Aead>::encrypt(&v7, &v1, *((a2 + 8) as &i64), *((a2 + 16) as &i64));
    v3 = core::result::Result<T,E>::expect(&v5);
    v6 = <T as alloc::slice::hack::ConvertVec>::to_vec(&v1, 12);
    alloc::vec::Vec<T,A>::append_elements(&v6, v4, v3.field_16, "flealib/src/fileencrypter.rs");
    return struct24 {
        field_0: v6.field_0
        field_16: v6.field_16
    };
}
