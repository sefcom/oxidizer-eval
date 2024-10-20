long long uu_sort::print_sorted::hcaedf0822f2a6338(struct_0 *a0, void* a1, void* a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x78]
    unsigned long long v1;  // [sp-0x70]
    char v2;  // [bp-0x60]
    void* v4;  // r13
    unsigned long long v5;  // r12
    unsigned long long v6;  // r14
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rcx
    unsigned long long v12;  // r8
    char **v13;  // r13
    unsigned long long v14;  // r12
    unsigned long long v16;  // r12
    unsigned long long v17;  // r12
    unsigned long long v19;  // rcx
    unsigned long long v20;  // r8
    unsigned long long v21;  // r9

    uu_sort::Output::into_write::h870c005d8ea28443(&v2, a2);
    v1 = a0->field_0;
    v4 = a0->field_8;
    v5 = a0->field_10;
    v6 = a0->field_18;
    while (true)
    {
        if (!v1)
        {
            if (v5 == v6)
                break;
            v1 = 1;
        }
        else if (!v4)
        {
            break;
        }
        do
        {
            v16 = v14;
            v13 = v13;
            if (v16 == v6)
            {
                v4 = 0;
                goto LABEL_4cd765;
            }
        } while ((v17 = v16 + 24, !(char)(long long)uu_sort::compare_by::h8ef91666f986b458(v13, v16, a0->field_20, a0->field_28->field_0 + 48, a0->field_28->field_0 + 48)));
        v4 = v17 - 24;
        v1 = 1;
LABEL_4cd765:
        uu_sort::Line::print::h3ae0461d0c58fb66(v13, &v2, a1, v19, v20, v21);
    }
    return _ZN4core3ptr115drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$17haf0144e8e9813ab9E.llvm.14646808445695166917(&v2, v9, v10, v11, v12, v21, *((long long *)&v0), v1, a1);
}
