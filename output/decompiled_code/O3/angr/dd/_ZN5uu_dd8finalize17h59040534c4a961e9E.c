long long uu_dd::finalize::h59040534c4a961e9(struct_1 *a0, uint128_t a1[2], struct_2 *a2, unsigned long a3, unsigned int a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0x138]
    void* v1;  // [sp-0x130]
    int v2;  // [sp-0x128]
    int v3;  // [bp-0x118], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long long v4;  // [sp-0x110]
    unsigned long v5;  // [sp-0x108], Other Possible Types: unsigned long long
    char v6;  // [bp-0x100]
    char v7;  // [bp-0xf8]
    unsigned long v8;  // [sp-0xb8], Other Possible Types: unsigned long long
    unsigned int v9;  // [sp-0xb0]
    int v10;  // [sp-0xa8]
    unsigned long v11;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned int v12;  // [sp-0x90]
    int v13;  // [sp-0x88]
    int v14;  // [sp-0x78]
    unsigned long long v15;  // [sp-0x68]
    unsigned long v16;  // [sp-0x60]
    int v17;  // [sp-0x58]
    char v18;  // [sp-0x48]
    struct_0 *v19;  // [bp+0x8]
    char v20;  // [bp+0x10]
    void* v21;  // rax
    unsigned long long v22;  // r14
    unsigned long long v23;  // rbp
    unsigned long long v24;  // rbp
    unsigned long long v25;  // rdx
    unsigned long long v28;  // rbp
    unsigned long long v30;  // rcx
    struct_0 *v31;  // rcx
    unsigned long long v32;  // rax
    unsigned long long v33;  // r14

    v8 = a3;
    v9 = a4;
    if (a0->field_0 == 0x8000000000000000)
    {
        *((int128_t *)&v2) = 0;
        v1 = 0;
        v0 = 0;
        goto LABEL_49c7f5;
    }
    else
    {
        uu_dd::bufferedoutput::BufferedOutput::flush::h00ae8becd1ca1781(&v3, a0);
        if (!v3)
        {
            v1 = v5;
            v0 = *((long long *)&v6);
            *((int128_t *)&v2) = *((int128_t *)&v7);
            if (a0->field_0 == 0x8000000000000000)
            {
LABEL_49c7f5:
                v21 = uu_dd::Output::sync::hde252c7031c71aff(&a0->field_8);
            }
            else
            {
                v21 = uu_dd::Output::sync::hde252c7031c71aff(&a0->field_18);
            }
            if (!v21)
            {
                if (v20)
                {
                    if (a0->field_0 != 0x8000000000000000)
                    {
                        if (a0->field_18 == 1)
                        {
                            v24 = &a0->field_1c;
                            v3 = std::fs::File::set_len::hd21acd2eeb028efb(v24, v25);
                            if (v3)
                                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0c50372ca64a7fc0(&v3);
                        }
                    }
                    else
                    {
                        if ((char)a0->field_8 == 1)
                        {
                            v23 = (char *)&a0->field_8 + 4;
                            v3 = std::fs::File::set_len::hd21acd2eeb028efb(v23, v25);
                            if (v3)
                                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0c50372ca64a7fc0(&v3);
                        }
                    }
                }
                *((uint128_t *)&v10) = a2->field_10;
                v28 = a2->field_0;
                *((uint128_t *)&v14) = a1[1];
                *((uint128_t *)&v13) = a1[0];
                v15 = v28 + v1;
                v16 = a2->field_8 + v0 + ((v28 + v1 <= v28 ? 0 : 1) & 1);
                v17 = AddV(v10, v2);
                v11 = std::time::Instant::elapsed::hd84d976472e03263(&v8);
                v12 = v25;
                v18 = 2;
                std::sync::mpmc::Sender$LT$T$GT$::send::h7c0b7f7277584606(&v3, a5, &v11, v30);
                v31 = v19;
                v5 = v31->field_10;
                *((uint128_t *)&v3) = v31->field_0;
                v32 = std::thread::JoinInner$LT$T$GT$::join::hb57af44fe03e022a(&v3);
                if (v32)
                {
                    v3 = v32;
                    v4 = v25;
                    core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                }
                v33 = a0->field_0;
                if (v33 != 0x8000000000000000)
                {
                    if (a0->field_18 - 1 <= 1)
                        close(a0->field_1c);
                    if (v33)
                        __rust_dealloc(a0->field_8);
                }
                else if ((char)a0->field_8 - 1 <= 1)
                {
                    close(*((int *)((char *)&a0->field_8 + 4)));
                }
                return 0;
            }
        }
        core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h8df4aa4fa271cbe5(v19);
        v22 = a0->field_0;
        if (v22 != 0x8000000000000000)
        {
            if (a0->field_18 - 1 <= 1)
                close(a0->field_1c);
            if (v22)
            {
                __rust_dealloc(a0->field_8);
                return v21;
            }
            return v21;
        }
        else if ((char)a0->field_8 - 1 > 1)
        {
            return v21;
        }
        else
        {
            close(*((int *)((char *)&a0->field_8 + 4)));
            return v21;
        }
    }
}
