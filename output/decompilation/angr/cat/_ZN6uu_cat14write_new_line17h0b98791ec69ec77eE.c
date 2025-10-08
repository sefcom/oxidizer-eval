long long uu_cat::write_new_line(void* a0, unsigned long long a1, char a2[5], char a3[59], unsigned int a4)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long, unsigned long long
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax

    if (a3[57])
    {
        if (a2[2])
        {
            v4 = a1.write_all("^M\t^I^?unknown filetype: ", 2);
            if (v4)
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
                *((unsigned long long *)&a0[8]) = v4;
                return v4;
            }
            a3[57] = 0;
            v5 = uu_cat::write_end_of_line(&v0, a1, "$\n^M\t^I^?unknown filetype: ", 2, a4);
            if (v0 != 9223372036854775814)
            {
                v6 = *((long long *)&v2);
                *((unsigned long long *)&a0[16]) = v6;
                *((int128_t *)a0) = *((int128_t *)&v0);
                return v6;
            }
        }
        else
        {
            v4 = a1.write_all("\r\n$\n^M\t^I^?unknown filetype: ", 1);
            if (v4)
            {
                *((unsigned long long *)a0) = 0x8000000000000000;
                *((unsigned long long *)&a0[8]) = v4;
                return v4;
            }
            a3[57] = 0;
            v5 = uu_cat::write_end_of_line(&(char)v0, a1, "\n$\n^M\t^I^?unknown filetype: ", 1, a4);
            if (v0 != 9223372036854775814)
            {
                v6 = *((long long *)&v2);
                *((unsigned long long *)&a0[16]) = v6;
                *((int128_t *)a0) = *((int128_t *)&v0);
                return v6;
            }
        }
    }
    else
    {
        if (!a3[56])
        {
            a3[58] = 1;
            if (a2[2])
                goto LABEL_45fc90;
LABEL_45fcee:
            uu_cat::write_end_of_line(&(char)v0, a1, "\n$\n^M\t^I^?unknown filetype: ", 1, a4);
            v5 = v0;
            if (v5 != 9223372036854775814)
            {
                *((int128_t *)&a0[8]) = *((int128_t *)&v1);
                *((unsigned long long *)a0) = v5;
                return v5;
            }
        }
        else if (a2[0] != 1 || a3[58] != 1)
        {
            a3[58] = 1;
            if (a2[4] == 2)
            {
                v4 = a3.write(a1);
                if (v4)
                {
                    *((unsigned long long *)a0) = 0x8000000000000000;
                    *((unsigned long long *)&a0[8]) = v4;
                    return v4;
                }
                a3.increment();
            }
            if (!a2[2])
                goto LABEL_45fcee;
LABEL_45fc90:
            uu_cat::write_end_of_line(&(char)v0, a1, "$\n^M\t^I^?unknown filetype: ", 2, a4);
            v5 = v0;
            if (v5 != 9223372036854775814)
            {
                *((int128_t *)&a0[8]) = *((int128_t *)&v1);
                *((unsigned long long *)a0) = v5;
                return v5;
            }
        }
    }
    *((unsigned long long *)a0) = 9223372036854775814;
    return v5;
}
