__int64 __fastcall uu_printenv::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  char flag; // al
  char *v4; // rdx
  __int128 *v5; // r13
  char v6; // r12
  __int64 v7; // rbx
  __int64 v9; // rbp
  __int64 v10; // r15
  __int128 v11; // [rsp+0h] [rbp-478h] BYREF
  __int64 v12; // [rsp+10h] [rbp-468h]
  __int128 v13; // [rsp+20h] [rbp-458h] BYREF
  __int64 v14; // [rsp+30h] [rbp-448h]
  __int128 *v15; // [rsp+38h] [rbp-440h] BYREF
  __int128 v16; // [rsp+40h] [rbp-438h]
  _OWORD v17[2]; // [rsp+50h] [rbp-428h] BYREF
  __int128 v18; // [rsp+70h] [rbp-408h] BYREF
  __int128 **p_dest; // [rsp+80h] [rbp-3F8h]
  __int64 (__fastcall *v20)(); // [rsp+88h] [rbp-3F0h]
  __int64 v21; // [rsp+90h] [rbp-3E8h]
  _QWORD v22[2]; // [rsp+A8h] [rbp-3D0h] BYREF
  _BYTE v23[24]; // [rsp+B8h] [rbp-3C0h] BYREF
  __int128 v24; // [rsp+D0h] [rbp-3A8h]
  __int64 v25; // [rsp+E0h] [rbp-398h]
  _OWORD v26[2]; // [rsp+E8h] [rbp-390h] BYREF
  _BYTE v27[56]; // [rsp+108h] [rbp-370h] BYREF
  _QWORD v28[8]; // [rsp+140h] [rbp-338h] BYREF
  __int128 *dest; // [rsp+180h] [rbp-2F8h] BYREF
  __int128 v30; // [rsp+188h] [rbp-2F0h]
  __int64 (__fastcall *v31)(); // [rsp+198h] [rbp-2E0h]
  _QWORD *v32; // [rsp+1A0h] [rbp-2D8h]
  __int64 (__fastcall *v33)(); // [rsp+1A8h] [rbp-2D0h]

  uu_printenv::uu_app(&dest);
  clap_builder::builder::command::Command::get_matches_from(v27, &dest, a1, a2);
  v2 = (__int64)*(&uu_printenv::ARG_VARIABLES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v27, aVariables, v2);
  clap_builder::parser::error::MatchesError::unwrap(v28, aVariables, v2, &dest);
  if ( v28[0]
    && (core::iter::traits::iterator::Iterator::collect(&dest, v28), v18 = v30, dest != (__int128 *)0x8000000000000000LL) )
  {
    v16 = v18;
    v15 = dest;
  }
  else
  {
    v15 = 0LL;
    v16 = 8uLL;
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v27, aNull, *(&uu_printenv::OPT_NULL + 1));
  v4 = asc_15F62;
  if ( flag )
    v4 = &byte_16130;
  v22[0] = v4;
  v22[1] = 1LL;
  if ( !*((_QWORD *)&v16 + 1) )
  {
    std::env::vars(v26);
    v17[1] = v26[1];
    v17[0] = v26[0];
    while ( 1 )
    {
      <std::env::Vars as core::iter::traits::iterator::Iterator>::next(v23, v17);
      if ( *(_QWORD *)v23 == 0x8000000000000000LL )
        break;
      v14 = *(_QWORD *)&v23[16];
      v13 = *(_OWORD *)v23;
      v12 = v25;
      v11 = v24;
      dest = &v13;
      *(_QWORD *)&v30 = <alloc::string::String as core::fmt::Display>::fmt;
      *((_QWORD *)&v30 + 1) = &v11;
      v31 = <alloc::string::String as core::fmt::Display>::fmt;
      v32 = v22;
      v33 = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v18 = &unk_D3AC0;
      *((_QWORD *)&v18 + 1) = 3LL;
      v21 = 0LL;
      p_dest = &dest;
      v20 = (__int64 (__fastcall *)())(&dword_0 + 3);
      std::io::stdio::_print(&v18);
      core::ptr::drop_in_place<alloc::string::String>(v11, *((_QWORD *)&v11 + 1));
      core::ptr::drop_in_place<alloc::string::String>(v13, *((_QWORD *)&v13 + 1));
    }
    core::ptr::drop_in_place<std::env::Vars>(v17);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v15);
LABEL_16:
    v7 = 0LL;
    goto LABEL_17;
  }
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v17, &v15);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v13, v17);
  v5 = (__int128 *)v13;
  if ( (_QWORD)v13 != 0x8000000000000000LL )
  {
    v6 = 0;
    while ( 1 )
    {
      v9 = *((_QWORD *)&v13 + 1);
      v10 = v14;
      if ( (unsigned __int8)<char as core::str::pattern::Pattern>::is_contained_in(*((_QWORD *)&v13 + 1), v14) )
      {
        core::ptr::drop_in_place<alloc::string::String>(v5, v9);
      }
      else
      {
        dest = v5;
        *(_QWORD *)&v30 = v9;
        *((_QWORD *)&v30 + 1) = v10;
        std::env::var(v23, &dest);
        if ( *(_QWORD *)v23 != 1LL )
        {
          v12 = v24;
          v11 = *(_OWORD *)&v23[8];
          *(_QWORD *)&v18 = &v11;
          *((_QWORD *)&v18 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          p_dest = (__int128 **)v22;
          v20 = <&T as core::fmt::Display>::fmt;
          dest = (__int128 *)&unk_16010;
          *(_QWORD *)&v30 = 2LL;
          v32 = 0LL;
          *((_QWORD *)&v30 + 1) = &v18;
          v31 = (__int64 (__fastcall *)())(&dword_0 + 2);
          std::io::stdio::_print(&dest);
          core::ptr::drop_in_place<alloc::string::String>(v11, *((_QWORD *)&v11 + 1));
          goto LABEL_21;
        }
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(v23);
      }
      v6 = 1;
LABEL_21:
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v13, v17);
      v5 = (__int128 *)v13;
      if ( (_QWORD)v13 == 0x8000000000000000LL )
        goto LABEL_10;
    }
  }
  v6 = 0;
LABEL_10:
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(v17);
  if ( (v6 & 1) == 0 )
    goto LABEL_16;
  v7 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
LABEL_17:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v27);
  return v7;
}