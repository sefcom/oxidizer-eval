double uu_csplit::SplitWriter::new_writer(long long a0)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned int
    char v1;  // [bp-0x44]
    int v2;  // [bp-0x38]
    char v3;  // [bp-0x28]
    unsigned long v5;  // xmm0lq
    int v6;  // xmm0

    v3.get(a0->field_20, a0->field_28);
    v0.create(&v3);
    if (v0 != 1)
    {
        v0.with_capacity(*((int *)&v1));
        core::ptr::drop_in_place<core::option::Option<std::io::buffered::bufwriter::BufWriter<std::fs::File>>>(a0);
        v6 = *((int128_t *)&v0);
        *((void*)&a0->field_10) = v2;
        *((void*)&a0->field_0) = v6;
        a0->field_28 = a0->field_28 + 1;
        a0->field_30 = 0;
        a0->field_38 = 0;
        return (unsigned long long)v6;
    }
    return v5;
}
