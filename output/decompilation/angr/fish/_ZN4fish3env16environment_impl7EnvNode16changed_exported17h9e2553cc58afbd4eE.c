long long fish::env::environment_impl::EnvNode::changed_exported(struct_0 *a0)
{
    unsigned long long v1;  // rax

    v1 = fish::env::environment_impl::next_export_generation();
    a0->field_30 = v1;
    return v1;
}
