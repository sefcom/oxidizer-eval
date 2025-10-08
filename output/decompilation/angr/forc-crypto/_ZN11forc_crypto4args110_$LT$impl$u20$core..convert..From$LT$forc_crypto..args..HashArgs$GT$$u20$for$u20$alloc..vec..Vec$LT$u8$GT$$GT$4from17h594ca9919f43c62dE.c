long long forc_crypto::args::<impl core::convert::From<forc_crypto::args::HashArgs> for alloc::vec::Vec<u8>>::from(void* a0, struct_0 *a1)
{
    int v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x18]

    v1 = a1->field_10;
    *((uint128_t *)&v0) = a1->field_0;
    forc_crypto::args::read_content_filepath_or_stdin(a0, &v0);
    return a0;
}
