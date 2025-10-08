void fish::builtins::bind::BuiltinBind::list_modes(unsigned long a0, unsigned long long a1)
{
    char v0;  // [bp-0xe1]
    char v1;  // [bp-0xe0]
    unsigned long long v2;  // [bp-0xd8]
    unsigned long long v3;  // [bp-0xd0]
    char v4;  // [bp-0xc8]
    char v5;  // [bp-0xb0]
    char v6;  // [bp-0x98]
    char v7;  // [bp-0x80]
    char v8;  // [bp-0x40]
    unsigned long v10;  // r14

    v10 = a0 + 8;
    v5.get_names(v10, 1);
    v6.get_names(v10, 0);
    v8.into_iter(&v5);
    v7.chain(&v8, &v6);
    v1.collect(&v7);
    if (v3 >= 2)
    {
        if (v3 < 21)
            core::slice::sort::shared::smallsort::insertion_sort_shift_left(v2, v3);
        else
            core::slice::sort::unstable::ipnsort(v2, v3, &v0);
    }
    v1.dedup_by();
    v7.into_iter(&v1);
    v4.next(&v7);
    if (!((char)(((0 ^ *((long long *)&v4)) & (0 ^ -(*((long long *)&v4)))) >> 63)))
    {
        do
        {
            a1.appendln(&v4);
            v4.next(&v7);
        } while (*((long long *)&v4) != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v7);
    return;
}
