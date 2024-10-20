long long uu_cp::copy_helper::h1d5bb194c927b42d(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5[76])
{
    char v0;  // [bp-0x218]
    char v1;  // [bp-0x200]
    char v2;  // [bp-0x1f0], Other Possible Types: unsigned long long
    char v3;  // [bp-0x1ec]
    unsigned long v4;  // [sp-0x1e8], Other Possible Types: unsigned long long
    unsigned long v5;  // [bp-0x1e0], Other Possible Types: unsigned short
    char v6;  // [sp-0x1de]
    unsigned long v7;  // [sp-0x1d8], Other Possible Types: unsigned long long
    int v8;  // [sp-0x1c8], Other Possible Types: void*, unsigned long, unsigned long long, unsigned int
    char v9;  // [sp-0x1c4]
    unsigned int v10;  // [bp-0x1c0], Other Possible Types: unsigned long long
    char v11;  // [sp-0x1bf]
    char v12;  // [bp-0x1be]
    char v13;  // [sp-0x1bd]
    char v14;  // [bp-0x1bc], Other Possible Types: unsigned short
    int v15;  // [sp-0x1b8], Other Possible Types: void*, unsigned long long
    unsigned long long v16;  // [sp-0x1b0]
    char v17;  // [bp-0x1ad]
    void* v18;  // [sp-0x1a8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v19;  // [sp-0x1a0]
    char v20;  // [bp-0x19d]
    unsigned long long v21;  // [sp-0x198]
    char v22;  // [sp-0x190]
    void* v23;  // [bp-0x118], Other Possible Types: unsigned long long, unsigned short
    char v24;  // [sp-0x116]
    char *v25;  // [sp-0x110], Other Possible Types: unsigned long long
    void* v26;  // [sp-0x108], Other Possible Types: unsigned long, unsigned long long
    char v27;  // [sp-0x100]
    int v28;  // [sp-0x68]
    int v29;  // [sp-0x58]
    int v30;  // [sp-0x48]
    unsigned long long v31;  // [bp+0x8]
    char v32;  // [bp+0x10]
    char v33;  // [bp+0x18]
    char v34;  // [bp+0x20]
    char v35;  // [bp+0x28]
    unsigned long long v37;  // 4096
    unsigned long long v39;  // 4096
    unsigned long long v40;  // rax
    unsigned int v42;  // ebp
    unsigned int v43;  // r12d
    unsigned long long v44;  // rsi
    unsigned long long v45;  // rdi
    unsigned int v46;  // ebp
    int v47;  // xmm0
    int v48;  // xmm1
    int v49;  // xmm2
    int v50;  // xmm0
    int v51;  // xmm1
    unsigned long long v52;  // rbp
    unsigned long long v53;  // r14
    char *v54;  // r13
    unsigned long long v55;  // r12
    int v56;  // xmm0

    if (a5[68])
    {
        v8 = 511;
        v9 = 1;
        v40 = std::fs::DirBuilder::_create::h71276aa8883a3685(&v8, v39, v37);
        if (v40)
        {
            a0->field_0 = 2;
            *((unsigned long long *)&a0->padding_8) = v40;
            return v40;
        }
    }
    if (a4 && (*((char *)(a4 + a3 - 1)) == 47 || *((char *)(a4 + a3 - 1)) == 92) && !(char)std::path::Path::is_dir::h9ac0db933706da51(a3, a4))
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&a0->padding_8, a3, a4);
        a0->field_0 = 12;
        return v40;
    }
    if (a2 == 9 && !(a1->field_8 ^ 108) && !(7815273878500238383 ^ a1->field_0))
    {
        v8 = 0x1b600000000;
        v10 = 0;
        v14 = 0;
        v11 = 1;
        v14 = 1;
        v13 = 1;
        std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v2, &v8, a3, a4);
        v5 = a3;
        v7 = a4;
        v23 = 0;
        v25 = 1;
        v26 = 0;
        v21 = 32;
        v22 = 3;
        v8 = 0;
        v15 = 0;
        v18 = &v23;
        v19 = &g_5550c8;
        if ((char)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76(&v5, &v8))
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        v44 = v23;
        v45 = v25;
        if (!*((int *)&v2))
        {
            v46 = *((int *)&v3);
            if (v44)
                __rust_dealloc(v45);
        }
        else if (v44 == 0x8000000000000000)
        {
            v46 = v45;
        }
        else
        {
            v40 = v26;
            *((unsigned int *)((char *)&a0->field_b + 4)) = v45 >> 32;
            *((unsigned long long *)((char *)&a0->field_b + 8)) = v40;
            a0->field_0 = 3;
            *((unsigned long long *)&a0->padding_8) = v44;
            *((unsigned int *)&a0->field_b) = v45;
            *((unsigned long *)&a0->field_10) = v4;
            return v40;
        }
        v40 = close(v46);
        a0->field_0 = 13;
        return v40;
    }
    if (!(!v34 || !a5[70] || a5[63]))
    {
        v42 = a5[60];
        v43 = a5[71];
        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v8, a3, a4);
        if (v8 == 2)
        {
            v25 = *((long long *)&v10);
            v23 = 2;
            goto LABEL_4be428;
        }
        else
        {
            memcpy(&v23, &v8, 176);
            if (*((long long *)&v23) == 2)
            {
LABEL_4be428:
                _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h94632dc869fb5d57E.llvm.6903499209109998583(&v25);
            }
            else
            {
                uu_cp::OverwriteMode::verify::h25d5eea51fe68838(&v8, v42, a3, a4, v43);
                v52 = v8;
                if (v52 != 13)
                {
                    v53 = *((long long *)&v10);
                    *((int128_t *)&v28) = *((int128_t *)&v15);
                    *((int128_t *)&v29) = *((int128_t *)&v18);
                    *((int128_t *)&v30) = *((int128_t *)&v21);
                    a0->field_0 = v52;
                    *((unsigned long long *)&a0->padding_8) = v53;
                    *((void*)&a0->field_b) = v28;
                    *((void*)&a0->field_10) = v29;
                    *((void*)&a0->field_1b) = v30;
                    return v40;
                }
                v40 = std::sys::pal::unix::fs::unlink::h9e34f634412c6081(a3, a4);
                if (v40)
                {
                    a0->field_0 = 2;
                    *((unsigned long long *)&a0->padding_8) = v53;
                    *((void*)&a0->field_b) = v28;
                    *((void*)&a0->field_10) = v29;
                    *((void*)&a0->field_1b) = v30;
                    return v40;
                }
            }
            _$LT$$RF$str$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::hb0b4810d8b62c0c3(&v23, a3, a4);
            if (*((long long *)&v23) != 0x8000000000000000)
            {
                v56 = *((int128_t *)&v23);
                *((int128_t *)&v15) = *((int128_t *)&v26);
                v8 = v56;
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            }
            v54 = v25;
            v55 = v26;
            v40 = mkfifo(v54, 438);
            if ((unsigned int)v40 == -1)
            {
                v23 = 1;
                v25 = a3;
                v26 = a4;
                v27 = 1;
                v2 = &v23;
                v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v8 = &g_5556b8;
                v10 = 2;
                v18 = 0;
                v15 = &v2;
                v16 = 1;
                v40 = alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v5, &v8);
                v53 = *((long long *)&v5);
                *((int128_t *)&v28) = *((int128_t *)&v7);
                *(v54) = 0;
                if (v55)
                    v40 = __rust_dealloc(v54);
                a0->field_0 = 4;
                *((unsigned long long *)&a0->padding_8) = v53;
                *((void*)&a0->field_b) = v28;
                *((void*)&a0->field_10) = v29;
                *((void*)&a0->field_1b) = v30;
                return v40;
            }
            else
            {
                *(v54) = 0;
                if (v55)
                    v40 = __rust_dealloc(v54);
            }
        }
    }
    else if (!v33)
    {
        uu_cp::platform::linux::copy_on_write::h0f57c2729634b69a(&v8, a1, a2, a3, a4, a5[75], v0, v31, *((long long *)&v32), v1);
        v40 = v8;
        v23 = v10;
        v24 = v12;
        if (v40 != 13)
        {
            *((long long *)((char *)&a0->field_1b + 8)) = *((long long *)&v22);
            v50 = *((int128_t *)&v13);
            v51 = *((int128_t *)&v17);
            *((int128_t *)((char *)&a0->field_18 + 3)) = *((int128_t *)&v20);
            *((void*)((char *)&a0->field_b + 11)) = v51;
            *((void*)&(&a0->padding_8)[1]) = v50;
            a0->padding_8[2] = v24;
            *((unsigned short *)&a0->padding_8[0]) = v23;
            a0->field_0 = v40;
            return v40;
        }
        v5 = v23;
        v40 = v24;
        v6 = v40;
        if (!a5[62] && a5[71])
        {
            uu_cp::show_debug::hc85ac406b9e52d8a(&v5);
            a0->field_0 = 13;
            return v40;
        }
    }
    else
    {
        v40 = uu_cp::copy_link::he25dc0adcd5dfd3b(&v8, a1, a2, a3, a4, *((long long *)&v35));
        if (v8 != 13)
        {
            v47 = *((int128_t *)&v8);
            v48 = *((int128_t *)&v15);
            v49 = *((int128_t *)&v18);
            a0->field_1b = *((int128_t *)&v21);
            *((void*)&a0->field_10) = v49;
            *((void*)&a0->field_b) = v48;
            *((void*)&a0->field_0) = v47;
            return v40;
        }
    }
    a0->field_0 = 13;
    return v40;
}
