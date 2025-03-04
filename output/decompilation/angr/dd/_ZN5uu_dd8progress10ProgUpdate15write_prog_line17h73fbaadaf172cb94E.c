long long uu_dd::progress::ProgUpdate::write_prog_line::h73fbaadaf172cb94(struct_1 *a0, unsigned long long a1, unsigned int a2)
{
    unsigned long v0;  // [sp-0x178]
    unsigned long long v1;  // [sp-0x170]
    unsigned long v2;  // [sp-0x160]
    unsigned long long v3;  // [sp-0x158]
    struct struct_0 **v4;  // [sp-0x150]
    unsigned long long v5;  // [sp-0x148]
    void* v6;  // [sp-0x140]
    char *v7;  // [sp-0x130]
    unsigned long long v8;  // [sp-0x128]
    char *v9;  // [sp-0x120], Other Possible Types: char
    unsigned int v10;  // [sp-0x11f]
    unsigned long long v11;  // [sp-0x118]
    char *v12;  // [sp-0x110]
    unsigned long long v13;  // [sp-0x108]
    char *v14;  // [sp-0x100]
    unsigned long long v15;  // [sp-0xf8]
    char *v16;  // [sp-0xf0]
    unsigned long long v17;  // [sp-0xe8]
    char *v18;  // [sp-0xe0]
    unsigned long long v19;  // [sp-0xd8]
    char *v20;  // [sp-0xd0]
    unsigned long long v21;  // [sp-0xc8]
    unsigned long v22;  // [sp-0xc0]
    unsigned long long v23;  // [sp-0xb8]
    unsigned long v24;  // [sp-0xb0]
    unsigned long v25;  // [sp-0xa8]
    void* v26;  // [sp-0xa0]
    unsigned long long v27;  // [sp-0x98]
    void* v28;  // [sp-0x90]
    unsigned long v29;  // [sp-0x88]
    unsigned long long v30;  // [sp-0x80]
    char v31;  // [bp-0x78]
    char v32;  // [bp-0x60]
    char v33;  // [bp-0x48]
    unsigned long long v34;  // [sp-0x30]
    unsigned long long v35;  // [sp-0x28]
    unsigned long v37;  // r12
    unsigned long v38;  // rbx
    unsigned long long v39;  // rbp
    unsigned long long v40;  // rax
    unsigned long long v41;  // rdx
    unsigned long long v42;  // r8
    unsigned long long v43;  // r9
    unsigned long long v45;  // rax
    unsigned long long v47;  // rax
    unsigned long long v48;  // rax
    unsigned long long v49;  // rax
    unsigned long long v50;  // rcx
    unsigned long long v51;  // rax
    unsigned long long v52;  // rax
    unsigned long long v53;  // rax
    unsigned long long v54;  // rax
    void* v55;  // rbx

    v35 = v37;
    v34 = v38;
    v39 = a2;
    v0 = a0->field_30;
    v1 = a0->field_38;
    uu_dd::numbers::to_magnitude_and_suffix::h88c44cbe00c16152(&v31, v0, v1, 1);
    uu_dd::numbers::to_magnitude_and_suffix::h88c44cbe00c16152(&v32, v0, v1, 0);
    v40 = core::cmp::max_by::h2325bc61e56912fb((a0->field_8 * 1125899907 >> 50) + a0->field_0 * 1000, a0->field_0 / 18446744073709552 + (((a0->field_8 * 1125899907 >> 50) + a0->field_0 * 1000 <= a0->field_8 * 1125899907 >> 50 ? 1 : 0) & 1));
    if (!v40 && !v41)
        core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(&g_562478); /* do not return */
    uu_dd::numbers::to_magnitude_and_suffix::h88c44cbe00c16152(&v33, __udivti3(v0, v1, v40, v41, v42, v43) * 1000, __udivti3(v0, v1, v40, v41, v42, v43) / 18446744073709552 + v41 * 1000, 1);
    if (!(char)v39)
        v45 = 1;
    else
        v45 = "\r+ records in\n records out\n";
    v22 = v45;
    v23 = v39 & 4294967295;
    *((int *)&v24) = ((char)v39 ? 1 : "\n");
    v25 = (char)(v23 & 4294967295) ^ 1;
    v26 = 0;
    v27 = 1;
    v28 = 0;
    v9 = 2;
    v7 = 0;
    v10 = 0;
    v8 = 6;
    v47 = _$LT$uucore..features..format..num_format..Float$u20$as$u20$uucore..features..format..num_format..Formatter$GT$::fmt::hdc40127ddb80f4d7(&v7, &v26);
    if (v47)
    {
        v48 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v47);
        goto LABEL_4efdfe;
    }
    core::str::converts::from_utf8::ha1effb4cca6d9901(&v7, v27, v28);
    v29 = core::result::Result$LT$T$C$E$GT$::unwrap::h373b8612646dc001(&v7);
    v30 = v41;
    if (UnaryOp GetMSBs == 65535)
    {
        v7 = &v22;
        v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
        v9 = &v0;
        v11 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h261e2a7b3123826c;
        v12 = &v29;
        v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
        v14 = &v33;
        v15 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v16 = &v24;
        v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
        v2 = &g_562308;
        v3 = 5;
        v6 = 0;
        v4 = &v7;
        v5 = 5;
        v49 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(a1, &v2);
        if (!v49)
            goto LABEL_4f0230;
        v48 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v49);
    }
    else
    {
        v50 = v0;
        v51 = v1;
        if ((char)amd64g_calculate_condition(2, 16, v51, (unsigned long long)(char)(v50 < 1000), (unsigned long long)(char)(v50 < 1000)))
        {
            v7 = &v22;
            v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
            v9 = &v0;
            v11 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h261e2a7b3123826c;
            v12 = &v29;
            v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
            v14 = &v33;
            v15 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v16 = &v24;
            v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
            v2 = &g_562358;
            v3 = 5;
            v6 = 0;
            v4 = &v7;
            v5 = 5;
            v52 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(a1, &v2);
            if (!v52)
                goto LABEL_4f0230;
            v48 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v52);
        }
        else if (!((char)amd64g_calculate_condition(2, 16, v51, (unsigned long long)(char)(v50 < 0x400), (unsigned long long)(char)(v50 < 0x400))))
        {
            v7 = &v22;
            v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
            v9 = &v0;
            v11 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h261e2a7b3123826c;
            v12 = &v31;
            v13 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v14 = &v32;
            v15 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v16 = &v29;
            v17 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
            v18 = &v33;
            v19 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v20 = &v24;
            v21 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
            v2 = &g_562408;
            v3 = 7;
            v6 = 0;
            v4 = &v7;
            v5 = 7;
            v54 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(a1, &v2);
            if (!v54)
            {
LABEL_4f0230:
                ::0x4ef2c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hcaeb013c8c4216fe(&v26);
                ::0x4ef290::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3d63831bb78bbaa7(&v33);
                ::0x4ef290::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3d63831bb78bbaa7(&v32);
                ::0x4ef290::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3d63831bb78bbaa7(&v31);
                return 0;
            }
            v48 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v54);
        }
        else
        {
            v7 = &v22;
            v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
            v9 = &v0;
            v11 = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h261e2a7b3123826c;
            v12 = &v31;
            v13 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v14 = &v29;
            v15 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
            v16 = &v33;
            v17 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v18 = &v24;
            v19 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
            v2 = &g_5623a8;
            v3 = 6;
            v6 = 0;
            v4 = &v7;
            v5 = 6;
            v53 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::h82787f8382d2102c(a1, &v2);
            if (!v53)
                goto LABEL_4f0230;
            v48 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v53);
        }
    }
LABEL_4efdfe:
    v55 = v48;
    ::0x4ef2c0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hcaeb013c8c4216fe(&v26);
    ::0x4ef290::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3d63831bb78bbaa7(&v33);
    ::0x4ef290::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3d63831bb78bbaa7(&v32);
    ::0x4ef290::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3d63831bb78bbaa7(&v31);
    return v55;
}
