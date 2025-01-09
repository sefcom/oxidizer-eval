long long uu_tail::follow::files::FileHandling::tail_file::h8ac57e4964e40afa(struct_2 *a0, struct_1 *a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    unsigned long v0;  // [sp-0x158], Other Possible Types: unsigned long long
    void* v1;  // [sp-0x150]
    unsigned long long v2;  // [sp-0x148]
    int v3;  // [sp-0x140]
    unsigned long long v4;  // [sp-0x130]
    void* v5;  // [sp-0x128]
    char v6;  // [bp-0x120]
    char v7;  // [bp-0x110]
    unsigned long long v8;  // [bp-0x108]
    char v9;  // [bp-0x100]
    unsigned long long v10;  // [sp-0xf8]
    char v11;  // [bp-0x50]
    struct_0 *v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx

    v4 = 18446744073709551615;
    v5 = 0;
    v1 = 0;
    v2 = 8;
    *((uint128_t *)&v3) = 0;
    v13 = uu_tail::follow::files::FileHandling::get_mut::h1a80ce1ee4fcf7dc(a1, a2, a3);
    if (!v13->field_c8)
    {
LABEL_50ed64:
        a0->field_8 = 0;
        goto LABEL_50ed68;
    }
    v14 = uu_tail::chunks::BytesChunkBuffer::fill::h530d2248581353b2(&v1, &v13->field_c8);
    if (v14)
    {
LABEL_50ec4e:
        a0->field_0 = v14;
        *((unsigned long long *)&a0->field_8) = v15;
    }
    else
    {
        if (!(long long)(&v3)[8])
            goto LABEL_50ed64;
        if ((char)uu_tail::follow::files::FileHandling::needs_header::h44ee2212a23b7f03(a1, a2, a3, a4))
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v8, uu_tail::follow::files::FileHandling::get::ha1f26ea8b12ea1ff(a1, a2, a3) + 176);
            uu_tail::paths::HeaderPrinter::print::h45f27ae0b4b499e5(a1 + 3, *((long long *)&v9), v10);
            ::0x50d390::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&v8);
        }
        v0 = std::io::stdio::stdout::h077da66234850927();
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::haf7bea51889604aa(&v11, 0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&v0));
        v14 = uu_tail::chunks::BytesChunkBuffer::print::h3c452982a4c37be4(&v1, &v11);
        if (!(!v14))
            goto LABEL_50ec4e;
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v6, a2, a3);
        v10 = a1->field_10;
        *((uint128_t *)&v8) = a1->field_0;
        a1->field_0 = *((int128_t *)&v6);
        a1->field_10 = *((long long *)&v7);
        ::0x50d540::core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h63b24af75b14f95f(&v8);
        v8 = 2;
        uu_tail::follow::files::FileHandling::update_metadata::h4aaaeb16ccacaf37(a1, a2, a3, &v8);
        a0->field_8 = 1;
LABEL_50ed68:
        a0->field_0 = 0;
    }
    ::0x50d500::core::ptr::drop_in_place$LT$uu_tail..chunks..BytesChunkBuffer$GT$::h83b3f06568852970(&v1);
    return a0;
}
