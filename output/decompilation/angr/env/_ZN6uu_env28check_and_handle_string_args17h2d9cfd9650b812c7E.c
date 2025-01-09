long long uu_env::check_and_handle_string_args::h2d9cfd9650b812c7(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0xb0]
    unsigned long long v1;  // [sp-0xa8]
    unsigned long long v2;  // [sp-0xa0]
    unsigned long long v3;  // [sp-0x98]
    unsigned long long v4;  // [sp-0x90]
    unsigned long long v5;  // [sp-0x88]
    unsigned long long v6[3];  // [bp-0x80]
    char v7;  // [bp-0x78]
    char v8;  // [bp-0x70]
    unsigned long v9;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x60]
    unsigned long long v11;  // [sp-0x58]
    char v12;  // [bp-0x50]
    unsigned long long v13[3];  // [bp+0x8]
    unsigned long long v14;  // rax
    unsigned int v15[5];  // rax
    char v16;  // bpl
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rcx

    v1 = a1;
    v2 = a2;
    v0 = 0x8000000000000000;
    v4 = a3;
    v5 = a4;
    v3 = 0x8000000000000000;
    v14 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::strip_prefix::hb9f69e5c74ed4ad0(a1, a2, a3, a4);
    if (!v14)
    {
        v16 = 0;
        goto LABEL_4cda7f;
    }
    else
    {
        v15 = v13;
        if (v15)
            uu_env::debug_print_args::hc6b0deb8b4ab006f(*((long long *)&v15[2]), *((long long *)&v15[4]));
        uu_env::parse_args_from_str::ha63b8bbceed9831c(v6, v14, v17);
        v18 = v6[0];
        v19 = *((long long *)&v7);
        v20 = *((long long *)&v8);
        if (v9 == 0x8000000000000000)
        {
            a0->field_0 = v10;
            *((unsigned long long *)&a0->field_8) = v11;
            ::0x4ca6d0::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::hdc3450eb31f9c716(&v0);
        }
        else
        {
            v9 = v18;
            v10 = v19;
            v11 = v20;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hbb87e87a26a4d03d(&v12, &v9);
            v16 = vvar_43{reg 56} & 0xffffffffffffff00 | 1;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h4dff720d83742dfa(a5, &v12);
LABEL_4cda7f:
            a0->field_8 = v16;
            a0->field_0 = 0;
            ::0x4ca6d0::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::hdc3450eb31f9c716(&v0);
        }
    }
    return ::0x4ca6d0::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::hdc3450eb31f9c716(&v3);
}
