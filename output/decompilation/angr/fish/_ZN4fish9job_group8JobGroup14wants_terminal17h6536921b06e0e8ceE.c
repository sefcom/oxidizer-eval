long long fish::job_group::JobGroup::wants_terminal(struct_0 *a0)
{
    if (a0->field_71 != 1)
        return 0;
    return a0.is_foreground();
}
