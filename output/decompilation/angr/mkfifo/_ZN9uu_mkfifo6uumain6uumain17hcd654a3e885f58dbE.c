long long uu_mkfifo::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x488]
    unsigned long long v1;  // [bp-0x480]
    int v2;  // [bp-0x478]
    unsigned long long v3;  // [bp-0x470]
    unsigned long long v4;  // [bp-0x468]
    char *v5;  // [bp-0x460], Other Possible Types: char, unsigned long
    char v6;  // [bp-0x45f]
    char v7;  // [bp-0x458], Other Possible Types: unsigned long long
    char *v8;  // [bp-0x450]
    unsigned long long v9;  // [bp-0x448]
    void* v10;  // [bp-0x440], Other Possible Types: char *, char, unsigned long long
    int v11;  // [bp-0x438], Other Possible Types: unsigned long long
    int v12;  // [bp-0x438]
    char *v13;  // [bp-0x430], Other Possible Types: char, unsigned long long
    unsigned long long v14;  // [bp-0x428], Other Possible Types: char
    char v15;  // [bp-0x420]
    unsigned long long v16;  // [bp-0x410]
    char v17;  // [bp-0x408]
    int v18;  // [bp-0x408]
    unsigned long long v19;  // [bp-0x3f8]
    char v20;  // [bp-0x3f0]
    unsigned long long v21;  // [bp-0x3d0]
    unsigned long long v22;  // [bp-0x3c8]
    char v23;  // [bp-0x3c0]
    char v24;  // [bp-0x3b0]
    unsigned long long v25;  // [bp-0x3a0]
    int v26;  // [bp-0x398], Other Possible Types: char
    unsigned long long v27;  // [bp-0x388]
    int v28;  // [bp-0x380]
    unsigned long long v29;  // [bp-0x370]
    int v30;  // [bp-0x368], Other Possible Types: char
    unsigned long long v31;  // [bp-0x358]
    char v32;  // [bp-0x350]
    int v33;  // [bp-0x338], Other Possible Types: char
    int v34;  // [bp-0x338], Other Possible Types: unsigned long long
    int v35;  // [bp-0x338]
    unsigned long long v36;  // [bp-0x330]
    char *v37;  // [bp-0x328], Other Possible Types: unsigned long long
    unsigned int v38;  // [bp-0x320], Other Possible Types: unsigned long long
    void* v39;  // [bp-0x318]
    char v40;  // [bp-0x70]
    unsigned long long v42[3];  // rax
    unsigned long long v43;  // rax
    unsigned int v44;  // ebp
    char *v45;  // rax
    unsigned int v46;  // eax
    unsigned long long v47;  // rdx
    unsigned long long v49;  // rax
    unsigned long long v50;  // rbx

    uu_mkfifo::uu_app(&v33);
    v10.try_get_matches_from(&v33, a0, a1);
    if ((char)(((0 ^ v10) & (0 ^ -(v10))) >> 63))
        return v22.from();
    v25 = v16;
    memcpy(&v24, &v15, 16);
    memcpy(&v23, &v13, 16);
    v21 = v10;
    v22 = v11;
    v33.try_get_one(&v21, _ZN9uu_mkfifo7options4MODE17h5220e5aeeb4dad68E, g_4de3a0);
    v42 = _ZN9uu_mkfifo7options4MODE17h5220e5aeeb4dad68E.unwrap(g_4de3a0, &v33);
    if (v42)
    {
        ::0x4507b0::core::num::<impl usize>::from_ascii_radix(&(char)v5, v42[1], v42[2]);
        if (v5)
        {
            v20 = v6;
            v10 = &v20;
            v11 = <core::num::error::ParseIntError as core::fmt::Display>::fmt;
            *((unsigned long long **)&v34) = &g_4dd9b0;
            v36 = 1;
            v39 = 0;
            v37 = &v10;
            v38 = 1;
            v26.map_or_else(&(unsigned long long)v34);
            v38 = 1;
            v34 = v26;
            v37 = v27;
            v43 = (unsigned long long)v34.new();
        }
        else
        {
            v44 = *((int *)&v7);
LABEL_45356e:
            v33.try_get_many(&v21, _ZN9uu_mkfifo7options4FIFO17hc33aa5a578626e41E, g_4de3b0);
            v40.unwrap(_ZN9uu_mkfifo7options4FIFO17hc33aa5a578626e41E, g_4de3b0, &v33);
            if (*((long long *)&v40))
            {
                v32.collect(&v40);
                v20.into_iter(&v32);
                v17.next(&v20);
                if (*((long long *)&v17) != 0x8000000000000000)
                {
                    do
                    {
                        v4 = v19;
                        v2 = v18;
                        v33.spec_new_impl(v3, v19);
                        v45 = v33.unwrap();
                        v46 = mkfifo(v45, 438);
                        core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v45, v47);
                        if (v46 == -1)
                        {
                            v10 = 0;
                            *((int128_t *)&v12) = *((int128_t *)&v3);
                            v14 = 1;
                            v5 = &v10;
                            v7 = <os_display::Quoted as core::fmt::Display>::fmt;
                            *((unsigned long long **)&v35) = &g_4dd9c0;
                            v36 = 2;
                            v39 = 0;
                            v37 = &(char)v5;
                            v38 = 1;
                            v28.map_or_else(&(unsigned long long)v35);
                            v38 = 1;
                            v35 = v28;
                            v37 = v29;
                            *((double *)&v0) = (unsigned long long)v35.new();
                            v1 = &g_4dda50;
                            uucore::mods::error::set_exit_code((unsigned int)v0.code());
                            v5 = uucore::util_name();
                            v7 = v47;
                            v10 = &(char)v5;
                            v11 = <&T as core::fmt::Display>::fmt;
                            v13 = &v0;
                            v14 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                            v34 = &g_4dd9e0;
                            v36 = 3;
                            v39 = 0;
                            v37 = &v10;
                            v38 = 2;
                            std::io::stdio::_eprint(&v34);
                            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, &g_4dda50);
                        }
                        v49 = std::fs::set_permissions(&(char)v2, v44);
                        if (v49)
                        {
                            v0 = v49;
                            v10 = 0;
                            *((int128_t *)&v11) = *((int128_t *)&v3);
                            v14 = 1;
                            v5 = &v10;
                            v7 = <os_display::Quoted as core::fmt::Display>::fmt;
                            v8 = &v0;
                            v9 = <std::io::error::Error as core::fmt::Display>::fmt;
                            *((unsigned long long **)&v34) = &g_4dda10;
                            v36 = 2;
                            v39 = 0;
                            v37 = &(char)v5;
                            v38 = 2;
                            v30.map_or_else(&(unsigned long long)v34);
                            v38 = 1;
                            v34 = v30;
                            v37 = v31;
                            v50 = (unsigned long long)v34.new();
                            core::ptr::drop_in_place<std::io::error::Error>(v0);
                            core::ptr::drop_in_place<alloc::string::String>((long long)v2, v3);
                            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v20);
                            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v21);
                            return v50;
                        }
                        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
                        core::ptr::drop_in_place<alloc::string::String>((long long)v2, v3);
                        v17.next(&v20);
                    } while (*((long long *)&v17) != 0x8000000000000000);
                }
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v20);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v21);
                return 0;
            }
            v10.to_vec("missing operandcannot create fifo : File existscannot set permissions on Error flushing stdout: ", 15);
            v37 = v13;
            *((int128_t *)&v33) = *((int128_t *)&v10);
            v38 = 1;
            v43 = v33.new();
        }
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v21);
        return v50;
    }
    v44 = ~((int)uucore::features::mode::get_umask()) & 438;
    goto LABEL_45356e;
}
