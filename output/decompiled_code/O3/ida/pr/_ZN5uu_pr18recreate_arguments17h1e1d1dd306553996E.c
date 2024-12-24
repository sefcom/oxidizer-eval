__int64 __fastcall uu_pr::recreate_arguments(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 position; // rax
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v13; // [rsp+0h] [rbp-188h] BYREF
  _QWORD *v14; // [rsp+10h] [rbp-178h]
  __int64 v15; // [rsp+18h] [rbp-170h]
  __int64 v16; // [rsp+20h] [rbp-168h]
  _BYTE v17[24]; // [rsp+38h] [rbp-150h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-138h] BYREF
  __int128 v19; // [rsp+60h] [rbp-128h] BYREF
  _QWORD *v20; // [rsp+70h] [rbp-118h]
  __int128 v21; // [rsp+78h] [rbp-110h] BYREF
  __int64 v22; // [rsp+88h] [rbp-100h]
  _QWORD v23[4]; // [rsp+90h] [rbp-F8h] BYREF
  __int128 v24; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+C0h] [rbp-C8h]
  _BYTE v26[32]; // [rsp+C8h] [rbp-C0h] BYREF
  _BYTE v27[24]; // [rsp+E8h] [rbp-A0h] BYREF
  char v28; // [rsp+100h] [rbp-88h] BYREF
  _BYTE v29[32]; // [rsp+110h] [rbp-78h] BYREF
  _BYTE v30[32]; // [rsp+130h] [rbp-58h] BYREF
  _BYTE *v31; // [rsp+150h] [rbp-38h]

  regex::regex::string::Regex::new(&v13, aD_3, 10LL);
  core::result::Result<T,E>::unwrap(v29, &v13, &off_3087E0);
  regex::regex::string::Regex::new(&v13, aD_4, 9LL);
  core::result::Result<T,E>::unwrap(v23, &v13, &off_3087F8);
  regex::regex::string::Regex::new(&v13, aNS, 7LL);
  core::result::Result<T,E>::unwrap(v26, &v13, &off_308810);
  <T as alloc::slice::hack::ConvertVec>::to_vec(v17, a2, a3);
  *(_QWORD *)&v13 = a2;
  *((_QWORD *)&v13 + 1) = a2 + 24 * a3;
  position = itertools::Itertools::find_position(&v13, v26);
  if ( v5 )
  {
    v6 = position;
    v7 = position + 1;
    if ( position + 1 < a3
      && !(unsigned __int8)regex::regex::string::Regex::is_match_at(
                             v23[0],
                             v23[1],
                             *(_QWORD *)(a2 + 24 * v7 + 8),
                             *(_QWORD *)(a2 + 24 * v7 + 16)) )
    {
      alloc::vec::Vec<T,A>::remove(&v19, v17, v7, &off_308828);
      <uu_pr::NumberingMode as core::default::Default>::default(v27);
      v18[0] = &v28;
      v18[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)&v13 = &xmmword_66D90;
      *((_QWORD *)&v13 + 1) = 1LL;
      v16 = 0LL;
      v14 = v18;
      v15 = 1LL;
      core::option::Option<T>::map_or_else(&v21, &v13, v8, v9, v10, v11);
      core::ptr::drop_in_place<uu_pr::NumberingMode>(v27);
      v24 = v21;
      v25 = v22;
      alloc::vec::Vec<T,A>::insert(v17, v7, &v24);
      v14 = v20;
      v13 = v19;
      alloc::vec::Vec<T,A>::insert(v17, v6 + 2, &v13);
    }
  }
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v30, v17);
  v31 = v29;
  alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
    a1,
    v30);
  core::ptr::drop_in_place<regex::regex::string::Regex>(v26);
  core::ptr::drop_in_place<regex::regex::string::Regex>(v23);
  core::ptr::drop_in_place<regex::regex::string::Regex>(v29);
  return a1;
}
