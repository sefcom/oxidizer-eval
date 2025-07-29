long long uu_unexpand::unexpand(struct_1 *a0)
{
    unsigned long long v0;  // [bp-0x178]
    unsigned long long v1;  // [bp-0x170]
    unsigned int v2;  // [bp-0x168]
    unsigned long long v3[3];  // [bp-0x160]
    unsigned long long v4;  // [bp-0x158]
    void* v5;  // [bp-0x150]
    unsigned long long v6;  // [bp-0x148]
    unsigned long long v7;  // [bp-0x140]
    unsigned long v8;  // [bp-0x138]
    unsigned long long v9;  // [bp-0x130]
    unsigned long long v10;  // [bp-0x128]
    unsigned long long v11;  // [bp-0x120]
    char v12;  // [bp-0x120]
    unsigned long long v13;  // [bp-0x118]
    int v14;  // [bp-0x110]
    int v15;  // [bp-0x100]
    unsigned long long v16;  // [bp-0xf0]
    char *v17;  // [bp-0xe8]
    unsigned long long v18;  // [bp-0xe0]
    char *v19;  // [bp-0xd8]
    unsigned long long v20;  // [bp-0xd0]
    char v21;  // [bp-0xc8]
    int v22;  // [bp-0xb8]
    int v23;  // [bp-0xa8]
    unsigned long long v24;  // [bp-0x98]
    unsigned long long v25[1][3];  // [bp-0x88]
    unsigned long long v26;  // [bp-0x60]
    unsigned long long v27;  // [bp-0x58]
    char *v28;  // [bp-0x50]
    unsigned long long v29;  // [bp-0x48]
    void* v30;  // [bp-0x40]
    unsigned long v33;  // rax
    unsigned long long v34;  // rdx
    unsigned long long v35[3];  // rax
    char *v36;  // rbx
    char *v37;  // rbp
    unsigned long long v38;  // rax
    unsigned long long v39;  // rdx
    unsigned long long v41;  // rax

    v25.with_capacity(0x2000, std::io::stdio::stdout());
    v33 = a0->field_28;
    *(v3) = 0;
    v4 = 1;
    v5 = 0;
    v2 = (v33 <= 1 ? 0 : a0->field_20[1 + v33]);
    v8 = v33;
    v6 = a0.into_iter();
    v7 = v34;
    if (v6.next())
    {
        v36 = &v12;
        v37 = &v6;
        do
        {
            uu_unexpand::open(v36, v35[1], v35[2]);
            if (v11)
            {
                v24 = v16;
                v23 = v15;
                v22 = v14;
                memcpy(&v21, &v11, 16);
                while (true)
                {
                    v38 = std::io::read_until(&v21, 10, &v3);
                    v39 = v34;
                    if (v38)
                        v39 = v5;
                    if (!v39)
                        break;
                    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v38, v34);
                    v41 = uu_unexpand::unexpand_line(&v3, &v25, a0->field_30, a0->field_31, v2, a0->field_20, v8);
                    if (v41)
                    {
                        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v21);
                        ::0x49d5b0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v3);
                        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(&v25);
                        return v41;
                    }
                }
                core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v38, v34);
                core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v21);
                v36 = &v12;
                v37 = &v6;
            }
            else
            {
                v0 = v13;
                v1 = (long long)v14;
                uucore::mods::error::set_exit_code(*((long long *)((long long)v14 + 88))(v13));
                v9 = uucore::util_name();
                v10 = v34;
                v17 = &v9;
                v18 = <&T as core::fmt::Display>::fmt;
                v19 = &v0;
                v20 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v26 = &g_57ac58;
                v27 = 3;
                v30 = 0;
                v28 = &v17;
                v29 = 2;
                std::io::stdio::_eprint(&v26);
                ::0x49d3a0::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v0, v1);
            }
            v35 = v37.next();
        } while (v35);
    }
    ::0x49d5b0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v3);
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(&v25);
    return 0;
}
