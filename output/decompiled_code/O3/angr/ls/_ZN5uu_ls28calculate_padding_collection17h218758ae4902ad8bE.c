long long uu_ls::calculate_padding_collection::h218758ae4902ad8b(unsigned long long a0[9], unsigned long a1, unsigned long a2, struct_0 *a3, unsigned int a4)
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
    unsigned long long v26;  // rax
    unsigned long long v27;  // r12
    unsigned long long v28;  // r13
    unsigned long long v29;  // r15
    struct_1 *v30;  // rax
    struct_1 *v31;  // r13
    struct_2 *v32;  // rax
    struct_1 *v33;  // rax
    unsigned int v35[25];  // rax

    v23 = a1;
    v24 = a2 * 304 + a1;
    v4 = a3->field_e9;
    v3 = a3->field_ea;
    v16 = a3->field_d8;
    v1 = a3->field_f1;
    v2 = a3->field_f8;
    v0 = a3->field_eb;
    v26 = 1;
    v9 = 1;
    v27 = 1;
    v28 = 1;
    v5 = 1;
    v8 = 1;
    v7 = 1;
    v6 = 1;
    v29 = 1;
    while (true)
    {
        do
        {
            v12 = v26;
            v10 = v28;
            v11 = v27;
            do
            {
                if (!v4)
                {
                    v33 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6626b1412d983560(&v23);
                    if (!v33)
                        goto LABEL_52d287;
                    v31 = v33;
                    if (!v3)
                        continue;
                }
                else
                {
                    do
                    {
                        v30 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6626b1412d983560(&v23);
                        if (!v30)
                        {
LABEL_52d287:
                            a0[0] = v29;
                            a0[1] = v6;
                            a0[2] = v7;
                            a0[3] = v8;
                            a0[4] = v5;
                            a0[5] = v12;
                            a0[6] = v10;
                            a0[7] = v11;
                            a0[8] = v9;
                            return v9;
                        }
                    } while ((v31 = v30, v32 = uu_ls::PathData::get_metadata::h8d9c1f19e7e4c4d2(v30, a4), !v32));
                    uu_ls::display_inode::h871368456a91dfdc(v17, *((long long *)&v32->field_28));
                    ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(v17);
                    v29 = ::0x519c90::core::cmp::max_by::h44cff0f2ef2b93bc(*((long long *)&v19), v29);
                    if (!v3)
                        continue;
                }
                v35 = uu_ls::PathData::get_metadata::h8d9c1f19e7e4c4d2(v31, a4);
                if (v35)
                {
                    uu_ls::display_size::h7e7c99f8b13c4a8e(v17, uu_ls::get_block_size::he687392c7e5f0720(v35[14], *((long long *)&v35[24]), v16, v1), v1);
                    ::0x51a6a0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::he5e73301f69d5572(v17);
                    v9 = ::0x519c90::core::cmp::max_by::h44cff0f2ef2b93bc(*((long long *)&v19), v9);
                }
            } while (v2 != 1);
            v15 = v31->field_40;
            uu_ls::display_dir_entry_size::ha2853a51bcb5da35(v17, v31, a3, a4);
            v13 = *((long long *)&v21);
            v14 = *((long long *)&v22);
            v6 = ::0x519c90::core::cmp::max_by::h44cff0f2ef2b93bc(v17[0], v6);
            v7 = ::0x519c90::core::cmp::max_by::h44cff0f2ef2b93bc(*((long long *)&v18), v7);
            v8 = ::0x519c90::core::cmp::max_by::h44cff0f2ef2b93bc(*((long long *)&v19), v8);
            if (v0)
                v5 = ::0x519c90::core::cmp::max_by::h44cff0f2ef2b93bc(v15, v5);
            v27 = 0;
            v28 = 0;
            v26 = 0;
        } while (a2 == 1);
        v28 = ::0x519c90::core::cmp::max_by::h44cff0f2ef2b93bc(v13, v10);
        v27 = ::0x519c90::core::cmp::max_by::h44cff0f2ef2b93bc(v14, v11);
        v26 = ::0x519c90::core::cmp::max_by::h44cff0f2ef2b93bc(::0x519c90::core::cmp::max_by::h44cff0f2ef2b93bc(*((long long *)&v20), v12), v28);
    }
}
