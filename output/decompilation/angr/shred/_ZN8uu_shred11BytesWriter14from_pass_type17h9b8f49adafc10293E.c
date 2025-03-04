long long uu_shred::BytesWriter::from_pass_type::h9b8f49adafc10293(struct_0 *a0, char a1[2])
{
    char v0;  // [bp-0x20058]
    char v1;  // [bp-0x2002c]
    char v2;  // [bp-0x20028]
    char v3;  // [bp-0x1002a]
    void* v4;  // [sp-0x2028]
    unsigned int v6;  // eax
    char v7;  // bpl
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdx

    do
    {
        v4 = 0;
    } while (&v4 != &v2);
    switch (v6)
    {
    case 0:
        memset(&v1, a1[1], 65538);
        goto LABEL_4bc1eb;
    case 2:
        rand_core::SeedableRng::from_entropy::hd7fe6f62e2325342(&a0->padding_1[15]);
        v7 = 0;
        v8 = memset(&a0->padding_1[335], 0, 0x10000);
        break;
    default:
        memset(&v3, 0, 65538);
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact_mut::h9602805c4835881b(&v0, &v3);
        v9 = _$LT$core..slice..iter..ChunksExactMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7dcdd33cfb13c3b(&v0);
        if (v9)
        {
            do
            {
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h592b16ec71136960(v9, v10, &a1[1], 3, &g_538668);
                v9 = _$LT$core..slice..iter..ChunksExactMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7dcdd33cfb13c3b(&v0);
            } while (v9);
        }
        memcpy(&v1, &v3, 65538);
LABEL_4bc1eb:
        a0->field_10008 = 0;
        v8 = memcpy(&a0->padding_1, &v1, 65538);
        v7 = vvar_60{reg 56} & 0xffffffffffffff00 | 1;
        break;
    }
    a0->field_0 = v7;
    return v8;
}
