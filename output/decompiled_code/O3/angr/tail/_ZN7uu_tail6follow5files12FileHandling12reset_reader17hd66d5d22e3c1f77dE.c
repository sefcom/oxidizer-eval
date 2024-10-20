long long uu_tail::follow::files::FileHandling::reset_reader::hd66d5d22e3c1f77d(void* a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long v2;  // rax
    struct_1 *v3;  // rax
    struct_1 *v4;  // rbx
    unsigned long long v5;  // r14
    struct_0 *v6;  // r12

    v0 = v2;
    v3 = _ZN7uu_tail6follow5files12FileHandling7get_mut17hb7abf8e512a39fb9E.llvm.893476530518564186(a0, a1, a2, a3, a4, a5);
    v4 = v3;
    v5 = v3->field_c8;
    if (v5)
    {
        v6 = v4->field_d0;
        v3 = v6->field_0;
        if (v3)
            v3 = v3(v5);
        if (v6->field_8)
            v3 = __rust_dealloc(v5);
    }
    v4->field_c8 = 0;
    return v3;
}
