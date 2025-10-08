long long fish::input::<impl fish::input_common::InputEventQueuer for fish::reader::Reader>::prepare_to_select(struct_0 *a0)
{
    unsigned long long v1;  // rax

    fish::event::fire_delayed(a0->field_8);
    v1 = fish::proc::job_reap(a0->field_8, 1);
    if (!(char)v1)
        return v1;
    return fish::reader::reader_schedule_prompt_repaint();
}
