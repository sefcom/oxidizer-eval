long long uu_tail::follow::files::FileHandling::get::h093330f177ed0911(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [sp-0x98], Other Possible Types: char
    unsigned long long v1;  // [sp-0x88]
    uint128_t *v2;  // [sp-0x78]
    char v3;  // [bp-0x70]
    char v4;  // [bp-0x68]
    char v5;  // [bp-0x60]
    int v6;  // [sp-0x58]
    int v7;  // [sp-0x48]
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rcx
    unsigned long long v11;  // r8
    unsigned long long v12;  // r9
    int v13;  // xmm0
    int v14;  // ymm0
    unsigned long long v16;  // rax
    uint128_t *v17;  // rbx
    uint128_t *v18;  // r15
    int v19;  // xmm0
    int v20;  // xmm0
    int v21;  // xmm0
    int v22;  // xmm0
    int v23;  // ymm0
    unsigned long long v25;  // r13
    int v26;  // xmm0
    unsigned long long v28;  // rbp
    unsigned long long v29;  // rbp
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    int v33;  // xmm0

    if (!(!(char)std::path::Path::is_absolute::h3431a23d91045560(a1, a2)) || !(!(char)_$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_stdin::h80a37f5a3d4ae307(a1, a2, v9, v10, v11, v12)))
    {
LABEL_4ae157:
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v0, a1, a2);
        if (!a0->field_30)
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
    }
    else
    {
        std::sys::pal::unix::fs::canonicalize::hd88c363c78336f06(&v3, a1, a2);
        if (*((long long *)&v3) == 0x8000000000000000)
        {
            _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17hd9352982e8c4d3fcE.llvm.893476530518564186(*((long long *)&v4));
            goto LABEL_4ae157;
        }
        v1 = *((long long *)&v5);
        v13 = *((int128_t *)&v3);
        v0 = v13;
        if (!a0->field_30)
        {
LABEL_4ae29a:
            core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        }
    }
    v16 = core::hash::BuildHasher::hash_one::h239d8b83961d82a4(a0 + 1, &v0);
    v17 = a0->field_20;
    v18 = v17 & v16;
    v19 = v16 >> 57;
    v20 = InterleaveLOV(v19, v19);
    v21 = (unsigned long long)(v20 >> 64) CONCAT (unsigned short)v20 CONCAT (unsigned short)v20 CONCAT (unsigned short)v20 CONCAT (unsigned short)v20;
    v22 = (unsigned int)v21 CONCAT (unsigned int)v21 CONCAT (unsigned int)v21 CONCAT (unsigned int)v21;
    v23 = v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22;
    v6 = v22;
    v2 = &a0->field_18->field_0;
    while (true)
    {
        v25 = 0;
        v26 = *((int128_t *)(v2 + v18));
        v7 = v26;
        v28 = UnaryOp GetMSBs;
        if ((unsigned int)v28)
        {
            do
            {
                v29 = v28;
                v30 = (!(v29 & 4294967295) ? 32 : UnaryOp Ctz & 4294967295);
                if ((char)_ZN59_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$2eq17h1d8861b9e1bd0bd7E.llvm.17446216398843079182((long long)(&v0)[8], v1, *((long long *)((char *)&v2[14 + 15 * -(v30 + (char *)v18 & v17)] + 8)), v2[14 + 15 * -(v30 + (char *)v18 & v17)], v11, v12))
                {
                    if (!(long long)v0)
                        return (char *)&v2[15 * -(v30 + (char *)v18 & v17) + 13] + 8;
                    __rust_dealloc((long long)(&v0)[8]);
                }
                v31 = v29 - 1 & 4294967295;
            } while (((unsigned short)v31 & (unsigned short)v29));
        }
        v33 = v7;
        v23 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(v26, v6) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(v33, 340282366920938463463374607431768211455);
        if (UnaryOp GetMSBs)
            break;
        v18 = 16 + (char *)v18 + v25 & v17;
    }
    goto LABEL_4ae29a;
}
