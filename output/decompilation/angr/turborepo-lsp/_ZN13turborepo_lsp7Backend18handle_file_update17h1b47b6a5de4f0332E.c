long long turborepo_lsp::Backend::handle_file_update(struct_0 *a0, unsigned long a1, struct_1 *a2, unsigned long a3, char a4, unsigned int a5, unsigned int a6)
{
    int v0;  // xmm1
    int v1;  // xmm2
    int v2;  // xmm3

    a0->field_70 = a1;
    v0 = a2->field_10;
    v1 = a2->field_20;
    v2 = a2->field_30;
    a0->field_0 = a2->field_0;
    *((void*)&a0->field_10) = v0;
    *((void*)&a0->field_20) = v1;
    *((void*)&a0->field_30) = v2;
    a0->field_40 = a2->field_40;
    a0->field_50 = a2->field_50;
    a0->field_60 = a3;
    a0->field_68 = a4;
    a0->field_58 = a5;
    a0->field_5c = a6;
    a0->field_148 = 0;
    return a6;
}
