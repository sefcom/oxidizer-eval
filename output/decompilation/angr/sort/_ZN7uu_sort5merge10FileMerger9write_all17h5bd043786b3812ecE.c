long long uu_sort::merge::FileMerger::write_all(struct_0 *a0, unsigned long long a1, void* a2)
{
    char v0;  // [bp-0xa8]
    int v1;  // [bp-0x78]
    int v2;  // [bp-0x68]
    int v3;  // [bp-0x58]
    int v4;  // [bp-0x48]
    int v5;  // [bp-0x38]
    int v6;  // [bp-0x28]
    unsigned long v7;  // [bp-0x18]
    unsigned long long v9;  // rax

    v0.into_write(a2);
    v7 = a0->field_60;
    *((uint128_t *)&v6) = a0->field_50;
    *((uint128_t *)&v5) = a0->field_40;
    *((uint128_t *)&v4) = a0->field_30;
    *((uint128_t *)&v3) = a0->field_20;
    *((uint128_t *)&v2) = a0->field_10;
    *((uint128_t *)&v1) = a0->field_0;
    v9 = v1.write_all_to(a1, &v0);
    ::0x5147b0::core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(&v0);
    return v9;
}
