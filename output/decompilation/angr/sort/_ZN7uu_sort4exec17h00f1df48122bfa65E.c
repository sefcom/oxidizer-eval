long long uu_sort::exec::h00f1df48122bfa65(unsigned long long a0[3], unsigned long long a1, char a2[134], unsigned long long a3[3], unsigned long long a4)
{
    unsigned long long v0[3];  // [sp-0xf0]
    unsigned long long v1;  // [sp-0xe8]
    char v2;  // [bp-0xe0]
    int v3;  // [bp-0xd8], Other Possible Types: char
    char v4;  // [bp-0xd0]
    int v5;  // [bp-0xc8], Other Possible Types: unsigned long, unsigned long long
    char v6;  // [bp-0xc0], Other Possible Types: unsigned int
    char v7;  // [bp-0xb0]
    char v8;  // [bp-0xa0]
    char v9;  // [bp-0x90]
    char v10;  // [bp-0x80]
    unsigned long v11;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x70]
    unsigned long long v13;  // [sp-0x68]
    int v14;  // [sp-0x60]
    int v15;  // [sp-0x50]
    int v16;  // [sp-0x40]
    int v17;  // [sp-0x30]
    unsigned long long v18;  // [sp-0x20]
    int v22;  // xmm0
    unsigned long long v23;  // rax
    int v25;  // xmm0

    if (a2[129])
    {
        uu_sort::merge::merge::h37f56e954177d019(&v3, a0, a1, a2, (a3[0] == 0x8000000000000000 ? 0 : a3[1]), a3[2], a4);
        v23 = *((long long *)&v4);
        if (v11 == 3)
        {
            ::0x51ac10::core::ptr::drop_in_place$LT$uu_sort..Output$GT$::hc73b799533ae265a(a3);
            return v23;
        }
        v18 = *((long long *)&v10);
        *((int128_t *)&v17) = *((int128_t *)&v9);
        *((int128_t *)&v16) = *((int128_t *)&v8);
        *((int128_t *)&v15) = *((int128_t *)&v7);
        *((int128_t *)&v14) = *((int128_t *)&v6);
        v11 = (long long)v3;
        v12 = v23;
        v13 = v5;
        v25 = *((int128_t *)&a3[0]);
        *((int128_t *)&v5) = *((int128_t *)&a3[2]);
        v3 = v25;
        v23 = uu_sort::merge::FileMerger::write_all::h8ffbbdd0c487cde8(&v11, a2, &v3);
        return v23;
    }
    else if (!a2[133])
    {
        v0[0] = a0;
        v1 = &a0[a1];
        v22 = *((int128_t *)&a3[0]);
        *((int128_t *)&v5) = *((int128_t *)&a3[2]);
        v3 = v22;
        v23 = uu_sort::ext_sort::ext_sort::hc251c769f969c18a(v0, a2, &v3, a4);
        return v23;
    }
    else
    {
        if (a1 > 1)
        {
            ::0x51cb50::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d4334c76f34ab0e(v0, "only one file allowed with -c", 29);
            v5 = *((long long *)&v2);
            *((int128_t *)&v3) = *((int128_t *)&v0);
            v6 = 2;
            v23 = alloc::boxed::Box$LT$T$GT$::new::hab49dd9f0ca1dd34(&v3);
        }
        else
        {
            if (a1 != 1)
                core::option::unwrap_failed::h0e11329e76906eaa(&g_5ffd00); /* do not return */
            v23 = uu_sort::check::check::h20d514b4388b3f7e(a0[1], a0[2]);
        }
        ::0x51ac10::core::ptr::drop_in_place$LT$uu_sort..Output$GT$::hc73b799533ae265a(a3);
        return v23;
    }
}
