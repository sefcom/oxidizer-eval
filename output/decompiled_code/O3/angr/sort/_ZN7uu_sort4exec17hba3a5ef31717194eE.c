long long uu_sort::exec::hba3a5ef31717194e(unsigned long long a0[3], unsigned long long a1, char a2[134], unsigned long long a3[3], unsigned long long a4)
{
    char v0;  // [bp-0x100]
    unsigned long long v1[3];  // [sp-0xf8]
    unsigned long long v2;  // [sp-0xf0]
    int v3;  // [sp-0xe8]
    char v4;  // [bp-0xe0]
    int v5;  // [sp-0xd8]
    char v6;  // [bp-0xd0]
    char v7;  // [bp-0xc0]
    char v8;  // [bp-0xb0]
    char v9;  // [bp-0xa0]
    char v10;  // [bp-0x90]
    unsigned long v11;  // [sp-0x88], Other Possible Types: unsigned long long
    struct_0 *v12;  // [sp-0x80]
    unsigned long long v13;  // [sp-0x78]
    int v14;  // [sp-0x70]
    int v15;  // [sp-0x60]
    int v16;  // [sp-0x50]
    int v17;  // [sp-0x40]
    unsigned long long v18;  // [sp-0x30]
    unsigned long long v20;  // r15
    unsigned long long v21;  // r12
    unsigned long long v23;  // r12
    struct_0 *v25;  // rax
    uint128_t *v26;  // rax
    unsigned long long v29;  // r8
    unsigned long long v30;  // r9

    if (!a2[129])
    {
        if (!a2[133])
        {
            v1[0] = a0;
            v2 = &a0[a1];
            *((int128_t *)&v5) = *((int128_t *)&a3[2]);
            *((int128_t *)&v3) = *((int128_t *)&a3[0]);
            v25 = uu_sort::ext_sort::ext_sort::h36803556efdeb66f(v1, a2, &v3, a4);
            return v25;
        }
        if (a1 <= 1)
        {
            if (a1 != 1)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v25 = uu_sort::check::check::he1c64bd4ad746965(a0[1], a0[2], a2, a3);
        }
        else
        {
            v26 = __rust_alloc(29, 1);
            if (!v26)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            *((int128_t *)((char *)v26 + 13)) = 131827882254204717907182602921970524448;
            *(v26) = 144060933412752323898481051892865330799;
            v25 = __rust_alloc(32, 8);
            if (!v25)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            v25->field_0 = 29;
            v25->field_8 = v26;
            v25->field_10 = 29;
            v25->field_18 = 2;
        }
        switch (a3[0])
        {
        case 9223372036854775808:
            return v25;
        case 0:
            close(a3[1]);
            break;
        default:
            __rust_dealloc(a3[1]);
        }
    }
    else
    {
        v20 = a3[0];
        v21 = a3[1];
        uu_sort::merge::merge::h7b2b6f581cd19095(&v3, a0, a1, a2, v23, a3[2], a4);
        v25 = *((long long *)&v4);
        if (v11 != 3)
        {
            v18 = *((long long *)&v10);
            *((int128_t *)&v17) = *((int128_t *)&v9);
            *((int128_t *)&v16) = *((int128_t *)&v8);
            *((int128_t *)&v15) = *((int128_t *)&v7);
            *((int128_t *)&v14) = *((int128_t *)&v6);
            v11 = (long long)v3;
            v12 = v25;
            v13 = (long long)v5;
            *((int128_t *)&v5) = *((int128_t *)&a3[2]);
            *((int128_t *)&v3) = *((int128_t *)&a3[0]);
            v25 = uu_sort::merge::FileMerger::write_all::h7e91e6c3620ca5db(&v11, a2, &v3, v11, v29, v30, a4, *((long long *)&v0));
            return v25;
        }
        switch (v20)
        {
        case 9223372036854775808:
            return v25;
        case 0:
            close(a3[1]);
            break;
        default:
            __rust_dealloc(v21);
        }
    }
    return v25;
}
