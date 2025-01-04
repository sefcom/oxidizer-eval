long long uu_wc::Input::try_as_files0::hc67935d372cfef28(unsigned long long a0[3], unsigned long long a1[3], unsigned long long a2)
{
    char v0;  // [bp-0x1e0]
    char v1;  // [bp-0x1d8]
    char v2;  // [bp-0x1d0]
    char v3;  // [bp-0x1c8]
    char v4;  // [bp-0x1c0]
    char v5;  // [bp-0x1b8]
    char v6;  // [bp-0x1b0]
    char v7;  // [bp-0x1a0]
    char v8;  // [bp-0x190]
    char v9;  // [bp-0x180]
    unsigned long v10;  // [sp-0x178], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x170]
    unsigned long long v12;  // [sp-0x168]
    int v13;  // [sp-0x160]
    int v14;  // [sp-0x150]
    int v15;  // [sp-0x140]
    unsigned long long v16;  // [sp-0x130]
    char v17;  // [bp-0x128]
    char v18;  // [bp-0x120]
    char v19;  // [bp-0x118]
    char v20;  // [bp-0xf0]
    char v21;  // [bp-0xd8]
    char v22;  // [bp-0x78]
    unsigned long long v24;  // rax
    unsigned long long v25;  // rdi
    unsigned long long v26;  // rsi
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rcx
    unsigned long long v31;  // rax
    unsigned long long v32;  // rcx
    unsigned long long v33;  // rdx
    unsigned long long v34;  // rsi

    if (a1[0] != 9223372036854775809)
    {
        std::fs::metadata::ha24470e461e4d7b2(&v17, a1, a2);
        v25 = *((long long *)&v17);
        if (v25 == 2 || (0xf000 & *((int *)&v20)) != 0x8000 || *((long long *)&v21) >= 10485761)
        {
            a0[0] = 0x8000000000000000;
            goto LABEL_4b9296;
        }
        else
        {
            v25 = v25;
            uu_wc::files0_iter_file::h4e3b8ab8e030dfca(&v3, a1[1], a1[2]);
            v31 = *((long long *)&v4);
            v32 = *((long long *)&v5);
            if (v10 == 9223372036854775809 || (v16 = (unsigned long long)*((long long *)&v9), *((int128_t *)&v15) = *((int128_t *)&v8), *((int128_t *)&v14) = *((int128_t *)&v7), *((int128_t *)&v13) = *((int128_t *)&v6), v10 = (unsigned long long)*((long long *)&v3), v11 = v31, v12 = v32, core::iter::adapters::try_process::h5f1b943b2c05a233(&v0, &v10), v33 = *((long long *)&v0), v31 = *((long long *)&v1), v32 = *((long long *)&v2), v33 == 0x8000000000000000))
            {
                a0[1] = v31;
                a0[2] = v32;
                a0[0] = 9223372036854775809;
                v34 = *((long long *)&v18);
            }
            else
            {
                a0[0] = v33;
                a0[1] = v31;
                a0[2] = v32;
LABEL_4b9296:
                v34 = *((long long *)&v18);
            }
        }
        v24 = core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hc7378430642e479d(v25, v34);
        return v24;
    }
    else
    {
        v24 = uu_wc::is_stdin_small_file::hda862548f32829d1();
        if (!(char)v24)
        {
            a0[0] = 0x8000000000000000;
            return v24;
        }
        uu_wc::files0_iter_stdin::h027d8be6f7e7f770(&v22, v26, v27);
        core::iter::adapters::try_process::h9f74a5405c84d529(&v17, &v22);
        v28 = *((long long *)&v17);
        v24 = *((long long *)&v18);
        v29 = *((long long *)&v19);
        if (v28 == 0x8000000000000000)
        {
            a0[1] = v24;
            a0[2] = v29;
            a0[0] = 9223372036854775809;
            return v24;
        }
        a0[0] = v28;
        a0[1] = v24;
        a0[2] = v29;
        return v24;
    }
}
