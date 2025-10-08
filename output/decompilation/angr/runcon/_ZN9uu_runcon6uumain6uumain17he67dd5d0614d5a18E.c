long long uu_runcon::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x468], Other Possible Types: char
    int v1;  // [bp-0x464]
    int v2;  // [sp-0x458]
    int v3;  // [bp-0x454]
    int v4;  // [sp-0x448]
    int v5;  // [bp-0x444]
    int v6;  // [sp-0x438]
    int v7;  // [bp-0x434]
    unsigned long long v8;  // [sp-0x428]
    int v9;  // [bp-0x424]
    int v10;  // [bp-0x418], Other Possible Types: char, unsigned int
    int v11;  // [bp-0x414]
    unsigned long v12;  // [bp-0x410], Other Possible Types: unsigned long long
    int v13;  // [bp-0x408], Other Possible Types: char
    int v14;  // [bp-0x404]
    int v15;  // [bp-0x3f8], Other Possible Types: char
    int v16;  // [bp-0x3f4]
    int v17;  // [bp-0x3e8], Other Possible Types: char
    int v18;  // [bp-0x3e4]
    char v19;  // [bp-0x3d8], Other Possible Types: unsigned long long
    unsigned int v20;  // [bp-0x3d4]
    unsigned int v21;  // [sp-0x3d0]
    char v22;  // [bp-0x378]
    unsigned long long v23;  // [bp-0x370]
    unsigned long long v24;  // [bp-0x368]
    unsigned long v25;  // [bp-0x360]
    void* v26;  // [bp-0x358]
    unsigned long long v27;  // [bp-0x350]
    unsigned long long v28;  // [bp-0x348], Other Possible Types: unsigned long
    void* v29;  // [bp-0x340]
    unsigned long long v30;  // [bp-0x338]
    unsigned long long v31;  // [bp-0x330], Other Possible Types: unsigned long
    void* v32;  // [bp-0x328]
    unsigned long long v33;  // [bp-0x320]
    unsigned long v34;  // [bp-0x318]
    void* v35;  // [bp-0x310]
    unsigned long long v36;  // [bp-0x308]
    unsigned long v37;  // [bp-0x300]
    unsigned long long v38;  // [bp-0x2f8]
    unsigned long long v39;  // [bp-0x2f0]
    char v40;  // [bp-0x2e8]
    char v41;  // [bp-0x2e0]
    unsigned long long v43;  // rdx
    unsigned int v44;  // eax
    int v45;  // xmm0
    int v46;  // xmm1
    int v47;  // xmm2
    void* v48;  // rax
    int v49;  // xmm0
    int v50;  // xmm1
    int v51;  // xmm2
    unsigned long long v52;  // rax
    int v53;  // xmm0
    int v54;  // xmm1
    int v55;  // xmm2
    void* v58;  // rdx
    void* v59;  // r8
    void* v61;  // r10
    void* v63;  // rax
    unsigned int v64;  // eax
    int v65;  // xmm0
    int v66;  // xmm1
    int v67;  // xmm2
    void* v68;  // rbx
    int v69;  // xmm0
    int v70;  // xmm1
    int v71;  // xmm2
    int v72;  // xmm0
    int v73;  // xmm1
    int v74;  // xmm2

    uu_runcon::uu_app(&v41);
    uu_runcon::parse_command_line(&v10, &v41, a0, a1);
    if ((char)(((0 ^ *((long long *)&v10)) & (0 ^ -(*((long long *)&v10)))) >> 63))
        return v12;
    memcpy(&v22, &v10, 152);
    v43 = 0x8000000000000000 + v25 - 1;
    if (v43 >= 2)
        v43 = 2;
    if (v43)
    {
        if (v43 == 1)
        {
            uu_runcon::get_plain_context(&v10, v27, v28);
            if (v10 == 17)
            {
                uu_runcon::uumain::uumain::{{closure}}(&v0, v12);
                v44 = *((int *)&v0);
                if (*((int *)&v0) != 17)
                {
                    v20 = (int)v9;
                    v49 = (int128_t)v1;
                    v50 = (int128_t)v3;
                    v51 = (int128_t)v5;
                    *((int128_t *)&v18) = (int128_t)v7;
                    v16 = v51;
                    v14 = v50;
                    v11 = v49;
                    v10 = v44;
                    v21 = 1;
                    v52 = v10.new();
                    core::ptr::drop_in_place<uu_runcon::Options>(&v22);
                    return v52;
                }
            }
            else
            {
                v8 = *((long long *)&v19);
                v45 = *((int128_t *)&v10);
                v46 = *((int128_t *)&v13);
                v47 = *((int128_t *)&v15);
                *((int128_t *)&v6) = *((int128_t *)&v17);
                v4 = v47;
                v2 = v46;
                v0 = v45;
                v44 = (int)v0;
                if ((int)v0 != 17)
                {
                    v20 = (int)v9;
                    v49 = (int128_t)v1;
                    v50 = (int128_t)v3;
                    v51 = (int128_t)v5;
                    *((int128_t *)&v18) = (int128_t)v7;
                    v16 = v51;
                    v14 = v50;
                    v11 = v49;
                    v10 = v44;
                    v21 = 1;
                    v52 = v10.new();
                    core::ptr::drop_in_place<uu_runcon::Options>(&v22);
                    return v52;
                }
            }
            v48 = uu_runcon::execute_command(v30, v31, v23, v24);
        }
        else
        {
            if (v37 == 0x8000000000000000)
            {
                uu_runcon::print_current_context(&(char)v0);
                if ((int)v0 != 17)
                {
                    v19 = v8;
                    v53 = (int128_t)v0;
                    v54 = (int128_t)v2;
                    v55 = (int128_t)v4;
                    *((int128_t *)&v17) = (int128_t)v6;
                    v15 = v55;
                    v13 = v54;
                    v10 = v53;
                    v21 = 1;
                    v10.new();
                    core::ptr::drop_in_place<uu_runcon::Options>(&v22);
                    return v68;
                }
                core::ptr::drop_in_place<uu_runcon::Options>(&v22);
                return v68;
            }
            v58 = 0;
            if (v25 == 0x8000000000000000)
            {
                v59 = 0;
                if (v28 != 0x8000000000000000)
                    goto LABEL_45b8e6;
LABEL_45b76d:
                v61 = 0;
                if (v31 != 0x8000000000000000)
                    goto LABEL_45b77d;
            }
            else
            {
                v58 = v26;
                v59 = 0;
                if (v28 == 0x8000000000000000)
                    goto LABEL_45b76d;
LABEL_45b8e6:
                v59 = v29;
                v61 = 0;
                if (v31 != 0x8000000000000000)
                {
LABEL_45b77d:
                    v61 = v32;
                }
            }
            v63 = 0;
            if (v34 != 0x8000000000000000)
                v63 = v35;
            uu_runcon::get_custom_context(&v10, v40, v58, v27, v59, v30, v61, v33, v63, v36, v38, v39);
            if (v10 == 17)
            {
                uu_runcon::uumain::uumain::{{closure}}(&(char)v0, v12);
                v64 = (int)v0;
                if ((int)v0 != 17)
                {
                    v20 = (int)v9;
                    v69 = (int128_t)v1;
                    v70 = (int128_t)v3;
                    v71 = (int128_t)v5;
                    *((int128_t *)&v18) = (int128_t)v7;
                    v16 = v71;
                    v14 = v70;
                    v11 = v69;
                    v10 = v64;
                    v21 = 1;
                    v10.new();
                    core::ptr::drop_in_place<uu_runcon::Options>(&v22);
                    return v52;
                }
            }
            else
            {
                v8 = v19;
                v65 = (int128_t)v10;
                v66 = (int128_t)v13;
                v67 = (int128_t)v15;
                *((int128_t *)&v6) = (int128_t)v17;
                v4 = v67;
                v2 = v66;
                v0 = v65;
                v64 = (int)v0;
                if ((int)v0 != 17)
                {
                    v20 = (int)v9;
                    v69 = (int128_t)v1;
                    v70 = (int128_t)v3;
                    v71 = (int128_t)v5;
                    *((int128_t *)&v18) = (int128_t)v7;
                    v16 = v71;
                    v14 = v70;
                    v11 = v69;
                    v10 = v64;
                    v21 = 1;
                    v52 = v10.new();
                    core::ptr::drop_in_place<uu_runcon::Options>(&v22);
                    return v52;
                }
            }
            v48 = uu_runcon::execute_command(v38, v39, v23, v24);
        }
        core::ptr::drop_in_place<uu_runcon::Options>(&v22);
        return v48;
    }
    else
    {
        uu_runcon::print_current_context(&(char)v0);
        if ((int)v0 == 17)
        {
            core::ptr::drop_in_place<uu_runcon::Options>(&v22);
            return v68;
        }
        v19 = v8;
        v72 = (int128_t)v0;
        v73 = (int128_t)v2;
        v74 = (int128_t)v4;
        *((int128_t *)&v17) = (int128_t)v6;
        v15 = v74;
        v13 = v73;
        v10 = v72;
        v21 = 1;
        v10.new();
        core::ptr::drop_in_place<uu_runcon::Options>(&v22);
        return v68;
    }
}
