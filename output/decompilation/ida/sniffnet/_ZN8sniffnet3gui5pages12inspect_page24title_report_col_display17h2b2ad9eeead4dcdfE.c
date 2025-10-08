__int64 __fastcall sniffnet::gui::pages::inspect_page::title_report_col_display(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned __int64 max_chars; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int128 v15; // [rsp+8h] [rbp-140h] BYREF
  __int64 v16; // [rsp+18h] [rbp-130h]
  __int128 v17; // [rsp+20h] [rbp-128h] BYREF
  __int64 v18; // [rsp+30h] [rbp-118h]
  __int128 v19; // [rsp+38h] [rbp-110h]
  __int64 v20; // [rsp+48h] [rbp-100h]
  __int128 v21; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-E8h]
  __int64 v23; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+70h] [rbp-D8h]
  unsigned __int64 v25; // [rsp+78h] [rbp-D0h]
  __int128 v26; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+90h] [rbp-B8h]
  _BYTE v28[24]; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-90h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-88h]
  __int64 v31; // [rsp+C8h] [rbp-80h]
  __int128 v32; // [rsp+D0h] [rbp-78h] BYREF
  const char *v33; // [rsp+E0h] [rbp-68h]
  __int64 v34; // [rsp+E8h] [rbp-60h]
  __int128 v35; // [rsp+F0h] [rbp-58h]
  __int64 v36; // [rsp+100h] [rbp-48h]
  __int128 v37; // [rsp+108h] [rbp-40h] BYREF
  __int64 v38; // [rsp+118h] [rbp-30h]

  max_chars = sniffnet::report::types::report_col::ReportCol::get_max_chars(a2, a4);
  sniffnet::report::types::report_col::ReportCol::get_title(&v15, a2, a4, a3);
  sniffnet::report::types::report_col::ReportCol::get_title_direction_info(&v21, a2, a4);
  core::iter::traits::iterator::Iterator::collect(&v23, *((_QWORD *)&v15 + 1), *((_QWORD *)&v15 + 1) + v16);
  core::iter::traits::iterator::Iterator::collect(&v29, *((_QWORD *)&v21 + 1), *((_QWORD *)&v21 + 1) + v22);
  v7 = v25;
  v8 = v31;
  if ( v31 + v25 <= max_chars )
  {
    *(_QWORD *)(a1 + 16) = v16;
    *(_OWORD *)a1 = v15;
    *(_OWORD *)(a1 + 24) = v21;
    *(_QWORD *)(a1 + 40) = v22;
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_QWORD *)(a1 + 56) = 1LL;
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  else if ( v25 >= max_chars - 4 )
  {
    v11 = core::cmp::Ord::min(max_chars - 2, v25);
    v12 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v11, v24, v7, &off_2DFF008);
    core::iter::traits::iterator::Iterator::collect(v28, v12, v12 + 4 * v13);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v17, asc_497A9B, 3LL);
    v27 = v18;
    v26 = v17;
    v18 = v16;
    v17 = v15;
    v19 = v21;
    v20 = v22;
    alloc::str::join_generic_copy(&v32, &v17);
    *(_QWORD *)(a1 + 64) = v33;
    *(_OWORD *)(a1 + 48) = v32;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)&v28[16];
    *(_OWORD *)a1 = *(_OWORD *)v28;
    *(_OWORD *)(a1 + 24) = v26;
    *(_QWORD *)(a1 + 40) = v27;
    core::ptr::drop_in_place<sniffnet::networking::types::asn::Asn>(&v17);
  }
  else
  {
    <alloc::string::String as core::clone::Clone>::clone(&v37, &v15);
    v9 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
           max_chars - v7 - 2,
           v30,
           v8,
           &off_2DFEFF0);
    core::iter::traits::iterator::Iterator::collect(v28, v9, v9 + 4 * v10);
    v32 = *(_OWORD *)&v28[8];
    v33 = asc_497A9B;
    v34 = 3LL;
    alloc::str::join_generic_copy(&v17, &v32, 2LL);
    v36 = v18;
    v35 = v17;
    v18 = v16;
    v17 = v15;
    v19 = v21;
    v20 = v22;
    alloc::str::join_generic_copy(&v26, &v17);
    *(_QWORD *)(a1 + 64) = v27;
    *(_OWORD *)(a1 + 48) = v26;
    *(_QWORD *)(a1 + 16) = v38;
    *(_OWORD *)a1 = v37;
    *(_OWORD *)(a1 + 24) = v35;
    *(_QWORD *)(a1 + 40) = v36;
    core::ptr::drop_in_place<sniffnet::networking::types::asn::Asn>(&v17);
    core::ptr::drop_in_place<alloc::string::String>(v28);
  }
  core::ptr::drop_in_place<alloc::vec::Vec<f32>>(v29, v30);
  return core::ptr::drop_in_place<alloc::vec::Vec<f32>>(v23, v24);
}