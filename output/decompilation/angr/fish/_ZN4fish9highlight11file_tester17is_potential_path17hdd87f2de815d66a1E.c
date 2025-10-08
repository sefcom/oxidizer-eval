long long fish::highlight::file_tester::is_potential_path(unsigned long long a0, unsigned long long a1, unsigned int a2, unsigned long long a3[3], unsigned long long a4, unsigned long long a5[4], unsigned int a6)
{
    unsigned int v0;  // [bp-0x358]
    int v1;  // [bp-0x238], Other Possible Types: char
    unsigned long long v2;  // [bp-0x230]
    unsigned long long v3;  // [bp-0x228]
    unsigned int v4;  // [bp-0x21c]
    unsigned long long v5;  // [bp-0x218]
    unsigned long long v6;  // [bp-0x210]
    unsigned long long v7[3];  // [bp-0x208]
    void* v8;  // [bp-0x200]
    unsigned long long v9;  // [bp-0x1f8]
    void* v10;  // [bp-0x1f0]
    unsigned long long v11;  // [bp-0x1e8]
    unsigned long long v12[3];  // [bp-0x1e0]
    unsigned long long v13[3];  // [bp-0x1d8]
    unsigned long long v14;  // [bp-0x1d0]
    unsigned long long v15;  // [bp-0x1c8]
    unsigned long long v16[4];  // [bp-0x1b8]
    char v17;  // [bp-0x1a8], Other Possible Types: unsigned long long
    int v18;  // [bp-0x1a8]
    unsigned long long v19;  // [bp-0x1a0]
    int v20;  // [bp-0x198]
    char v21;  // [bp-0x198]
    int v22;  // [bp-0x188]
    int v23;  // [bp-0x178]
    unsigned long long v24;  // [bp-0x170]
    int v25;  // [bp-0x168]
    unsigned long long v26;  // [bp-0x158]
    int v27;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v28;  // [bp-0xe8]
    int v29;  // [bp-0xd8]
    int v30;  // [bp-0xc8]
    int v31;  // [bp-0xb8]
    int v32;  // [bp-0xa8]
    char v33;  // [bp-0x98]
    int v34;  // [bp-0x88]
    int v35;  // [bp-0x78]
    int v36;  // [bp-0x68]
    int v37;  // [bp-0x58]
    unsigned long long v38;  // [bp-0x48]
    unsigned long long v39[3];  // [bp-0x40]
    unsigned long long v40[4];  // r14
    unsigned long long v41;  // r12
    unsigned long long v42;  // rsi
    unsigned long long v43;  // rdx
    unsigned int v44;  // eax
    unsigned int v45;  // edx
    unsigned int v46;  // r15d
    char v47;  // r14b
    unsigned int v48;  // eax
    unsigned long long v49;  // rax
    unsigned long long v50[3];  // rdx
    unsigned long long v51[3];  // r13
    unsigned long long v52[3];  // rax
    unsigned long long v53[3];  // r13
    unsigned long long v54[3];  // r13
    unsigned long long v55;  // r15
    unsigned int v56;  // eax
    char v57;  // r12b
    unsigned long long v58;  // rbx
    int v59;  // xmm1
    unsigned long long v60;  // rax
    unsigned long long v61;  // rax
    unsigned int v62;  // r12d

    v40 = a5;
    v5 = a4;
    v4 = a2;
    v41 = a0;
    fish::threads::assert_is_background_thread();
    if ((char)a5.check_cancel())
        return 0;
    v8 = 0;
    v9 = 4;
    v10 = 0;
    v17.to_vec(a0, a1);
    v15 = *((long long *)&v21);
    *((int128_t *)&v13) = *((int128_t *)&v17);
    if (((unsigned short)a6 & 0x100))
    {
        if (!a5[0])
        {
            v42 = 472 + a5[1];
            v43 = &g_14c7518;
        }
        else if ((unsigned int)a5[0] == 1)
        {
            v42 = a5[1];
            v43 = a5[2];
        }
        else
        {
            v42 = a5[2];
            v43 = a5[3];
        }
        fish::expand::expand_tilde(&(char)v13, v42, v43);
    }
    v17 = v14;
    v19 = v14 + v15 * 4;
    if ((int)v17.next() != 2)
    {
        v16[0] = a5;
        v41 = &g_14bd1b0;
        while (true)
        {
            v44.unwrap(v46, &g_14bd1b0);
            v48 = v46 - 64977;
            if (v48 > 17)
            {
LABEL_13b93f0:
                v8.push(v46);
                goto LABEL_13b93fb;
            }
            if (v48 == 7)
            {
LABEL_13b93fb:
                v44 = v17.next();
                v46 = v45;
                if (v44 == 2)
                {
                    v40 = v16;
                    if (!(v47 & 1))
                        goto LABEL_13b9458;
                    goto LABEL_13b9975;
                }
            }
            else
            {
                v0 = 229439;
                if (!(*((char *)&v0 + ((v48 & 31) >> 3)) >> ((char)v48 & 31 & 7) & 1))
                    goto LABEL_13b93f0;
                v44 = v17.next();
                v46 = v45;
                v47 = 1;
                if (v44 == 2)
                    goto LABEL_13b9975;
            }
        }
    }
LABEL_13b9458:
    if (!v10)
        goto LABEL_13b9975;
    v17.default();
    v35 = v22;
    v34 = v20;
    memcpy(&v33, &v17, 16);
    v49 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v37) = g_14bd820;
    *((uint128_t *)&v36) = g_14bd810;
    v38 = v49;
    v39[0] = v50;
    v51 = a3;
    if (!v5)
    {
LABEL_13b995b:
        core::ptr::drop_in_place<std::collections::hash::map::HashMap<widestring::utfstring::Utf32String,bool>>(&v36);
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<widestring::utfstring::Utf32String>>(&v33);
LABEL_13b9975:
        v62 = 0;
LABEL_13b9978:
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v13);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v8);
        return v62;
    }
    v5 = &a3[v5];
    v52 = a3 + 1;
    while (true)
    {
        v53 = v51;
        v54 = v52;
        if ((char)v40.check_cancel())
        {
            v62 = 0;
            goto LABEL_13b99ea;
        }
        fish::path::path_apply_working_directory(&v1, 4, v10, v53[1], v53[2]);
        v55 = v3;
        *((unsigned long long *)&v18) = v2;
        v19 = v2 + v55 * 4;
        v56 = (unsigned long long)v18.next_back();
        v57 = 1;
        v41 = v41 & 0xffffffffffffff00 | 1;
        if (v56 != 2)
        {
            v56.unwrap((unsigned int)v50, &g_14bd3d0);
            v55 = v3;
            v57 = (unsigned int)v50 != 47;
            v41 = v41 & 0xffffffffffffff00 | v57;
        }
        if ((a6 & 0x10000))
        {
            fish::wutil::normalize_path(&(unsigned long long)v18, v2, v55, 1);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
            v55 = *((long long *)&v21);
            v3 = v55;
            *((int128_t *)&v1) = *((int128_t *)&v17);
        }
        if (v55 && !v33.get_inner(&v1))
            break;
LABEL_13b9520:
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
        v52 = v54 + 1;
        if (v54 == v5)
        {
            v52 = v54;
            v51 = v54;
            if (v51 == v5)
                goto LABEL_13b995b;
        }
        else
        {
            v51 = v54;
            if (v51 == v5)
                goto LABEL_13b995b;
        }
    }
    fish::builtins::fish_indent::fish_indent::{{closure}}(&(unsigned long long)v18, v2, v3);
    v28 = *((long long *)&v21);
    memcpy(&v27, &v17, 16);
    v33.insert(&v27);
    if (!(v57 & (char)v4))
    {
        fish::wutil::wstat(&(unsigned long long)v18, v2, v3);
        if ((int)v17 == 2 || (char)v4 && ((short)v24 & 0xf000) != 0x4000)
        {
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(unsigned long long)v18);
            goto LABEL_13b9520;
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&(unsigned long long)v18);
LABEL_13b9a16:
            v62 = (unsigned int)v41 & 0xffffff00 | 1;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
LABEL_13b99ea:
            core::ptr::drop_in_place<std::collections::hash::map::HashMap<widestring::utfstring::Utf32String,bool>>(&v36);
            core::ptr::drop_in_place<std::collections::hash::set::HashSet<widestring::utfstring::Utf32String>>(&v33);
            goto LABEL_13b9978;
        }
    }
    v41 = fish::wutil::wdirname(v2, v3);
    v58 = fish::wutil::wbasename(v2, v3);
    if (v41.eq_by(v41 + v50 * 4, "/dirname", "dirname") && v58.eq_by(v58 + v50 * 4, "/dirname", "dirname"))
        goto LABEL_13b9a16;
    v27.new(v41, v50);
    if (*((long long *)&v27) == 0x8000000000000000)
    {
        core::ptr::drop_in_place<core::result::Result<fish::wutil::dir_iter::DirIter,std::io::error::Error>>(&v27);
        goto LABEL_13b9520;
    }
    v26 = (long long)v32;
    v25 = v31;
    v59 = *((int128_t *)&v28);
    v23 = v30;
    v22 = v29;
    v20 = v59;
    v18 = v27;
    if (!(char)fish::highlight::file_tester::fs_is_case_insensitive(v41, v50, (unsigned long long)v18.fd()))
    {
        while (true)
        {
            v11 = (unsigned long long)v18.next();
            v12[0] = v50;
            if (v11 == 2)
                break;
            v6 = v11;
            v7[0] = v50;
            if (!((char)v11 & 1))
            {
                v60 = (unsigned long long)v40.check_cancel();
                v41 = v60 & 4294967295;
                if (!(char)v60 && (((char)a6 & 1) && !v50.is_dir() || !(char)fish::wcstringutil::string_prefixes_string(v58, v50, v50[1], v50[2])))
                    goto LABEL_13b9810;
                else
                    goto LABEL_0x13b99a6;
            }
LABEL_13b9810:
            core::ptr::drop_in_place<core::result::Result<&fish::wutil::dir_iter::DirEntry,std::io::error::Error>>(&v6);
        }
    }
    while (true)
    {
        v11 = (unsigned long long)v18.next();
        v12[0] = v50;
        if (v11 == 2)
            break;
        v6 = v11;
        v7[0] = v50;
        if (!((char)v11 & 1))
        {
            v61 = (unsigned long long)v40.check_cancel();
            v41 = v61 & 4294967295;
            if (!(char)v61 && (((char)a6 & 1) && !v50.is_dir() || !(char)fish::wcstringutil::string_prefixes_string(v58, v50, v50[1], v50[2]) && !(char)fish::wcstringutil::string_prefixes_string_case_insensitive(v58, v50, v50[1], v50[2])))
                goto LABEL_13b98a0;
            else
                goto LABEL_0x13b99a6;
        }
LABEL_13b98a0:
        core::ptr::drop_in_place<core::result::Result<&fish::wutil::dir_iter::DirEntry,std::io::error::Error>>(&v6);
    }
}
