long long uu_env::check_and_handle_string_args::hed3622534bd9b3ff(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
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
    struct_1 *v15;  // rax
    char v16;  // bpl
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned long long v21;  // rcx

    v1 = a1;
    v2 = a2;
    v0 = 0x8000000000000000;
    v4 = a3;
    v5 = a4;
    v3 = 0x8000000000000000;
    v14 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::strip_prefix::h831f2c1b0f7695e2(a1, a2, a3, a4);
    if (!v14)
    {
        v16 = 0;
        goto LABEL_4cdbaf;
    }
    else
    {
        v15 = v13;
        if (v15)
            uu_env::debug_print_args::hd3db9b945e2eb806(*((long long *)&v15->field_8), v15->field_10, v17);
        uu_env::parse_args_from_str::hf7264a032c9de5c8(v6, v14, v18);
        v19 = v6[0];
        v20 = *((long long *)&v7);
        v21 = *((long long *)&v8);
        if (v9 == 0x8000000000000000)
        {
            a0->field_0 = v10;
            *((unsigned long long *)&a0->field_8) = v11;
            ::0x4ca800::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::h94a17acc0baf8617(&v0);
        }
        else
        {
            v9 = v19;
            v10 = v20;
            v11 = v21;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h830ed42de7206a13(&v12, &v9);
            v16 = vvar_43{reg 56} | -0x100 | 1;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h7622452afb7e1e38(a5, &v12);
LABEL_4cdbaf:
            a0->field_8 = v16;
            a0->field_0 = 0;
            ::0x4ca800::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::h94a17acc0baf8617(&v0);
        }
    }
    return ::0x4ca800::core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::h94a17acc0baf8617(&v3);
}
