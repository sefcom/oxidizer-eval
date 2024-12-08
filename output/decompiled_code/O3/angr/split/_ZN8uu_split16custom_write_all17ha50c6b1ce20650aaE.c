long long uu_split::custom_write_all::ha50c6b1ce20650aa(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v1 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hfb571d933b894400(a3, a1, a2);
    if (!v1)
    {
        *((short *)&a0->field_0) = 0x100;
        return v3;
    }
    v2 = uu_split::ignorable_io_error::hf12a8318e09b01cb(v1, a4);
    if (!(char)v2)
    {
        a0->field_8 = v1;
        a0->field_0 = 1;
        return v3;
    }
    *((short *)&a0->field_0) = 0;
    return ::0x4c8880::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h424c02d48e02c0e3(v1);
}
