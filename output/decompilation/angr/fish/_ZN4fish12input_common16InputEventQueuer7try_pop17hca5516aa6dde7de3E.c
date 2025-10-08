long long fish::input_common::InputEventQueuer::try_pop(unsigned long long *a0, unsigned long a1)
{
    struct_0 *v1;  // rax
    unsigned long v2;  // rcx

    if (!(char)a1.is_blocked_querying())
    {
LABEL_13c9cfe:
        return a0.pop_front(a1.get_input_data_mut());
    }
    v1 = a1.get_input_data().get();
    if (v1)
    {
        v2 = 9223372036854775812 + v1->field_0 - 3;
        if (v1->field_0 >= 9223372036854775812)
            v2 = 0;
        if (v2 >= 3 && (v2 != 3 || v1->field_8 < 3))
            goto LABEL_13c9cfe;
    }
    *(a0) = 9223372036854775812;
    return v1;
}
