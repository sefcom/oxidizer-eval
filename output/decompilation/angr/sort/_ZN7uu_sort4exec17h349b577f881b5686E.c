long long uu_sort::exec(unsigned long long a0[3], unsigned long long a1, char a2[134], uint128_t a3[2], unsigned long long a4)
{
    int v0;  // [bp-0x68]
    int v1;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned int v2;  // [bp-0x50]
    unsigned long long v3[3];  // [bp-0x40]
    unsigned long long v4;  // [bp-0x38]
    int v5;  // [bp-0x30], Other Possible Types: char
    char v6;  // [bp-0x20]
    int v8;  // xmm0
    unsigned long long v9;  // rax
    int v10;  // xmm0

    if (a2[129])
    {
        v8 = a3[0];
        *((uint128_t *)&v1) = a3[1];
        v0 = v8;
        return uu_sort::merge::merge(a0, a1, a2, &v0, a4);
    }
    else if (a2[133])
    {
        if (a1 > 1)
        {
            uucore::mods::locale::get_message(&v5, "sort-only-one-file-allowed-with-cinfnanJANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC", 33);
            v2 = 2;
            v0 = v5;
            v1 = *((long long *)&v6);
            v9 = v0.new();
        }
        else if (a1 == 1)
        {
            v9 = uu_sort::check::check(a0[1], a0[2], a2);
        }
        else
        {
            core::option::unwrap_failed(&g_670910); /* do not return */
        }
        ::0x5068a0::core::ptr::drop_in_place<uu_sort::Output>(a3);
        return v9;
    }
    else
    {
        v3[0] = a0;
        v4 = &a0[a1];
        v10 = a3[0];
        *((uint128_t *)&v1) = a3[1];
        v0 = v10;
        return uu_sort::ext_sort::ext_sort(&v3, a2, &v0, a4);
    }
}
