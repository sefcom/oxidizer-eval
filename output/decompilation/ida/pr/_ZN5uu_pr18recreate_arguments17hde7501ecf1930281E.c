__int64 __fastcall uu_pr::recreate_arguments(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 position; // rax
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  __int128 v11; // [rsp+8h] [rbp-150h] BYREF
  __int128 v12; // [rsp+18h] [rbp-140h]
  __int128 v13; // [rsp+28h] [rbp-130h]
  _BYTE v14[24]; // [rsp+38h] [rbp-120h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-108h] BYREF
  __int128 v16; // [rsp+60h] [rbp-F8h] BYREF
  _OWORD v17[2]; // [rsp+70h] [rbp-E8h] BYREF
  _QWORD v18[4]; // [rsp+98h] [rbp-C0h] BYREF
  _BYTE v19[32]; // [rsp+B8h] [rbp-A0h] BYREF
  _BYTE v20[24]; // [rsp+D8h] [rbp-80h] BYREF
  _BYTE v21[32]; // [rsp+F0h] [rbp-68h] BYREF
  _BYTE v22[72]; // [rsp+110h] [rbp-48h] BYREF

  regex::regex::string::Regex::new(&v11, aD_2, 10LL);
  core::result::Result<T,E>::unwrap(v21, &v11, &off_2690F8);
  regex::regex::string::Regex::new(&v11, aD_3, 9LL);
  core::result::Result<T,E>::unwrap(v18, &v11, &off_269110);
  regex::regex::string::Regex::new(&v11, aNS, 7LL);
  core::result::Result<T,E>::unwrap(v19, &v11, &off_269128);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v14, a2, a3);
  *(_QWORD *)&v11 = a2;
  *((_QWORD *)&v11 + 1) = a2 + 24 * a3;
  position = itertools::Itertools::find_position(&v11, v19);
  if ( v5 )
  {
    v6 = position;
    v7 = position + 1;
    if ( position + 1 < a3 )
    {
      v8 = *(_QWORD *)(a2 + 24 * v7 + 8);
      v9 = *(_QWORD *)(a2 + 24 * v7 + 16);
      LODWORD(v11) = 0;
      *((_QWORD *)&v11 + 1) = v8;
      v12 = v9;
      *(_QWORD *)&v13 = v9;
      BYTE8(v13) = 1;
      regex_automata::util::search::Input::set_span(&v11);
      v17[1] = v13;
      v17[0] = v12;
      v16 = v11;
      regex_automata::meta::regex::Regex::search_half(&v11, v18[0], v18[1], &v16);
      if ( (v11 & 1) == 0 )
      {
        alloc::vec::Vec<T,A>::remove(v20, v14, v7);
        <uu_pr::NumberingMode as core::default::Default>::default(&v16);
        v15[0] = (char *)v17 + 8;
        v15[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        *(_QWORD *)&v11 = &unk_51320;
        *((_QWORD *)&v11 + 1) = 1LL;
        *(_QWORD *)&v13 = 0LL;
        *(_QWORD *)&v12 = v15;
        *((_QWORD *)&v12 + 1) = 1LL;
        core::option::Option<T>::map_or_else(v22, &v11);
        core::ptr::drop_in_place<uu_pr::NumberingMode>(&v16);
        alloc::vec::Vec<T,A>::insert(v14, v7, v22, &off_269158);
        alloc::vec::Vec<T,A>::insert(v14, v6 + 2, v20, &off_269170);
      }
    }
  }
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v11, v14);
  *(_QWORD *)&v13 = v21;
  core::iter::traits::iterator::Iterator::collect(a1, &v11);
  core::ptr::drop_in_place<regex::regex::string::Regex>(v19);
  core::ptr::drop_in_place<regex::regex::string::Regex>(v18);
  core::ptr::drop_in_place<regex::regex::string::Regex>(v21);
  return a1;
}