double uu_od::open_input_peek_reader::h537ede12b79357da(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5)
{
    void* v0;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long *v2;  // [sp-0x58]
    unsigned long v3;  // [sp-0x50], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x48]
    char v5;  // [bp-0x40]
    char v6;  // [sp-0x38]
    unsigned long long *v8;  // rax
    unsigned long long *v9;  // rcx
    unsigned long long v10;  // 4096
    char *v12;  // rsi
    unsigned long long v13;  // rdi
    char v14;  // r8b
    unsigned long long v15;  // rdx
    int v16;  // xmm0
    int v17;  // xmm1
    int v18;  // ymm0

    if (!a2)
    {
        vvar_172{stack -96} = a2;
        vvar_173{stack -88} = v8;
        vvar_174{stack -80} = a2;
        vvar_175{stack -72} = 0;
        vvar_176{stack -56} = 0;
        _ZN5uu_od15multifilereader15MultifileReader9next_file17he74466dc872dbd3dE.llvm.5160352799553516660(&v1);
        vvar_178{reg 224} = *((int128_t *)&v1);
        vvar_179{reg 256} = *((int128_t *)&v3);
        a0->field_30 = *((int128_t *)&v5);
        *((void*)&a0->field_20) = v17;
        *((void*)&a0->field_10) = v16;
        a0->field_0 = a4;
        a0->field_8 = a5;
        a0->field_40 = a3;
        a0->field_48 = 0;
        a0->field_50 = 1;
        a0->field_58 = 0;
        return (unsigned long long)(v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | vvar_178{reg 224});
    }
    if (a2 > 384307168202282325)
    {
        v0 = 0;
    }
    else
    {
        v0 = 8;
        v8 = __rust_alloc(a2 * 24, 8);
        if (v8)
        {
            v9 = 16;
            do
            {
                v12 = *((long long *)(a1 + v9 - 8));
                v13 = *((long long *)(a1 + v9));
                if (v13 == 1)
                    v14 = *(v12) == 45;
            } while ((*((unsigned long long *)(v8 + v9 - 16)) = (unsigned long long)v14, *((char **)(v8 + v9 - 8)) = v12, *((unsigned long long *)(v8 + v9)) = v13, v9 += 24, v15 = v10 - 1, v10 != 1));
            v1 = a2;
            v2 = v8;
            v3 = a2;
            v4 = 0;
            v6 = 0;
            _ZN5uu_od15multifilereader15MultifileReader9next_file17he74466dc872dbd3dE.llvm.5160352799553516660(&v1);
            v16 = *((int128_t *)&v1);
            v17 = *((int128_t *)&v3);
            a0->field_30 = *((int128_t *)&v5);
            *((void*)&a0->field_20) = v17;
            *((void*)&a0->field_10) = v16;
            a0->field_0 = a4;
            a0->field_8 = a5;
            a0->field_40 = a3;
            a0->field_48 = 0;
            a0->field_50 = 1;
            a0->field_58 = 0;
            return (unsigned long long)(v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v16);
        }
    }
    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
}
