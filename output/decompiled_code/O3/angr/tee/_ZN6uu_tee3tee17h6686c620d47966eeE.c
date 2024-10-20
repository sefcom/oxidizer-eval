long long uu_tee::tee::h6686c620d47966ee(struct_3 *a0)
{
    char v0;  // [sp-0xc9]
    int v1;  // [bp-0xc8], Other Possible Types: char, unsigned long, unsigned long long
    struct_2 *v2;  // [sp-0xc0], Other Possible Types: unsigned long
    unsigned long v3;  // [sp-0xb8], Other Possible Types: unsigned long long
    void* v4;  // [sp-0xb0], Other Possible Types: unsigned long long *, unsigned long long
    char v5;  // [bp-0xa8], Other Possible Types: unsigned long
    void* v6;  // [sp-0x98]
    unsigned long long *v7;  // [sp-0x90]
    struct_1 *v8;  // [sp-0x88]
    unsigned long v9;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x78]
    unsigned long long v11;  // [sp-0x70]
    void* v12;  // [sp-0x68]
    unsigned long v13;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x58]
    struct_3 *v15;  // [sp-0x50]
    unsigned long v16;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0x40]
    unsigned long long v18;  // [sp-0x38]
    char v20;  // bpl
    unsigned long long v21;  // r15
    unsigned long long v22;  // rbx
    struct_2 *v23;  // rax
    unsigned long long *v25;  // rax
    unsigned long v26;  // r14
    void* v27;  // rbx
    int v28;  // xmm0
    int v29;  // xmm1
    unsigned long long *v31;  // rax
    unsigned long long v32;  // rax
    unsigned long long v33;  // rdx
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rbx
    unsigned long long *v36;  // r14
    struct_1 *v37;  // r15
    struct struct_0 **v38;  // rax

    if (!a0->field_19 || signal(2) != -1)
    {
        v20 = a0->field_1a;
        if (!(v20 == 4) || !(signal(13) == -1))
        {
            v21 = a0->field_10;
            v13 = a0->field_8;
            v14 = v13 + v21 * 24;
            v15 = a0;
            core::iter::adapters::try_process::h66e0305a9053098d(&v1, &v13);
            v22 = v2;
            if (v9 == 0x8000000000000000)
                return v22;
            v9 = v1;
            v10 = v22;
            v11 = v3;
            v23 = __rust_alloc(17, 1);
            if (!v23)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v23->field_0 = 154800227100185366614848765303383683879;
            v23->field_10 = 39;
            v25 = __rust_alloc(8, 8);
            if (!v25)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            *(v25) = std::io::stdio::stdout::h077da66234850927();
            v4 = v25;
            v5 = &g_4e7938;
            v1 = 17;
            v2 = v23;
            v3 = 17;
            v26 = v11;
            if (v26 == v9)
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h28f16d9158588616(&v9);
            v27 = v10;
            if (v26)
                memmove(v27 + 40, v27, v26 * 40);
            v28 = *((int128_t *)&v1);
            v29 = *((int128_t *)&v3);
            *((unsigned long *)&v27[32]) = v5;
            v27[16] = v29;
            *(v27) = v28;
            v11 = v26 + 1;
            v3 = v11;
            *((int128_t *)&v1) = *((int128_t *)&v9);
            v5 = v20;
            v4 = 0;
            v31 = __rust_alloc(8, 8);
            if (!v31)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
            *(v31) = std::io::stdio::stdin::h7215cc131abb55d8();
            v7 = v31;
            v8 = &g_4e7988.field_0;
            v32 = std::io::copy::stack_buffer_copy::h945d74170eced3c4(&v7, &v1);
            if (!v32)
            {
LABEL_4850b0:
                v35 = &g_2700000003;
                if (v11 == v21)
                {
                    v6 = 0;
                    v0 = v5;
                    v12 = 0;
                    v16 = &v0;
                    v17 = &v12;
                    v18 = &v6;
                    alloc::vec::Vec$LT$T$C$A$GT$::retain_mut::hb1ddc4dae6b6f1fc(&v1, &v16);
                    v4 += v12;
                    if (v6)
                    {
                        _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h8612a0a8f6b9ee91E.llvm.2604383847107207927(v6);
                    }
                    else
                    {
                        if (v4)
                            v22 = &g_2700000003;
                        else
                            v22 = v4;
                    }
                }
            }
            else if (!(v32 != 1) && !((char)std::io::error::Error::kind::hb2ff5fa058639b3d(v33) == 39))
            {
                _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h8612a0a8f6b9ee91E.llvm.2604383847107207927(v34);
                v22 = &g_2700000003;
            }
            else
            {
                _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h8612a0a8f6b9ee91E.llvm.2604383847107207927(v34);
                goto LABEL_4850b0;
            }
            v36 = v7;
            v37 = v8;
            if (v37->field_0)
                v38(v36);
            if (v37->field_8)
                __rust_dealloc(v36);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h87c13f5102e175ea(&v1);
            if (v1)
            {
                __rust_dealloc(v2);
                return v22;
            }
            return v22;
        }
    }
    __errno_location();
    return &g_2700000003;
}
