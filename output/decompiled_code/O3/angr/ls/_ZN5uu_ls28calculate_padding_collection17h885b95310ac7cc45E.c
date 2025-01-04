long long uu_ls::calculate_padding_collection::h885b95310ac7cc45(unsigned long long a0[9], unsigned long a1, unsigned long a2, struct_0 *a3, unsigned int a4)
{
    char v0;  // [sp-0xed]
    char v1;  // [sp-0xec]
    char v2;  // [sp-0xeb]
    char v3;  // [sp-0xea]
    char v4;  // [sp-0xe9]
    unsigned long long v5;  // [sp-0xe8]
    unsigned long long v6;  // [sp-0xe0]
    unsigned long long v7;  // [sp-0xd8]
    unsigned long long v8;  // [sp-0xd0]
    unsigned long long v9;  // [sp-0xc8]
    unsigned long long v10;  // [sp-0xc0]
    unsigned long long v11;  // [sp-0xb8]
    unsigned long long v12;  // [sp-0xb0]
    unsigned long long v13;  // [sp-0xa8]
    unsigned long long v14;  // [sp-0xa0]
    unsigned long long v15;  // [sp-0x98]
    unsigned long v16;  // [sp-0x80]
    unsigned long long v17[5];  // [bp-0x70]
    char v18;  // [bp-0x68]
    char v19;  // [bp-0x60]
    char v20;  // [bp-0x58]
    char v21;  // [bp-0x50]
    char v22;  // [bp-0x48]
    unsigned long v23;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0x38]
    unsigned long long v26;  // r12
    unsigned long long v27;  // rax
    unsigned long long v28;  // rbx
    unsigned long long v29;  // r13
    unsigned long long v30;  // r15
    struct_1 *v31;  // rax
    struct_1 *v32;  // r12
    struct_2 *v33;  // rax
    struct_1 *v34;  // rax
    unsigned int v36[25];  // rax

    v23 = a1;
    v24 = a2 * 304 + a1;
    v4 = a3->field_e9;
    v3 = a3->field_ea;
    v16 = a3->field_d8;
    v1 = a3->field_f1;
    v2 = a3->field_f8;
    v0 = a3->field_eb;
    v26 = 1;
    v27 = 1;
    v6 = 1;
    v9 = 1;
    v8 = 1;
    v7 = 1;
    v28 = 1;
    v29 = 1;
    v30 = 1;
    while (true)
    {
        do
        {
            v12 = v29;
            v11 = v27;
            v10 = v26;
            do
            {
                if (!v4)
                {
                    v34 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&v23);
                    if (!v34)
                        goto LABEL_52d2f2;
                    v32 = v34;
                    if (!v3)
                        continue;
                }
                else
                {
                    do
                    {
                        v31 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&v23);
                        if (!v31)
                        {
LABEL_52d2f2:
                            a0[0] = v28;
                            a0[1] = v7;
                            a0[2] = v8;
                            a0[3] = v9;
                            a0[4] = v6;
                            a0[5] = v11;
                            a0[6] = v10;
                            a0[7] = v12;
                            a0[8] = v30;
                            return v12;
                        }
                    } while ((v32 = v31, v33 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(v31, a4), !v33));
                    v5 = v28;
                    uu_ls::display_inode::h3361fe679ac3feaa(v17, *((long long *)&v33->field_28));
                    v30 = v30;
                    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(v17);
                    v28 = ::0x519cb0::core::cmp::max_by::h7ee1a79e2ed707c0(*((long long *)&v19), v5);
                    if (!v3)
                        continue;
                }
                v36 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(v32, a4);
                if (v36)
                {
                    v28 = v28;
                    uu_ls::display_size::hba9b1cbdd7c6b199(v17, uu_ls::get_block_size::h2a7c975a8304f17e(v36[14], *((long long *)&v36[24]), v16, v1), v1);
                    ::0x51a6c0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(v17);
                    v30 = ::0x519cb0::core::cmp::max_by::h7ee1a79e2ed707c0(*((long long *)&v19), v30);
                }
            } while (v2 != 1);
            v5 = v32->field_40;
            uu_ls::display_dir_entry_size::hb89143fe2890521f(v17, v32, a3, a4);
            v15 = *((long long *)&v20);
            v13 = *((long long *)&v21);
            v14 = *((long long *)&v22);
            v7 = ::0x519cb0::core::cmp::max_by::h7ee1a79e2ed707c0(v17[0], v7);
            v8 = ::0x519cb0::core::cmp::max_by::h7ee1a79e2ed707c0(*((long long *)&v18), v8);
            v9 = ::0x519cb0::core::cmp::max_by::h7ee1a79e2ed707c0(*((long long *)&v19), v9);
            if (v0)
                v6 = ::0x519cb0::core::cmp::max_by::h7ee1a79e2ed707c0(v5, v6);
            v26 = 0;
            v27 = 0;
            v29 = 0;
        } while (a2 == 1);
        v26 = ::0x519cb0::core::cmp::max_by::h7ee1a79e2ed707c0(v13, v10);
        v29 = ::0x519cb0::core::cmp::max_by::h7ee1a79e2ed707c0(v14, v12);
        v27 = ::0x519cb0::core::cmp::max_by::h7ee1a79e2ed707c0(::0x519cb0::core::cmp::max_by::h7ee1a79e2ed707c0(v15, v11), v26);
    }
}
