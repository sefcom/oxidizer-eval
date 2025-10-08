__int64 __fastcall sniffnet::gui::pages::settings_style_page::get_extra_palettes(__int64 a1, _QWORD *a2)
{
  __int128 v2; // rax
  char *i; // r13
  __int64 v4; // r14
  _QWORD *v5; // rbx
  const char *v6; // rcx
  unsigned __int64 v7; // r14
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 result; // rax
  _OWORD *v14; // rcx
  int v15; // [rsp+4h] [rbp-894h]
  __int16 v16; // [rsp+8h] [rbp-890h]
  int v17; // [rsp+Ah] [rbp-88Eh]
  __int16 v18; // [rsp+Eh] [rbp-88Ah]
  char *v19; // [rsp+18h] [rbp-880h]
  __int128 v20; // [rsp+20h] [rbp-878h] BYREF
  __int64 v21; // [rsp+30h] [rbp-868h]
  __int64 v22; // [rsp+38h] [rbp-860h]
  __int128 v23; // [rsp+40h] [rbp-858h]
  __int128 v24; // [rsp+50h] [rbp-848h]
  __int128 v25; // [rsp+60h] [rbp-838h]
  __int128 v26; // [rsp+70h] [rbp-828h]
  _OWORD src[23]; // [rsp+80h] [rbp-818h] BYREF
  _BYTE v28[24]; // [rsp+1F8h] [rbp-6A0h] BYREF
  _DWORD v29[76]; // [rsp+210h] [rbp-688h] BYREF
  _QWORD v30[46]; // [rsp+340h] [rbp-558h] BYREF
  __int64 v31; // [rsp+4B0h] [rbp-3E8h] BYREF
  _BYTE v32[200]; // [rsp+4B8h] [rbp-3E0h] BYREF
  _QWORD v33[46]; // [rsp+580h] [rbp-318h] BYREF
  _BYTE v34[296]; // [rsp+6F0h] [rbp-1A8h] BYREF
  unsigned __int64 v35; // [rsp+818h] [rbp-80h]
  __int128 v36; // [rsp+820h] [rbp-78h]
  __int128 v37; // [rsp+830h] [rbp-68h]
  __int128 v38; // [rsp+840h] [rbp-58h]
  __int128 v39; // [rsp+850h] [rbp-48h]

  v22 = a1;
  *(_QWORD *)&v2 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(10LL, 8LL, 16LL, &off_2DFF128);
  v20 = v2;
  v21 = 0LL;
  for ( i = (char *)&unk_497EF8; ; i = v19 )
  {
    if ( i == aSrcGuiPagesSet )
    {
      v30[37] = 0x800000000000003CLL;
      v6 = aSrcGuiPagesSet;
      v7 = 0x800000000000003CLL;
    }
    else
    {
      v4 = *(_QWORD *)i;
      <T as alloc::string::SpecToString>::spec_to_string(v29, *(_QWORD *)i);
      v30[0] = v4;
      memcpy(&v30[1], i + 8, 0xC8uLL);
      sniffnet::gui::pages::settings_style_page::get_palette_container((__int64)src, a2, (__int64)v29, v30);
      v5 = i + 208;
      memcpy(v30, src, sizeof(v30));
      v6 = aSrcGuiPagesSet;
      v7 = 0x800000000000003CLL;
      if ( i + 208 != aSrcGuiPagesSet )
      {
        v8 = *v5;
        <T as alloc::string::SpecToString>::spec_to_string(v28, *v5);
        v31 = v8;
        memcpy(v32, i + 216, sizeof(v32));
        sniffnet::gui::pages::settings_style_page::get_palette_container((__int64)src, a2, (__int64)v28, &v31);
        memcpy(v29, src, 0x128uLL);
        v7 = *((_QWORD *)&src[18] + 1);
        v23 = src[19];
        v24 = src[20];
        v25 = src[21];
        v26 = src[22];
        v6 = i + 416;
      }
    }
    v19 = (char *)v6;
    memcpy(v33, v30, sizeof(v33));
    memcpy(v34, v29, sizeof(v34));
    v35 = v7;
    v39 = v26;
    v38 = v25;
    v37 = v24;
    v36 = v23;
    if ( v33[37] == 0x800000000000003CLL )
      break;
    *(_OWORD *)((char *)&src[2] + 8) = 0LL;
    DWORD2(src[3]) = 0;
    WORD4(src[1]) = 2;
    if ( v35 == 0x800000000000003CLL )
    {
      HIWORD(src[1]) = v18;
      *(_DWORD *)((char *)&src[1] + 10) = v17;
      LOWORD(src[2]) = 2;
      WORD3(src[2]) = v18;
      *(_DWORD *)((char *)&src[2] + 2) = v17;
      WORD6(src[3]) = 0;
      *(_QWORD *)&src[0] = 0LL;
      *((_QWORD *)&src[0] + 1) = 8LL;
      *(_QWORD *)&src[1] = 0LL;
      iced_widget::row::Row<Message,Theme,Renderer>::push(v30, src, v33);
      v9 = alloc::boxed::Box<T>::new(v30);
      LOWORD(src[0]) = 2;
      WORD3(src[0]) = v18;
      *(_DWORD *)((char *)src + 2) = v17;
      WORD4(src[0]) = 3;
      HIDWORD(src[0]) = 1097859072;
      v10 = alloc::boxed::Box<T>::new(src);
      *(_QWORD *)&src[0] = 0LL;
      *((_QWORD *)&src[0] + 1) = 2LL;
      *(_QWORD *)&src[1] = v9;
      *((_QWORD *)&src[1] + 1) = &off_2DF3DE8;
      *(_QWORD *)&src[2] = v10;
      *((_QWORD *)&src[2] + 1) = &unk_2DF41D0;
      alloc::vec::Vec<T,A>::extend_trusted(&v20, src, &off_2DFF158);
    }
    else
    {
      HIWORD(src[1]) = v16;
      *(_DWORD *)((char *)&src[1] + 10) = v15;
      LOWORD(src[2]) = 2;
      WORD3(src[2]) = v16;
      *(_DWORD *)((char *)&src[2] + 2) = v15;
      WORD6(src[3]) = 0;
      *(_QWORD *)&src[0] = 0LL;
      *((_QWORD *)&src[0] + 1) = 8LL;
      *(_QWORD *)&src[1] = 0LL;
      iced_widget::row::Row<Message,Theme,Renderer>::push(v30, src, v33);
      LOWORD(v29[0]) = 3;
      v29[1] = 1097859072;
      LOWORD(v29[2]) = 2;
      HIWORD(v29[3]) = v16;
      *(_DWORD *)((char *)&v29[2] + 2) = v15;
      iced_widget::row::Row<Message,Theme,Renderer>::push(src, v30, v29);
      iced_widget::row::Row<Message,Theme,Renderer>::push(v30, src, v34);
      v11 = alloc::boxed::Box<T>::new(v30);
      LOWORD(src[0]) = 2;
      WORD3(src[0]) = v16;
      *(_DWORD *)((char *)src + 2) = v15;
      WORD4(src[0]) = 3;
      HIDWORD(src[0]) = 1097859072;
      v12 = alloc::boxed::Box<T>::new(src);
      *(_QWORD *)&src[0] = 0LL;
      *((_QWORD *)&src[0] + 1) = 2LL;
      *(_QWORD *)&src[1] = v11;
      *((_QWORD *)&src[1] + 1) = &off_2DF3DE8;
      *(_QWORD *)&src[2] = v12;
      *((_QWORD *)&src[2] + 1) = &unk_2DF41D0;
      alloc::vec::Vec<T,A>::extend_trusted(&v20, src, &off_2DFF140);
    }
  }
  core::ptr::drop_in_place<(core::option::Option<iced_widget::button::Button<sniffnet::gui::types::message::Message,sniffnet::gui::styles::types::style_type::StyleType>>,core::option::Option<iced_widget::button::Button<sniffnet::gui::types::message::Message,sniffnet::gui::styles::types::style_type::StyleType>>)>(v33);
  result = v21;
  v14 = (_OWORD *)v22;
  *(_QWORD *)(v22 + 16) = v21;
  *v14 = v20;
  return result;
}