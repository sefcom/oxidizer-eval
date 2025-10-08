_OWORD *__fastcall sniffnet::gui::pages::inspect_page::report_header_row(
        _OWORD *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  __int64 v9; // r13
  unsigned __int8 i; // al
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  _OWORD *result; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  unsigned __int8 v17; // [rsp+1h] [rbp-357h]
  int v18; // [rsp+2h] [rbp-356h]
  __int16 v19; // [rsp+6h] [rbp-352h]
  unsigned int v20; // [rsp+14h] [rbp-344h]
  __int128 v21; // [rsp+20h] [rbp-338h] BYREF
  __int128 v22; // [rsp+30h] [rbp-328h]
  __int128 v23; // [rsp+40h] [rbp-318h]
  __int128 v24; // [rsp+50h] [rbp-308h]
  __int64 v25; // [rsp+60h] [rbp-2F8h]
  __int128 v26; // [rsp+70h] [rbp-2E8h] BYREF
  __int64 v27; // [rsp+80h] [rbp-2D8h]
  _OWORD *v28; // [rsp+88h] [rbp-2D0h]
  __int64 v29; // [rsp+90h] [rbp-2C8h]
  _QWORD v30[2]; // [rsp+98h] [rbp-2C0h] BYREF
  _DWORD v31[2]; // [rsp+A8h] [rbp-2B0h]
  __int128 v32; // [rsp+B0h] [rbp-2A8h] BYREF
  __int128 v33; // [rsp+C0h] [rbp-298h]
  __int128 v34; // [rsp+D0h] [rbp-288h]
  __int128 v35; // [rsp+E0h] [rbp-278h]
  __int128 v36; // [rsp+F0h] [rbp-268h] BYREF
  __int128 v37; // [rsp+100h] [rbp-258h]
  __int128 v38; // [rsp+110h] [rbp-248h]
  __int128 v39; // [rsp+120h] [rbp-238h]
  __int64 v40; // [rsp+130h] [rbp-228h]
  __int128 v41; // [rsp+140h] [rbp-218h] BYREF
  __int128 v42; // [rsp+150h] [rbp-208h]
  __int128 v43; // [rsp+160h] [rbp-1F8h]
  __int128 v44; // [rsp+170h] [rbp-1E8h]
  __int64 v45; // [rsp+180h] [rbp-1D8h]
  __int128 v46; // [rsp+1A0h] [rbp-1B8h] BYREF
  __int64 v47; // [rsp+1B0h] [rbp-1A8h]
  __int128 v48; // [rsp+1C0h] [rbp-198h] BYREF
  _BYTE v49[48]; // [rsp+1D0h] [rbp-188h] BYREF
  __int64 v50; // [rsp+200h] [rbp-158h]
  _BYTE v51[64]; // [rsp+2A8h] [rbp-B0h] BYREF
  _BYTE v52[112]; // [rsp+2E8h] [rbp-70h] BYREF

  v29 = a3;
  v28 = a1;
  memset(&v49[24], 0, 22);
  *(_WORD *)&v49[8] = 2;
  *(_WORD *)&v49[16] = 2;
  *(_QWORD *)&v48 = 0LL;
  *((_QWORD *)&v48 + 1) = 8LL;
  *(_QWORD *)v49 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::padding(&v41, &v48, 0x20000LL);
  v9 = a4;
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(&v32, &v41, 1LL);
  v30[0] = 0LL;
  v30[1] = 7LL;
  v31[0] = 50462976;
  *(_DWORD *)((char *)v31 + 3) = 100992003;
  for ( i = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v30);
        i != 7;
        i = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v30) )
  {
    v17 = i;
    v20 = i;
    sniffnet::gui::pages::inspect_page::title_report_col_display(&v48, i, a6, a2);
    *(_QWORD *)&v42 = *(_QWORD *)v49;
    v41 = v48;
    v46 = *(_OWORD *)&v49[8];
    v47 = *(_QWORD *)&v49[24];
    v26 = *(_OWORD *)&v49[32];
    v27 = v50;
    memset(&v49[24], 0, 22);
    *(_WORD *)&v49[8] = 2;
    *(_WORD *)&v49[14] = v19;
    *(_DWORD *)&v49[10] = v18;
    *(_WORD *)&v49[16] = 2;
    *(_WORD *)&v49[22] = v19;
    *(_DWORD *)&v49[18] = v18;
    *(_QWORD *)&v48 = 0LL;
    *((_QWORD *)&v48 + 1) = 8LL;
    *(_QWORD *)v49 = 0LL;
    iced_widget::row::Row<Message,Theme,Renderer>::align_y(&v36, &v48, 2LL);
    iced_core::widget::text::Text<Theme,Renderer>::new(&v48, &v41);
    iced_core::widget::text::Text<Theme,Renderer>::font(&v41, &v48, v9);
    iced_widget::row::Row<Message,Theme,Renderer>::push(v51, &v36, &v41);
    iced_core::widget::text::Text<Theme,Renderer>::new(&v48, &v46);
    iced_core::widget::text::Text<Theme,Renderer>::font(&v41, &v48, v9);
    iced_core::widget::text::Text<Theme,Renderer>::size(&v48, &v41, 14.3);
    iced_widget::row::Row<Message,Theme,Renderer>::push(v52, v51, &v48);
    v16 = v27;
    iced_core::widget::text::Text<Theme,Renderer>::new(&v48, &v26);
    iced_core::widget::text::Text<Theme,Renderer>::font(&v41, &v48, v9);
    iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::new(&v48, v52, &v41);
    iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::class(&v36, &v48, 2 * (unsigned int)(v16 != 0) + 3);
    memset(&v49[24], 0, 20);
    *(_WORD *)&v49[8] = 2;
    *(_WORD *)&v49[14] = v19;
    *(_DWORD *)&v49[10] = v18;
    *(_WORD *)&v49[16] = 2;
    *(_WORD *)&v49[22] = v19;
    *(_DWORD *)&v49[18] = v18;
    *(_DWORD *)&v49[44] = 2139095040;
    LOWORD(v50) = 0;
    *(_QWORD *)&v48 = 0LL;
    *((_QWORD *)&v48 + 1) = 8LL;
    *(_QWORD *)v49 = 0LL;
    iced_widget::column::Column<Message,Theme,Renderer>::align_x(&v41, &v48, 1LL);
    iced_widget::column::Column<Message,Theme,Renderer>::width(&v48, &v41, flt_273F30[(v17 & 5) == 0]);
    iced_widget::column::Column<Message,Theme,Renderer>::height(&v41, &v48);
    iced_widget::column::Column<Message,Theme,Renderer>::push(&v21, &v41, &v36);
    if ( v17 == 6 )
    {
      v45 = v25;
      v44 = v24;
      v43 = v23;
      v42 = v22;
      v41 = v21;
      sniffnet::gui::pages::inspect_page::sort_arrows(&v48, a5);
      iced_widget::column::Column<Message,Theme,Renderer>::push(&v36, &v41, &v48);
      v9 = a4;
      v21 = v36;
      v22 = v37;
      v23 = v38;
      v24 = v39;
      v15 = v40;
    }
    else
    {
      v40 = v25;
      v39 = v24;
      v38 = v23;
      v37 = v22;
      v36 = v21;
      <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v48, v29);
      v9 = a4;
      sniffnet::gui::pages::inspect_page::filter_input(&v41, v20, &v48, a4);
      iced_widget::container::Container<Message,Theme,Renderer>::new(&v48, &v41);
      iced_widget::container::Container<Message,Theme,Renderer>::height(&v41, &v48, 0LL);
      iced_widget::container::Container<Message,Theme,Renderer>::align_y(&v48, &v41);
      iced_widget::column::Column<Message,Theme,Renderer>::push(&v41, &v36, &v48);
      v21 = v41;
      v22 = v42;
      v23 = v43;
      v24 = v44;
      v15 = v45;
    }
    v25 = v15;
    *(_OWORD *)&v49[32] = v35;
    *(_OWORD *)&v49[16] = v34;
    *(_OWORD *)v49 = v33;
    v48 = v32;
    iced_widget::row::Row<Message,Theme,Renderer>::push(&v41, &v48, &v21);
    v32 = v41;
    v33 = v42;
    v34 = v43;
    v35 = v44;
  }
  v11 = v32;
  v12 = v33;
  v13 = v34;
  result = v28;
  v28[3] = v35;
  result[2] = v13;
  result[1] = v12;
  *result = v11;
  return result;
}