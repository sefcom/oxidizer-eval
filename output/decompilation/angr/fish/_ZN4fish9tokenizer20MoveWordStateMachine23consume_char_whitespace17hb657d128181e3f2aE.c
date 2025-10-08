long long fish::tokenizer::MoveWordStateMachine::consume_char_whitespace(struct_0 *a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x168]
    unsigned int v1;  // [bp-0x3c]
    unsigned long v2;  // [bp-0x38]
    unsigned long long v4;  // rbp
    unsigned long v5;  // r14
    struct_0 *v6;  // rbx
    unsigned int v7;  // r13d
    unsigned long long v8;  // r12
    unsigned long long v9;  // rcx
    unsigned long long v10;  // rdx
    char v11;  // r15b
    unsigned int v12;  // eax
    char v14;  // r15b
    char v15;  // r12b
    char v16;  // cl
    unsigned int v17;  // eax
    char v18;  // r15b
    char v19;  // bpl
    unsigned int v20;  // eax
    char v23;  // r15b
    char v24;  // bpl
    unsigned int v25;  // eax

    if (a0->field_1 == 3)
    {
        v4 = 0;
    }
    else
    {
        v5 = a1;
        v6 = a0;
        v7 = v5 - 9;
        if (v7 < 5 || (unsigned int)v5 == 32)
        {
            v8 = 0;
            v9 = v5 & 4294967295;
            v10 = 0x100003e00;
            while (!((char)v8 & 1))
            {
                if (v11)
                {
                    v12 = v11;
                    if (v12 != 1)
                    {
                        if (v12 == 2)
                        {
                            if ((unsigned int)v5 <= 32)
                            {
                                v0 = v10;
                                if ((*((char *)&v0 + ((v9 & 63) >> 3)) >> ((char)v9 & 63 & 7) & 1))
                                    goto LABEL_141e313;
                                else
                                    goto LABEL_141e19e;
                            }
LABEL_141e19e:
                            v4 = v4 & 0xffffffffffffff00 | 1;
                            v11 = 2;
                            if ((unsigned int)v5 < 128)
                                goto LABEL_141e164;
                            v2 = v5;
                            v1 = v7;
                            v7 = v1;
                            v5 = v2;
                            if (!(char)::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v5 & 4294967295))
                                goto LABEL_141e164;
                            goto LABEL_141e313;
                        }
                        else
                        {
                            v4 = v8 & 4294967295;
                            goto LABEL_141e164;
                        }
                    }
LABEL_141e161:
                    v4 = v4 & 0xffffffffffffff00 | 1;
                    goto LABEL_141e164;
                }
                if (v7 < 5 || (unsigned int)v5 == 32)
                {
LABEL_141e15a:
                    v6->field_1 = 1;
                    v11 = 1;
                    goto LABEL_141e161;
                }
                else
                {
                    if ((unsigned int)v5 >= 128)
                    {
                        v10 = v10;
                        v9 = v9;
                        v6 = v6;
                        if (!(char)::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v5 & 4294967295))
                            goto LABEL_141e22d;
                        goto LABEL_141e15a;
                    }
                    else
                    {
LABEL_141e22d:
                        v6->field_1 = 2;
                        v4 = v4 & 0xffffffffffffff00 | 1;
                        v11 = 2;
LABEL_141e164:
                        v8 = v4 & 4294967295;
                        if (v11 == 3)
                            goto LABEL_141e31a;
                    }
                }
            }
LABEL_141e313:
            v6->field_1 = 3;
            v4 = v8 & 4294967295;
        }
        else if ((unsigned int)v5 >= 128)
        {
            v8 = 0;
            while (!(v15 & 1))
            {
                if (!v14)
                {
                    v16 = 2 - (char)::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v5 & 4294967295);
                    v8 = v8 & 0xffffffffffffff00 | 1;
                    goto LABEL_141e26a;
                }
                else
                {
                    v17 = v14;
                    if (v17 != 1)
                    {
                        if (v17 != 2)
                        {
LABEL_141e270:
                            v4 = v8 & 4294967295;
                            goto LABEL_141e273;
                        }
                        else
                        {
                            if ((unsigned int)v5 <= 32)
                            {
                                v0 = 0x100003e00;
                                if ((*((char *)&v0 + ((v5 & 4294967295 & 63) >> 3)) >> ((char)v5 & 63 & 7) & 1))
                                    goto LABEL_141e313;
                                else
                                    goto LABEL_141e2b3;
                            }
LABEL_141e2b3:
                            if ((char)::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v5 & 4294967295))
                                goto LABEL_141e313;
                            v4 = v4 & 0xffffffffffffff00 | 1;
                            v14 = 2;
LABEL_141e273:
                            v8 = v4 & 4294967295;
                            if (v14 == 3)
                                goto LABEL_141e31a;
                        }
                    }
                    else
                    {
                        v16 = 2;
                        v14 = 1;
                        v4 = v4 & 0xffffffffffffff00 | 1;
                        if ((char)::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v5 & 4294967295))
                            goto LABEL_141e273;
LABEL_141e26a:
                        a0->field_1 = v16;
                        goto LABEL_141e270;
                    }
                }
            }
        }
        else if (v7 < 5 || (unsigned int)v5 == 32)
        {
            v4 = 0;
            while (!(v19 & 1))
            {
                if (!v18)
                {
                    v19 = 1;
                    v4 = v4 & 0xffffffffffffff00 | 1;
                    goto LABEL_141e2ea;
                }
                v20 = v18;
                if (v20 == 1)
                {
LABEL_141e2ea:
                    a0->field_1 = 2;
                    v18 = 2;
                    goto LABEL_141e2f1;
                }
                if (v20 != 2)
                {
LABEL_141e2f1:
                    if (v18 == 3)
                        break;
                }
                else
                {
                    v8 = v4 & 4294967295;
                    goto LABEL_141e313;
                }
            }
        }
        else
        {
            v4 = 0;
            while (!(v24 & 1))
            {
                if (v23)
                {
                    v25 = v23;
                    if (v25 == 1)
                    {
                        a0->field_1 = 2;
                        goto LABEL_141e339;
                    }
                    else
                    {
                        if (v25 == 2)
                        {
                            v24 = 1;
                            v4 = v4 & 0xffffffffffffff00 | 1;
                        }
LABEL_141e33c:
                        if (v23 == 3)
                            break;
                    }
                }
                else
                {
                    a0->field_1 = 2;
                    v24 = 1;
                    v4 = v4 & 0xffffffffffffff00 | 1;
LABEL_141e339:
                    v23 = 2;
                    goto LABEL_141e33c;
                }
            }
        }
    }
LABEL_141e31a:
    return v4 & 4294967295;
}
