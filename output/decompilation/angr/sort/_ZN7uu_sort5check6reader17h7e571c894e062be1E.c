long long uu_sort::check::reader::h7e571c894e062be1(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_0 *a4)
{
    char v0;  // [bp-0x110]
    unsigned long long v1;  // [sp-0x108]
    struct_0 *v2;  // [sp-0x100]
    char v3;  // [bp-0xe8]
    void* v4;  // [sp-0xd8]
    unsigned long long v5;  // [sp-0xd0]
    void* v6;  // [sp-0xc8]
    unsigned long v7;  // [sp-0xc0]
    char v8;  // [bp-0xb8]
    char v9;  // [bp-0xb0]
    char v10;  // [bp-0xa8]
    unsigned long long v13;  // r12

    v4 = 0;
    v5 = 1;
    v6 = 0;
    v7 = a2;
    while (true)
    {
        _$LT$std..sync..mpsc..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h75521e5ebc43ed35(&v10, &v7, a2);
        if (*((long long *)&v10) == 0x8000000000000000)
        {
LABEL_548637:
            ::0x5462a0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(&v4);
            v13 = 0;
            break;
        }
        else
        {
            v2 = a4;
            v1 = a4->field_99;
            uu_sort::chunks::read::h4da7a75b34a6d647(&v8, a3, &v10, 0, a4, &v4, &v3, *((int *)&v0));
            v13 = *((long long *)&v8);
            if (v13)
            {
                ::0x5462a0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h026152d332835070(&v4);
                break;
            }
            if (!v9)
                goto LABEL_548637;
        }
    }
    ::0x546a40::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$u2b$core..marker..Send$GT$$GT$::hda4324549e97968a(a0, a1);
    return v13;
}
