long long uu_csplit::InputSplitter$LT$I$GT$::add_line_to_buffer::h53a96cdc9fe1e074(unsigned long long a0[3], struct_1 *a1, unsigned long a2, struct_0 *a3)
{
    unsigned long v0;  // [sp-0x58], Other Possible Types: unsigned long long
    int v1;  // [sp-0x50]
    unsigned long v2;  // [sp-0x40], Other Possible Types: unsigned long long
    int v3;  // [sp-0x38]
    unsigned long long v4;  // [sp-0x28]
    uint128_t *v6;  // r12
    uint128_t *v7;  // r14
    uint128_t *v8;  // rax
    uint128_t *v9;  // rcx
    int v10;  // xmm0
    unsigned long long v11;  // rax
    uint128_t *v12;  // rax
    uint128_t *v13;  // rcx
    int v14;  // xmm0
    unsigned long long v15;  // rcx

    if (a1->field_58)
    {
        v2 = a3->field_10;
        *((uint128_t *)&v1) = a3->field_0;
        v0 = a2;
        alloc::vec::Vec$LT$T$C$A$GT$::insert::h08bc9d07f69c0091(a1, 0, &v0);
    }
    else
    {
        v6 = a1->field_10;
        if (v6 >= a1->field_50)
        {
            alloc::vec::Vec$LT$T$C$A$GT$::remove::h13aae6287ec046b5(&v0, a1, 0, &g_6729d0);
            v4 = v2;
            v3 = v1;
            v2 = a3->field_10;
            *((uint128_t *)&v1) = a3->field_0;
            v0 = a2;
            v7 = a1->field_10;
            if (v7 == a1->field_0)
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hcc28f378ed95c89b(a1);
            v12 = a1->field_8;
            v13 = v7 * 32;
            v14 = *((int128_t *)&v0);
            *((int128_t *)(v12 + v13 + 16)) = (int128_t)(&v1)[8];
            *((void*)(v12 + v13)) = v14;
            a1->field_10 = (char *)v7 + 1;
            v15 = (long long)v3;
            v11 = (long long)(&v3)[8];
            if (v15 != 0x8000000000000000)
            {
                a0[0] = v15;
                a0[1] = v0;
                a0[2] = v4;
                return v11;
            }
            v0 = v11;
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
        v2 = a3->field_10;
        *((uint128_t *)&v1) = a3->field_0;
        v0 = a2;
        if (v6 == a1->field_0)
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hcc28f378ed95c89b(a1);
        v8 = a1->field_8;
        v9 = v6 * 32;
        v10 = *((int128_t *)&v0);
        *((int128_t *)(v8 + v9 + 16)) = (int128_t)(&v1)[8];
        *((void*)(v8 + v9)) = v10;
        a1->field_10 = (char *)v6 + 1;
    }
    a0[0] = 0x8000000000000000;
    return 0x8000000000000000;
}
