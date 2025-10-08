char fish::input::<impl fish::input_common::InputEventQueuer for fish::reader::Reader>::uvar_change_notified(struct_0 *a0)
{
    return a0->field_8.sync_uvars_and_fire(1);
}
