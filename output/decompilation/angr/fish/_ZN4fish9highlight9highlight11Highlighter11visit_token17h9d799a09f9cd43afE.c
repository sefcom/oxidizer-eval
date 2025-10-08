long long fish::highlight::highlight::Highlighter::visit_token(unsigned long long a0, unsigned long long a1, unsigned long long a2, struct_1 **a3, struct_2 **a4)
{
    char v1;  // al
    unsigned int v2;  // ebp
    unsigned long long v3;  // rax
    struct_0 *v4;  // rdx

    v1 = a4(a2);
    v2 = 0;
    if (v1 - 2 <= 8)
        v2 = g_10e2368[2 + v1];
    v3 = a3(a2);
    return a0.color_node(a1, v3, v4->field_78, v2);
}
