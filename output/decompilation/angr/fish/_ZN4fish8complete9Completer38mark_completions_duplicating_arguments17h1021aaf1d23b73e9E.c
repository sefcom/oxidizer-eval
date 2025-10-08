void fish::complete::Completer::mark_completions_duplicating_arguments(void* a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    int v0;  // [bp-0xc8]
    unsigned long long v1;  // [bp-0xb8]
    int v2;  // [bp-0x98], Other Possible Types: char
    unsigned long long v3;  // [bp-0x88]
    char v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    int v7;  // [bp-0x60], Other Possible Types: char
    char v8;  // [bp-0x50]
    void* v9;  // rbp

    v2.into_iter(a6);
    v7.map(&v2, a2, a3);
    v4.collect(&v7);
    alloc::slice::stable_sort(v5, v6);
    if (a1)
    {
        fish::builtins::fish_indent::fish_indent::{{closure}}(&v7, (long long)a0[8], (long long)a0[16]);
        v3 = *((long long *)&v8);
        v2 = v7;
        v1 = *((long long *)&v8);
        v0 = v2;
        if (!((char)(short)a0[50] & 2))
            v0.insert_slice(0, a4, a5);
        if (!core::slice::<impl [T]>::binary_search_by(v5, v6, &v0))
        {
            *((char *)&a0[50]) = (char)a0[50] | 64;
            if (a1 != 1)
            {
LABEL_13903c1:
                v9 = 0;
                do
                {
                    fish::builtins::fish_indent::fish_indent::{{closure}}(&v7, *((long long *)(a0 + v9 + 64)), *((long long *)(a0 + v9 + 72)));
                    v3 = *((long long *)&v8);
                    v2 = v7;
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                    v1 = v3;
                    v0 = v2;
                    if (!(*((char *)(a0 + v9 + 106)) & 2))
                        v0.insert_slice(0, a4, a5);
                    if (!core::slice::<impl [T]>::binary_search_by(v5, v6, &v0))
                        *((char *)(a0 + v9 + 106)) = *((char *)(a0 + v9 + 106)) | 64;
                    v9 += 56;
                } while (a1 * 56 - 56 != v9);
            }
        }
        else if (!(a1 == 1))
        {
            goto LABEL_13903c1;
        }
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v4);
    return;
}
