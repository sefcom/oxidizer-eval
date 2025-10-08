long long fish::builtins::read::read_in_chunks(unsigned int a0, unsigned long a1, char a2, unsigned int a3)
{
    char v0;  // [bp-0xe9]
    void* v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    void* v3;  // [bp-0xd8]
    unsigned long long v4;  // [bp-0xd0]
    unsigned long long v5;  // [bp-0xc8]
    struct_0 *v6;  // [bp-0xc0]
    int v7;  // [bp-0xb8], Other Possible Types: uint128_t
    int v9;  // [bp-0xa8], Other Possible Types: uint128_t
    uint128_t v11;  // [bp-0x98]
    uint128_t v12;  // [bp-0x88]
    uint128_t v13;  // [bp-0x78]
    uint128_t v14;  // [bp-0x68]
    uint128_t v15;  // [bp-0x58]
    uint128_t v16;  // [bp-0x48]
    unsigned long long v18;  // rbx
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rbx
    unsigned long long v21;  // r13
    unsigned long long v22;  // rax
    unsigned long long v23;  // r13
    unsigned long long v24;  // r13
    unsigned long long v25;  // rdx
    unsigned long long v26;  // r13
    unsigned long long v27;  // rbx
    unsigned long long v28;  // rax
    unsigned long long v30;  // r15
    unsigned long long v32;  // rbx
    unsigned long long v33;  // r14

    v0 = a2;
    v1 = 0;
    v2 = 1;
    v3 = 0;
    if (a3)
    {
        while (true)
        {
            v16 = 0;
            v15 = 0;
            v14 = 0;
            v13 = 0;
            v12 = 0;
            v11 = 0;
            v9 = 0;
            v7 = 0;
            fish::common::read_blocked(&v4, a0, &v7, 128);
            if (((char)v4 & 1))
                goto LABEL_136430f;
            v18 = v5;
            if (!v18)
                goto LABEL_136430f;
            v4 = 0.index(v18, &v7, 128, &g_14cbec8);
            v5 = v19 + v4;
            if (!((char)v4.position(&v0) & 1))
                v20 = v18;
            else
                v20 = v19;
            v21 = v20;
            if (v21 > v18)
                core::panicking::panic("assertion failed: bytes_consumed <= bytes_readlseek-p-P--delimiter--line-z", 46, &g_14cbee0); /* do not return */
            v22 = 0.index(v21, &v7, 128, &g_14cbef8);
            v1.spec_extend(v22, v19 + v22);
            if (v21 < v18)
                break;
            if (v3 > core::sync::atomic::atomic_load(&_ZN4fish3env15READ_BYTE_LIMIT17h28be1d6ca7bf6cd0E, 0))
                goto LABEL_1364304;
        }
        v21 >> 63.unwrap(&g_14cbf10);
        v23 = v21 - v18;
        if ((char)(((v21 ^ v18) & (v21 ^ v21 - v18)) >> 63))
        {
            core::panicking::panic_const::panic_const_sub_overflow(&g_14cbf28); /* do not return */
        }
        else if (!((char)_ccall(0, 24, v23 + 1, 0, (unsigned long long)(char)(v21 < v18))))
        {
            0.unwrap(&g_14cbf40);
            if (lseek(a0, v23 + 1, 1) == -1)
            {
                fish::wutil::perror("lseek-p-P--delimiter--line-z", 5);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v2);
                return 4294967297;
            }
        }
        else
        {
            core::panicking::panic_const::panic_const_add_overflow(&g_14cbf28); /* do not return */
        }
LABEL_13643b8:
        v30 = 0;
        goto LABEL_13643bb;
    }
    while (true)
    {
        v16 = 0;
        v15 = 0;
        v14 = 0;
        v13 = 0;
        v12 = 0;
        v11 = 0;
        v9 = 0;
        v7 = 0;
        fish::common::read_blocked(&v4, a0, &v7, 128);
        if (!((char)v4 & 1))
        {
            v24 = v5;
            if (!v24)
                goto LABEL_136430f;
            v4 = 0.index(v24, &v7, 128, &g_14cbec8);
            v5 = v25 + v4;
            if (!((char)v4.position(&v0) & 1))
                v26 = v24;
            else
                v26 = v25;
            v27 = v26;
            if (v27 > v24)
                core::panicking::panic("assertion failed: bytes_consumed <= bytes_readlseek-p-P--delimiter--line-z", 46, &g_14cbee0); /* do not return */
            v28 = 0.index(v27, &v7, 128, &g_14cbef8);
            v1.spec_extend(v28, v25 + v28);
            if (v27 < v24)
                goto LABEL_13643b8;
            if (v3 > core::sync::atomic::atomic_load(&_ZN4fish3env15READ_BYTE_LIMIT17h28be1d6ca7bf6cd0E, 0))
            {
LABEL_1364304:
                v30 = 1;
LABEL_13643bb:
                v32 = v2;
                fish::common::str2wcstring(&v7, v2, v3);
                v33 = 0x7a00000000;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v6);
                v6->field_10 = (long long)v9;
                v6->field_0 = 0;
                goto LABEL_136436a;
            }
        }
        else
        {
LABEL_136430f:
            v32 = v2;
            fish::common::str2wcstring(&v7, v2, v3);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v6);
            v6->field_10 = (long long)v9;
            v6->field_0 = 0;
            v30 = !v6->field_10;
            v33 = (!v6->field_10 ? 0x100000000 : 0x7a00000000);
LABEL_136436a:
            break;
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v32);
    return v33 | v30;
}
