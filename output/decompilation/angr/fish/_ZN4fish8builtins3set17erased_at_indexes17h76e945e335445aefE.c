long long fish::builtins::set::erased_at_indexes(struct_1 *a0, struct_0 *a1, unsigned long long a2[3])
{
    char v0;  // [bp-0x60]
    char v1;  // [bp-0x40]
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rax

    alloc::slice::<impl [T]>::sort_by_key(a2[1], a2[2]);
    a2.dedup_by();
    v0.into_iter(a2);
    if (((char)v0.next() & 1))
    {
        do
        {
            if (v3 > 0 && v3 <= a1->field_10)
            {
                v1.remove(a1, v3 - 1, &g_14ccac8);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
            }
        } while (((char)v0.next() & 1));
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<i64>>(&v0);
    v4 = a1->field_10;
    a0->field_10 = v4;
    a0->field_0 = a1->field_0;
    return v4;
}
