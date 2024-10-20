long long uu_tail::follow::files::FileHandling::tail_file::h2b20470602cacdb5(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long a3, unsigned int a4, unsigned int a5)
{
    unsigned long long *v0;  // [bp-0x2e0]
    unsigned long long v1;  // [bp-0x2d8]
    unsigned long long v2;  // [sp-0x2d0]
    void* v3;  // [sp-0x2c8]
    unsigned long long *v4;  // [sp-0x2c0]
    int v5;  // [sp-0x2b8]
    unsigned long long v6;  // [sp-0x2a8]
    void* v7;  // [sp-0x2a0]
    char v8;  // [bp-0x298], Other Possible Types: unsigned long long, unsigned long
    char v9;  // [bp-0x290]
    char v10;  // [bp-0x288]
    char v11;  // [bp-0x287]
    char v12;  // [bp-0x277]
    char v13;  // [bp-0x268]
    char v14;  // [bp-0x260]
    char v15;  // [bp-0x25f]
    char v16;  // [bp-0x25e]
    unsigned long long v17;  // [bp-0x258], Other Possible Types: unsigned long
    unsigned long v18;  // [sp-0x250], Other Possible Types: unsigned long long
    char v19;  // [bp-0x248]
    char v20;  // [bp-0x247]
    char v21;  // [bp-0x237]
    char v22;  // [bp-0x228]
    char v23;  // [bp-0x220]
    char v24;  // [bp-0x21f]
    char v25;  // [bp-0x21e]
    int v26;  // [bp-0x218], Other Possible Types: unsigned long long
    unsigned long long v27;  // [sp-0x210]
    int v28;  // [bp-0x208]
    unsigned long long v29;  // [sp-0x1f9]
    int v30;  // [sp-0x1e8]
    int v31;  // [bp-0x1d8]
    unsigned long long v32;  // [sp-0x1c9]
    unsigned long long v33;  // [sp-0x1c0]
    unsigned long long v34;  // [sp-0x1b8]
    void* v35;  // [sp-0x1b0]
    char v36;  // [sp-0x1a8]
    unsigned long long v37;  // [sp-0x1a0]
    char v38;  // [bp-0x198]
    char v39;  // [bp-0x188]
    unsigned long v40;  // [sp-0x180], Other Possible Types: unsigned long long
    unsigned long long v41;  // [sp-0x178]
    char v42;  // [sp-0x170], Other Possible Types: unsigned long
    int v43;  // [bp-0x16f]
    unsigned long long v44;  // [sp-0x168]
    void* v45;  // [bp-0x160]
    int v46;  // [bp-0x15f]
    unsigned long long v47;  // [sp-0x150]
    unsigned short v48;  // [sp-0x148]
    char v49;  // [sp-0x146]
    unsigned long v50;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v51;  // [sp-0xc8]
    char v52;  // [sp-0xc0], Other Possible Types: unsigned long
    int v53;  // [bp-0xbf]
    unsigned long long v54;  // [sp-0xb8]
    int v55;  // [bp-0xaf]
    unsigned long long v56;  // [sp-0xa0]
    unsigned short v57;  // [sp-0x98]
    char v58;  // [sp-0x96]
    struct_2 *v60;  // rax
    unsigned long long v61;  // rax
    void* v62;  // rdi
    unsigned long v63;  // r13
    void* v64;  // rsi
    unsigned long long v65;  // rbp
    char v66;  // al
    char v67;  // cl
    char v68;  // al
    int v69;  // xmm0
    char v70;  // cl
    unsigned short v71;  // dx
    int v72;  // xmm1
    char v73;  // al
    int v74;  // xmm0
    char v75;  // cl
    unsigned short v76;  // dx
    int v77;  // xmm1
    unsigned long v78;  // r8
    unsigned long v79;  // r9
    unsigned long v80;  // rcx
    unsigned long long v81;  // rax
    unsigned long long v83;  // rsi
    unsigned long long v84;  // rdx
    unsigned long long v86;  // rax
    unsigned long v87;  // rcx
    unsigned long long v88;  // rdx
    unsigned long long v89;  // r15
    unsigned long long v90;  // rax
    unsigned long long v91;  // rcx
    unsigned long long *v92;  // r14
    unsigned long long v93;  // rsi
    unsigned long long v94;  // rdi
    unsigned long long v96;  // rsi
    unsigned long long v97;  // rax
    void* v99;  // r15
    unsigned long long v100;  // rbp
    unsigned long long v101;  // r13
    unsigned long long v102;  // rcx
    unsigned long long v103[2];  // rax
    unsigned long long *v104;  // r13
    unsigned long long *v105;  // r13
    unsigned long long v106;  // r15
    unsigned long long v107;  // rax
    unsigned long long v108;  // rcx
    unsigned long long *v109;  // rbx
    unsigned long long v111;  // rsi
    unsigned long long *v112;  // rbx
    unsigned long long v113;  // rax
    void* v115;  // r15
    unsigned long long v116;  // rcx
    unsigned long long *v117;  // rbx
    unsigned long long *v118;  // rbx
    unsigned long long *v119;  // rbx
    unsigned long long *v120;  // rbx

    v6 = -1;
    v7 = 0;
    v3 = 0;
    v4 = 8;
    *((int128_t *)&v5) = 0;
    v60 = _ZN7uu_tail6follow5files12FileHandling7get_mut17hb7abf8e512a39fb9E.llvm.893476530518564186(a1, a2, a3, a3, a4, a5);
    if (!v60->field_c8)
    {
LABEL_4aec0f:
        a0->field_8 = 0;
        a0->field_0 = 0;
        goto LABEL_4aec1d;
    }
    else
    {
        v61 = uu_tail::chunks::BytesChunkBuffer::fill::hd3454c40e1200f7a(&v3, &v60->field_c8);
        if (!v61)
        {
            if (!(long long)(&v5)[8])
                goto LABEL_4aec0f;
            if ((char)a4)
            {
                if (a1->field_0 == 0x8000000000000000)
                {
LABEL_4aedf6:
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v8, uu_tail::follow::files::FileHandling::get::h093330f177ed0911(a1, a2, a3, v80, v78, v79) + 176);
                    v26 = *((long long *)&v9);
                    v27 = *((long long *)&v10);
                    if (a1->field_48)
                    {
                        v81 = a1->field_49;
                        *((int *)&v17) = (!v81 ? "\n <==\ncannot open '' for reading" : 1);
                        v18 = v81 ^ 1;
                        v50 = &v17;
                        v51 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h821e6cd8794b5289;
                        v52 = &v26;
                        v54 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h821e6cd8794b5289;
                        v40 = &anon.c568fa996e9b1afffbd2fe86e67742f4.21.llvm.893476530518564186;
                        v41 = 3;
                        v45 = 0;
                        v42 = &v50;
                        v44 = 2;
                        std::io::stdio::_print::he918bceb0c89db46(&v40, v83, v17);
                        a1->field_49 = 0;
                    }
                    if (v8)
                        __rust_dealloc(v26);
                    goto LABEL_4aef11;
                }
                std::path::Path::components::h4f3217acf0fc8653(&v17, a1->padding_8, a1->field_10);
                std::path::Path::components::h4f3217acf0fc8653(&v8, a2, a3);
                v62 = v17;
                v63 = v18;
                v64 = v8;
                v65 = *((long long *)&v9);
                if (!(v63 == v65) || !(v23 == v14) || !(v24 == 2) || !(v15 == 2))
                {
LABEL_4aec9e:
                    v68 = v19;
                    if (v52 != 6)
                    {
                        v32 = *((long long *)&v22);
                        v69 = *((int128_t *)&v20);
                        *((int128_t *)&v31) = *((int128_t *)&v21);
                        v30 = v69;
                    }
                    v70 = v25;
                    v71 = *((short *)&v23);
                    v50 = v62;
                    v51 = v63;
                    v52 = v68;
                    v72 = (int128_t)v31;
                    v53 = v30;
                    v55 = v72;
                    v56 = v32;
                    v57 = v71;
                    v58 = v70;
                    v73 = v10;
                    if (v42 != 6)
                    {
                        v29 = *((long long *)&v13);
                        v74 = *((int128_t *)&v11);
                        *((int128_t *)&v28) = *((int128_t *)&v12);
                        v26 = v74;
                    }
                    v75 = v16;
                    v76 = *((short *)&v14);
                    v40 = v64;
                    v41 = v65;
                    v42 = v73;
                    v77 = (int128_t)v28;
                    *((int128_t *)&v43) = (int128_t)v26;
                    v46 = v77;
                    v47 = v29;
                    v48 = v76;
                    v49 = v75;
                    if (!(!(char)core::iter::traits::iterator::Iterator::eq_by::h68e1807d47d5e439(&v50, &v40, v48, v49, v78, v79)))
                        goto LABEL_4aef11;
                    goto LABEL_4aedf6;
                }
                else
                {
                    v66 = v19;
                    if (v66 == 6)
                        goto LABEL_4aec9e;
                    v67 = v10;
                    if (v67 == 6)
                        goto LABEL_4aec9e;
                    if (!(!(v67 < 3 ^ v66 < 3)) || !((v62 = v62, v64 = v64, !bcmp(v62, v64, v63))))
                        goto LABEL_4aec9e;
                }
            }
LABEL_4aef11:
            v8 = std::io::stdio::stdout::h077da66234850927();
            v86 = __rust_alloc(0x2000, 1);
            if (!v86)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            v33 = 0x2000;
            v34 = v86;
            v35 = 0;
            v36 = 0;
            v37 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v8, v83, v84);
            v61 = uu_tail::chunks::BytesChunkBuffer::print::h2eaa27eb818f5e98(&v3, &v33, v84, v87, v78, v79);
            if (!v61)
            {
                std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v38, a2, a3);
                v93 = a1->field_0;
                v94 = a1->padding_8;
                a1->field_10 = *((long long *)&v39);
                *((int128_t *)&a1->field_0) = *((int128_t *)&v38);
                if (v93 << 1)
                    __rust_dealloc(v94);
                std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v40, a2, a3);
                v100 = v40;
                v101 = v41;
                if (v100 != 2)
                    memcpy(&v50, &v42, 160);
                else
                    _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17hd9352982e8c4d3fcE.llvm.893476530518564186(v101);
                v103 = _ZN7uu_tail6follow5files12FileHandling7get_mut17hb7abf8e512a39fb9E.llvm.893476530518564186(a1, a2, a3, v87, v78, v79);
                v103[0] = v100;
                v103[1] = v101;
                memcpy(v103 + 1, &v50, 160);
                a0->field_8 = 1;
                a0->field_0 = 0;
                v106 = (long long)(&v5)[8];
                if (v106)
                {
                    v107 = (long long)v5;
                    v108 = v3;
                    v0 = v4;
                    v113 = v107 - v111;
                    v1 = v106;
                    v2 = v108 - v113;
                    v115 = v106 - v2;
                    if (v106 < v2)
                        v115 = 0;
                    if (v116 != v113)
                    {
                        v117 = 0;
                        do
                        {
                            v118 = (char *)v117 + 1;
                            __rust_dealloc(*((long long *)((char *)&v0[v113] + 0x8 * v117)));
                        } while (v116 - v113 != v118);
                    }
                    if (v2 < v1)
                    {
                        v119 = 0;
                        do
                        {
                            v120 = (char *)v119 + 1;
                            __rust_dealloc(*((long long *)((char *)v0 + 0x8 * v119)));
                        } while (v115 != v120);
                    }
                }
LABEL_4aec1d:
                if (!v3)
                    return a0;
                __rust_dealloc(v4);
            }
        }
        a0->field_0 = v61;
        a0 = a0;
        *((unsigned long long *)&a0->field_8) = v88;
        v89 = (long long)(&v5)[8];
        if (v89)
        {
            v90 = (long long)v5;
            v91 = v3;
            v92 = v4;
            v97 = v90 - v96;
            v1 = v89;
            v2 = v91 - v97;
            v99 = v89 - v2;
            if (v89 < v2)
                v99 = 0;
            if (v102 != v97)
            {
                v104 = 0;
                do
                {
                    v105 = (char *)v104 + 1;
                    __rust_dealloc(*((long long *)((char *)&v92[v97] + 0x8 * v104)));
                } while (v102 - v97 != v105);
            }
            if (v2 < v1)
            {
                v109 = 0;
                do
                {
                    v112 = (char *)v109 + 1;
                    __rust_dealloc(*((long long *)((char *)v92 + 0x8 * v109)));
                } while (v99 != v112);
            }
        }
        if (!v3)
            return a0;
        __rust_dealloc(v4);
    }
}
