long long uu_sort::print_sorted::h1bd0bcd482134beb(struct_0 *a0, void* a1, void* a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0xa8]
    unsigned long long *v1;  // [sp-0xa0]
    unsigned long long *v2;  // [sp-0x98]
    unsigned long long *v3;  // [sp-0x90]
    unsigned long long v4;  // [sp-0x88]
    unsigned long long *v5;  // [sp-0x80]
    unsigned long long v6;  // [sp-0x78]
    unsigned long long v7;  // [sp-0x70]
    char v8;  // [bp-0x60]
    void* v10;  // rcx
    unsigned long long v11;  // r15
    void* v12;  // rax
    unsigned long long v14;  // rsi
    unsigned long long v15;  // r8
    unsigned long long *v16;  // rbp
    unsigned long long v17;  // r13
    unsigned long v18;  // r13
    unsigned long long v20;  // r13
    unsigned long long v21;  // r13
    void* v22;  // r13
    unsigned long long v23;  // r14
    unsigned long long *v24;  // rbx
    unsigned long long v25;  // r13
    char **v26;  // r13
    unsigned long long v28;  // rdi
    unsigned long long v29;  // r9

    uu_sort::Output::into_write::h870c005d8ea28443(&v8, a2);
    v6 = a0->field_0;
    v10 = a0->field_8;
    v2 = &a0->field_10->field_0;
    v11 = a0->field_18;
    v4 = a0->field_20;
    v3 = &a0->field_28->field_0;
    v12 = a0->field_30;
    v1 = &a0->field_38->field_0;
    v12 = a0->field_40;
    v7 = a0->field_48;
    v5 = &a0->field_50->field_0;
    v5 = v5;
    while (true)
    {
        v17 = v11;
        if (v18)
        {
            v11 = v17;
            v16 = v2;
            v18 = v10;
            v20 = v18;
            v21 = v18;
            if (!(!v12))
                goto LABEL_4cd4b0;
            goto LABEL_4cd449;
        }
        if (v17 && v17 != v4)
        {
            v11 = v17 + 24;
            v16 = v3;
            v20 = v17;
            v21 = v17;
            if (!v12)
                goto LABEL_4cd449;
LABEL_4cd4b0:
            v10 = v21;
            v12 = v12;
            v12 = v12;
            v1 = v1;
            if (!v10)
                goto LABEL_4cd410;
            goto LABEL_4cd4c4;
        }
        v11 = v17;
        v22 = 0;
        v20 = v22;
        v21 = v22;
        if (!(!v12))
            goto LABEL_4cd4b0;
LABEL_4cd449:
        v10 = v20;
        if (!(v12) || !(v12 != v7))
        {
            if (!v10)
                break;
            v23 = v12;
            goto LABEL_4cd413;
        }
        v12 += 24;
        v1 = v5;
        if (!v10)
        {
LABEL_4cd410:
            v23 = v12;
LABEL_4cd413:
            v10 = 0;
            v25 = v18;
            goto LABEL_4cd416;
        }
        else
        {
LABEL_4cd4c4:
            v24 = v1;
            if ((char)uu_sort::compare_by::h8ef91666f986b458(v10, v12, v6, *(v16) + 48, *(v24) + 48) != 1)
            {
                v10 = 0;
                v1 = v24;
                v26 = v10;
            }
            else
            {
                v2 = v16;
LABEL_4cd416:
                v12 = 0;
                v26 = v28;
            }
            uu_sort::Line::print::h3ae0461d0c58fb66(v26, &v8, a1, v25, v15, v29);
        }
    }
    return _ZN4core3ptr115drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$17haf0144e8e9813ab9E.llvm.14646808445695166917(&v8, v14, v5, v18, v15, v29, *((long long *)&v0), v1, v2);
}
