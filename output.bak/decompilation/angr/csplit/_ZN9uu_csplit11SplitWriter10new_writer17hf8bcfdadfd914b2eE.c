long long uu_csplit::SplitWriter::new_writer::hf8bcfdadfd914b2e(struct_0 *a0)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x44]
    char v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    char v4;  // [bp-0x28]
    int v7;  // xmm0

    uu_csplit::split_name::SplitName::get::h6978abebafad78db(&v4, a0->field_20, a0->field_28);
    std::fs::File::create::hf27309c53a086f3b(&v0, &v4);
    if (*((int *)&v0))
        return *((long long *)&v2);
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h49ebb8e54e383c4e(&v0, 0x2000, *((int *)&v1));
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..buffered..bufwriter..BufWriter$LT$std..fs..File$GT$$GT$$GT$::h415acb109cb632b9(a0);
    v7 = *((int128_t *)&v0);
    a0->field_10 = *((int128_t *)&v3);
    *((void*)&a0->field_0) = v7;
    a0->field_28 = a0->field_28 + 1;
    a0->field_30 = 0;
    a0->field_38 = 0;
    return 0;
}
