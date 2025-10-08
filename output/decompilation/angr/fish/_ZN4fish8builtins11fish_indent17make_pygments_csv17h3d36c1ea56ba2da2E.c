void fish::builtins::fish_indent::make_pygments_csv(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x198]
    unsigned long long v1;  // [bp-0x190]
    void* v2;  // [bp-0x188]
    unsigned long long v3;  // [bp-0x180]
    void* v4;  // [bp-0x178]
    void* v5;  // [bp-0x170]
    unsigned long long v6;  // [bp-0x168]
    void* v7;  // [bp-0x160]
    void* v8;  // [bp-0x158], Other Possible Types: char *, char, unsigned long long
    int v9;  // [bp-0x158]
    unsigned long v10;  // [bp-0x150], Other Possible Types: unsigned long long
    char *v11;  // [bp-0x148], Other Possible Types: char, unsigned long long
    int v12;  // [bp-0x140], Other Possible Types: unsigned long long
    char *v13;  // [bp-0x138]
    unsigned long long v14;  // [bp-0x130]
    void* v15;  // [bp-0x110]
    unsigned long long v16;  // [bp-0x108]
    void* v17;  // [bp-0x100]
    struct_0 *v18;  // [bp-0xf8]
    void* v19;  // [bp-0xf0]
    unsigned long long v20;  // [bp-0xe8]
    void* v21;  // [bp-0xe0]
    unsigned short v22;  // [bp-0xd8]
    int v23;  // [bp-0xd6]
    int v25;  // [bp-0xc0]
    char v26;  // [bp-0xb0]
    unsigned long long v27;  // [bp-0xb0]
    unsigned long long v28;  // [bp-0xa8]
    unsigned long long v29;  // [bp-0xa0]
    void* v30;  // [bp-0x98], Other Possible Types: char *
    unsigned long long v31;  // [bp-0x90]
    void* v32;  // [bp-0x88]
    unsigned long long v33;  // [bp-0x78]
    unsigned long long v34;  // [bp-0x70]
    int v35;  // [bp-0x68]
    unsigned long long v36;  // [bp-0x58]
    int v37;  // [bp-0x48]
    char v38;  // [bp-0x38]
    unsigned long long v40;  // cc_ndep
    unsigned long long v41;  // cc_ndep
    void* v42;  // rax
    char v43;  // dl
    unsigned long long v44;  // cc_op
    unsigned long long v45;  // cc_dep1
    void* v46;  // cc_dep2
    void* v47;  // rsi
    unsigned long long v48;  // cc_ndep
    unsigned long long v49;  // rdx
    unsigned long long v50;  // [bp-0x60]

    v2 = 0;
    v3 = 1;
    v4 = 0;
    v8.globals();
    fish::highlight::highlight::highlight_shell(a1, a2, &v2, &v8, 0, 0, *((long long *)&v0));
    core::ptr::drop_in_place<fish::operation_context::OperationContext>(&v8);
    v19 = 0;
    v20 = a2;
    if (v19 != a2)
    {
        v8 = &g_14c9890;
        v10 = 1;
        v11 = 8;
        *((uint128_t *)&v12) = 0;
        core::panicking::assert_failed(0, &v19, &v20, &v8, &g_14c98e0); /* do not return */
    }
    v5 = 0;
    v6 = 8;
    v7 = 0;
    v28 = 1;
    v29 = 1 + a2 * 4;
    v30 = 0;
    v1 = &g_14c98f8;
    while (true)
    {
        v41 = v40;
        v21.next(&v28);
        if ((char)v22 == 2)
            break;
        v42 = v21;
        v43 = (char)v23;
        v44 = 17;
        v45 = 1;
        v46 = 0;
        v47 = v42;
        v48 = _ccall(v44, v45, v46, v41);
        if ((char)_ccall(4, 24, v47 + 1, 0, _ccall(v44, v45, v46, v41)))
        {
            v1 = &g_14c9910;
            core::panicking::panic_const::panic_const_add_overflow(v1); /* do not return */
        }
        v8 = v42;
        v10 = v47 + 1;
        v11 = v43;
        v5.push(&v8);
        v40 = v48;
    }
    v1 = 1;
    v15 = 0;
    v16 = 1;
    v17 = 0;
    v21.into_iter(&v5);
    (char)v25.next(&v21);
    if (v26 != 28)
    {
        do
        {
            v36 = v27;
            v35 = v25;
            v33 = fish::builtins::fish_indent::highlight_role_to_string(v27);
            v34 = v49;
            v8 = &(char)v35;
            v10 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
            v11 = &v50;
            v12 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
            v13 = &v33;
            v14 = <&T as core::fmt::Display>::fmt;
            v28 = &g_14c98a0;
            v29 = 4;
            v32 = 0;
            v30 = &v8;
            v31 = 3;
            v37.map_or_else(&v28);
            v9 = v37;
            v11 = *((long long *)&v38);
            v15.spec_extend(core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt, *((long long *)&v38) + core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt);
            core::ptr::drop_in_place<alloc::string::String>(&v8);
            (char)v25.next(&v21);
        } while (v26 != 28);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::builtins::fish_indent::make_pygments_csv::TokenRange>>(&v21);
    v18->field_10 = 0;
    v18->field_0 = *((int128_t *)&v15);
    core::ptr::drop_in_place<alloc::vec::Vec<fish::color::Color>>(v2, 1);
    return;
}
