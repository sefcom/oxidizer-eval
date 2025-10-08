__int64 __fastcall sniffnet::gui::pages::initial_page::get_col_adapter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4)
{
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rax
  _QWORD *v7; // r12
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 (__fastcall *v10)(); // rdx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 (__fastcall **v16)(); // rcx
  char v17; // bp
  __int64 result; // rax
  unsigned int v19; // [rsp+4h] [rbp-214h]
  int v20; // [rsp+Ah] [rbp-20Eh]
  __int16 v21; // [rsp+Eh] [rbp-20Ah]
  __int128 v22; // [rsp+10h] [rbp-208h] BYREF
  __int128 v23; // [rsp+20h] [rbp-1F8h] BYREF
  __int128 *v24; // [rsp+30h] [rbp-1E8h]
  __int64 v25; // [rsp+38h] [rbp-1E0h]
  _QWORD *v26; // [rsp+40h] [rbp-1D8h]
  __int128 v27; // [rsp+48h] [rbp-1D0h]
  __int64 v28; // [rsp+58h] [rbp-1C0h]
  __int16 v29; // [rsp+60h] [rbp-1B8h]
  _QWORD *v30; // [rsp+98h] [rbp-180h]
  _QWORD *v31; // [rsp+A0h] [rbp-178h] BYREF
  _QWORD v32[2]; // [rsp+A8h] [rbp-170h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-160h]
  __int64 v34; // [rsp+C0h] [rbp-158h]
  __int64 v35; // [rsp+C8h] [rbp-150h]
  __int64 v36; // [rsp+D0h] [rbp-148h]
  _QWORD *v37; // [rsp+D8h] [rbp-140h]
  _QWORD *v38; // [rsp+E0h] [rbp-138h]
  __int128 v39; // [rsp+E8h] [rbp-130h] BYREF
  __int128 *v40; // [rsp+F8h] [rbp-120h]
  __int128 v41; // [rsp+130h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+140h] [rbp-D8h]
  _QWORD *v43; // [rsp+188h] [rbp-90h] BYREF
  __int64 (__fastcall *v44)(); // [rsp+190h] [rbp-88h]

  v4 = a3;
  v5 = a2;
  v36 = a1;
  v32[0] = 0LL;
  v32[1] = 8LL;
  v33 = 0LL;
  v6 = *(_QWORD *)(a2 + 1864);
  if ( v6 )
  {
    v34 = a3;
    v35 = a2;
    v7 = *(_QWORD **)(a2 + 1856);
    v37 = &v7[10 * v6];
    v8 = v7 + 10;
    v19 = a4;
    do
    {
      v38 = v8;
      *(_QWORD *)&v39 = 0LL;
      *((_QWORD *)&v39 + 1) = 1LL;
      v40 = 0LL;
      v31 = v7;
      if ( __OFSUB__(0LL, v7[6]) )
      {
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v39,
          v7[1],
          v7[1] + v7[2]);
        v30 = 0LL;
      }
      else
      {
        v43 = &v31;
        v44 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v23 = &unk_2DFEEF8;
        *((_QWORD *)&v23 + 1) = 2LL;
        v26 = 0LL;
        v24 = (__int128 *)&v43;
        v25 = 1LL;
        <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v39, &v23);
        v30 = v7 + 6;
      }
      *(_QWORD *)&v41 = 0LL;
      *((_QWORD *)&v41 + 1) = 1LL;
      v42 = 0LL;
      v9 = v7[5];
      if ( v9 )
      {
        v43 = (_QWORD *)(v9 == 1
                       ? sniffnet::translations::translations::address_translation(v19)
                       : sniffnet::translations::translations::addresses_translation(v19));
        v44 = v10;
        *(_QWORD *)&v22 = &v43;
        *((_QWORD *)&v22 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v23 = &unk_2DFEF58;
        *((_QWORD *)&v23 + 1) = 2LL;
        v26 = 0LL;
        v24 = &v22;
        v25 = 1LL;
        <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v41, &v23);
        v11 = v7[5];
        if ( v11 )
        {
          v12 = v7[4];
          v13 = 68 * v11;
          do
          {
            <T as alloc::string::SpecToString>::spec_to_string(&v43, v12);
            *(_QWORD *)&v22 = &v43;
            *((_QWORD *)&v22 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
            *(_QWORD *)&v23 = &off_2DFEFC8;
            *((_QWORD *)&v23 + 1) = 1LL;
            v26 = 0LL;
            v24 = &v22;
            v25 = 1LL;
            <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v41, &v23);
            core::ptr::drop_in_place<alloc::string::String>(&v43);
            v12 += 68LL;
            v13 -= 68LL;
          }
          while ( v13 );
        }
      }
      v23 = v39;
      v24 = v40;
      v28 = v42;
      v27 = v41;
      v25 = (__int64)v31;
      v26 = v30;
      alloc::vec::Vec<T,A>::push(v32, &v23);
      v8 = v38 + 10;
      v7 = v38;
    }
    while ( v38 != v37 );
    v14 = v33;
    v5 = v35;
    v4 = v34;
  }
  else
  {
    v14 = 0LL;
  }
  v28 = 0x7F80000000000000LL;
  v27 = 0LL;
  LOWORD(v25) = 2;
  *(_DWORD *)((char *)&v25 + 2) = v20;
  HIWORD(v25) = v21;
  LOWORD(v26) = 2;
  *(_DWORD *)((char *)&v26 + 2) = v20;
  HIWORD(v26) = v21;
  v29 = 0;
  *(_QWORD *)&v23 = 0LL;
  *((_QWORD *)&v23 + 1) = 8LL;
  v24 = 0LL;
  iced_widget::column::Column<Message,Theme,Renderer>::spacing(&v43, &v23, 5LL);
  iced_widget::column::Column<Message,Theme,Renderer>::height(&v39, &v43);
  if ( v14 )
  {
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v41, v32);
    v28 = 0x7F80000000000000LL;
    v27 = 0LL;
    LOWORD(v25) = 2;
    *(_DWORD *)((char *)&v25 + 2) = v20;
    HIWORD(v25) = v21;
    LOWORD(v26) = 2;
    *(_DWORD *)((char *)&v26 + 2) = v20;
    HIWORD(v26) = v21;
    v29 = 0;
    *(_QWORD *)&v23 = 0LL;
    *((_QWORD *)&v23 + 1) = 8LL;
    v24 = 0LL;
    v22 = 0x4150000000000000uLL;
    iced_widget::column::Column<Message,Theme,Renderer>::padding(&v43, &v23, &v22);
    iced_widget::column::Column<Message,Theme,Renderer>::spacing(&v23, &v43, 5LL);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::fold(&v43, &v41, &v23, v4, v5);
    sniffnet::gui::styles::scrollbar::ScrollbarType::properties((char *)&v41 + 4);
    LODWORD(v41) = 2;
    iced_widget::scrollable::Scrollable<Message,Theme,Renderer>::with_direction(&v23, &v43, &v41);
    v15 = alloc::boxed::Box<T>::new(&v23);
    v16 = &off_2DF3BA8;
    v17 = 0;
  }
  else
  {
    sniffnet::utils::types::icon::Icon::get_hourglass(&v23, *(_QWORD *)(v5 + 480));
    iced_core::widget::text::Text<Theme,Renderer>::size(&v43, &v23, 60LL);
    iced_widget::container::Container<Message,Theme,Renderer>::new(&v23, &v43);
    iced_widget::container::Container<Message,Theme,Renderer>::center(&v41, &v23);
    v15 = alloc::boxed::Box<T>::new(&v41);
    v16 = &off_2DF4AA8;
    v17 = 1;
  }
  result = iced_widget::column::Column<Message,Theme,Renderer>::push(v36, &v39, v15, v16);
  if ( v17 )
    return core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,alloc::string::String,core::option::Option<&alloc::string::String>,alloc::string::String)>>(v32);
  return result;
}