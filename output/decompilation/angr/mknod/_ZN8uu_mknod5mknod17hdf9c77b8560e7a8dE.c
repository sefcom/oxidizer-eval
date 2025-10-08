long long uu_mknod::mknod(unsigned long long a0, unsigned long long a1, struct_0 *a2)
{
    char v0;  // [bp-0x50]
    char *v2;  // r14
    unsigned int v3;  // ebp
    unsigned int v4;  // ebp
    unsigned int v5;  // eax
    char *v7;  // rax
    unsigned long long v8;  // rdx

    v0.spec_new_impl(a0, a1);
    v2 = v0.expect(&g_4e3ff0);
    v3 = a2->field_10;
    if (!(~((unsigned short)v3) & 438))
    {
        v4 = mknod(v2, v3, a2->field_0);
        if (v4 == -1)
            goto LABEL_45a166;
    }
    else
    {
        v5 = umask(0);
        v4 = mknod(v2, v3, a2->field_0);
        umask(v5);
        if (v4 == -1)
        {
LABEL_45a166:
            v0.spec_new_impl(uucore::execution_phrase(), a2);
            v7 = v0.expect(&g_4e4008);
            perror(v7);
            core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v7, v8);
        }
    }
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v2, v8);
    return v4;
}
