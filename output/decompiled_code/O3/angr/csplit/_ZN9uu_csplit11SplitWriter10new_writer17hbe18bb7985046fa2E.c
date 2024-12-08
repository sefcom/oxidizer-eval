long long uu_csplit::SplitWriter::new_writer::hbe18bb7985046fa2(struct_0 *a0)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x44]
    char v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    char v4;  // [bp-0x28]
    unsigned long long v6;  // rdx
    int v8;  // xmm0

    uu_csplit::split_name::SplitName::get::hd93090bb0e049b88(&v4, a0->field_20, a0->field_28);
    std::fs::File::create::hd49770597e1cc75b(&v0, &v4, v6);
    if (*((int *)&v0))
        return *((long long *)&v2);
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h24e64d5c01f0a548(&v0, 0x2000, *((int *)&v1));
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..buffered..bufwriter..BufWriter$LT$std..fs..File$GT$$GT$$GT$::h3d43bfd92add4d07(a0);
    v8 = *((int128_t *)&v0);
    a0->field_10 = *((int128_t *)&v3);
    *((void*)&a0->field_0) = v8;
    a0->field_28 = a0->field_28 + 1;
    a0->field_30 = 0;
    a0->field_38 = 0;
    return 0;
}
