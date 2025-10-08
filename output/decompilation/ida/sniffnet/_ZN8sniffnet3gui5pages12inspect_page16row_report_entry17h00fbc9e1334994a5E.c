_OWORD *__fastcall sniffnet::gui::pages::inspect_page::row_report_entry(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5)
{
  char v6; // bp
  unsigned __int8 v7; // al
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  _OWORD *result; // rax
  unsigned __int8 v12; // r12
  __int128 *v13; // r15
  __int128 *v14; // r13
  unsigned __int64 max_chars; // r15
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // r15
  __int64 v18; // r14
  __int128 v19; // rax
  char v20; // bp
  unsigned int v21; // [rsp+0h] [rbp-1E8h]
  __int128 v22; // [rsp+8h] [rbp-1E0h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-1D0h]
  __int128 v24; // [rsp+20h] [rbp-1C8h] BYREF
  unsigned __int64 v25; // [rsp+30h] [rbp-1B8h]
  _OWORD *v26; // [rsp+38h] [rbp-1B0h]
  __int64 v27; // [rsp+40h] [rbp-1A8h]
  __int64 v28; // [rsp+48h] [rbp-1A0h]
  __int64 v29; // [rsp+50h] [rbp-198h]
  _QWORD v30[2]; // [rsp+58h] [rbp-190h] BYREF
  _DWORD v31[2]; // [rsp+68h] [rbp-180h]
  __int128 v32; // [rsp+70h] [rbp-178h] BYREF
  __int128 v33; // [rsp+80h] [rbp-168h]
  __m256i v34; // [rsp+90h] [rbp-158h]
  __int128 v35; // [rsp+B0h] [rbp-138h] BYREF
  __int128 v36; // [rsp+C0h] [rbp-128h]
  __m256i v37[2]; // [rsp+D0h] [rbp-118h] BYREF
  _OWORD v38[2]; // [rsp+110h] [rbp-D8h] BYREF
  __m256i v39; // [rsp+130h] [rbp-B8h]
  __int128 v40; // [rsp+158h] [rbp-90h] BYREF
  unsigned __int64 v41; // [rsp+168h] [rbp-80h]

  v27 = a5;
  v28 = a2;
  v26 = a1;
  v29 = a3;
  v6 = *(_BYTE *)(a3 + 232);
  memset(&v37[0].m256i_u64[1], 0, 22);
  WORD4(v36) = 2;
  v37[0].m256i_i16[0] = 2;
  *(_QWORD *)&v35 = 0LL;
  *((_QWORD *)&v35 + 1) = 8LL;
  *(_QWORD *)&v36 = 0LL;
  iced_widget::row::Row<Message,Theme,Renderer>::align_y(&v32, &v35, 1LL);
  v30[0] = 0LL;
  v30[1] = 7LL;
  v31[0] = 50462976;
  *(_DWORD *)((char *)v31 + 3) = 100992003;
  v7 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v30);
  if ( v7 != 7 )
  {
    v12 = v7;
    v13 = &v40;
    v21 = (unsigned __int8)(v6 + 1);
    do
    {
      v14 = v13;
      max_chars = sniffnet::report::types::report_col::ReportCol::get_max_chars(v12, 23LL);
      sniffnet::report::types::report_col::ReportCol::get_value(&v22, v12, v28, v29, a4);
      v39 = v34;
      v38[1] = v33;
      v38[0] = v32;
      v16 = v23;
      if ( v23 <= max_chars )
      {
        v25 = v23;
        v24 = v22;
        v20 = 0;
        v13 = v14;
      }
      else
      {
        v17 = max_chars - 2;
        v18 = *((_QWORD *)&v22 + 1);
        *(_QWORD *)&v19 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
                            v17,
                            *((_QWORD *)&v22 + 1),
                            v23);
        if ( !(_QWORD)v19 )
          core::str::slice_error_fail(v18, v16, 0LL, v17, &off_2DFF020);
        v35 = v19;
        *(_QWORD *)&v36 = asc_497A9B;
        *((_QWORD *)&v36 + 1) = 3LL;
        v13 = v14;
        alloc::str::join_generic_copy(v14, &v35, 2LL);
        v25 = v41;
        v24 = v40;
        v20 = 1;
      }
      iced_core::widget::text::Text<Theme,Renderer>::new(&v35, &v24);
      iced_core::widget::text::Text<Theme,Renderer>::font(v13, &v35, v27);
      iced_core::widget::text::Text<Theme,Renderer>::class(&v35, v13, v21);
      iced_widget::container::Container<Message,Theme,Renderer>::new(v13, &v35);
      iced_widget::container::Container<Message,Theme,Renderer>::align_x(&v35, v13);
      iced_widget::container::Container<Message,Theme,Renderer>::width(v13, &v35, flt_273F30[(v12 & 5) == 0]);
      iced_widget::row::Row<Message,Theme,Renderer>::push(&v35, v38, v13);
      v32 = v35;
      v33 = v36;
      v34 = v37[0];
      if ( v20 )
        core::ptr::drop_in_place<alloc::string::String>(&v22);
      v12 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(v30);
    }
    while ( v12 != 7 );
  }
  v8 = v32;
  v9 = v33;
  v10 = *(_OWORD *)v34.m256i_i8;
  result = v26;
  v26[3] = *(_OWORD *)&v34.m256i_u64[2];
  result[2] = v10;
  result[1] = v9;
  *result = v8;
  return result;
}