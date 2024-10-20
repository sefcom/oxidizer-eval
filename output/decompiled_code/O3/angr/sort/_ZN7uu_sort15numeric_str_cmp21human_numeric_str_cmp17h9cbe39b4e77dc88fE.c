long long uu_sort::numeric_str_cmp::human_numeric_str_cmp::h9cbe39b4e77dc88f(struct_2 *a0, struct_2 *a1)
{
    struct_0 *v0;  // [sp-0x48]
    struct_0 *v1;  // [sp-0x40]
    struct_0 *v2;  // [sp-0x38]
    struct_0 *v3;  // [sp-0x30]
    struct_1 *v5;  // r8
    struct_1 *v6;  // r9
    char v7;  // bl
    char v8;  // cl
    struct_0 *v9;  // rdx
    struct_0 *v10;  // rcx
    unsigned long long v11;  // r10
    unsigned long long v12;  // rdi
    struct_0 *v13;  // rax
    struct_0 *v14;  // rax
    unsigned long long v15;  // rsi
    char v16;  // r11b
    unsigned long long v17;  // r11
    unsigned long long v18;  // rbp
    unsigned int v19;  // ebp
    unsigned int v20;  // r11d
    struct_0 *v21;  // rsi
    unsigned long long v22;  // r14
    char v23;  // bpl
    unsigned long long v24;  // rbp
    unsigned long long v25;  // r15
    unsigned int v27;  // ebp
    unsigned long long v28;  // r11
    unsigned long long v29;  // rdi
    char v31;  // al
    struct_0 *v32;  // rax
    unsigned long long v33;  // rdi
    struct_0 *v34;  // rax
    struct_0 *v35;  // r8
    struct_0 *v36;  // r8
    unsigned int v37;  // edx
    unsigned int v38;  // r10d
    unsigned int v39;  // r9d
    unsigned long long v40;  // r8
    unsigned int v41;  // r9d
    unsigned int v42;  // r11d
    unsigned int v43;  // r10d
    struct_0 *v45;  // rcx
    unsigned long long v46;  // r8
    char v48;  // al

    v5 = a0->field_10;
    v6 = a1->field_10;
    v7 = v5->field_8;
    v8 = v6->field_8;
    if (v7 != v8)
    {
        v14 = -(v7 < v8) | -0x100 | (char)-(v7 < v8) | 1;
        return v14;
    }
    v9 = a0->field_0;
    v10 = a1->field_0;
    v11 = a1->field_8;
    v12 = a0->field_8;
    v13 = &(&v9->field_-4)[v12];
    if (!v12)
    {
        v16 = 0;
    }
    else
    {
        v15 = v13->field_-3;
        if ((char)v15 < 0)
        {
            v17 = (unsigned long long)v13->padding_-2;
            if ((char)v17 >= 192)
            {
                v20 = (unsigned int)v17 & 31;
            }
            else
            {
                v18 = v13->field_-1;
                v19 = ((char)v18 < 192 ? (unsigned int)v18 & 15 : (unsigned int)v18 & 63 | (v13->field_0 & 7) * 64);
                v20 = (unsigned int)v17 & 63 | v19 * 64;
            }
            v15 = (unsigned int)v15 & 63 | v20 * 64;
        }
        v16 = 0;
        switch ((unsigned int)v15)
        {
        case 69:
            v16 = 6;
            break;
        case 71:
            v16 = 3;
            break;
        case 75: case 107:
            v16 = 1;
            break;
        case 77:
            v16 = 2;
            break;
        case 80:
            v16 = 5;
            break;
        case 84:
            v16 = 4;
            break;
        case 89:
            v16 = 8;
            break;
        case 90:
            v16 = 7;
            break;
        }
    }
    v21 = &(&v10->field_-4)[v11];
    if (!v11)
    {
        v23 = 0;
    }
    else
    {
        v22 = v21->field_-3;
        if ((char)v22 < 0)
        {
            v24 = (unsigned long long)v21->padding_-2;
            if ((char)v24 >= 192)
            {
                v27 = (unsigned int)v24 & 31;
            }
            else
            {
                v25 = v21->field_-1;
                v27 = (unsigned int)v24 & 63 | ((char)v25 < 192 ? (unsigned int)v25 & 15 : (unsigned int)v25 & 63 | (v21->field_0 & 7) * 64) * 64;
            }
            v22 = (unsigned int)v22 & 63 | v27 * 64;
        }
        v23 = 0;
        switch ((unsigned int)v22)
        {
        case 69:
            v23 = 6;
            break;
        case 71:
            v23 = 3;
            break;
        case 75: case 107:
            v23 = 1;
            break;
        case 77:
            v23 = 2;
            break;
        case 80:
            v23 = 5;
            break;
        case 84:
            v23 = 4;
            break;
        case 89:
            v23 = 8;
            break;
        case 90:
            v23 = 7;
            break;
        }
    }
    v28 = (v23 <= v16 ? (-0x100 | v16 != v23) & 4294967295 & 4294967295 : 255);
    if ((char)v28)
    {
        v14 = (v7 ? v28 & 4294967295 & 4294967295 : -((char)v28));
        return v14;
    }
    if (!v11 || !v12 || !((v29 = v6->field_0, v5->field_0 != v29)))
    {
        v0 = v9;
        v1 = v13;
        v2 = v10;
        v3 = v21;
    }
    else
    {
        v31 = -(v5->field_0 < v29);
        v32 = v13 | -0x100 | v31;
        goto LABEL_50ec0c;
    }
    while (true)
    {
        v33 = 0x110000;
        if (v9 != v13)
        {
            do
            {
                v33 = v35->field_-4;
                if ((char)v33 >= 0)
                {
                    v36 = &v35->field_-3;
                }
                else
                {
                    v37 = (unsigned int)v33 & 31;
                    v38 = v35->field_-3 & 63;
                    if ((v33 & 255) <= 223)
                    {
                        v36 = &v35->padding_-2;
                        v33 = v37 * 64 | v38;
                    }
                    else
                    {
                        v39 = (unsigned int)(v35->padding_-2 & 63) | v38 * 64;
                        if ((v33 & 255) < 240)
                        {
                            v36 = &v35->field_-1;
                            v33 = v39 | v37 * 0x1000;
                        }
                        else
                        {
                            v36 = &v35->field_0;
                            v33 = v35->field_-1 & 63 | v39 * 64 | (v37 & 7) * 0x40000;
                            if ((unsigned int)v33 == 0x110000)
                            {
                                v33 = 0x110000;
                                goto LABEL_50eac3;
                            }
                        }
                    }
                }
                if ((unsigned int)(v33 - 48) >= 10)
                    v33 = 0x110000;
                if ((unsigned int)v33 != 0x110000)
                    goto LABEL_50eac3;
            } while (v36 != v13);
            v33 = 0x110000;
        }
LABEL_50eac3:
        v9 = v34;
        v0 = v9;
        if (v10 != v21)
        {
            do
            {
                v40 = v10->field_-4;
                if ((char)v40 >= 0)
                {
                    v10 = &v10->field_-3;
                    goto LABEL_50eb70;
                }
                v41 = (unsigned int)v40 & 31;
                v42 = v10->field_-3 & 63;
                if ((v40 & 255) <= 223)
                {
                    v10 = &v10->padding_-2;
                    v40 = v41 * 64 | v42;
                }
                else
                {
                    v43 = (unsigned int)(v10->padding_-2 & 63) | v42 * 64;
                    if ((v40 & 255) < 240)
                    {
                        v10 = &v10->field_-1;
                        v40 = v43 | v41 * 0x1000;
                    }
                    else
                    {
                        v10 = &v10->field_0;
                        v40 = v10->field_-1 & 63 | v43 * 64 | (v41 & 7) * 0x40000;
                        if ((unsigned int)v40 == 0x110000)
                            goto LABEL_50eba3;
                    }
                }
LABEL_50eb70:
                if ((unsigned int)(v40 - 48) >= 10)
                    v40 = 0x110000;
                if (!((unsigned int)v40 == 0x110000))
                    goto LABEL_50eba9;
            } while (v10 != v21);
            v46 = 0x110000;
            goto LABEL_50eba9;
        }
LABEL_50eba3:
        v46 = 0x110000;
LABEL_50eba9:
        v10 = v45;
        v2 = v10;
        if ((unsigned int)v33 == 0x110000)
        {
            switch ((unsigned int)v46)
            {
            case 48:
                v13 = core::iter::traits::iterator::Iterator::try_fold::h1fa5d03bbafb5e8a(&v2);
                if (!(v13 & 255 & 255))
                    goto LABEL_50ec40;
                else
                    goto LABEL_50ec2f;
            case 1114112:
LABEL_50ec40:
                return 0;
            default:
LABEL_50ec2f:
                v14 = v13 | -0x100 | 255;
                if (v7)
                    return v14;
                break;
            }
            goto LABEL_50ec39;
        }
        if ((unsigned int)v46 == 0x110000)
        {
            if (!((unsigned int)v33 != 48 || (v13 = core::iter::traits::iterator::Iterator::try_fold::h0f5c77dfb3ebde2c(&v0), (char)v13)))
                goto LABEL_50ec40;
            v14 = v13 | -0x100 | 1;
            if (v7)
                return v14;
            goto LABEL_50ec1a;
        }
        else if ((unsigned int)v33 != (unsigned int)v46)
        {
            v32 = -((unsigned int)v33 < (unsigned int)v46);
LABEL_50ec0c:
            v48 = v31 | 1;
            v14 = v32 | -0x100 | v48;
            if (v7)
                return v14;
            if (v48 == 255)
            {
LABEL_50ec39:
                v14 = v14 | -0x100 | 1;
                return v14;
            }
LABEL_50ec1a:
            v14 = v14 | -0x100 | 255;
            return v14;
        }
    }
}
