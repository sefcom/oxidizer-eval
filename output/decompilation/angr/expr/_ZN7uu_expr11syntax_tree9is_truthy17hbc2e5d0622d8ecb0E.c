long long uu_expr::syntax_tree::is_truthy::hbc2e5d0622d8ecb0(struct_0 *a0)
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x30]
    char v2;  // [bp-0x28]
    char v3;  // [bp-0x20]
    unsigned long long v5;  // r15
    unsigned long long v6;  // r14
    unsigned long v7;  // rbx
    unsigned long long v8;  // rbx
    char v9;  // al
    unsigned long v10;  // rbx
    char *v11;  // rax
    unsigned int v13;  // eax

    if (a0->field_0 != 0x8000000000000000)
    {
        num_bigint::bigint::convert::_$LT$impl$u20$core..convert..From$LT$i64$GT$$u20$for$u20$num_bigint..bigint..BigInt$GT$::from::hfb5b8937a947fc26(&v0);
        v9 = a0->field_18;
        v8 = v10 & 0xffffffffffffff00 | 1;
        if (v9 == v3)
        {
            if (v9 == 1)
                v8 = 0;
            else
                v8 = (int)alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hc86a8171fbe67109(a0->field_8, a0->field_10, v1, *((long long *)&v2)) & 0xffffffffffffff00 | (char)alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hc86a8171fbe67109(a0->field_8, a0->field_10, v1, *((long long *)&v2)) ^ 1;
        }
        core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::h4ffd1c0c3ebf756b();
    }
    else
    {
        v5 = a0->field_10;
        v6 = *((long long *)&a0->field_18);
        v8 = v7 & 0xffffffffffffff00 | 1;
        if (!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hbdc352e98c6a24ec(v5, v6, "-*/%:matchsubstrindexlength()", 1))
        {
            v0 = v5;
            v1 = v6 + v5;
            v11 = ::0x52e660::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1ebd26144ee20df5(&v0);
            if (!v11)
            {
                v8 = 0;
            }
            else
            {
                v13 = *(v11);
                if (v13 == 48 || (v8 = v8 & 0xffffffffffffff00 | 1, v13 == 45))
                    v8 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hef697547d5d159b7(core::iter::traits::iterator::Iterator::try_fold::h530582dcff248937(&v0)) & 0xffffffffffffff00 | _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hef697547d5d159b7(core::iter::traits::iterator::Iterator::try_fold::h530582dcff248937(&v0)) ^ 1;
            }
        }
    }
    return v8 & 4294967295;
}
