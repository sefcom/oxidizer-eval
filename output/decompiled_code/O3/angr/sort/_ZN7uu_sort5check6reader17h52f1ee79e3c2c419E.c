long long uu_sort::check::reader::h52f1ee79e3c2c419(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long long a3, struct_0 *a4)
{
    char v0;  // [bp-0x110]
    struct_0 *v1;  // [sp-0x100]
    char v2;  // [bp-0xe8]
    void* v3;  // [sp-0xd8]
    unsigned long long v4;  // [sp-0xd0]
    void* v5;  // [sp-0xc8]
    unsigned long v6;  // [sp-0xc0], Other Possible Types: unsigned long long
    char v7;  // [bp-0xb8]
    char v8;  // [bp-0xb0]
    char v9;  // [bp-0xa8]
    unsigned long long v12;  // r8
    unsigned long long v13;  // r12

    v3 = 0;
    v4 = 1;
    v5 = 0;
    v6 = a2;
    while (true)
    {
        _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6279cf7ea084d813(&v9, &v6);
        if (*((long long *)&v9) == 0x8000000000000000)
        {
LABEL_543067:
            ::0x540c60::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h61652c911fd4660d(&v3);
            v13 = 0;
            break;
        }
        else
        {
            v1 = a4;
            uu_sort::chunks::read::h0689b0d374b906ca(&v7, a3, &v9, 0, v12, &v3, &v2, *((int *)&v0), a4->field_99);
            v13 = *((long long *)&v7);
            if (v13)
            {
                ::0x540c60::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h61652c911fd4660d(&v3);
                break;
            }
            if (!v8)
                goto LABEL_543067;
        }
    }
    ::0x541450::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$::hf071592bb9885b68(a0, a1);
    return v13;
}
