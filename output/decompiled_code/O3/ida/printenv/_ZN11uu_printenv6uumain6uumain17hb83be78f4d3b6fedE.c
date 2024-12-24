__int64 __fastcall uu_printenv::uumain::uumain(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v3; // r15
  char flag; // al
  char *v5; // rdx
  bool v6; // bl
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int128 v17; // [rsp+0h] [rbp-468h] BYREF
  __int64 v18; // [rsp+10h] [rbp-458h]
  __int128 v19; // [rsp+20h] [rbp-448h] BYREF
  __int64 v20; // [rsp+30h] [rbp-438h]
  __int128 v21; // [rsp+40h] [rbp-428h] BYREF
  __int64 v22; // [rsp+50h] [rbp-418h]
  _BYTE v23[24]; // [rsp+60h] [rbp-408h] BYREF
  __int128 v24; // [rsp+78h] [rbp-3F0h]
  __int64 v25; // [rsp+88h] [rbp-3E0h]
  _OWORD v26[2]; // [rsp+90h] [rbp-3D8h] BYREF
  __int128 v27; // [rsp+B0h] [rbp-3B8h] BYREF
  __int128 v28; // [rsp+C0h] [rbp-3A8h]
  __int128 v29; // [rsp+D0h] [rbp-398h]
  __int128 v30; // [rsp+E0h] [rbp-388h]
  _QWORD v31[2]; // [rsp+F0h] [rbp-378h] BYREF
  __int128 v32; // [rsp+100h] [rbp-368h] BYREF
  __int64 v33; // [rsp+110h] [rbp-358h]
  _OWORD v34[2]; // [rsp+118h] [rbp-350h] BYREF
  _BYTE v35[56]; // [rsp+138h] [rbp-330h] BYREF
  __int128 dest; // [rsp+170h] [rbp-2F8h] BYREF
  __int128 v37; // [rsp+180h] [rbp-2E8h]
  __int128 v38; // [rsp+190h] [rbp-2D8h]
  __int128 v39; // [rsp+1A0h] [rbp-2C8h]

  uu_printenv::uu_app(&dest);
  clap_builder::builder::command::Command::get_matches_from(v35, &dest, a1, a2);
  v3 = (__int64)*(&uu_printenv::ARG_VARIABLES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v35, aVariables, v3);
  clap_builder::parser::error::MatchesError::unwrap(&v27, aVariables, v3, &dest);
  if ( (_QWORD)v27 )
  {
    v39 = v30;
    v38 = v29;
    v37 = v28;
    dest = v27;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(v23, &dest);
    v19 = *(_OWORD *)v23;
    v20 = *(_QWORD *)&v23[16];
  }
  else
  {
    *(_QWORD *)&v19 = 0LL;
    *((_QWORD *)&v19 + 1) = 8LL;
    v20 = 0LL;
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v35, aNull, *(&uu_printenv::OPT_NULL + 1));
  v5 = asc_12372;
  if ( flag )
    v5 = &byte_12397;
  v31[0] = v5;
  v31[1] = 1LL;
  if ( v20 )
  {
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v26, &v19);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v32, v26);
    v6 = 1;
    if ( (_QWORD)v32 != 0x8000000000000000LL )
    {
      v7 = 0;
      do
      {
        v17 = v32;
        v18 = v33;
        if ( (unsigned __int8)<char as core::str::pattern::Pattern>::is_contained_in(*((_QWORD *)&v32 + 1)) )
        {
          core::ptr::drop_in_place<alloc::string::String>(&v17);
          LOBYTE(v7) = 1;
        }
        else
        {
          *(_QWORD *)&v37 = v18;
          dest = v17;
          std::env::var(v23, &dest);
          LOBYTE(v2) = 1;
          if ( *(_QWORD *)v23 )
            goto LABEL_9;
          v22 = v24;
          v21 = *(_OWORD *)&v23[8];
          *(_QWORD *)&v27 = &v21;
          *((_QWORD *)&v27 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)&v28 = v31;
          *((_QWORD *)&v28 + 1) = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&dest = &unk_123A0;
          *((_QWORD *)&dest + 1) = 2LL;
          *(_QWORD *)&v38 = 0LL;
          *(_QWORD *)&v37 = &v27;
          *((_QWORD *)&v37 + 1) = 2LL;
          std::io::stdio::_print(&dest, &dest, v8, &v23[8], v9, v10, v17, *((_QWORD *)&v17 + 1), v18);
          core::ptr::drop_in_place<alloc::string::String>(&v21);
          v2 = v7;
          if ( *(_QWORD *)v23 )
          {
LABEL_9:
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v23);
            v7 = v2;
          }
        }
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v32, v26);
      }
      while ( (_QWORD)v32 != 0x8000000000000000LL );
      v6 = (v7 & 1) == 0;
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(v26);
    if ( v6 )
      v15 = 0LL;
    else
      v15 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v35);
  }
  else
  {
    std::env::vars(v34);
    v26[1] = v34[1];
    v26[0] = v34[0];
    while ( 1 )
    {
      <std::env::Vars as core::iter::traits::iterator::Iterator>::next(v23, v26);
      if ( *(_QWORD *)v23 == 0x8000000000000000LL )
        break;
      v22 = v25;
      v21 = v24;
      *(_QWORD *)&dest = &v17;
      *((_QWORD *)&dest + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v37 = &v21;
      *((_QWORD *)&v37 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v38 = v31;
      *((_QWORD *)&v38 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v27 = &unk_101490;
      *((_QWORD *)&v27 + 1) = 3LL;
      *(_QWORD *)&v29 = 0LL;
      *(_QWORD *)&v28 = &dest;
      *((_QWORD *)&v28 + 1) = 3LL;
      std::io::stdio::_print(&v27, v26, v11, v12, v13, v14, *(_QWORD *)v23, *(_QWORD *)&v23[8], *(_QWORD *)&v23[16]);
      core::ptr::drop_in_place<alloc::string::String>(&v21);
      core::ptr::drop_in_place<alloc::string::String>(&v17);
    }
    core::ptr::drop_in_place<std::env::Vars>(v26);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v19);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v35);
    return 0LL;
  }
  return v15;
}
