long long uu_shred::BytesWriter::bytes_for_pass::hc2cc24494788ad2a(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx

    if (a0->field_0)
    {
        v1 = a0->field_10008;
        v2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hc0ffcd3f75fc6ee7(v1, v1 + a1);
        a0->field_10008 = (a1 + a0->field_10008) % 3;
        return v2;
    }
    v2 = ::0x4b9cc0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h9a00dc0c6002c228(a1, &a0->padding_1[335]);
    rand::rng::Rng::fill::h1c7d0cfbc3c798b5(&a0->padding_1[15], v2, v3);
    return v2;
}
