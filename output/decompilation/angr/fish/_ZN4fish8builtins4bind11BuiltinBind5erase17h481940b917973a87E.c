long long fish::builtins::bind::BuiltinBind::erase(struct_0 *a0, unsigned long long a1[2], unsigned long a2, char a3, char a4, unsigned long long a5)
{
    int v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    int v3;  // [bp-0x48]
    char v4;  // [bp-0x38]
    unsigned long long v6[2];  // r12
    void* v7;  // r14
    unsigned long long v8;  // r13
    unsigned long long v9;  // rbp
    unsigned long long v10[2];  // r12
    unsigned long long v11[2];  // r12
    unsigned long long v12;  // rdx

    v6 = a1;
    if (a0->field_35)
    {
        v7 = a0->field_8;
        v8 = *((long long *)&a0->padding_10[0]);
        if (a3)
        {
            a0->field_40 + 8.clear(a0->field_8, *((long long *)&a0->padding_10[0]), a4);
            return 0;
        }
        if (a2)
            goto LABEL_133df8d;
    }
    else
    {
        if (a3)
        {
            a0->field_40 + 8.clear(0, v8, a4);
            return 0;
        }
        v7 = "d";
        v8 = 7;
        if (a2)
        {
LABEL_133df8d:
            v9 = a0->field_40;
            v10 = v6;
            do
            {
                v11 = v10;
                v3.compute_seq(a5, v11[0], v11[1]);
                if ((char)(((0 ^ (long long)v3) & (0 ^ -((long long)v3))) >> 63))
                    return (unsigned long long)core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<fish::key::Key>>>(&v3) & 0xffffffffffffff00 | 1;
                v12 = *((long long *)&v4);
                v2 = *((long long *)&v4);
                v0 = v3;
                v9 + 8.erase(v1, v12, v7, v8, a4);
                core::ptr::drop_in_place<alloc::vec::Vec<fish::key::Key>>(&(char)v0);
                v10 = v11 + 1;
            } while (v10 != &v6[a2]);
        }
    }
    return 0;
}
