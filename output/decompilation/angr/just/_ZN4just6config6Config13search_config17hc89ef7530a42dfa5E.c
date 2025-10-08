long long just::config::Config::search_config(void* a0, unsigned long long a1, unsigned long long a2[9])
{
    unsigned long long v1;  // [bp-0xf0]
    unsigned long long v2;  // [bp-0xe0]
    int v3;  // [bp-0xd8]
    unsigned long long v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xc8]
    char v6;  // [bp-0xb8]
    int v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xa8]
    char v9;  // [bp-0xa0], Other Possible Types: unsigned long
    unsigned long v10;  // [bp-0x98]
    unsigned long long v11;  // [bp-0x90]
    int v12;  // [bp-0x88]
    unsigned long long v13;  // [bp-0x78]
    char v14;  // [bp-0x68]
    unsigned long long v15;  // [bp-0x58]
    char v16;  // [bp-0x50]
    unsigned long long v17;  // [bp-0x40]
    unsigned long long v19;  // rax
    unsigned long long v20[3];  // rax
    unsigned long long v21[3];  // rax

    if ((char)a1.get_flag("GLOBAL-JUSTFILEglobal-justfileWORKING-DIRECTORYUse global justfileHIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldNO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvail", 15))
    {
        v19 = 9223372036854775810;
        goto LABEL_65f7e1;
    }
    else
    {
        v6.try_get_one(a1, "JUSTFILE", 8);
        v20 = "JUSTFILE".unwrap(8, &v6);
        if (v20)
            (char)v1.to_vec(v20[1], v20[2]);
        else
            v1 = 0x8000000000000000;
        v6.try_get_one(a1, "WORKING-DIRECTORYUse global justfileHIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldNO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-", 17);
        v21 = "WORKING-DIRECTORYUse global justfileHIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldNO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-".unwrap(17, &v6);
        if (v21)
        {
            v6.to_vec(v21[1], v21[2]);
            v5 = v8;
            v3 = v7;
            if (a2[6] != 0x8000000000000000)
                goto LABEL_65f8b8;
        }
        else
        {
            v4 = 0x8000000000000000;
            if (a2[6] != 0x8000000000000000)
            {
LABEL_65f8b8:
                v6.to_vec(a2[7], a2[8]);
                v13 = v8;
                v12 = v7;
                if ((long long)v12 != 0x8000000000000000)
                {
                    if (v1 == 0x8000000000000000 && v4 == 0x8000000000000000)
                    {
                        *((unsigned long long *)&a0[32]) = v13;
                        a0[16] = v12;
                        *((unsigned long long *)&a0[8]) = 9223372036854775809;
                        *((unsigned long long *)a0) = 9223372036854775815;
                    }
                    else
                    {
                        *((unsigned long long *)a0) = 9223372036854775812;
                        core::ptr::drop_in_place<std::path::PathBuf>(&v12);
                    }
                    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v3);
                    return core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&(char)v1);
                }
            }
        }
        memcpy(&v14, &v1, 16);
        v15 = v2;
        memcpy(&v16, &v3, 16);
        v17 = v5;
        v19 = *((long long *)&v16);
        if (*((long long *)&v14) == 0x8000000000000000)
        {
            if (v19 == 0x8000000000000000)
            {
                *((unsigned long long *)&a0[8]) = 0x8000000000000000;
            }
            else
            {
                v6.to_vec("--working-directory set without --justfile", 42);
                *((unsigned long long *)&a0[24]) = v8;
                a0[8] = v7;
                *((unsigned long long *)a0) = 9223372036854775809;
                return core::ptr::drop_in_place<std::path::PathBuf>(&v16);
            }
        }
        else
        {
            if (v19 == 0x8000000000000000)
            {
                *((unsigned long long *)&a0[32]) = v2;
                *((int128_t *)&a0[16]) = *((int128_t *)&v1);
                v19 = 9223372036854775811;
LABEL_65f7e1:
                *((unsigned long long *)&a0[8]) = v19;
            }
            else
            {
                v19 = a0 + 8;
                v8 = v2;
                memcpy(&v7, &v1, 16);
                v11 = v5;
                memcpy(&v9, &v3, 16);
                *((int128_t *)v19) = *((int128_t *)&v1);
                *((unsigned long *)(v19 + 32)) = v10;
                *((unsigned long long *)(v19 + 40)) = v11;
                *((unsigned long long *)(v19 + 16)) = v8;
                *((unsigned long *)(v19 + 24)) = v9;
            }
        }
        *((unsigned long long *)a0) = 9223372036854775815;
        return v19;
    }
}
