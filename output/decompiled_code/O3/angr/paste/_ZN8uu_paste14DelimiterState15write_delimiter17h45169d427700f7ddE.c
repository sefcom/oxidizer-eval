long long uu_paste::DelimiterState::write_delimiter::h45169d427700f7dd(struct_0 *a0, unsigned long long a1[3])
{
    unsigned long long v1;  // rax
    unsigned long v3;  // rbx
    unsigned long long v4;  // r15
    unsigned long long v5[3];  // 4096
    unsigned long long v6[2];  // rax
    unsigned long long v7[3];  // r12
    unsigned long long v8;  // rcx
    void* v9;  // rbx
    unsigned long v10;  // r14
    unsigned long long v11;  // r15
    unsigned long long v12[3];  // 4096
    unsigned long long v13[3];  // r13

    v1 = a0->field_0;
    if (!v1)
    {
        return v1;
    }
    else if ((unsigned int)v1 == 1)
    {
        v3 = a0->field_10;
        v4 = a1[2];
        if (a1[0] - v4 < v3)
        {
            v7 = a1;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h30715db8223a6e9c(a1, v4, v3);
            v4 = v7[2];
        }
        v1 = memcpy(v5[1] + v4, a0->field_8, v3);
        v5[2] = v4 + v3;
        return v1;
    }
    else
    {
        v6 = a0->field_38;
        if (v6 == a0->field_40)
        {
            v6 = a0->field_28;
            v8 = a0->field_30;
            a0->field_38 = &v6[0];
            a0->field_40 = v8;
            if (v6 == v8)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
        }
        a0->field_38 = &v6[1];
        v9 = v6[0];
        v10 = v6[1];
        v11 = a1[2];
        if (a1[0] - v11 < v10)
        {
            v13 = a1;
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h30715db8223a6e9c(a1, v11, v10);
            v11 = v13[2];
        }
        v1 = memcpy(v12[1] + v11, v9, v10);
        v12[2] = v11 + v10;
        a0->field_8 = v9;
        a0->field_10 = v10;
        return v1;
    }
}
