void fish::input_common::InputEventQueuer::paste_start_buffering(struct_0 *a0)
{
    core::ptr::drop_in_place<terminfo::expand::Parameter>(a0->field_50, a0->field_58);
    a0->field_50 = 0;
    a0->field_58 = 1;
    a0->field_60 = 0;
    return;
}
