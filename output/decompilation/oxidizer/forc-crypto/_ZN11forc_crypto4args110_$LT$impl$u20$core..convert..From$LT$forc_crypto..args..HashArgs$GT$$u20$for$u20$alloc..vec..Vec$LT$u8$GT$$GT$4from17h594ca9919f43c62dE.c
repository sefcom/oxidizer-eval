fn forc_crypto::args::<impl core::convert::From<forc_crypto::args::HashArgs> for alloc::vec::Vec<u8>>::from(a0: i64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x28]

    v0 = struct24 {
        field_0: *(a1 as &i128)
        field_16: *((a1 + 16) as &i64)
    };
    forc_crypto::args::read_content_filepath_or_stdin(a0, &v0);
    return a0;
}
