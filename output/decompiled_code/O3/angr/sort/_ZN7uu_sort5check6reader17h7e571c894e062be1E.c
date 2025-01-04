long long uu_sort::check::reader::h7e571c894e062be1(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_0 *a4)
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
        _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h75521e5ebc43ed35(&v9, &v6, a2);
        if (*((long long *)&v9) == 0x8000000000000000)
        {
LABEL_548637:
            ::0x5462a0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(&v3);
            v13 = 0;
            break;
        }
        else
        {
            v1 = a4;
            uu_sort::chunks::read::h4da7a75b34a6d647(&v7, a3, &v9, 0, v12, &v3, &v2, *((int *)&v0), a4->field_99);
            v13 = *((long long *)&v7);
            if (v13)
            {
                ::0x5462a0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(&v3);
                break;
            }
            if (!v8)
                goto LABEL_548637;
        }
    }
    ::0x546a40::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$::hda4324549e97968a(a0, a1);
    return v13;
}
