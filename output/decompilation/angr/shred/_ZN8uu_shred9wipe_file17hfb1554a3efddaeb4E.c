long long uu_shred::wipe_file(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned int a3, unsigned long long a4, unsigned long long a5, char a6, char a7, unsigned long long a8, char a9, char a10)
{
    unsigned int v0;  // [bp-0x30c]
    unsigned long long v1;  // [bp-0x308]
    unsigned int v2;  // [bp-0x2fc]
    void* v3;  // [bp-0x2f8]
    unsigned long long v4;  // [bp-0x2f0]
    void* v5;  // [bp-0x2e8]
    unsigned long long v6;  // [sp-0x2e0]
    unsigned long long v7;  // [bp-0x2d8]
    int v8;  // [bp-0x2d8]
    char *v9;  // [bp-0x2c8]
    unsigned int v10;  // [bp-0x2b8], Other Possible Types: unsigned long long
    unsigned int v11;  // [bp-0x2b8]
    unsigned long long v12;  // [bp-0x2a8]
    unsigned long long v13;  // [bp-0x2a0]
    unsigned long long v14;  // [bp-0x298]
    char v15;  // [bp-0x290]
    void* v16;  // [bp-0x288]
    unsigned long v17;  // [bp-0x280]
    unsigned long long v19;  // [bp-0x278]
    char v20;  // [bp-0x270]
    void* v21;  // [bp-0x268], Other Possible Types: char, unsigned long long
    unsigned int v22;  // [sp-0x260], Other Possible Types: unsigned long long
    char v23;  // [bp-0x25f]
    unsigned short v24;  // [bp-0x25c]
    int v25;  // [bp-0x258], Other Possible Types: char *, unsigned long long
    int v26;  // [bp-0x258]
    unsigned long long v27;  // [bp-0x250]
    int v28;  // [bp-0x250]
    int v29;  // [bp-0x248], Other Possible Types: void*, char *
    int v30;  // [bp-0x248]
    char *v31;  // [bp-0x240], Other Possible Types: unsigned long long
    int v32;  // [bp-0x238]
    unsigned long long v33;  // [bp-0x230]
    uint128_t v34;  // [bp-0x228]
    uint128_t v35;  // [bp-0x218]
    unsigned long long v36;  // [bp-0x208]
    unsigned long v37;  // [bp-0x200], Other Possible Types: unsigned long long
    char *v38;  // [bp-0x1b0], Other Possible Types: unsigned long long
    struct_1 *v39;  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v40;  // [bp-0x1a0]
    char v41;  // [bp-0x198]
    unsigned long long v42;  // [bp-0x190]
    unsigned long long v43;  // [bp-0x180]
    unsigned long long v44;  // [bp-0x178]
    unsigned long v45;  // [bp-0x170]
    char *v46;  // [bp-0x168], Other Possible Types: unsigned long long
    int v47;  // [bp-0x168], Other Possible Types: char
    unsigned long long v48;  // [bp-0x168]
    struct_1 *v49;  // [bp-0x160], Other Possible Types: unsigned long, unsigned long long
    char *v50;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned int v51;  // [bp-0x150], Other Possible Types: unsigned long long
    int v52;  // [bp-0x148], Other Possible Types: void*
    char v53;  // [bp-0x130]
    char v54;  // [bp-0x118]
    int v55;  // [bp-0xb0]
    char v56;  // [bp-0x98]
    unsigned long long v57;  // [bp-0x88]
    char v58;  // [bp-0x80]
    unsigned long long v59;  // [bp-0x70]
    char v60;  // [bp-0x68]
    unsigned long long v61;  // [bp-0x58]
    char v62;  // [bp-0x50]
    unsigned long long v63;  // [bp-0x40]
    char *v64;  // rbx
    unsigned long long v65;  // rsi
    unsigned long long v66;  // rdx
    unsigned long v67;  // rax
    unsigned long long v68;  // rax
    void* v69;  // r12
    unsigned long long v70;  // r15
    void* v71;  // r13
    unsigned long long v72;  // rax
    unsigned long long v73;  // rax
    unsigned long long v74;  // r15
    unsigned long long v75;  // rax
    void* v76;  // r15
    unsigned long long v77;  // rbx
    unsigned long long v78;  // r14
    int v79;  // xmm1
    struct_1 *v80;  // rdx
    unsigned long long v81;  // rax
    unsigned long v83;  // rax
    unsigned long long v84;  // rax
    int v85;  // [bp-0x238], Other Possible Types: char *

    v10 = a5;
    v43 = a4;
    std::fs::metadata(&v21, a0, a1);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v21);
    if (*((int *)&v21) == 2)
    {
        (char)v46.to_vec("filesizei128", 4);
        v12 = 1;
        v13 = a0;
        v14 = a1;
        v15 = 0;
        v21.spec_to_string(&v12);
        v57 = v50;
        memcpy(&v56, &v47, 16);
        memcpy(&v58, &v21, 16);
        v59 = v25;
        v64 = &v21;
        v21.from_iter(&v56);
        v65 = "shred-no-such-file-or-directoryshred-pass-progresserror/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs";
        v66 = 31;
    }
    else
    {
        if ((char)a0.is_file(a1))
        {
            std::fs::metadata(&v21, a0, a1);
            (char)v47.map_err_context(&v21);
            if (*((int *)&v47) == 2)
                return v49;
            v6 = *((long long *)&v54);
            if (a10)
            {
                v67 = *((int *)&v53);
                v68 = std::fs::set_permissions(a0, a1, ((char)v67 < 0 ? v67 & 4294967295 : 128)).map_err_context();
                if (v68)
                    return v68;
            }
            v1 = a0;
            v3 = 0;
            v4 = 1;
            v5 = 0;
            if (v6)
            {
                if (a2 <= 3)
                {
                    v69 = 0;
                    while (v69 < a2)
                    {
                        v69 = v69.forward_unchecked();
                        v3.push(2, &g_5952a8);
                    }
                }
                else
                {
                    v3.push(2, &g_595200);
                    a1 = a1;
                    v42 = ::0x4a9f00::core::cmp::max_by(a2 / 10);
                    v70 = a2 - v42;
                    v17 = v70 / 22;
                    if (v70 >= 22)
                    {
                        v71 = 0;
                        do
                        {
                            v71 = v71.forward_unchecked();
                            v21 = 0;
                            v22 = 22;
                            v35 = 0xcc000000bb000000990000008800;
                            v34 = 0x7700000066000000440000003300;
                            *((uint128_t *)&v32) = 689601926604450170026677061268993;
                            *((uint128_t *)&v30) = 48234206897958065916534445818495771649;
                            *((uint128_t *)&v26) = 0xaa00000055000000ff0000000000;
                            v36 = 0xee000000dd00;
                            while (true)
                            {
                                v72 = v21.next();
                                if ((char)v72 == 2)
                                    break;
                                v3.push(v72 & 4294967295, &g_595278);
                            }
                            core::ptr::drop_in_place<core::array::iter::IntoIter<uu_shred::Pattern,22_usize>>();
                        } while (v71 < v17);
                    }
                    v73 = v17 * 22;
                    v21 = 0;
                    v22 = 22;
                    *((uint128_t *)&v25) = 0xaa00000055000000ff0000000000;
                    *((uint128_t *)&v29) = 48234206897958065916534445818495771649;
                    *((uint128_t *)&v85) = 689601926604450170026677061268993;
                    v34 = 0x7700000066000000440000003300;
                    v35 = 0xcc000000bb000000990000008800;
                    v36 = 0xee000000dd00;
                    v37 = v70 - v73;
                    if (v70 != v73)
                    {
                        while (true)
                        {
                            v37 = v74 - 1;
                            v75 = v21.next();
                            if ((char)v75 == 2)
                                break;
                            v3.push(v75 & 4294967295, &g_595260);
                            v74 = v37;
                            if (!v37)
                                break;
                        }
                    }
                    core::ptr::drop_in_place<core::iter::adapters::take::Take<core::array::iter::IntoIter<uu_shred::Pattern,22_usize>>>();
                    v76 = 0;
                    while (v76 < v42 - 2)
                    {
                        v76 = v76.forward_unchecked();
                        v3.push(2, &g_595248);
                    }
                    v48 = rand::rngs::thread::rng();
                    if (!v5)
                        core::slice::index::slice_start_index_len_fail(1, 0, &g_595230); /* do not return */
                    if (v5 >= 3)
                        v21.partial_shuffle(5, v5 - 1, &v48, v5 - 1);
                    v3.push(2, &g_595218);
                    core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(&v48);
                }
                if (a7)
                    v3.push(0, &g_595290);
            }
            v44 = v5;
            v21 = 0x1b600000000;
            v22 = 0;
            v24 = 0;
            v23 = 1;
            (char)v47.open(&v21, v1, a1);
            (char)v12.map_err_context(&(char)v47, v1, a1);
            if (v12)
            {
                v77 = v12;
                v3.drop_in_place<alloc::vec::Vec<uu_shred::PassType>>();
            }
            else
            {
                v78 = a1;
                v0 = v13;
                if (((char)v43 & 1))
                    v10 = v10;
                else
                    v10 = v6;
                v6 = v10;
                (char)v12.into_iter(&v3);
                v16 = 0;
                (char)v19.next(&(char)v12);
                if (v20 != 3)
                {
                    v10 = a6;
                    do
                    {
                        v2 = *((int *)&v20);
                        if (a9)
                        {
                            uu_shred::pass_name(&v55, &v2);
                            (char)v47.to_vec("filesizei128", 4);
                            v9 = v50;
                            *((int128_t *)&v8) = *((int128_t *)&v46);
                            v38 = 1;
                            v39 = v1;
                            v40 = v78;
                            v41 = 0;
                            (char)v47.spec_to_string(&v38);
                            v25 = v9;
                            memcpy(&v21, &(unsigned long long)v8, 16);
                            v31 = v50;
                            *((int128_t *)&v28) = *((int128_t *)&v46);
                            v79 = (int128_t)(&v28)[8];
                            *((int128_t *)&v47) = *((int128_t *)&v21);
                            v50 = v25;
                            v51 = v27;
                            v52 = v79;
                            v21.from_iter(&(char)v47);
                            uucore::mods::locale::get_message_with_args(&(unsigned long long)v8, "shred-pass-progresserror/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs", 19, &v21);
                            v46 = uucore::util_name();
                            v49 = v80;
                            v38 = &v46;
                            v39 = <&T as core::fmt::Display>::fmt;
                            v21 = &g_5950b8;
                            v22 = 2;
                            v29 = 0;
                            v25 = &v38;
                            v27 = 1;
                            std::io::stdio::_eprint(&v21);
                            v45 = v19 + 1;
                            v38.spec_to_string(&v45);
                            v21 = &(unsigned long long)v8;
                            v22 = <alloc::string::String as core::fmt::Display>::fmt;
                            v25 = &v38;
                            v27 = <alloc::string::String as core::fmt::Display>::fmt;
                            v29 = &v44;
                            v31 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                            v85 = &v55;
                            v33 = <alloc::string::String as core::fmt::Display>::fmt;
                            v46 = &g_5950f8;
                            v49 = 5;
                            v52 = 0;
                            v50 = &v21;
                            v51 = 4;
                            std::io::stdio::_eprint(&v46);
                            ::0x4aa180::core::ptr::drop_in_place<alloc::string::String>(&v38);
                            ::0x4aa180::core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v8);
                            ::0x4aa180::core::ptr::drop_in_place<alloc::string::String>(&v55);
                        }
                        v81 = uu_shred::do_pass(&v0, &v2, v11, a8, v6).map_err_context(v1, v78);
                        if (!v81)
                        {
                            core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(0, v80);
                        }
                        else
                        {
                            v7 = v81;
                            uucore::mods::error::set_exit_code(v80->field_58(v81));
                            v38 = uucore::util_name();
                            v39 = v80;
                            v46 = &v38;
                            v49 = <&T as core::fmt::Display>::fmt;
                            v50 = &v7;
                            v51 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                            v21 = &g_595148;
                            v22 = 3;
                            v29 = 0;
                            v25 = &v46;
                            v27 = 2;
                            std::io::stdio::_eprint(&v21);
                            ::0x4a9f70::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v7, v80);
                        }
                        (char)v19.next(&(char)v12);
                    } while (v20 != 3);
                }
                (char)v12.drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<uu_shred::PassType>>>();
                v83 = a3;
                if (!(char)v83)
                {
                    core::ptr::drop_in_place<std::fs::File>(v0);
                    return 0;
                }
                v84 = uu_shred::do_remove(v1, v78, v1, v78, a9, v83 & 4294967295).map_err_context(v1, v78);
                if (!v84)
                {
                    core::ptr::drop_in_place<std::fs::File>(v0);
                    return 0;
                }
                v77 = v84;
                core::ptr::drop_in_place<std::fs::File>(v0);
            }
            return v77;
        }
        (char)v46.to_vec("filesizei128", 4);
        v12 = 1;
        v13 = a0;
        v14 = a1;
        v15 = 0;
        v21.spec_to_string(&v12);
        v61 = v50;
        memcpy(&v60, &v47, 16);
        memcpy(&v62, &v21, 16);
        v63 = v25;
        v64 = &v21;
        v21.from_iter(&v60);
        v65 = "shred-not-a-file";
        v66 = 16;
    }
    uucore::mods::locale::get_message_with_args(&(char)v46, v65, v66, v64);
    v51 = 1;
    return (char)v46.new();
}
