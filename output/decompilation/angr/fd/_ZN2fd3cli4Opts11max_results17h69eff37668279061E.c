long long fd::cli::Opts::max_results(struct_0 *a0)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdx

    v1 = a0->field_30.filter(a0->field_38);
    return v1.or_else(v2, a0->field_1f1);
}
