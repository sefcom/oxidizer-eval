long long fish::input_common::InputEventQueuer::paste_push_char(unsigned int a0, unsigned int a1)
{
    struct_0 *v1;  // rax

    v1 = a0.get_input_data_mut();
    if ((char)(((0 ^ v1->field_50) & (0 ^ -(v1->field_50))) >> 63))
        core::option::unwrap_failed(&g_14db418); /* do not return */
    return v1->field_50.push(a1, &g_14db430);
}
