long long fish::input::<impl fish::input_common::InputEventQueuer for fish::reader::Reader>::select_interrupted(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v3;  // rbx

    fish::signal::signal_clear_cancel();
    fish::event::fire_delayed(a0->field_8);
    if ((char)fish::proc::job_reap(a0->field_8, 1))
        fish::reader::reader_schedule_prompt_repaint();
    v3 = a0->field_0;
    if (!(int)fish::reader::reader_reading_interrupted(v3))
    {
        v1 = 1;
        v0 = 9223372036854775810;
        return v3.push_front(&v0);
    }
    return v3.enqueue_interrupt_key();
}
