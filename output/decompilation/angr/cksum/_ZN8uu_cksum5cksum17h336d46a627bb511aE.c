long long uu_cksum::cksum(struct_0 *a0, unsigned long long a1)
{
    char *v1;  // [bp-0x248]
    int v2;  // [bp-0x248]
    unsigned long long v3;  // [bp-0x240]
    char *v4;  // [bp-0x238], Other Possible Types: unsigned long long
    unsigned int v5;  // [bp-0x230], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x228]
    char *v10;  // [bp-0x208]
    char *v11;  // [bp-0x208]
    unsigned long long v12;  // [bp-0x200]
    unsigned long long v13;  // [bp-0x200]
    unsigned long long v15;  // [bp-0x1f0]
    char *v16;  // [bp-0x1f0]
    unsigned long long v18;  // [bp-0x1e8]
    unsigned long long v19;  // [bp-0x1e8]
    char *v21;  // [bp-0x1e0]
    unsigned long long v23;  // [bp-0x1d8]
    char v26;  // [bp-0x1c0]
    unsigned long v27;  // [bp-0x1c0], Other Possible Types: unsigned long long
    unsigned int v28;  // [bp-0x1bc]
    unsigned long long v29;  // [bp-0x1b8]
    unsigned long long v31;  // [bp-0x1a8]
    char *v32;  // [bp-0x1a0]
    struct_0 *v36;  // [bp-0x180]
    unsigned long long v37;  // [bp-0x178]
    unsigned long long v38;  // [bp-0x170]
    char v39;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v40;  // [bp-0x160]
    unsigned long v41;  // [bp-0x158]
    char *v42;  // [bp-0x150]
    unsigned long v43;  // [bp-0x148]
    unsigned long long v44;  // [bp-0x140]
    char v63;  // [bp-0xa8]
    int v64;  // [bp-0x88]
    unsigned long long v65;  // [bp-0x78]
    char v66;  // [bp-0x70]
    struct_0 *v68;  // r13
    unsigned long long v69;  // r15
    unsigned long long v70;  // rax
    unsigned long long v71;  // r14
    char *v72;  // rbx
    unsigned long long v73;  // rdx
    unsigned long long v74;  // r12
    unsigned long long v75;  // r12
    unsigned long long v77;  // rax
    unsigned long long v78;  // rdx
    unsigned long long v79;  // rax
    char *v82;  // rbx
    unsigned int v83;  // eax

    v68 = a0;
    v39.collect(a1);
    if (a0->field_3a == 1 && v41 >= 2)
    {
        v69 = 0.new();
        core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v39, v40);
        goto LABEL_481937;
    }
    v63.into_iter(&v39);
    v70 = v63.next();
    if (!v70)
    {
LABEL_481903:
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::ffi::os_str::OsStr>>(&v63);
        v69 = 0;
LABEL_481937:
        core::ptr::drop_in_place<uu_cksum::Options>(v68->field_20, v68->field_28);
        return v69;
    }
    v71 = v70;
    v43 = &a0->field_20;
    v42 = &a0[1].field_0;
    v72 = &v66;
    v37 = &g_562db0;
    v36 = a0;
    while (true)
    {
        v75 = v74;
        v72.components(v71, v75);
        v1.components("-: \ncrcbsdcrc32bblake2b  (BLAKE2b (", 1);
        if (v72.eq(&v1))
        {
            v77 = std::io::stdio::stdin().new();
            v78 = &g_562cc8;
            goto LABEL_480dd0;
        }
        if ((char)v71.is_dir(v75))
        {
            v1.with_capacity();
            v77 = v1.new();
            v78 = &g_562c70;
            goto LABEL_480dd0;
        }
        v26.open(v71, v75);
        if ((int)v27 != 1)
            break;
        v32 = v29.map_err_context(v71, v75);
        uucore::mods::error::set_exit_code(1);
        v11 = uucore::util_name();
        v13 = v73;
        v16 = &v11;
        v19 = <&T as core::fmt::Display>::fmt;
        v21 = &v32;
        v23 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v1 = &g_562aa0;
        v3 = 3;
        v6 = 0;
        v4 = &v16;
        v5 = 2;
        std::io::stdio::_eprint(&v1);
        core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(v32);
        v71 = v63.next();
        v74 = v73;
        if (!v71)
            goto LABEL_481903;
    }
    v77 = v28.new();
    v78 = &g_562c18;
LABEL_480dd0:
    v72.with_capacity(v77, v78);
    if ((char)v71.is_dir(v75))
    {
        v15 = v71;
        v18 = v75;
        v10 = &v15;
        v12 = <std::path::Display as core::fmt::Display>::fmt;
        *((unsigned long long **)&v2) = &g_562ad0;
        v3 = 2;
        v6 = 0;
        v4 = &v10;
        v5 = 1;
        v64.map_or_else(&(unsigned long long)v2);
        v5 = 1;
        v2 = v64;
        v4 = v65;
        v79 = (unsigned long long)v2.new();
        v27 = v79;
        v29 = &g_5629e8;
        uucore::mods::error::set_exit_code((unsigned int)v79.code());
        v11 = uucore::util_name();
        v13 = v73;
        v16 = &v11;
        v19 = <&T as core::fmt::Display>::fmt;
        v21 = &(char)v27;
        v23 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        v1 = &g_562aa0;
        v3 = 3;
        v6 = 0;
        v4 = &v16;
        v5 = 2;
        std::io::stdio::_eprint(&v1);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v27, v29);
    }
    uucore::features::checksum::digest_reader(&v1, v43, v72, v68->field_30);
    v16.map_err_context(&v1);
    v31 = v19;
    v82 = v21;
    if ((char)(((0 ^ v16) & (0 ^ -(v16))) >> 63))
        v69 = v31;
    v44 = v23;
    v83 = v68->field_3a;
    v38 = v44;
}
