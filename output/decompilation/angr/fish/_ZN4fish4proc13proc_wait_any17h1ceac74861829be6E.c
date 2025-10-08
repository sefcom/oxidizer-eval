long long fish::proc::proc_wait_any(struct_0 *a0)
{
    fish::proc::process_mark_finished_children(a0, 1);
    return fish::proc::process_clean_after_marking(a0, a0->field_5a);
}
