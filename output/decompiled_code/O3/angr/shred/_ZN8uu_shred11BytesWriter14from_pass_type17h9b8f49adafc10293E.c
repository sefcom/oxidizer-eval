int uu_shred::BytesWriter::from_pass_type::h9b8f49adafc10293()
{
    char v0;  // [bp-0x20058]
    char v1;  // [bp-0x2002c]
    char v2;  // [bp-0x20028]
    char v3;  // [bp-0x1002a]
    void* v4;  // [sp-0x2028]
    char v6[2];  // rsi
    unsigned int v7;  // eax
    struct_0 *v8;  // rdi
    unsigned long long v9;  // rdx
    char v10;  // bpl
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdx

    do
    {
        v4 = 0;
    } while (&v4 != &v2);
    switch (v7)
    {
    case 0:
        memset(&v1, v6[1], 65538);
        goto LABEL_4bc1eb;
    case 2:
        rand_core::SeedableRng::from_entropy::hd7fe6f62e2325342(&v8->padding_1[15], v6, v9);
        v10 = 0;
        memset(&v8->padding_1[335], 0, 0x10000);
        break;
    default:
        memset(&v3, 0, 65538);
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact_mut::h9602805c4835881b(&v0, &v3);
        v11 = _$LT$core..slice..iter..ChunksExactMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7dcdd33cfb13c3b(&v0);
        if (v11)
        {
            do
            {
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h592b16ec71136960(v11, v12, &v6[1], 3, &g_538668);
                v11 = _$LT$core..slice..iter..ChunksExactMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7dcdd33cfb13c3b(&v0);
            } while (v11);
        }
        memcpy(&v1, &v3, 65538);
LABEL_4bc1eb:
        v8->field_10008 = 0;
        memcpy(&v8->padding_1, &v1, 65538);
        v10 = vvar_58{reg 56} | -0x100 | 1;
        break;
    }
    v8->field_0 = v10;
    return;
}
