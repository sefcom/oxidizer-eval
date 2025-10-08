long long uu_unexpand::unexpand(struct_0 *a0)
{
    void* v0;  // [bp-0x170]
    unsigned long long v1;  // [bp-0x168]
    void* v2;  // [bp-0x160]
    unsigned long long v3;  // [bp-0x158]
    unsigned long long v4;  // [bp-0x150]
    unsigned long v5;  // [bp-0x148]
    unsigned long long v6;  // [bp-0x140]
    unsigned long long v7;  // [bp-0x140]
    unsigned long v8;  // [bp-0x130]
    unsigned long long v9;  // [bp-0x128]
    void* v10;  // [bp-0x120]
    char *v11;  // [bp-0x118]
    unsigned long long v12;  // [bp-0x110]
    char *v13;  // [bp-0x108]
    unsigned long long v14;  // [bp-0x100]
    char v15;  // [bp-0xf8]
    int v16;  // [bp-0xe8]
    int v17;  // [bp-0xd8]
    unsigned long long v18;  // [bp-0xc8]
    unsigned long long v19;  // [bp-0xc0]
    unsigned long long v20;  // [bp-0xb8]
    int v21;  // [bp-0xb0]
    int v22;  // [bp-0xa0]
    unsigned long long v23;  // [bp-0x90]
    unsigned long long v24;  // [bp-0x88]
    unsigned long long v25;  // [bp-0x80]
    char *v26;  // [bp-0x78]
    unsigned long long v27;  // [bp-0x70]
    void* v28;  // [bp-0x68]
    unsigned long long v29[1][3];  // [bp-0x58]
    unsigned long v32;  // rcx
    unsigned long v33;  // rax
    unsigned long long v34[3];  // rbx
    unsigned long long v35;  // r12
    unsigned long long v36;  // rax
    void* v37;  // rdx
    void* v39;  // rax
    void* v42;  // rdx, Other Possible Types: unsigned long

    v29.with_capacity(std::io::stdio::stdout());
    v32 = a0->field_28;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    if (v32 > 1)
    {
        v5 = a0->field_20[1 + v32];
        v33 = a0->field_10;
        if (!a0->field_10)
            goto LABEL_45d542;
LABEL_45d30e:
        v8 = v32;
        v34 = a0->field_8;
        v7 = &a0->field_8[v33];
        do
        {
            uu_unexpand::open(&v19, v34[1], v34[2]);
            if (v19)
            {
                v18 = v23;
                v17 = v22;
                v16 = v21;
                memcpy(&v15, &v19, 16);
                while (true)
                {
                    v36 = std::io::read_until(&v15, &v0);
                    v37 = v42;
                    if (((char)v36 & 1))
                        v37 = 0;
                    if (!v37)
                        break;
                    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v36, v42);
                    v39 = uu_unexpand::unexpand_line(&v0, &v29, a0->field_30, a0->field_31, v5, a0->field_20, v8);
                    if (v39)
                    {
                        core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v15);
                        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(0, 1);
                        core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(&v29);
                        return v39;
                    }
                }
                core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v36, v42);
                core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn std::io::Read>>>(&v15);
                v6 = v7;
            }
            else
            {
                v3 = v20;
                v4 = (long long)v21;
                uucore::mods::error::set_exit_code(*((long long *)((long long)v21 + 88))(v20));
                v9 = uucore::util_name();
                v10 = v42;
                v11 = &v9;
                v12 = <&T as core::fmt::Display>::fmt;
                v13 = &v3;
                v14 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                v24 = &g_4e8388;
                v25 = 3;
                v28 = 0;
                v26 = &v11;
                v27 = 2;
                std::io::stdio::_eprint(&v24);
                core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v3, v4);
                v6 = v35;
            }
            v35 = v6;
            v34 += 1;
        } while (v34 != v35);
    }
    else
    {
        v5 = 0;
        v33 = a0->field_10;
        if (a0->field_10)
            goto LABEL_45d30e;
LABEL_45d542:
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(0, 1);
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(&v29);
    return 0;
}
