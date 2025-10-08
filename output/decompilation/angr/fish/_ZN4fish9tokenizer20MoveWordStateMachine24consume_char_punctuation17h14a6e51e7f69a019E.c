long long fish::tokenizer::MoveWordStateMachine::consume_char_punctuation(struct_0 *a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbx
    unsigned int v4;  // ebp
    char v5;  // bl
    char v6;  // r13b

    v0 = v2;
    if (a0->field_1 == 5)
    {
        v3 = 0;
    }
    else
    {
        v3 = 0;
        v4 = a1 - 9;
        while (!(v5 & 1))
        {
            switch (v6)
            {
            case 0:
                v5 = 1;
                v3 = v3 & 0xffffffffffffff00 | 1;
                v6 = 3;
                if (v4 >= 5 && a1 != 32 && (a1 < 128 || !(char)::0x12b00d0::core::unicode::unicode_data::white_space::lookup(a1)))
                {
                    core::char::methods::<impl char>::is_alphanumeric(a1);
                    goto LABEL_141ddff;
                }
                break;
            case 1:
                v6 = 2;
                if (v4 >= 5 && a1 != 32 && (a1 < 128 || !(char)::0x12b00d0::core::unicode::unicode_data::white_space::lookup(a1)))
                {
                    v6 = 4;
                    if (!core::char::methods::<impl char>::is_alphanumeric(a1))
                    {
                        v3 = 0;
LABEL_141dee1:
                        a0->field_1 = 5;
                        break;
                    }
                }
                break;
            case 2: case 3:
                if (v4 < 5 || a1 == 32 || a1 >= 128 && (char)::0x12b00d0::core::unicode::unicode_data::white_space::lookup(a1))
                {
                    v5 = 1;
                    v3 = v3 & 0xffffffffffffff00 | 1;
                    goto LABEL_141de03;
                }
                else
                {
                    v6 = v6 == 3 ^ 5;
LABEL_141ddff:
                    a0->field_1 = v6;
                    goto LABEL_141de03;
                }
            case 4:
                if (!core::char::methods::<impl char>::is_alphanumeric(a1))
                    goto LABEL_141dee1;
                v5 = 1;
                v3 = v3 & 0xffffffffffffff00 | 1;
                v6 = 4;
                goto LABEL_141de03;
            default:
LABEL_141de03:
                if (v6 == 5)
                    break;
                continue;
            }
        }
    }
    return (unsigned int)v3 & 0xffffff00 | v5 & 1;
}
