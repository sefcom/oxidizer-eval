long long fish::editable_line::EditableLine::want_to_coalesce_insertion_of(struct_0 *a0, unsigned int *a1, unsigned long a2)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rcx
    unsigned long long v3;  // rax

    if (a2 != 1)
    {
        return 0;
    }
    else if (a0->field_70)
    {
        if (*(a1) == 32 && a0->field_71 != 1)
            return 0;
        if (!a0->field_60)
            core::option::unwrap_failed(&g_14d6620); /* do not return */
        v1 = a0->field_58;
        v2 = a0->field_60 * 104;
        if (*((long long *)(v1 + v2 - 16)) >= *((long long *)(v1 + v2 - 8)))
        {
            v3 = fish::editable_line::cursor_position_after_edit(v1 + v2 - 104);
            return v3 & 0xffffffffffffff00 | v3 == a0->field_78;
        }
        return 0;
    }
    else
    {
        return 0;
    }
}
