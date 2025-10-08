long long uu_shred::wipe_file(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned int a3, unsigned long long a4, unsigned long a5, char a6, char a7, char a8, char a9)
{
    unsigned int v0;  // [bp-0x26c]
    void* v1;  // [bp-0x268]
    unsigned long long v2;  // [bp-0x260]
    void* v3;  // [bp-0x258]
    unsigned int v4;  // [bp-0x24c]
    unsigned long long v5;  // [bp-0x248]
    char *v6;  // [bp-0x240], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x238]
    unsigned long long v8;  // [bp-0x230]
    char v9;  // [bp-0x228]
    unsigned long v10;  // [bp-0x218], Other Possible Types: unsigned long long
    unsigned long v11;  // [bp-0x210], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x208]
    char v13;  // [bp-0x200]
    void* v14;  // [bp-0x1f8]
    unsigned long v15;  // [bp-0x1f0]
    unsigned long long v17;  // [bp-0x1e8]
    char v18;  // [bp-0x1e0]
    unsigned long long v19;  // [bp-0x1d8]
    unsigned long long v20;  // [bp-0x1d0]
    char *v21;  // [sp-0x1c0], Other Possible Types: void*, char, unsigned long long
    unsigned int v22;  // [sp-0x1b8], Other Possible Types: unsigned long long
    char v23;  // [bp-0x1b7]
    unsigned short v24;  // [bp-0x1b4]
    int v25;  // [bp-0x1b0], Other Possible Types: char *
    int v26;  // [bp-0x1b0]
    unsigned long long v27;  // [bp-0x1a8]
    int v28;  // [bp-0x1a0], Other Possible Types: char *, void*
    int v29;  // [bp-0x1a0]
    unsigned long long v30;  // [bp-0x198]
    int v31;  // [bp-0x190]
    unsigned long long v32;  // [bp-0x188]
    uint128_t v33;  // [bp-0x180]
    uint128_t v34;  // [bp-0x170]
    unsigned long long v35;  // [bp-0x160]
    unsigned long long v36;  // [bp-0x158]
    unsigned long long v37;  // [bp-0x100]
    unsigned long long v38;  // [bp-0xf8]
    void* v39;  // [bp-0xf0]
    unsigned long v40;  // [bp-0xe8]
    char *v41;  // [bp-0xe0], Other Possible Types: unsigned long long
    char v42;  // [bp-0xe0]
    unsigned long v43;  // [bp-0xd8], Other Possible Types: unsigned long long
    char *v44;  // [sp-0xd0]
    unsigned int v45;  // [sp-0xc8], Other Possible Types: unsigned long long
    void* v46;  // [bp-0xc0]
    char v47;  // [bp-0xa8]
    char v48;  // [bp-0x90]
    unsigned long long v49;  // rax
    unsigned long v50;  // rax
    unsigned long long v51;  // rax
    unsigned long v52;  // r15
    unsigned long v53;  // r15
    unsigned long long v54;  // rax
    unsigned long long v55;  // r15
    unsigned long long v56;  // r12
    unsigned long long v57;  // r12
    unsigned long long v58;  // rax
    unsigned long long v60;  // rax
    unsigned long long v61;  // r15
    unsigned long long v62;  // rax
    unsigned long v63;  // rbp
    unsigned long v64;  // rbp
    unsigned long long v65;  // rdx
    unsigned long long v66;  // rax
    unsigned long v68;  // rax
    unsigned long long v69;  // rbp
    int v70;  // [bp-0x190], Other Possible Types: char *

    v37 = a4;
    std::fs::metadata(&v21, a0, a1);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v21);
    if (*((int *)&v21) == 2)
    {
        v10 = 1;
        v11 = a0;
        v12 = a1;
        v13 = 0;
        v6 = &v10;
        v7 = <os_display::Quoted as core::fmt::Display>::fmt;
        v49 = &g_4f9fd8;
    }
    else
    {
        if ((char)a0.is_file(a1))
        {
            std::fs::metadata(&v21, a0, a1);
            (char)v41.map_err_context(&v21);
            if (*((int *)&v42) == 2)
                return v43;
            v5 = *((long long *)&v48);
            if (a9)
            {
                v50 = *((int *)&v47);
                v51 = std::fs::set_permissions(a0, a1, ((char)v50 < 0 ? v50 & 4294967295 : 128)).map_err_context();
                if (v51)
                    return v51;
            }
            v1 = 0;
            v2 = 1;
            v3 = 0;
            if (v5)
            {
                if (a2 <= 3)
                {
                    v52 = a2 + 1;
                    while (true)
                    {
                        v53 = v52 - 1;
                        if (v52 == 1)
                            break;
                        v1.push(2, &g_4fa1c8);
                        v52 = v53;
                    }
                }
                else
                {
                    v1.push(2, &g_4fa120);
                    v54 = a2 / 10.max(3);
                    v55 = a2 - v54;
                    v15 = v55 / 22;
                    if (v55 >= 22)
                    {
                        v56 = 1;
                        do
                        {
                            v57 = v56;
                            v21 = 0;
                            v22 = 22;
                            v34 = 0xcc000000bb000000990000008800;
                            v33 = 0x7700000066000000440000003300;
                            *((uint128_t *)&v31) = 689601926604450170026677061268993;
                            *((uint128_t *)&v29) = 48234206897958065916534445818495771649;
                            *((uint128_t *)&v26) = 0xaa00000055000000ff0000000000;
                            v35 = 0xee000000dd00;
                            while (true)
                            {
                                v58 = v21.next();
                                if ((char)v58 == 2)
                                    break;
                                v1.push(v58 & 4294967295, &g_4fa198);
                            }
                            v56 = v57 + (v57 < v15);
                        } while (v57 < v15);
                    }
                    v60 = v15 * 22;
                    v21 = 0;
                    v22 = 22;
                    *((uint128_t *)&v25) = 0xaa00000055000000ff0000000000;
                    *((uint128_t *)&v28) = 48234206897958065916534445818495771649;
                    *((uint128_t *)&v70) = 689601926604450170026677061268993;
                    v33 = 0x7700000066000000440000003300;
                    v34 = 0xcc000000bb000000990000008800;
                    v35 = 0xee000000dd00;
                    v61 = v55 - v60;
                    if (v55 != v60)
                    {
                        while (true)
                        {
                            v36 = v61 - 1;
                            v62 = v21.next();
                            if ((char)v62 == 2)
                                break;
                            v1.push(v62 & 4294967295, &g_4fa180);
                            v61 = v36;
                            if (!v36)
                                break;
                        }
                    }
                    v63 = v54 - 1;
                    while (true)
                    {
                        v64 = v63 - 1;
                        if (v63 == 1)
                            break;
                        v1.push(2, &g_4fa168);
                        v63 = v64;
                    }
                    v41 = rand::rngs::thread::rng();
                    if (!v3)
                        core::slice::index::slice_start_index_len_fail(1, 0, &g_4fa150); /* do not return */
                    if (v3 >= 3)
                        v21.partial_shuffle(v2 + 4, v3 - 1, &v41, v3 - 1);
                    v1.push(2, &g_4fa138);
                    core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v41);
                }
                if (a7)
                    v1.push(0, &g_4fa1b0);
            }
            v39 = v3;
            v21 = 0x1b600000000;
            v22 = 0;
            v24 = 0;
            v23 = 1;
            (char)v41.open(&v21, a0, a1);
            (char)v10.map_err_context(&(char)v41, a0, a1);
            if (v10)
            {
                v1.drop_in_place<alloc::vec::Vec<uu_shred::PassType>>(v2);
                return v10;
            }
            v0 = v11;
            if (((char)v37 & 1))
                v38 = v38;
            else
                v38 = v5;
            v5 = v38;
            (char)v10.into_iter(&v1);
            v14 = 0;
            (char)v17.next(&(char)v10);
            if (v18 != 3)
            {
                do
                {
                    v4 = *((int *)&v18);
                    if (a8)
                    {
                        uu_shred::pass_name(&v19, &v4);
                        v41 = uucore::util_name();
                        v43 = v65;
                        v6 = &v41;
                        v7 = <&T as core::fmt::Display>::fmt;
                        v21 = &g_4f9f98;
                        v22 = 2;
                        v28 = 0;
                        v25 = &v6;
                        v27 = 1;
                        std::io::stdio::_eprint(&v21);
                        v6 = 1;
                        v7 = a0;
                        v8 = a1;
                        v9 = 0;
                        v40 = v17 + 1;
                        v21 = &v6;
                        v22 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v25 = &v40;
                        v27 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                        v28 = &v39;
                        v30 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                        v70 = &v19;
                        v32 = <alloc::string::String as core::fmt::Display>::fmt;
                        v41 = &g_4fa018;
                        v43 = 5;
                        v46 = 0;
                        v44 = &v21;
                        v45 = 4;
                        std::io::stdio::_eprint(&v41);
                        core::ptr::drop_in_place<alloc::string::String>(&v19);
                    }
                    v66 = uu_shred::do_pass(&v0, &v4, a6, v5).map_err_context(a0, a1);
                    if (!v66)
                    {
                        core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, &g_4f9bb8);
                    }
                    else
                    {
                        v19 = v66;
                        v20 = &g_4f9bb8;
                        uucore::mods::error::set_exit_code((unsigned int)uucore::mods::error::UError::code());
                        v6 = uucore::util_name();
                        v7 = v65;
                        v41 = &v6;
                        v43 = <&T as core::fmt::Display>::fmt;
                        v44 = &v19;
                        v45 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                        v21 = &g_4fa068;
                        v22 = 3;
                        v28 = 0;
                        v25 = &v41;
                        v27 = 2;
                        std::io::stdio::_eprint(&v21);
                        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v19, &g_4f9bb8);
                    }
                    (char)v17.next(&(char)v10);
                } while (v18 != 3);
            }
            (char)v10.drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<uu_shred::PassType>>>();
            v68 = a3;
            if ((char)v68)
            {
                v69 = uu_shred::do_remove(a0, a1, a0, a1, a8, v68 & 4294967295).map_err_context(a0, a1);
                if (v69)
                {
                    core::ptr::drop_in_place<std::fs::File>(v0);
                    return v69;
                }
            }
            core::ptr::drop_in_place<std::fs::File>(v0);
            return 0;
        }
        v10 = 1;
        v11 = a0;
        v12 = a1;
        v13 = 0;
        v6 = &v10;
        v7 = <os_display::Quoted as core::fmt::Display>::fmt;
        v49 = &g_4f9ff8;
    }
    v21 = v49;
    v22 = 2;
    v28 = 0;
    v25 = &v6;
    v27 = 1;
    (char)v41.map_or_else(&v21);
    v45 = 1;
    return (char)v41.new();
}
