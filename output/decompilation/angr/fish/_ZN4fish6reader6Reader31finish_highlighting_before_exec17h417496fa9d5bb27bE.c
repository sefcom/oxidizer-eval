long long fish::reader::Reader::finish_highlighting_before_exec(struct_1 *a0)
{
    unsigned long long v0[1][6];  // [bp-0x98]
    char v1;  // [bp-0x68]
    struct_0 *v3;  // r14
    struct_2 *v4;  // rax
    unsigned int v5;  // edx
    unsigned int v6;  // r15d
    struct_2 *v8;  // rax
    unsigned long long v11;  // rax
    unsigned long v12;  // rax

    v3 = a0->field_0;
    if (v3->field_4f5 != 1)
        return v12;
    if (!v3->field_798)
    {
        v11 = v3->field_c0.equal(v3->field_c8, v3->field_28, v3->field_30);
        if ((char)v11)
            return v11;
        goto LABEL_14051cc;
    }
    if (!(char)v3->field_790.equal(v3->field_798, v3->field_28, v3->field_30))
        goto LABEL_14051cc;
    v4 = std::time::Instant::now();
    v6 = v5;
    v8 = v4;
    if (v8 != v4.add(v5, 0, 250000000) && v8 < v4.add(v5, 0, 250000000))
    {
        v3 = a0->field_0;
        if (!a0->field_0->field_798)
            return v8;
LABEL_14051cc:
        fish::reader::get_highlight_performer(&v1, a0->field_8, v3, 0);
        fish::reader::get_highlight_performer::{{closure}}(&v0, &v1);
        return (unsigned long long)a0->field_0.highlight_complete(a0->field_8, &v0);
    }
}
