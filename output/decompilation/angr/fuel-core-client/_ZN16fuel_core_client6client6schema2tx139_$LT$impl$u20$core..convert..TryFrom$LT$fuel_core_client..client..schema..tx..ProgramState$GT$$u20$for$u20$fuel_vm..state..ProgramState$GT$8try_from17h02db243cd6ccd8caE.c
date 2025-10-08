long long fuel_core_client::client::schema::tx::<impl core::convert::TryFrom<fuel_core_client::client::schema::tx::ProgramState> for fuel_vm::state::ProgramState>::try_from(struct_1 *a0, void* a1)
{
    char v0;  // [bp-0x60], Other Possible Types: unsigned long long
    char v1;  // [bp-0x58]
    int v2;  // [bp-0x48]
    unsigned long v3;  // [bp-0x38]
    int v4;  // [bp-0x28]
    unsigned long v5;  // [bp-0x18]
    unsigned long v7;  // rbp
    struct_0 *v8;  // rax
    unsigned long long v9;  // rcx
    unsigned int v10;  // edi
    char *v11;  // rdi
    char *v12;  // rsi
    unsigned long long v13;  // rax

    v7 = (char)a1[24];
    if ((unsigned int)v7)
    {
        if ((unsigned int)v7 == 1)
        {
            v8 = (long long)a1[8];
            if ((long long)a1[16] == 32)
            {
                v9 = *((long long *)&(&v8->field_0)[1]);
                *((char *)&a0->field_10) = *((char *)&(&v8->field_7)[1] + 7);
                *((int128_t *)&a0->field_8) = *((int128_t *)((char *)&(&v8->field_3)[1] + 3));
                a0->field_0 = 1;
                v10 = *((int *)&v8->field_0[3]);
                *((int *)&a0->field_1[0]) = *((int *)&v8->field_0[0]);
                *((unsigned int *)&a0->field_1[3]) = v10;
                *((unsigned long long *)&a0->field_4) = v9;
            }
            else
            {
                *((unsigned long long *)&a0->field_4) = 8;
                a0->field_0 = 5;
            }
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(*((long long *)a1), v8);
            return a0;
        }
        v5 = (long long)a1[16];
        *((int128_t *)&v4) = *((int128_t *)a1);
        v11 = &v0;
        v12 = &v4;
    }
    else
    {
        v3 = (long long)a1[16];
        *((int128_t *)&v2) = *((int128_t *)a1);
        v11 = &v0;
        v12 = &v2;
    }
    v11.try_from(v12);
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v0, *((long long *)&v1));
        *((unsigned long long *)&a0->field_4) = 8;
        a0->field_0 = 5;
        return a0;
    }
    v13 = *((long long *)&v1);
    a0->field_0 = v7;
    *((unsigned long long *)&a0->field_4) = (((((v13 & 0xff00ff00ff00ff00) >> 8 | v13 * 0x100 & 0xff00ff00ff00ff00) & 0xffff0000ffff0000) >> 16 | ((v13 & 0xff00ff00ff00ff00) >> 8 | v13 * 0x100 & 0xff00ff00ff00ff00) * 0x10000 & 0xffff0000ffff0000) & 0xffffffff00000000) >> 32 | ((((v13 & 0xff00ff00ff00ff00) >> 8 | v13 * 0x100 & 0xff00ff00ff00ff00) & 0xffff0000ffff0000) >> 16 | ((v13 & 0xff00ff00ff00ff00) >> 8 | v13 * 0x100 & 0xff00ff00ff00ff00) * 0x10000 & 0xffff0000ffff0000) * 0x100000000 & 0xffffffff00000000;
    return a0;
}
