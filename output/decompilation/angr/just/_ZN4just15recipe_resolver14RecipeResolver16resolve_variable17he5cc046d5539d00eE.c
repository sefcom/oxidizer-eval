long long just::recipe_resolver::RecipeResolver::resolve_variable(struct_0 *a0, unsigned long long a1[2], unsigned long long a2, unsigned long long a3, unsigned long a4)
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rax

    v0 = a2.lexeme();
    v5 = a1[0].get(a1[1], v0, v4);
    if (!v5)
    {
        v1 = a3;
        v2 = a4 * 208 + a3;
        v5 = v1.any(&v0);
        if (!(char)v5)
        {
            v5 = just::constants::constants().get_inner(v0, v4);
            if (!v5)
            {
                memcpy(&v2, &v0, 16);
                v1 = 9223372036854775860;
                return a0.error(a2, &v1);
            }
        }
    }
    a0->field_48 = 37;
    return v5;
}
