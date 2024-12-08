long long uu_tail::chunks::BytesChunk::from_chunk::hb8d3c435fa3c9517(struct_0 *a0, struct_0 *a1, unsigned long long a2)
{
    char v0;  // [bp-0x2028]
    void* v1;  // [sp-0x1028]
    unsigned long long v3;  // r13
    void* v4;  // r13
    unsigned long long v5;  // rdx

    v1 = 0;
    v3 = a1->field_2000;
    v4 = v3 - a2;
    if (v3 <= a2)
    {
        v4 = 0;
        memset(a0, 0, 0x2000);
    }
    else
    {
        memset(&v0, 0, 0x2000);
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::ha383453618248686(::0x509f40::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::hb7846c613ee4142b(v5, &v0, 0x2000, &g_5bdfd0), v5, uu_tail::chunks::BytesChunk::get_buffer_with::h2595988265e451f2(a1, a2), v5, &g_5bdfe8);
        memcpy(a0, &v0, 0x2000);
    }
    a0->field_2000 = v4;
    return a0;
}
