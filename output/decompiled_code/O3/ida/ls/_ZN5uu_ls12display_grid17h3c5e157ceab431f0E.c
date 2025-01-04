__int64 __fastcall uu_ls::display_grid(__int128 *a1, unsigned __int16 a2, char a3, __int64 a4, char a5)
{
  __int128 v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int128 v31; // [rsp+8h] [rbp-150h] BYREF
  __int64 v32; // [rsp+18h] [rbp-140h]
  __int128 v33; // [rsp+20h] [rbp-138h] BYREF
  __int64 v34; // [rsp+30h] [rbp-128h]
  __int128 v35; // [rsp+40h] [rbp-118h] BYREF
  __int128 v36; // [rsp+50h] [rbp-108h]
  __int64 v37; // [rsp+60h] [rbp-F8h]
  __int128 v38; // [rsp+70h] [rbp-E8h] BYREF
  _QWORD *v39; // [rsp+80h] [rbp-D8h]
  __int128 v40; // [rsp+88h] [rbp-D0h]
  _QWORD v41[2]; // [rsp+F8h] [rbp-60h] BYREF
  _BYTE v42[80]; // [rsp+108h] [rbp-50h] BYREF

  if ( !a2 )
  {
    v7 = *a1;
    v36 = a1[1];
    v35 = v7;
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v31, &v35);
    if ( (_QWORD)v31 == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v35);
    }
    else
    {
      v34 = v32;
      v33 = v31;
      while ( 1 )
      {
        v41[0] = &v33;
        v41[1] = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v38 = &xmmword_23C10;
        *((_QWORD *)&v38 + 1) = 1LL;
        v39 = v41;
        v40 = 1uLL;
        v20 = std::io::Write::write_fmt(a4, &v38, v8, v9, v10, v11);
        if ( v20 )
        {
LABEL_18:
          v19 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
          core::ptr::drop_in_place<alloc::string::String>(&v33);
          core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v35);
          return v19;
        }
        core::ptr::drop_in_place<alloc::string::String>(&v33);
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v31, &v35);
        if ( (_QWORD)v31 == 0x8000000000000000LL )
          break;
        v34 = v32;
        v33 = v31;
        *(_QWORD *)&v38 = &off_212688;
        *((_QWORD *)&v38 + 1) = 1LL;
        v39 = (_QWORD *)&byte_8;
        v40 = 0LL;
        v20 = std::io::Write::write_fmt(a4, &v38, v21, v22, v23, v24);
        if ( v20 )
          goto LABEL_18;
      }
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v35);
      *(_QWORD *)&v38 = &off_2125B8;
      *((_QWORD *)&v38 + 1) = 1LL;
      v39 = (_QWORD *)&byte_8;
      v40 = 0LL;
      v29 = std::io::Write::write_fmt(a4, &v38, v25, v26, v27, v28);
      if ( v29 )
        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v29);
    }
    return 0LL;
  }
  if ( a5 )
  {
    core::iter::traits::iterator::Iterator::map(v42, a1);
    alloc::vec::in_place_collect::<impl alloc::vec::spec_from_iter::SpecFromIter<T,I> for alloc::vec::Vec<T>>::from_iter(
      &v31,
      v42);
  }
  else
  {
    core::iter::traits::iterator::Iterator::collect(&v31, a1);
  }
  *(_QWORD *)&v38 = *((_QWORD *)&v31 + 1);
  *((_QWORD *)&v38 + 1) = *((_QWORD *)&v31 + 1) + 24 * v32;
  v12 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v38);
  if ( (_BYTE)v12 )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v38, asc_36242, 1LL);
    v13 = v38;
    v12 = (__int64)v39;
  }
  else
  {
    v13 = xmmword_23AE0;
  }
  v34 = v32;
  v33 = v31;
  LOBYTE(v37) = a3;
  v35 = v13;
  *(_QWORD *)&v36 = v12;
  *((_QWORD *)&v36 + 1) = a2;
  term_grid::Grid<T>::new(&v38, &v33, &v35);
  *(_QWORD *)&v33 = &v38;
  *((_QWORD *)&v33 + 1) = <term_grid::Grid<T> as core::fmt::Display>::fmt;
  *(_QWORD *)&v35 = &xmmword_23C10;
  *((_QWORD *)&v35 + 1) = 1LL;
  v37 = 0LL;
  *(_QWORD *)&v36 = &v33;
  *((_QWORD *)&v36 + 1) = 1LL;
  v18 = std::io::Write::write_fmt(a4, &v35, v14, v15, v16, v17);
  if ( !v18 )
  {
    core::ptr::drop_in_place<term_grid::Grid<alloc::string::String>>(&v38);
    return 0LL;
  }
  v19 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v18);
  core::ptr::drop_in_place<term_grid::Grid<alloc::string::String>>(&v38);
  return v19;
}
