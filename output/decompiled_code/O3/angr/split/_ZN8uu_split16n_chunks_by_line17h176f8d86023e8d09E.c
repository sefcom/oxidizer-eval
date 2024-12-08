long long uu_split::n_chunks_by_line::h176f8d86023e8d09(struct_1 *a0, unsigned int a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [sp-0x111]
    unsigned long long v1;  // [sp-0x108]
    void* v2;  // [sp-0x100], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v3;  // [sp-0xf8]
    void* v4;  // [sp-0xf0], Other Possible Types: unsigned long long
    struct_0 *v5;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned int v6;  // [bp-0xe0], Other Possible Types: unsigned long
    unsigned long long v7;  // [sp-0xd8]
    unsigned long long v8;  // [sp-0xd0]
    unsigned long v9;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0xb8]
    unsigned long long v11;  // [sp-0xb0]
    unsigned long long v12;  // [sp-0xa8]
    void* v13;  // [sp-0xa0]
    unsigned long long v14;  // [sp-0x98]
    void* v15;  // [sp-0x90]
    char v16;  // [bp-0x88]
    char v17;  // [bp-0x80]
    unsigned long v18;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long v19;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long v20;  // [sp-0x68], Other Possible Types: unsigned long long
    char v21;  // [sp-0x60]
    char v22;  // [sp-0x58]
    unsigned long v23;  // [sp-0x50]
    char v24;  // [bp-0x48]
    char v25;  // [bp-0x40]
    char v26;  // [bp-0x38]
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rax
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rsi
    unsigned long long v32;  // rax
    unsigned long long v33;  // rbx
    unsigned int v34;  // eax
    unsigned long long v35;  // r13
    unsigned long long v36;  // rbp
    unsigned long long v37;  // r12
    void* v38;  // r13
    unsigned long long v39;  // rax
    unsigned long long v40;  // r15
    unsigned long long v41;  // r15
    unsigned long long v42;  // rax
    unsigned long long v44;  // rax
    unsigned int v45;  // ecx
    unsigned long long v46;  // rbp
    unsigned long long v47;  // r12

    v13 = 0;
    v14 = 1;
    v15 = 0;
    if (uu_split::get_input_size::h6ad29fa08a4e6ff3(&a0->padding_10[96], a1, &v13, *((long long *)&a0->field_0), a0->field_8))
    {
        v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v28);
    }
    else
    {
        v8 = v14;
        v6 = v15;
        if (v28 || (v29 = 0, a3 != 1 && !a0->field_a1))
        {
            v18 = std::io::stdio::stdout::h077da66234850927();
            v1 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v18, v31, v30);
            v2 = 0;
            v3 = 8;
            v4 = 0;
            if (!a2)
                core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(); /* do not return */
            *((unsigned int *)&v5) = a1;
            if (!(v28 | a2) >> 32)
            {
                v34 = v28;
                v7 = (0 CONCAT v34) /m (unsigned int)a2 >> 32 & 4294967295;
                v33 = (0 CONCAT v34) /m (unsigned int)a2 & 4294967295 & 4294967295;
                if (!(a3 == 1))
                    goto LABEL_4cd92d;
LABEL_4cd901:
                v12 = v28;
                v0 = a0->field_a1;
LABEL_4cd99f:
                v36 = v33 - -1 - (v7 < 1);
                v18 = v8;
                v19 = v6;
                v20 = v5;
                v21 = 0;
                v22 = a0->field_a2;
                v5 = &a0->field_0;
                v23 = a0->field_88;
                v37 = 1;
                v38 = 0;
                v8 = 9223372036854775809;
                v6 = v22;
                while (true)
                {
                    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2e80977786cbcaf5(&v24, &v18);
                    v39 = *((long long *)&v24);
                    if (v39 == v8)
                    {
LABEL_4cdbc2:
                        ::0x4c8fc0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h8151a3c2447c82c3(&v2);
                        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h19e1af153971ffce(v1);
                        ::0x4c88c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h9efcf6526957a371(&v13);
                        return 0;
                    }
                    v40 = *((long long *)&v25);
                    if (v39 == 0x8000000000000000)
                    {
                        v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v40);
                        break;
                    }
                    v9 = v39;
                    v10 = v40;
                    v11 = *((long long *)&v26);
                    if (v11 + v38 < v12)
                    {
                        ::0x4c9790::alloc::vec::Vec$LT$T$C$A$GT$::push::hddbfbae5e33ac3af(&v9, v6);
                        v41 = v10;
                    }
                    if (a3)
                    {
                        if (!(a3 == 1))
                            goto LABEL_4cdb4f;
                        v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v42);
                        goto LABEL_4cdc19;
                    }
                    _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::get_writer::h7e7fc1d2ae06b3d4(&v16, &v2, v37 - 1, v5);
                    v29 = *((long long *)&v16);
                    if (v29)
                        goto LABEL_4cdc1f;
                    uu_split::custom_write_all::ha50c6b1ce20650aa(&v16, v41, v11, *((long long *)&v17), v23);
                    if (v16)
                    {
                        v29 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(*((long long *)&v17));
LABEL_4cdc19:
LABEL_4cdc1f:
                        ::0x4c88c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h9efcf6526957a371(&v9);
                        break;
                    }
LABEL_4cdb4f:
                    v38 += v11;
                    if (v36 > v38)
                    {
LABEL_4cdb57:
                        if (!(a3 == 1))
                            goto LABEL_4cda30;
                        goto LABEL_4cdbad;
                    }
                    v44 = 4294967295;
                    v45 = -2;
                    do
                    {
                        v36 = v46 + v33 + (v47 < v7);
                        v37 = v47 + 1;
                        v44 = (unsigned int)v44 + 1;
                        v45 += 1;
                    } while (v36 <= v38);
                    if (!(a3 == 1))
                        goto LABEL_4cdb57;
                    if (a3 != 1)
                    {
                        v37 -= v44 & 4294967295;
                        goto LABEL_4cda30;
                    }
LABEL_4cdbad:
                    if (v37 <= a4)
                    {
LABEL_4cda30:
                        ::0x4c88c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h9efcf6526957a371(&v9);
                    }
                    else
                    {
                        ::0x4c88c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h9efcf6526957a371(&v9);
                        goto LABEL_4cdbc2;
                    }
                }
            }
            else
            {
                v32 = v28;
                v7 = (0 CONCAT v32) /m a2 >> 64;
                v33 = (0 CONCAT v32) /m a2;
                if (a3 == 1)
                    goto LABEL_4cd901;
LABEL_4cd92d:
                v0 = a0->field_a1;
                _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::init::hb3bd7c8a676e7652(&v18, a2, a0, v0);
                v35 = v18;
                v29 = v19;
                if (v35 == 0x8000000000000000)
                    goto LABEL_4cdc29;
                ::0x4c8fc0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h8151a3c2447c82c3(&v2);
                v12 = v28;
                v2 = v35;
                v3 = v29;
                v4 = v20;
                goto LABEL_4cd99f;
            }
LABEL_4cdc29:
            ::0x4c8fc0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h8151a3c2447c82c3(&v2);
            core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h19e1af153971ffce(v1);
        }
    }
    ::0x4c88c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h9efcf6526957a371(&v13);
    return v29;
}
