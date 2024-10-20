double uu_tail::follow::watch::Observer::from::h7d7b166147cd384a(long long a0, long long a1, long long a2)
{
    char v0;  // [sp-0x83]
    char v1;  // [sp-0x82]
    char v2;  // [sp-0x81]
    unsigned long long v3;  // [sp-0x80]
    char v4;  // [bp-0x70]
    char v5;  // [bp-0x68]
    char v6;  // [bp-0x60]
    char v7;  // [bp-0x50]
    unsigned long long v8;  // [sp-0x48]
    unsigned long v9;  // [sp-0x40], Other Possible Types: unsigned long long
    char v10;  // [sp-0x38]
    char v11;  // [sp-0x37]
    unsigned long long v13;  // r15
    struct struct_0 **v14;  // fs
    unsigned long long v15[3];  // rax
    unsigned long long v16;  // r12
    unsigned long long v17;  // r13
    unsigned long long v18[3];  // rax
    unsigned int v19;  // ebp
    unsigned long long v20;  // r14
    unsigned int v22;  // eax
    int v23;  // xmm0
    int v24;  // xmm0
    int v25;  // xmm1
    int v26;  // xmm2
    int v27;  // ymm0

    v1 = a1->field_48;
    v2 = a1->field_49;
    v0 = a1->field_4c;
    v13 = a1->field_28;
    if (*((long long *)&*(v14)->padding_-40[64]))
    {
        v15 = &*(v14)->padding_-40[64];
        v16 = v15[1];
        v17 = v15[2];
    }
    else
    {
        v16 = std::sys::pal::unix::rand::hashmap_random_keys::h37536acea0ea3646();
        v18 = &*(v14)->padding_-40[64];
        v18[0] = 1;
        v18[2] = v17;
    }
    *((unsigned long long *)&*(v14)->padding_-40[56]) = v8 + 1;
    hashbrown::raw::RawTable$LT$T$C$A$GT$::with_capacity_in::h64a9f0c951f702cf(&v5, v13);
    v8 = v16;
    v9 = v17;
    v3 = 0x8000000000000000;
    v10 = a1->field_4a;
    v11 = 0;
    v19 = a1->field_44;
    if (!kill(v19, 0))
    {
LABEL_4c0fbb:
    }
    else
    {
        v20 = (unsigned int)std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() * 0x100000000 | 2;
        _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17hd9352982e8c4d3fcE.llvm.4276166692134022055(v20);
        if (!((unsigned int)(v20 >> 32) == 38))
            goto LABEL_4c0fbb;
    }
    v23 = *((int128_t *)&v9);
    *((void*)((char *)&a0->field_68 + 8)) = v23;
    v24 = *((int128_t *)&v3);
    v25 = *((int128_t *)&v4);
    v26 = *((int128_t *)&v6);
    *((int128_t *)((char *)&a0->field_58 + 8)) = *((int128_t *)&v7);
    *((void*)((char *)&a0->field_48 + 8)) = v26;
    *((void*)((char *)&a0->field_38 + 8)) = v25;
    *((void*)&(&a0->field_30)[1]) = v24;
    *((char *)&a0->field_78 + 12) = v1;
    *((char *)&a0->field_78 + 14) = v0;
    *((char *)&a0->field_78 + 13) = v2;
    a0->field_0 = 3;
    a0->field_20 = 0;
    a0->field_28 = 8;
    a0->field_30 = 0;
    *((unsigned int *)((char *)&a0->field_78 + 8)) = v22;
    return (unsigned long long)(v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24);
}
