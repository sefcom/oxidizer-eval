int uu_base32::base_common::fast_decode::fast_decode::h6cdd5d2bbb3246b5()
{
    void* v0;  // [sp-0x1f8]
    unsigned long long v1;  // [sp-0x1f0]
    void* v2;  // [sp-0x1e8]
    void* v3;  // [sp-0x1e0]
    char v4[2];  // [sp-0x1d8]
    char v5[2];  // [sp-0x1d0], Other Possible Types: void*
    unsigned long v6;  // [sp-0x1c8], Other Possible Types: unsigned long long
    char v7[2];  // [sp-0x1c0]
    unsigned long long v8;  // [sp-0x1b8]
    void* v9;  // [sp-0x1b0]
    unsigned long long v10;  // [sp-0x1a8]
    void* v11;  // [sp-0x1a0]
    unsigned long long v12;  // [sp-0x198]
    unsigned long v13;  // [sp-0x180], Other Possible Types: unsigned long long
    char v14;  // [bp-0x178]
    char v15;  // [bp-0x170]
    char v16;  // [bp-0x168]
    struct struct_0 **v17;  // [sp-0x158]
    unsigned long long v18;  // [sp-0x150]
    char v19;  // [bp-0x130]
    unsigned long v21;  // rsi
    char v22[2];  // rdx
    struct struct_0 *v23[8];  // rcx
    unsigned long long v25;  // r12
    unsigned long long v26;  // r12
    unsigned long v27;  // cc_ndep
    unsigned int v28;  // r8d
    struct_2 *v30;  // rdi
    unsigned long long v31;  // r13
    struct struct_0 **v32;  // rbp
    char v33[2];  // r14
    unsigned long long v35;  // rax
    char v37[2];  // rbp
    char v38[2];  // rbx
    unsigned long long v39;  // rcx
    unsigned long long v40;  // r12
    char v41[2];  // rbx
    unsigned long long v42;  // rax
    unsigned long long v43;  // rax

    v13 = v21;
    v25 = v23[7](v22);
    v26 = v25 * 0x400;
    if ((char)amd64g_calculate_condition(4, 32, v25 << 10, v25 << 9, v27))
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    uu_base32::base_common::fast_decode::alphabet_to_table::h4cc31c88863ad397(&v19, v23[3](v22), v22, v28);
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h3fa0b55ea5605292(&v14, 0x8000, 1);
    if (*((long long *)&v14))
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v6 = *((long long *)&v15);
    *((long long *)&v7) = *((long long *)&v16);
    v8 = 0x8000;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v9 = 0;
    v10 = 1;
    v11 = 0;
    v3 = 0;
    *((long long *)&v4) = 1;
    v5 = 0;
    v31 = v30->field_0;
    v32 = v30->field_8->field_18;
    v12 = &g_4ff1a0;
    v18 = v31;
    v17 = v32;
    while (true)
    {
        if (v32(v31))
            goto *((int *)(4269508 + (vvar_230{reg 32} & 3) * 4)) + 4269508;
        if (!vvar_230{reg 32})
        {
            if (!(!v23[4](v22, v1, v2, &v9)))
                goto LABEL_444bcb;
            v43 = uu_base32::base_common::fast_decode::write_to_output::hedab706053c182d3(&v9, &v13, &g_4ff138);
            if (v43)
            {
                uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v43);
            }
            else
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he1ebe3e8594d454a();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha1bb09e39b1fffb6(&v3);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he1ebe3e8594d454a();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha1bb09e39b1fffb6(&v9);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he1ebe3e8594d454a();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha1bb09e39b1fffb6(&v0);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he1ebe3e8594d454a();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha1bb09e39b1fffb6(&v6);
                break;
            }
            goto LABEL_444bcb;
        }
        else
        {
            if (v8 < vvar_230{reg 32})
                core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
            v33 = v7;
            while (true)
            {
                v35 = 0;
                if (vvar_230{reg 32} == v35)
                    break;
                if (!(&v19)[v33[v35]])
                {
                    v5 = 0;
                    v37 = 0;
                    v38 = 0;
                    do
                    {
                        v40 = *((char *)(v33 + v37));
                        if ((&v19)[v40])
                        {
                            if (v38 == v3)
                                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h10a5b4cfd830c7af(&v3);
                            *((char *)(v4 + v38)) = v40;
                            v38 = &v38[1];
                            *(&v5) = v38;
                        }
                    } while ((v37 += 1, vvar_230{reg 32} != v37));
                    v33 = v4;
                    v26 = v26;
                    v31 = v18;
                    v32 = v17;
                    v39 = v26 - v2;
                    if (v39 <= v38)
                        goto LABEL_444af5;
                    goto LABEL_444aa0;
                }
            }
            v38 = vvar_230{reg 32};
            v39 = v26 - v2;
            if (v39 > vvar_230{reg 32})
            {
LABEL_444aa0:
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hda2e936b18727f63(&v0, v33, v38 + v33);
                if (v2 >= v26)
                {
                    v12 = &g_4ff1b8;
                    core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
                }
                goto LABEL_4449e0;
            }
LABEL_444af5:
            if (!(!uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer::hb9b6b6c380795389(v22, v23, v26, v39, v33, v41, &v9, &v0)))
                goto LABEL_444bcb;
            if (v2 >= v26)
                core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
            v42 = uu_base32::base_common::fast_decode::write_to_output::hedab706053c182d3(&v9, &v13, &g_4ff138);
            if (!v42)
            {
LABEL_4449e0:
            }
            else
            {
                uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h1e47f2ada1a82a7a(v42);
LABEL_444bcb:
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he1ebe3e8594d454a();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha1bb09e39b1fffb6(&v3);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he1ebe3e8594d454a();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha1bb09e39b1fffb6(&v9);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he1ebe3e8594d454a();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha1bb09e39b1fffb6(&v0);
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he1ebe3e8594d454a();
                _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha1bb09e39b1fffb6(&v6);
                break;
            }
        }
    }
    return;
}
