long long uu_cp::delete_dest_if_needed_and_allowed::hdf8db5736a47cd60(unsigned long long a0[5], unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5[66])
{
    char v0;  // [bp-0x270]
    char v1;  // [bp-0x260]
    int v2;  // [sp-0x258], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v3;  // [sp-0x250]
    unsigned long long v4;  // [sp-0x248]
    unsigned long long v5;  // [sp-0x240]
    void* v6;  // [sp-0x238]
    unsigned long v7;  // [sp-0x228], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x220]
    int v9;  // [sp-0x218]
    unsigned long long v10;  // [sp-0x208]
    unsigned long long v11;  // [sp-0x1f8]
    unsigned long long v12;  // [sp-0x1f0]
    unsigned long long v13;  // [sp-0x1e8]
    char v14;  // [sp-0x1e0]
    int v15;  // [sp-0x1d8]
    int v16;  // [sp-0x1c8]
    int v17;  // [sp-0x1b8]
    int v18;  // [sp-0x1a8]
    int v19;  // [sp-0x198]
    int v20;  // [sp-0x188]
    int v21;  // [sp-0x178]
    char v22;  // [bp-0x168]
    char v23;  // [bp-0x160]
    char v24;  // [bp-0x150]
    char v25;  // [bp-0x148]
    char v26;  // [bp-0x140]
    char v27;  // [bp-0x130]
    char v28;  // [bp-0x120]
    char v29;  // [bp-0x110]
    char v30;  // [bp-0x100]
    char v31;  // [bp-0xf0]
    char v32;  // [bp-0xe0]
    int v33;  // [sp-0xb8]
    unsigned long long v34;  // [sp-0xa8]
    unsigned long long v35;  // [sp-0xa0]
    int v36;  // [sp-0x98]
    int v37;  // [sp-0x88]
    int v38;  // [sp-0x78]
    int v39;  // [sp-0x68]
    int v40;  // [sp-0x58]
    int v41;  // [sp-0x48]
    int v42;  // [sp-0x38]
    char v44;  // [bp+0x10]
    unsigned long long v45;  // rax

    if (a5[60] >= 2)
    {
        a0[0] = 13;
        return v45;
    }
    v45 = a5[61];
    if ((unsigned int)v45 == 2)
    {
        if (!a5[56])
        {
            a0[0] = 13;
            return v45;
        }
        uucore::features::fs::FileInformation::from_path::hc095ee89fe83797a(&v22, a1, a2, a5[65]);
        v11 = 1;
        v12 = a1;
        v13 = a2;
        v14 = 1;
        v7 = &v11;
        v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v2 = &g_5b5838;
        v3 = 1;
        v6 = 0;
        v4 = &v7;
        v5 = 1;
        ::0x4fd6d0::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(&v0, &v2);
        v4 = *((long long *)&v1);
        *((int128_t *)&v2) = *((int128_t *)&v0);
        if (*((long long *)&v22))
        {
            v45 = *((long long *)&v23);
            a0[3] = *((long long *)&v1);
            *((int128_t *)&a0[1]) = *((int128_t *)&v0);
            a0[0] = 3;
            a0[4] = v45;
            return v45;
        }
        v10 = *((long long *)&v24);
        *((int128_t *)&v9) = *((int128_t *)&v23);
        *((int128_t *)&v15) = *((int128_t *)&v26);
        *((int128_t *)&v16) = *((int128_t *)&v27);
        *((int128_t *)&v17) = *((int128_t *)&v28);
        *((int128_t *)&v18) = *((int128_t *)&v29);
        *((int128_t *)&v19) = *((int128_t *)&v30);
        *((int128_t *)&v20) = *((int128_t *)&v31);
        *((int128_t *)&v21) = *((int128_t *)&v32);
        core::ptr::drop_in_place$LT$$LT$core..result..Result$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$u20$as$u20$quick_error..ResultExt$LT$uucore..features..fs..FileInformation$C$std..io..error..Error$GT$$GT$..context$LT$alloc..string..String$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h6b9cf25980fea4b1(&v2);
        v33 = v9;
        v34 = v10;
        v35 = *((long long *)&v25);
        v36 = v15;
        v37 = v16;
        v38 = v17;
        v39 = v18;
        v40 = v19;
        v41 = v20;
        v42 = v21;
        v45 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h7a53a92732db61a3(*((long long *)&v44), &v33);
        if (!v45)
        {
            a0[0] = 13;
            return v45;
        }
    }
    else
    {
        if ((unsigned int)v45 != 1 && !(char)uucore::features::fs::is_symlink_loop::h5a2448179c195fb6(a3, a4, a2, a3, a4, a5))
        {
            v45 = std::fs::metadata::hb89aa4d693159f5b(&v22, a3, a4);
            if (*((int *)&v22) == 2)
            {
                v45 = *((long long *)&v23);
                a0[0] = 2;
                a0[1] = v45;
                return v45;
            }
            else if ((v27 & 146))
            {
                a0[0] = 13;
                return v45;
            }
        }
    }
    v45 = std::fs::remove_file::h47909d41cb221495(a3, a4, a2);
    if (v45)
    {
        a0[0] = 2;
        a0[1] = v45;
        return v45;
    }
    a0[0] = 13;
    return v45;
}
