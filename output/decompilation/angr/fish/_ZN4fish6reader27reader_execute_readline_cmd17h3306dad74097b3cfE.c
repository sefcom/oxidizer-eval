long long fish::reader::reader_execute_readline_cmd(struct_0 *a0, struct_1 *a1)
{
    unsigned long long v0;  // [bp-0x148]
    struct_2 *v1;  // [bp-0x20]
    struct_0 *v2;  // [bp-0x18]
    struct_2 *v4;  // rax
    unsigned long v5;  // rcx

    if (a0->field_5b)
        return (unsigned long long)core::ptr::drop_in_place<fish::input_common::CharEvent>(a1);
    v4 = fish::reader::current_data();
    if (v4)
    {
        v1 = v4;
        v2 = a0;
        if (!((char)(((0 ^ a1->field_0) & (0 ^ -(a1->field_0))) >> 63)))
            fish::reader::reader_execute_readline_cmd::panic_cold_explicit(); /* do not return */
        v5 = a1->field_20 - 60;
        if ((unsigned int)v5 <= 32)
        {
            v0 = 4294967303;
            if (!(*((char *)&v0 + ((v5 & 63) >> 3)) >> ((char)v5 & 63 & 7) & 1))
                goto LABEL_13f8bdf;
            v4->padding_813[45] = 1;
        }
        else
        {
LABEL_13f8bdf:
            if (!(v4->padding_813[45] & 1))
            {
                if (v4->field_7e8 == 0x8000000000000000)
                {
                    core::ptr::drop_in_place<core::option::Option<fish::reader::ReadlineLoopState>>(&v4->field_7e8);
                    v4->field_7e8 = 0;
                    v4->field_7f0 = 8;
                    *((uint128_t *)&(&v4->field_7f0)[1]) = 0;
                    *((unsigned long long *)((char *)&v4->field_7f8 + 8)) = 0;
                    *((unsigned short *)&v4->field_808) = 1;
                    *((char *)&v4->field_808 + 2) = 95;
                }
                v4.save_screen_state();
                return v1.handle_char_event(a1);
            }
        }
        return v4->padding_0[1328].queue_char(a1);
    }
    return (unsigned long long)core::ptr::drop_in_place<fish::input_common::CharEvent>(a1);
}
