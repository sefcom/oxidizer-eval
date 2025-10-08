long long fish::highlight::file_tester::FileTester::test_redirection_target(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned int v0;  // [bp-0x268]
    unsigned long long v1;  // [bp-0x140]
    int v2;  // [bp-0x138]
    unsigned long long v3;  // [bp-0x130]
    unsigned long long v4;  // [bp-0x128]
    char v5;  // [bp-0x120]
    unsigned long long v6;  // [bp-0x118]
    void* v7;  // [bp-0x110], Other Possible Types: unsigned long long
    char v8;  // [bp-0x108]
    char v9;  // [bp-0x104]
    unsigned long long v10;  // [bp-0xf8]
    unsigned long long v11[3];  // [bp-0xf0]
    unsigned long long v12;  // [bp-0xe8]
    unsigned long long v13;  // [bp-0xe0]
    char v14;  // [bp-0xd8], Other Possible Types: unsigned long
    char v15;  // [bp-0xd0]
    char v16;  // [bp-0xa0]
    unsigned long v18;  // rbx
    unsigned int v19;  // eax
    unsigned long long v20;  // r15
    void* v21;  // r14
    unsigned long long v23;  // r14
    unsigned int v24;  // eax
    unsigned int v25;  // ebx
    unsigned long long v26;  // rax

    if (a2 > 0x1000)
        return 0;
    v18 = a3;
    v11.to_vec(a1, a2);
    if ((char)fish::expand::expand_one(&v11, 1, a0->field_18, 0))
    {
        fish::path::path_apply_working_directory(&v5, v12, v13, a0->field_8, a0->field_10);
        v19 = v18;
        v0 = 35;
        if (!((char)(*((char *)&v0 + ((v19 & 31) >> 3)) >> ((char)v19 & 31 & 7)) & 1))
        {
            v0 = 12;
            if (!(*((char *)&v0 + ((v19 & 31) >> 3)) >> ((char)v19 & 31 & 7) & 1))
            {
                v25 = (unsigned int)v18 & 0xffffff00 | 1;
                if (!v12.eq(v13, "-/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '", 1))
                {
                    v26 = fish::wutil::wcstoi::fish_wcstoi(v12, v13);
                    v25 = (unsigned int)v26 & 0xffffff00 | ((char)v26 ^ 1) & v26 >= 0;
                    goto LABEL_13b9221;
                }
            }
            if (!(int)fish::wutil::waccess(v6, v7, 4))
            {
                fish::wutil::wstat(&v14, v6, v7);
                v25 = v14.is_ok_and();
                goto LABEL_13b9221;
            }
        }
        else if (!(char)fish::wcstringutil::string_suffixes_string("/", 1, v12, v13))
        {
            v20 = v6;
            v21 = v7;
            fish::wutil::wstat(&v14, v20, v21);
            if (v14 == 2)
            {
                v1 = *((long long *)&v15);
                std::io::error::repr_bitpacked::decode_repr(&v8, *((long long *)&v15));
                if (!v8 && *((int *)&v9) == 2)
                {
                    v8.to_vec(fish::wutil::wdirname(v20, v21), a2);
                    v23 = v10;
                    v4 = v23;
                    *((int128_t *)&v2) = *((int128_t *)&v8);
                    if (!(char)fish::wcstringutil::string_suffixes_string("/", 1, v3, v4))
                    {
                        (char)v2.push(47);
                        v23 = v4;
                    }
                    v24 = fish::wutil::waccess(v3, v23, 2);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v2);
                    core::ptr::drop_in_place<std::io::error::Error>(&v1);
                    goto LABEL_13b9200;
                }
                else
                {
                    core::ptr::drop_in_place<std::io::error::Error>(&v1);
                }
            }
            else if ((0xf000 & *((int *)&v16)) != 0x4000)
            {
                v24 = fish::wutil::waccess(v20, v21, 2);
LABEL_13b9200:
                if (!v24)
                {
                    v25 = (unsigned int)v18 & 0xffffff00 | (char)v18 != 5 | (unsigned int)v14 == 2;
                    goto LABEL_13b9221;
                }
            }
        }
        v25 = 0;
LABEL_13b9221:
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v5);
    }
    else
    {
        v25 = 0;
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v11);
    return v25;
}
