long long fish::builtins::path::path_sort(unsigned long long a0, unsigned long long a1[3], uint128_t *a2, unsigned long a3)
{
    unsigned long long v1;  // [bp-0x180]
    unsigned long long v3;  // [bp-0x170]
    unsigned long long v5[3];  // [bp-0x168]
    unsigned long long v7;  // [bp-0x158]
    void* v8;  // [bp-0x148]
    char v10;  // [bp-0x138]
    unsigned long long v11;  // [bp-0x130]
    unsigned long long v12;  // [bp-0x128]
    unsigned int v13;  // [bp-0x120]
    unsigned int v14;  // [bp-0x118]
    void* v15;  // [bp-0x110]
    void* v17;  // [bp-0x100]
    int v18;  // [bp-0xf0]
    char v19;  // [bp-0xef]
    int v20;  // [bp-0xee]
    char v21;  // [bp-0xe9]
    char v22;  // [bp-0xe7]
    char v23;  // [bp-0xe0]
    char v24;  // [bp-0xd8]
    char v29;  // [bp-0x98]
    char v30;  // [bp-0x38]
    unsigned long long v36;  // r14

    v15 = 0;
    v13 = 0;
    v14 = 0;
    v17 = 0;
    *((uint128_t *)&v18) = 0;
    v23 = 0;
    v21 = 1;
    v22 = 1;
    v8 = 0;
    if (((char)fish::builtins::path::parse_opts(&v13, &v8, 0, a2, a3, a0, a1) & 1))
        return 8589934593;
    v29.new(a2, a3, &v8, a1, 0x1000);
    v30 = (char)v18 + 1;
    v10.collect(&v29);
    alloc::slice::<impl [T]>::sort_by(v11, v12, &(char)v18);
    if ((char)(&v18)[10] == 1)
        v10.dedup_by();
    v24.into_iter(&v10);
    (char)v1.next(&v24);
    if (v1 != 9223372036854775809)
    {
        v36 = a1[1];
        do
        {
            v7 = v3;
            *((int128_t *)&v5) = *((int128_t *)&v1);
            fish::builtins::path::path_out(v36, v19, (char)v20, &(unsigned long long)v5);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&(unsigned long long)v5);
            (char)v1.next(&v24);
        } while (v1 != 9223372036854775809);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::borrow::Cow<widestring::utfstr::Utf32Str>>>(&v24);
    return 0x200000000;
}
