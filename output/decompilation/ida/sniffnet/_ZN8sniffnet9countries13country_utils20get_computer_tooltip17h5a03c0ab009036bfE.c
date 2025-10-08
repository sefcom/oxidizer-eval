__int64 __fastcall sniffnet::countries::country_utils::get_computer_tooltip(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        __int64 a8)
{
  char v9; // r13
  int v10; // r15d
  const char *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int128 v24; // [rsp+0h] [rbp-1C8h] BYREF
  __int64 v25; // [rsp+10h] [rbp-1B8h]
  int v26; // [rsp+24h] [rbp-1A4h]
  __int64 v27; // [rsp+28h] [rbp-1A0h]
  __int64 v28; // [rsp+30h] [rbp-198h]
  __int64 v29; // [rsp+38h] [rbp-190h]
  __int128 v30; // [rsp+40h] [rbp-188h] BYREF
  __int64 v31; // [rsp+50h] [rbp-178h]
  _OWORD v32[3]; // [rsp+A0h] [rbp-128h] BYREF
  _OWORD v33[3]; // [rsp+D0h] [rbp-F8h] BYREF
  _BYTE v34[48]; // [rsp+108h] [rbp-C0h] BYREF
  _BYTE v35[144]; // [rsp+138h] [rbp-90h] BYREF

  v9 = a2;
  v10 = a6;
  v29 = a1;
  v27 = a5;
  v28 = a4;
  v26 = a3;
  if ( a2 )
  {
    v11 = aSvgXmlnsHttpWw_210;
    v12 = 891LL;
  }
  else if ( a6 )
  {
    if ( a6 == 1 )
    {
      v11 = aSvgXmlnsHttpWw_206;
      v12 = 1563LL;
    }
    else
    {
      v11 = aSvgXmlnsHttpWw_207;
      v12 = 1661LL;
    }
  }
  else if ( (_BYTE)a3 )
  {
    v11 = aSvgXmlnsHttpWw_209;
    v12 = 817LL;
  }
  else
  {
    v12 = 988LL;
    if ( !a4 )
      v12 = 1178LL;
    v11 = aSvgXmlnsHttpWw_208;
    if ( !a4 )
      v11 = (const char *)&unk_496BDB;
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec((char *)&v30 + 8, v11, v12);
  *(_QWORD *)&v30 = 1LL;
  v13 = iced_core::svg::Handle::from_data(&v30);
  iced_widget::svg::Svg<Theme>::new(&v30, v13);
  iced_widget::svg::Svg<Theme>::class(v35, &v30, 0LL);
  iced_widget::svg::Svg<Theme>::width(&v30, v35, 37.5);
  iced_widget::svg::Svg<Theme>::height(v32, &v30, 28.125);
  if ( v9 )
  {
    v14 = sniffnet::translations::translations_2::your_network_adapter_translation(a7);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v30, v14, v15);
  }
  else if ( a6 )
  {
    if ( v10 == 1 )
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v30, aMulticast, 9LL);
    else
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v30, aBroadcast, 9LL);
  }
  else if ( (_BYTE)v26 )
  {
    v16 = sniffnet::translations::translations_2::local_translation(a7);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v30, v16, v17);
  }
  else
  {
    if ( v28 )
    {
      sniffnet::translations::translations_4::reserved_address_translation(&v24, a7, v28, v27);
      goto LABEL_22;
    }
    v22 = sniffnet::translations::translations_2::unknown_translation(a7);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v30, v22, v23);
  }
  v25 = v31;
  v24 = v30;
LABEL_22:
  v33[2] = v32[2];
  v33[1] = v32[1];
  v33[0] = v32[0];
  iced_core::widget::text::Text<Theme,Renderer>::new(&v30, &v24);
  iced_core::widget::text::Text<Theme,Renderer>::font(v35, &v30, a8);
  iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::new(
    v34,
    v33,
    v35,
    v18,
    v19,
    v20,
    v24,
    *((_QWORD *)&v24 + 1),
    v25);
  v34[42] = 1;
  return iced_widget::tooltip::Tooltip<Message,Theme,Renderer>::class(v29, v34, 5LL);
}