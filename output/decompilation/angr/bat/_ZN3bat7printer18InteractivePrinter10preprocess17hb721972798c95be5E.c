long long bat::printer::InteractivePrinter::preprocess(unsigned long a0, struct_0 *a1, unsigned long long a2, unsigned long long a3, unsigned long long *a4)
{
    if (!*((long long *)&a1->field_108))
    {
        *(a4) = *(a4) + a3;
        return a0.to_vec(a2, a3);
    }
    return bat::preprocessor::expand_tabs(a0, a2, a3, *((long long *)&a1->field_108), a4);
}
