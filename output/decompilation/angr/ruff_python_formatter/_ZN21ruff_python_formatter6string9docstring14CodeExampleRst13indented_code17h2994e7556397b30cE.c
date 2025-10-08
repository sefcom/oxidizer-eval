long long ruff_python_formatter::string::docstring::CodeExampleRst::indented_code(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    unsigned long long v7;  // r15
    unsigned long long v8;  // r14
    unsigned long long v9;  // r13
    unsigned long long v10;  // r12
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rax
    unsigned long long v13[7];  // r12
    unsigned long long v14[7];  // r12
    unsigned long long v15[7];  // r12
    unsigned long long v16;  // rax
    void* v17;  // rdx

    if (a0->field_30 == 5)
        return 8;
    v5 = v7;
    v4 = v8;
    v3 = v9;
    v2 = v10;
    v1 = v11;
    v0 = v12;
    if (!a0->field_10)
        return v13;
    v0 = a0->field_10;
    v13 = a0->field_8;
    v14 = v13;
    do
    {
        v15 = v14;
        if (core::str::<impl str>::trim_matches(v15[0], v15[1]))
        {
            v16 = a0->field_30.trim_start_str(v15[0], v15[1]);
        }
        else
        {
            v16 = 1;
            v17 = 0;
        }
        v15[5] = v16;
        v15[6] = v17;
        v14 = v15 + 1;
    } while (v14 != &v13[v0]);
    return v13;
}
