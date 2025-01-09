long long uu_sort::print_sorted::h24cdc7fa9246c817(struct_0 *a0, char a1[154], void* a2)
{
    int v0;  // [sp-0xc8]
    int v1;  // [sp-0xb8]
    int v2;  // [sp-0xa8]
    int v3;  // [sp-0x98]
    int v4;  // [sp-0x88]
    int v5;  // [sp-0x78]
    int v6;  // [sp-0x68]
    unsigned long long v7;  // [sp-0x58]
    char v8;  // [bp-0x48]
    unsigned long long v10[2];  // rax

    uu_sort::Output::into_write::h9c5c08d876f77806(&v8, a2);
    v7 = a0->field_70;
    *((uint128_t *)&v6) = a0->field_60;
    *((uint128_t *)&v5) = a0->field_50;
    *((uint128_t *)&v4) = a0->field_40;
    *((uint128_t *)&v3) = a0->field_30;
    *((uint128_t *)&v2) = a0->field_20;
    *((uint128_t *)&v1) = a0->field_10;
    *((uint128_t *)&v0) = a0->field_0;
    while (true)
    {
        v10 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3b8b60fe34cc0ed1(&v0);
        if (!v10)
            break;
        uu_sort::Line::print::he3975e626e2ad263(v10, &v8, a1);
    }
    return ::0x51a9c0::core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h1183853de4007e7a(&v8);
}
