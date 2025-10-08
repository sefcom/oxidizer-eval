long long uu_base32::base_common::fast_encode::write_with_line_breaks(struct_1 *a0, struct_0 *a1, unsigned long long a2, struct_2 **a3, unsigned int a4)
{
    unsigned int v0;  // [bp-0x64]
    struct_0 *v1;  // [bp-0x58], Other Possible Types: char
    unsigned long long v2;  // [bp-0x50]
    void* v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    void* v9;  // r13
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rax
    unsigned long v12;  // rbx
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax

    v0 = a4;
    v7 = a1.make_contiguous();
    core::slice::<impl [T]>::chunks_exact(&v1, v7, a2, a0->field_18, &g_50e200);
    v9 = 0;
    if (v1.next())
    {
        do
        {
            v9 += v10;
            a0.spec_extend(v8, v10 + v8);
            a0.push(10, &g_50e230);
            v8 = v1.next();
        } while (v8);
    }
    v11 = a3(a2, a0->field_8, a0->field_10);
    if (v11)
        return v11;
    v12 = a1->field_18;
    v13 = core::slice::index::range(v9, v12);
    a1->field_18 = 0;
    v1 = a1;
    v2 = v13;
    v3 = 0;
    v4 = v12 - v13;
    v5 = v13;
    core::ptr::drop_in_place<alloc::collections::vec_deque::drain::Drain<u8>>(&v1);
    if (!(char)v0)
    {
        a0->field_10 = 0;
    }
    else if (a1->field_18)
    {
        v14 = a3(a2, a1.make_contiguous());
        if (v14)
            return v14;
        return a3(a2, "\nassertion failed: encode_in_chunks_of_size > 0assertion failed: !input_buffer.is_empty()assertion failed: leftover_buffer.len() < encode_in_chunks_of_sizeassertion failed: table[us]assertion failed: !table[us]assertion failed: decode_in_chunks_of_size > 0assertion failed: leftover_buffer.len() < decode_in_chunks_of_sizeread error: ", 1);
    }
    return 0;
}
