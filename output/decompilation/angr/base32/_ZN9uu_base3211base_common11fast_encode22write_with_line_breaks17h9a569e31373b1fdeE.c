long long uu_base32::base_common::fast_encode::write_with_line_breaks(struct_1 *a0, struct_0 *a1, unsigned long long a2, struct_2 **a3, unsigned int a4)
{
    unsigned int v0;  // [bp-0x5c]
    struct_0 *v1;  // [bp-0x58], Other Possible Types: char
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    void* v9;  // r13
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long v13;  // rdx
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rcx
    unsigned long long v16;  // rax

    v0 = a4;
    v7 = a1.make_contiguous();
    ::0x4b5470::core::slice::<impl [T]>::chunks_exact(&v1, v7, a2, a0->field_18, &g_5a2e88);
    v9 = 0;
    if (v1.next())
    {
        do
        {
            v9 += v10;
            a0.append_elements(v8, v10);
            a0.push();
            v8 = v1.next();
        } while (v8);
    }
    v11 = a3(a2, a0->field_8, a0->field_10);
    if (v11)
        return v11;
    v12 = core::slice::index::range(v9, a1->field_18, &g_5a2ea0);
    v14 = v13 - v12;
    v15 = a1->field_18;
    a1->field_18 = v12;
    v1 = a1;
    v2 = v14;
    v3 = v12;
    v4 = v15 - v14;
    v5 = v14;
    core::ptr::drop_in_place<alloc::collections::vec_deque::drain::Drain<u8>>(&v1);
    if (!(char)v0)
    {
        a0->field_10 = 0;
    }
    else if (a1->field_18)
    {
        v16 = a3(a2, a1.make_contiguous());
        if (v16)
            return v16;
        return a3(a2, "\n/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/collections/vec_deque/mod.rs", 1);
    }
    return 0;
}
