void fish::builtins::bind::BuiltinBind::key_names(unsigned long long a0)
{
    char v0;  // [bp-0x61]
    unsigned long long v1;  // [bp-0x60]
    char v2;  // [bp-0x58]
    char v3;  // [bp-0x40]
    unsigned long long v4;  // [bp-0x38]
    unsigned long v5;  // [bp-0x30]
    char v6;  // [bp-0x28]
    unsigned long long v7;  // [bp-0x20]
    char v8;  // [bp-0x18]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx

    v1 = 51539607553;
    v2 = 0;
    v3.collect(&v1);
    v1.chain(v4, v4 + v5 * 24);
    v6.collect(&v1);
    if (*((long long *)&v8) >= 2)
    {
        if (*((long long *)&v8) < 21)
            core::slice::sort::shared::smallsort::insertion_sort_shift_left(v7, *((long long *)&v8));
        else
            core::slice::sort::unstable::ipnsort(v7, *((long long *)&v8), &v0);
    }
    v1.into_iter(&v6);
    while (true)
    {
        v10 = v1.next();
        if (!v10)
            break;
        a0.appendln(v10, v11);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(&v1);
    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v3);
    return;
}
