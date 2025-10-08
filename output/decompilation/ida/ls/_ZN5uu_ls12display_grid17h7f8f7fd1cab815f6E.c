__int64 __fastcall uu_ls::display_grid(__int128 *a1, unsigned __int16 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  unsigned __int64 v7; // r13
  char v9; // bp
  __int128 v10; // xmm0
  char ***v11; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 (__fastcall *v16)(); // r15
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  char ***v21; // rbp
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  char ***v26; // [rsp+8h] [rbp-130h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+10h] [rbp-128h]
  __int64 v28; // [rsp+18h] [rbp-120h]
  __int128 v29; // [rsp+20h] [rbp-118h] BYREF
  __int128 v30; // [rsp+30h] [rbp-108h]
  __int64 v31; // [rsp+40h] [rbp-F8h]
  __int64 v32; // [rsp+50h] [rbp-E8h]
  _BYTE v33[24]; // [rsp+58h] [rbp-E0h] BYREF
  char **v34; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+78h] [rbp-C0h]
  __int64 v36; // [rsp+80h] [rbp-B8h]
  __int128 v37; // [rsp+88h] [rbp-B0h]
  _BYTE v38[72]; // [rsp+F0h] [rbp-48h] BYREF

  v7 = 0x8000000000000000LL;
  if ( a2 )
  {
    v9 = a3;
    v32 = a4;
    if ( a5 )
    {
      core::iter::traits::iterator::Iterator::map(&v34, a1);
      core::iter::traits::iterator::Iterator::collect(v33, &v34);
    }
    else
    {
      core::iter::traits::iterator::Iterator::collect(v33, a1);
    }
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v34, v33);
    core::iter::traits::iterator::Iterator::collect(v38, &v34);
    v12 = 0x8000000000000002LL;
    if ( !a6 )
      v12 = 0x8000000000000000LL;
    LOBYTE(v31) = v9;
    *(_QWORD *)&v29 = v12;
    *((_QWORD *)&v29 + 1) = 2LL;
    *(_QWORD *)&v30 = a6;
    *((_QWORD *)&v30 + 1) = a2;
    term_grid::Grid<T>::new(&v34, v38, &v29);
    v26 = &v34;
    v27 = <term_grid::Grid<T> as core::fmt::Display>::fmt;
    *(_QWORD *)&v29 = &unk_CF290;
    *((_QWORD *)&v29 + 1) = 1LL;
    v31 = 0LL;
    *(_QWORD *)&v30 = &v26;
    *((_QWORD *)&v30 + 1) = 1LL;
    v13 = std::io::Write::write_fmt(v32, &v29);
    if ( v13 )
    {
      v14 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
      core::ptr::drop_in_place<term_grid::Grid<alloc::string::String>>(&v34);
      return v14;
    }
    core::ptr::drop_in_place<term_grid::Grid<alloc::string::String>>(&v34);
    return 0LL;
  }
  v10 = *a1;
  v30 = a1[1];
  v29 = v10;
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v26, &v29, a3, a4);
  v11 = v26;
  if ( v26 == (char ***)0x8000000000000000LL )
  {
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v29);
    return 0LL;
  }
  v16 = v27;
  v17 = uu_ls::write_os_str(a4, v27, v28);
  if ( v17 )
    goto LABEL_14;
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v11, v16);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v26, &v29, v19, v20);
  v11 = v26;
  if ( v26 != (char ***)0x8000000000000000LL )
  {
    while ( 1 )
    {
      v21 = (char ***)v7;
      v16 = v27;
      v22 = v28;
      v34 = &off_286698;
      v35 = 1LL;
      v36 = 8LL;
      v37 = 0LL;
      v17 = std::io::Write::write_fmt(a4, &v34);
      if ( v17 )
        break;
      v17 = uu_ls::write_os_str(a4, v16, v22);
      if ( v17 )
        break;
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(v11, v16);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v26, &v29, v23, v24);
      v11 = v26;
      v7 = (unsigned __int64)v21;
      if ( v26 == v21 )
        goto LABEL_19;
    }
LABEL_14:
    v18 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v11, v16);
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v29);
    return v18;
  }
LABEL_19:
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>(&v29);
  v34 = (char **)&off_2866E0;
  v35 = 1LL;
  v36 = 8LL;
  v37 = 0LL;
  v25 = std::io::Write::write_fmt(a4, &v34);
  if ( !v25 )
    return 0LL;
  return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25);
}