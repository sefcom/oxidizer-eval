long long fish::pager::Pager::rendering_needs_update(struct_1 *a0, struct_0 *a1)
{
    unsigned int v1;  // ebx
    unsigned int v2;  // ebx
    unsigned long long v3;  // rax
    struct_1 *v4;  // 4096
    unsigned long v5;  // rdx
    struct_1 *v6;  // rax

    v2 = v1 & 0xffffff00 | 1;
    if (a0->field_112)
        return v2;
    if (a0->field_c0)
    {
        if (!(a1->field_0 & 1))
        {
            return v2;
        }
        else if (a1->field_8 != a0->field_f8)
        {
            return v2;
        }
        else if (a1->field_10 != 1)
        {
            return v2;
        }
        else if (a1->field_18 == a0->field_100)
        {
            v3 = a0.visual_selected_completion_index(a1->field_f0, *((long long *)&a1->field_f8));
            if (a1->field_20 != 1)
            {
                v4 = a0;
                if (v3)
                    return v2;
            }
            else if (((char)v3 & 1))
            {
                v4 = a0;
                if (a1->field_28 != v5)
                    return v2;
            }
            else
            {
                return v2;
            }
            v6 = v4;
            if (a1->field_118 != v6->field_111)
            {
                return v2;
            }
            else if (!(char)a1->field_90.equal(a1->field_98, v6->field_38, v6->field_40))
            {
                return v2;
            }
            else if (a1->field_e0 != a0->field_88)
            {
                return v2;
            }
            else if (a1->field_110)
            {
                return a0->field_110;
            }
        }
        else
        {
            return v2;
        }
    }
    else
    {
        if (a1->field_50)
            return v2;
    }
    return 0;
}
