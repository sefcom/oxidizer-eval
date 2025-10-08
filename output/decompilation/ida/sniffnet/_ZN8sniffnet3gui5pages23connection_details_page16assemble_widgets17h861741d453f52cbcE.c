__int64 __fastcall sniffnet::gui::pages::connection_details_page::assemble_widgets(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int128 *a4)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  _WORD v11[8]; // [rsp+0h] [rbp-328h] BYREF
  _QWORD src[22]; // [rsp+10h] [rbp-318h] BYREF
  _OWORD dest[11]; // [rsp+C0h] [rbp-268h] BYREF
  _OWORD v14[5]; // [rsp+170h] [rbp-1B8h] BYREF
  __int64 v15; // [rsp+1C0h] [rbp-168h]
  _OWORD v16[5]; // [rsp+1D0h] [rbp-158h] BYREF
  __int64 v17; // [rsp+220h] [rbp-108h]
  _OWORD v18[4]; // [rsp+230h] [rbp-F8h] BYREF
  __int64 v19; // [rsp+270h] [rbp-B8h]
  __int128 v20; // [rsp+278h] [rbp-B0h]
  __int128 v21; // [rsp+288h] [rbp-A0h]
  __int128 v22; // [rsp+298h] [rbp-90h]
  __int128 v23; // [rsp+2A8h] [rbp-80h]
  __int64 v24; // [rsp+2B8h] [rbp-70h]
  _BYTE v25[104]; // [rsp+2C0h] [rbp-68h] BYREF

  v19 = *((_QWORD *)a3 + 8);
  v4 = *a3;
  v5 = a3[1];
  v6 = a3[2];
  v18[3] = a3[3];
  v18[2] = v6;
  v18[1] = v5;
  v18[0] = v4;
  v7 = a4[1];
  v8 = a4[2];
  v9 = a4[3];
  v20 = *a4;
  v21 = v7;
  v22 = v8;
  v23 = v9;
  v24 = *((_QWORD *)a4 + 8);
  core::array::drain::drain_array_with(src, v18);
  memcpy(dest, src, sizeof(dest));
  v14[0] = dest[0];
  v14[1] = dest[1];
  v14[2] = dest[2];
  v14[3] = dest[3];
  v14[4] = dest[4];
  v15 = *(_QWORD *)&dest[5];
  v16[0] = *(_OWORD *)((char *)&dest[5] + 8);
  v16[1] = *(_OWORD *)((char *)&dest[6] + 8);
  v16[2] = *(_OWORD *)((char *)&dest[7] + 8);
  v16[3] = *(_OWORD *)((char *)&dest[8] + 8);
  v16[4] = *(_OWORD *)((char *)&dest[9] + 8);
  v17 = *((_QWORD *)&dest[10] + 1);
  memset(&src[5], 0, 22);
  LOWORD(src[3]) = 2;
  LOWORD(src[4]) = 2;
  src[0] = 0LL;
  src[1] = 8LL;
  src[2] = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::padding(dest, src, &stru_A0000);
  iced_widget::row::Row<Message,Theme,Renderer>::spacing(src, dest, 10LL);
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(dest, src, 1LL);
  iced_widget::row::Row<Message,Theme,Renderer>::width(src, dest, 0LL);
  iced_widget::row::Row<Message,Theme,Renderer>::height(dest, src);
  iced_widget::row::Row<Message,Theme,Renderer>::push(v25, dest, a2);
  *(_OWORD *)&src[5] = 0LL;
  src[7] = 0x7F80000000000000LL;
  LOWORD(src[3]) = 2;
  LOWORD(src[4]) = 2;
  LOWORD(src[8]) = 0;
  src[0] = 0LL;
  src[1] = 8LL;
  src[2] = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::width(dest, src, 196609LL);
  iced_widget::column::Column<Message,Theme,Renderer>::align_x(src, dest, 1LL);
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(dest, src, 5LL);
  v11[0] = 2;
  v11[4] = 0;
  iced_widget::column::Column<Message,Theme,Renderer>::push(src, dest, v11);
  iced_widget::column::Column<Message,Theme,Renderer>::push(dest, src, v14);
  sniffnet::utils::types::icon::Icon::to_text(src, 3LL);
  iced_widget::column::Column<Message,Theme,Renderer>::push(v18, dest, src);
  iced_widget::column::Column<Message,Theme,Renderer>::push(src, v18, v16);
  iced_widget::column::Column<Message,Theme,Renderer>::push(dest, src, v11);
  return iced_widget::row::Row<Message,Theme,Renderer>::push(a1, v25, dest);
}