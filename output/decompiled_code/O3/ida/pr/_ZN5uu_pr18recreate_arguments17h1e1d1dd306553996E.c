__int64 __fastcall uu_pr::recreate_arguments(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 position; // rax
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rbp
  __int128 v9; // [rsp+0h] [rbp-188h] BYREF
  _QWORD *v10; // [rsp+10h] [rbp-178h]
  __int64 v11; // [rsp+18h] [rbp-170h]
  __int64 v12; // [rsp+20h] [rbp-168h]
  _BYTE v13[24]; // [rsp+38h] [rbp-150h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-138h] BYREF
  __int128 v15; // [rsp+60h] [rbp-128h] BYREF
  _QWORD *v16; // [rsp+70h] [rbp-118h]
  __int128 v17; // [rsp+78h] [rbp-110h] BYREF
  __int64 v18; // [rsp+88h] [rbp-100h]
  _QWORD v19[4]; // [rsp+90h] [rbp-F8h] BYREF
  __int128 v20; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-C8h]
  _BYTE v22[32]; // [rsp+C8h] [rbp-C0h] BYREF
  _BYTE v23[24]; // [rsp+E8h] [rbp-A0h] BYREF
  char v24; // [rsp+100h] [rbp-88h] BYREF
  _BYTE v25[32]; // [rsp+110h] [rbp-78h] BYREF
  _BYTE v26[32]; // [rsp+130h] [rbp-58h] BYREF
  _BYTE *v27; // [rsp+150h] [rbp-38h]

  regex::regex::string::Regex::new(&v9, aD_3, 10LL);
  core::result::Result<T,E>::unwrap(v25, &v9, &off_3087E0);
  regex::regex::string::Regex::new(&v9, aD_4, 9LL);
  core::result::Result<T,E>::unwrap(v19, &v9, &off_3087F8);
  regex::regex::string::Regex::new(&v9, aNS, 7LL);
  core::result::Result<T,E>::unwrap(v22, &v9, &off_308810);
  <T as alloc::slice::hack::ConvertVec>::to_vec(v13, a2, a3);
  *(_QWORD *)&v9 = a2;
  *((_QWORD *)&v9 + 1) = a2 + 24 * a3;
  position = itertools::Itertools::find_position(&v9, v22);
  if ( v5 )
  {
    v6 = position;
    v7 = position + 1;
    if ( position + 1 < a3
      && !(unsigned __int8)regex::regex::string::Regex::is_match_at(
                             v19[0],
                             v19[1],
                             *(_QWORD *)(a2 + 24 * v7 + 8),
                             *(_QWORD *)(a2 + 24 * v7 + 16)) )
    {
      alloc::vec::Vec<T,A>::remove(&v15, v13, v7, &off_308828);
      <uu_pr::NumberingMode as core::default::Default>::default(v23);
      v14[0] = &v24;
      v14[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&v9 = &xmmword_66D90;
      *((_QWORD *)&v9 + 1) = 1LL;
      v12 = 0LL;
      v10 = v14;
      v11 = 1LL;
      ((void (__fastcall *)(__int128 *, __int128 *))core::option::Option<T>::map_or_else)(&v17, &v9);
      core::ptr::drop_in_place<uu_pr::NumberingMode>(v23);
      v20 = v17;
      v21 = v18;
      alloc::vec::Vec<T,A>::insert(v13, v7, &v20);
      v10 = v16;
      v9 = v15;
      alloc::vec::Vec<T,A>::insert(v13, v6 + 2, &v9);
    }
  }
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v26, v13);
  v27 = v25;
  alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
    a1,
    v26);
  core::ptr::drop_in_place<regex::regex::string::Regex>(v22);
  core::ptr::drop_in_place<regex::regex::string::Regex>(v19);
  core::ptr::drop_in_place<regex::regex::string::Regex>(v25);
  return a1;
}
