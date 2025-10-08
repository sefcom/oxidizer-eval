long long uu_expr::syntax_tree::is_truthy(void* a0)
{
    unsigned long v0;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    char v3;  // [bp-0x20]
    char *v5;  // r14
    unsigned long v6;  // r15
    unsigned long v7;  // rbx
    unsigned long long v8;  // rbx
    unsigned int v9;  // eax
    unsigned long v11;  // rbx

    if ((char)(((0 ^ *((long long *)a0)) & (0 ^ -(*((long long *)a0)))) >> 63))
    {
        v5 = (long long)a0[16];
        v6 = (long long)a0[24];
        v8 = v7 & 0xffffffffffffff00 | 1;
        if (!(char)v5.equal(v6, "-(uutils coreutils) 0.0.30Print the value of `EXPRESSION` to standard output{} [EXPRESSION]\n{} [OPTIONS]Print the value of EXPRESSION to standard output.  A blank line below\nseparates increasing precedence groups.\n\nEXPRESSION may be:\n\n- ARG1 | ARG2: ARG1 i", 1))
        {
            v1 = &v5[v6];
            if (v6)
            {
                v0 = v5 + 1;
                v9 = *(v5);
                if (v9 != 45 && v9 != 48)
                    return ((v7 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1) & 4294967295;
                v8 = v0.try_fold().eq() & 0xffffff00 | v0.try_fold().eq() ^ 1;
            }
            else
            {
                v8 = 0;
            }
        }
    }
    else
    {
        (char)v0.from();
        v8 = v11 & 0xffffffffffffff00 | 1;
        if ((char)a0[24] == v3)
        {
            if ((char)a0[24] == 1)
                v8 = 0;
            else
                v8 = (int)(long long)a0[8].eq((long long)a0[16], v1, v2) & 0xffffff00 | (char)(long long)a0[8].eq((long long)a0[16], v1, v2) ^ 1;
        }
        core::ptr::drop_in_place<num_bigint::bigint::BigInt>(v0, v1);
    }
    return v8 & 4294967295;
}
