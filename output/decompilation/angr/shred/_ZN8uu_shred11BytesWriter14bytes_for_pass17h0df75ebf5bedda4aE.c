long long uu_shred::BytesWriter::bytes_for_pass::h0df75ebf5bedda4a(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx

    if (!a0->field_0)
    {
        v2 = ::0x4ba5d0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h459bcf1159c78004(a1, &a0->padding_1[335]);
        rand::rng::Rng::fill::hd8f979ebf6c2571a(&a0->padding_1[15], v2, v3);
        return v2;
    }
    v1 = a0->field_10008;
    v2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hac13306e42eb63dd(v1, v1 + a1, &a0->padding_1);
    a0->field_10008 = (a1 + a0->field_10008) % 3;
    return v2;
}
