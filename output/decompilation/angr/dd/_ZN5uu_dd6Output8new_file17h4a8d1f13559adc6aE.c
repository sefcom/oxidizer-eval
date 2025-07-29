long long uu_dd::Output::new_file(struct_0 *a0, unsigned long long a1, unsigned long long a2, struct_1 *a3)
{
    unsigned int v0;  // [bp-0x54]
    char v1;  // [bp-0x50], Other Possible Types: unsigned long
    unsigned long v2;  // [bp-0x48]
    char v3;  // [bp-0x40], Other Possible Types: unsigned long long

    uu_dd::Output::new_file::open_dst(&v3, a1, a2, a3->field_91, a3->field_92, &a3[1].padding_0[2]);
    v1.map_err_context(&v3, a1, a2);
    if (v1)
    {
        a0->field_8 = v1;
        a0->field_10 = v2;
        a0->field_0 = 4;
        return a0;
    }
    v0 = v2;
    if (!a3->field_93)
    {
        v3 = v0.set_len(a3->field_88);
        if (v3)
            ::0x4cc740::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v3);
    }
    a0.prepare_file(v0, a3);
    return a0;
}
