void uu_dd::parseargs::conversion_mode(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long a3, char a4, char a5)
{
    if (a1)
    {
        if (a2 == 2)
        {
            a0->field_0 = 0;
            a0->field_8 = a1;
            return;
        }
        else if (((char)a2 & 1))
        {
            if (a4)
            {
                a0->field_0 = 6;
                a0->field_8 = a3;
                a0->field_10 = a1;
            }
            else
            {
                a0->field_0 = 5;
                a0->field_8 = a3;
                a0->field_10 = a1;
            }
            return;
        }
        else
        {
            if (a4)
            {
                a0->field_0 = 4;
                a0->field_1 = a5;
                a0->field_8 = a3;
                a0->field_10 = a1;
            }
            else
            {
                a0->field_0 = 3;
                a0->field_1 = a5;
                a0->field_8 = a3;
                a0->field_10 = a1;
            }
            return;
        }
    }
    else
    {
        if (a2 == 2)
        {
            a0->field_0 = 7;
            return;
        }
        if (((char)a2 & 1))
        {
            a0->field_0 = 2;
            a0->field_8 = a3;
        }
        else
        {
            a0->field_0 = 1;
            a0->field_1 = a5;
            a0->field_8 = a3;
        }
        return;
    }
}
