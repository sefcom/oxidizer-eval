long long fish::abbrs::Replacement::new(struct_1 *a0, unsigned int a1, unsigned int a2, struct_0 *a3, void* a4)
{
    void* v0;  // [bp-0x90]
    int v1;  // [bp-0x88]
    unsigned long v2;  // [bp-0x78]
    unsigned long v3;  // [bp-0x68]
    unsigned long v4;  // [bp-0x60]
    unsigned long v5;  // [bp-0x58]
    unsigned long long v7;  // r13
    unsigned long long v8;  // rdx
    unsigned long v9;  // rax
    unsigned long long v10;  // r12

    if ((char)(((0 ^ *((long long *)a4)) & (0 ^ -(*((long long *)a4)))) >> 63))
    {
        a0->field_20 = *((long long *)&a3->field_8);
        *((unsigned long long [2])&a0->field_10) = a3->field_0;
        a0->field_28 = a1;
        a0->field_2c = a2;
        a0->field_0 = 0;
        a0->field_8 = v10;
        return a0;
    }
    v2 = (long long)a4[16];
    *((int128_t *)&v1) = *((int128_t *)a4);
    if (!v2)
        core::option::expect_failed("window size must be non-zero/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/str/pattern.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/char/methods.rsto_digit: invalid radix -- radix must be in the range 2 to 36 inclusive/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/iter/traits/exact_size.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/iter/traits/iterator.rs", 28, &g_14c1888); /* do not return */
    v3 = a3->field_0[1];
    v4 = *((long long *)&a3->field_8);
    v5 = v2;
    v0 = 0;
    if (!((char)v3.try_fold(&v1, &v0) & 1))
    {
        v7 = 0;
    }
    else if (!((char)__CFADD__(v2, v8)))
    {
        v3.splice(a3, v8, v2 + v8, 4, 4);
        core::ptr::drop_in_place<alloc::vec::splice::Splice<core::iter::adapters::copied::Copied<core::slice::iter::Iter<u32>>>>(&v3);
        v9 = a1;
        v10 = v8 + v9;
        if ((char)__CFADD__(v8, v9))
            core::panicking::panic_const::panic_const_add_overflow(&g_14c18b8); /* do not return */
        v7 = 1;
    }
    else
    {
        core::panicking::panic_const::panic_const_add_overflow(&g_14c18a0); /* do not return */
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
    a0->field_20 = *((long long *)&a3->field_8);
    *((unsigned long long [2])&a0->field_10) = a3->field_0;
    a0->field_28 = a1;
    a0->field_2c = a2;
    a0->field_0 = v7;
    a0->field_8 = v10;
    return a0;
}
