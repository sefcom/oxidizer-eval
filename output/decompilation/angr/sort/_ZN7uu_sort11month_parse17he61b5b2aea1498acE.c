long long uu_sort::month_parse(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    struct_0 *v3;  // rbx
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rax
    struct_1 *v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax

    v0 = v2;
    v3 = core::str::<impl str>::trim_matches(a0, a1);
    if (v4 > 3)
    {
        if (v3->field_3 <= 191)
            goto LABEL_4d666c;
    }
    else
    {
        if (v4 != 3)
            return 0;
    }
    v5 = 3.get(v3, v4);
    if (!v5)
        core::str::slice_error_fail(v3, v4, 0, 3, &g_58d4f8); /* do not return */
    if ((char)::0x4b46b0::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v5, v4, "JANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDECstandard outputwrite failed: ", 3))
    {
        v6 = &g_58d3d8.padding_0[0];
    }
    else
    {
        if (v4 < 4)
            goto LABEL_4d6672;
LABEL_4d666c:
        if (v3->field_3 < 192)
            goto LABEL_4d66bb;
LABEL_4d6672:
        v7 = 3.get(v3, v4);
        if (!v7)
            core::str::slice_error_fail(v3, v4, 0, 3, &g_58d4f8); /* do not return */
        if ((char)::0x4b46b0::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v7, v4, "FEBMARAPRMAYJUNJULAUGSEPOCTNOVDECstandard outputwrite failed: ", 3))
        {
            v6 = &g_58d3f0.padding_0[0];
        }
        else
        {
            if (v4 < 4)
                goto LABEL_4d66c1;
LABEL_4d66bb:
            if (v3->field_3 < 192)
                goto LABEL_4d670a;
LABEL_4d66c1:
            v8 = 3.get(v3, v4);
            if (!v8)
                core::str::slice_error_fail(v3, v4, 0, 3, &g_58d4f8); /* do not return */
            if ((char)::0x4b46b0::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v8, v4, "MARAPRMAYJUNJULAUGSEPOCTNOVDECstandard outputwrite failed: ", 3))
            {
                v6 = &g_58d408.padding_0[0];
            }
            else
            {
                if (v4 < 4)
                    goto LABEL_4d6710;
LABEL_4d670a:
                if (v3->field_3 < 192)
                    goto LABEL_4d6759;
LABEL_4d6710:
                v9 = 3.get(v3, v4);
                if (!v9)
                    core::str::slice_error_fail(v3, v4, 0, 3, &g_58d4f8); /* do not return */
                if ((char)::0x4b46b0::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v9, v4, "APRMAYJUNJULAUGSEPOCTNOVDECstandard outputwrite failed: ", 3))
                {
                    v6 = &g_58d420.padding_0[0];
                }
                else
                {
                    if (v4 < 4)
                        goto LABEL_4d675f;
LABEL_4d6759:
                    if (v3->field_3 < 192)
                        goto LABEL_4d67a8;
LABEL_4d675f:
                    v10 = 3.get(v3, v4);
                    if (!v10)
                        core::str::slice_error_fail(v3, v4, 0, 3, &g_58d4f8); /* do not return */
                    if ((char)::0x4b46b0::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v10, v4, "MAYJUNJULAUGSEPOCTNOVDECstandard outputwrite failed: ", 3))
                    {
                        v6 = &g_58d438.padding_0[0];
                    }
                    else
                    {
                        if (v4 < 4)
                            goto LABEL_4d67ae;
LABEL_4d67a8:
                        if (v3->field_3 < 192)
                            goto LABEL_4d67f7;
LABEL_4d67ae:
                        v11 = 3.get(v3, v4);
                        if (!v11)
                            core::str::slice_error_fail(v3, v4, 0, 3, &g_58d4f8); /* do not return */
                        if ((char)::0x4b46b0::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v11, v4, "JUNJULAUGSEPOCTNOVDECstandard outputwrite failed: ", 3))
                        {
                            v6 = &g_58d450.padding_0[0];
                        }
                        else
                        {
                            if (v4 < 4)
                                goto LABEL_4d67fd;
LABEL_4d67f7:
                            if (v3->field_3 < 192)
                                goto LABEL_4d6846;
LABEL_4d67fd:
                            v12 = 3.get(v3, v4);
                            if (!v12)
                                core::str::slice_error_fail(v3, v4, 0, 3, &g_58d4f8); /* do not return */
                            if ((char)::0x4b46b0::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v12, v4, "JULAUGSEPOCTNOVDECstandard outputwrite failed: ", 3))
                            {
                                v6 = &g_58d468.padding_0[0];
                            }
                            else
                            {
                                if (v4 < 4)
                                    goto LABEL_4d684c;
LABEL_4d6846:
                                if (v3->field_3 < 192)
                                    goto LABEL_4d6895;
LABEL_4d684c:
                                v13 = 3.get(v3, v4);
                                if (!v13)
                                    core::str::slice_error_fail(v3, v4, 0, 3, &g_58d4f8); /* do not return */
                                if ((char)::0x4b46b0::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v13, v4, "AUGSEPOCTNOVDECstandard outputwrite failed: ", 3))
                                {
                                    v6 = &g_58d480.padding_0[0];
                                }
                                else
                                {
                                    if (v4 < 4)
                                        goto LABEL_4d689b;
LABEL_4d6895:
                                    if (v3->field_3 < 192)
                                        goto LABEL_4d68e4;
LABEL_4d689b:
                                    v14 = 3.get(v3, v4);
                                    if (!v14)
                                        core::str::slice_error_fail(v3, v4, 0, 3, &g_58d4f8); /* do not return */
                                    if ((char)::0x4b46b0::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v14, v4, "SEPOCTNOVDECstandard outputwrite failed: ", 3))
                                    {
                                        v6 = &g_58d498.padding_0[0];
                                    }
                                    else
                                    {
                                        if (v4 < 4)
                                            goto LABEL_4d68ea;
LABEL_4d68e4:
                                        if (v3->field_3 < 192)
                                            goto LABEL_4d6933;
LABEL_4d68ea:
                                        v15 = 3.get(v3, v4);
                                        if (!v15)
                                            core::str::slice_error_fail(v3, v4, 0, 3, &g_58d4f8); /* do not return */
                                        if ((char)::0x4b46b0::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v15, v4, "OCTNOVDECstandard outputwrite failed: ", 3))
                                        {
                                            v6 = &g_58d4b0.padding_0[0];
                                        }
                                        else
                                        {
                                            if (v4 < 4)
                                                goto LABEL_4d6939;
LABEL_4d6933:
                                            if (v3->field_3 < 192)
                                                goto LABEL_4d697f;
LABEL_4d6939:
                                            v16 = 3.get(v3, v4);
                                            if (!v16)
                                                core::str::slice_error_fail(v3, v4, 0, 3, &g_58d4f8); /* do not return */
                                            if ((char)::0x4b46b0::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v16, v4, "NOVDECstandard outputwrite failed: ", 3))
                                            {
                                                v6 = &g_58d4c8.padding_0[0];
                                            }
                                            else
                                            {
                                                if (v4 < 4)
                                                    goto LABEL_4d6985;
LABEL_4d697f:
                                                if (v3->field_3 < 192)
                                                    return 0;
LABEL_4d6985:
                                                v17 = 3.get(v3, v4);
                                                if (!v17)
                                                {
                                                    core::str::slice_error_fail(v3, v4, 0, 3, &g_58d4f8); /* do not return */
                                                }
                                                else if ((char)::0x4b46b0::core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v17, v4, "DECstandard outputwrite failed: ", 3))
                                                {
                                                    v6 = &g_58d4e0.padding_0[0];
                                                }
                                                else
                                                {
                                                    return 0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return v6->field_10;
}
