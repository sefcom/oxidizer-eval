__int64 __fastcall alacritty::display::Display::draw_hyperlink_preview(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned int a4,
        __int64 a5)
{
  int v5; // r15d
  __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned __int64 v10; // r13
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int16 *v13; // rax
  unsigned __int16 *v14; // rax
  int v15; // ebp
  int v16; // r15d
  int v19; // [rsp+4h] [rbp-1C4h]
  __int64 v20; // [rsp+8h] [rbp-1C0h] BYREF
  __int64 v21; // [rsp+10h] [rbp-1B8h]
  __int64 v22; // [rsp+18h] [rbp-1B0h]
  int v23; // [rsp+24h] [rbp-1A4h]
  unsigned __int64 *v24; // [rsp+28h] [rbp-1A0h]
  unsigned __int64 v25; // [rsp+30h] [rbp-198h] BYREF
  _QWORD v26[2]; // [rsp+38h] [rbp-190h] BYREF
  __int64 v27; // [rsp+48h] [rbp-180h]
  __int64 v28; // [rsp+50h] [rbp-178h] BYREF
  unsigned __int64 v29[3]; // [rsp+58h] [rbp-170h] BYREF
  _QWORD v30[9]; // [rsp+70h] [rbp-158h] BYREF
  int v31; // [rsp+B8h] [rbp-110h]
  int v32; // [rsp+BCh] [rbp-10Ch]
  char v33; // [rsp+C0h] [rbp-108h]
  _BYTE v34[40]; // [rsp+C8h] [rbp-100h] BYREF
  int v35; // [rsp+F0h] [rbp-D8h]
  unsigned __int64 v36; // [rsp+F8h] [rbp-D0h]
  unsigned __int64 v37; // [rsp+100h] [rbp-C8h]
  _BYTE v38[32]; // [rsp+108h] [rbp-C0h] BYREF
  unsigned __int64 *v39; // [rsp+128h] [rbp-A0h]

  v5 = a5;
  v28 = a5;
  v25 = *(_QWORD *)(a1 + 1952);
  v8 = 0LL;
  if ( *(_BYTE *)(a1 + 1880) != 2 )
    v8 = a1 + 1832;
  core::iter::traits::iterator::Iterator::chain(v38, v8, a1 + 1888);
  v39 = &v25;
  core::iter::traits::iterator::Iterator::collect(v26, v38);
  v9 = v27;
  if ( !v27 )
    return core::ptr::drop_in_place<alloc::vec::Vec<(clap_builder::util::id::Id,clap_builder::builder::arg_predicate::ArgPredicate,core::option::Option<clap_builder::builder::os_str::OsStr>)>>(
             v26[0],
             v26[1]);
  v10 = 2 * v27;
  v20 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(2 * v27, 4LL, 8LL, &off_882740);
  v21 = v11;
  v22 = 0LL;
  v24 = (unsigned __int64 *)(a1 + 1944);
  v12 = *(_QWORD *)(a1 + 1944);
  if ( v12 > v10 )
  {
    alloc::vec::Vec<T,A>::push(&v20, *(_DWORD *)(a1 + 200) & 1, *(unsigned int *)(a1 + 216), &off_882758);
    alloc::vec::Vec<T,A>::push(&v20, a3 & 1, a4, &off_882770);
    v12 = *v24;
  }
  v30[0] = 2LL;
  v30[3] = 2LL;
  v30[6] = &v28;
  v30[7] = v9;
  v30[8] = &v20;
  v31 = -v5;
  v32 = v12 + ~v5;
  v33 = 0;
  v13 = (unsigned __int16 *)(a2 + 627);
  if ( (*(_BYTE *)(a2 + 504) & 1) != 0 )
    v13 = (unsigned __int16 *)(a2 + 505);
  v19 = *v13 | (*((unsigned __int8 *)v13 + 2) << 16);
  v14 = (unsigned __int16 *)(a2 + 624);
  if ( (*(_BYTE *)(a2 + 508) & 1) != 0 )
    v14 = (unsigned __int16 *)(a2 + 509);
  v23 = *v14 | (*((unsigned __int8 *)v14 + 2) << 16);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v34, v26);
  core::iter::traits::iterator::Iterator::zip(v38, v34, v30);
  <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(v34, v38);
  if ( v35 != (_DWORD)&unk_110001 )
  {
    v15 = v36;
    v16 = v37;
    v29[0] = v36;
    v29[1] = v37;
    v29[2] = v25;
    alacritty::display::damage::FrameDamage::damage_line(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), v29);
    alacritty::display::damage::FrameDamage::damage_line(*(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 96), v29);
    alacritty::renderer::Renderer::draw_string(a1 + 224, v15, v16, v19, v23, (unsigned int)v34, (__int64)v24, a1 + 1528);
  }
  core::ptr::drop_in_place<core::iter::adapters::zip::Zip<alloc::vec::into_iter::IntoIter<alacritty::string::StrShortener>,core::iter::adapters::flatten::FlatMap<core::iter::adapters::take::Take<core::iter::adapters::filter_map::FilterMap<core::iter::adapters::map::Map<core::iter::adapters::rev::Rev<core::ops::range::RangeInclusive<i32>>,alacritty::display::Display::draw_hyperlink_preview::{{closure}}>,alacritty::display::Display::draw_hyperlink_preview::{{closure}}>>,core::option::Option<alacritty_terminal::index::Point<usize>>,alacritty::display::Display::draw_hyperlink_preview::{{closure}}>>>(v38);
  return core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<alacritty_terminal::index::Line>>>(v20, v21);
}