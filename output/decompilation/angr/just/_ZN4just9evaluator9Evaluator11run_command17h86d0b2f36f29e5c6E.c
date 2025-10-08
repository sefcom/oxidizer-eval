long long just::evaluator::Evaluator::run_command(unsigned long long a0, struct_1 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    struct_0 *v0;  // [bp-0x208]
    unsigned long v1;  // [bp-0x200]
    char v2;  // [bp-0x1f0]
    char v3;  // [bp-0x110]
    unsigned long long v5;  // r12

    v5 = a1->field_10;
    v1 = v5 + 168;
    v0 = a1->field_0;
    v2.shell_command(v5 + 168, a1->field_0);
    v2.arg(a2, a3);
    v2.args(a4, a5);
    v3.working_directory(v5, a1->field_18);
    v2.current_dir(&v3);
    v2.export(v1, a1->field_8, &a1[1].field_8, v5 + 568);
    v2.stdin(0);
    v2.stderr(!v0->field_1a7);
    v2.stdout(2);
    memcpy(&v3, &v2, 224);
    return a0.output_guard_stdout(&v3);
}
