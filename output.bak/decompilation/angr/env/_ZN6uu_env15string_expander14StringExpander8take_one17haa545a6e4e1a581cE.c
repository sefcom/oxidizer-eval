long long uu_env::string_expander::StringExpander::take_one::haa545a6e4e1a581c(unsigned long long a0)
{
    char v0;  // [bp-0x70]
    char v1;  // [bp-0x68]
    char v2;  // [bp-0x60]
    char v3;  // [bp-0x5f]
    char v4;  // [bp-0x5c]
    unsigned long v5;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x48]
    char v7;  // [sp-0x40]
    unsigned int v8;  // [bp-0x3f]
    unsigned int v9;  // [sp-0x3c]
    char v10;  // [bp-0x38]
    char v11;  // [bp-0x30]
    char v12;  // [bp-0x28]
    unsigned long long v14;  // rax
    unsigned long long v15;  // rbx
    char v16;  // dl
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rdx

    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::h67e0541a63634aad(&v0, a0 + 24);
    v14 = *((long long *)&v0);
    v15 = *((long long *)&v1);
    v16 = v2;
    if (v5 == 0x8000000000000000)
        return v6;
    v9 = *((int *)&v4);
    v8 = *((int *)&v3);
    v5 = v14;
    v6 = v15;
    v7 = v16;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h59212428aae9c3a9(&v0, &v5);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha03a06f4c3eee9d9(&v10, &v0);
    if (*((long long *)&v10))
    {
        do
        {
            v17 = *((long long *)&v11);
            v18 = *((long long *)&v12);
            if (!v17)
                alloc::vec::Vec$LT$T$C$A$GT$::push::hbb1a1cd8ffcceeec(a0, v18 >> 32 & 4294967295 & 4294967295);
            else
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h0480c74d12e82013(a0, v17, v18 + v17);
        } while ((_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha03a06f4c3eee9d9(&v10, &v0), *((long long *)&v10)));
    }
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$uu_env..string_parser..Chunk$GT$$GT$::he4b386000dd6eaf5(&v0);
    return v6;
}
