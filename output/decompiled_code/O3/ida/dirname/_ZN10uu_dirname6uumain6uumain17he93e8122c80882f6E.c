__int64 __fastcall uu_dirname::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  bool v3; // zf
  char v4; // al
  const char *v5; // rsi
  void (__fastcall __noreturn *v6)(); // rax
  const char *v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rbp
  __int64 v18; // rax
  char v20; // [rsp+Fh] [rbp-689h] BYREF
  _QWORD v21[2]; // [rsp+10h] [rbp-688h] BYREF
  __int64 v22; // [rsp+20h] [rbp-678h] BYREF
  __int64 v23; // [rsp+28h] [rbp-670h]
  __int128 v24; // [rsp+30h] [rbp-668h]
  __int128 v25; // [rsp+40h] [rbp-658h]
  __int64 v26; // [rsp+50h] [rbp-648h]
  _QWORD v27[2]; // [rsp+58h] [rbp-640h] BYREF
  __int128 v28; // [rsp+68h] [rbp-630h]
  __int128 v29; // [rsp+78h] [rbp-620h]
  __int64 v30; // [rsp+88h] [rbp-610h]
  _QWORD v31[2]; // [rsp+90h] [rbp-608h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-5F8h]
  __int128 v33; // [rsp+B0h] [rbp-5E8h]
  const char *v34; // [rsp+C0h] [rbp-5D8h]
  __int64 v35; // [rsp+C8h] [rbp-5D0h]
  __int128 src; // [rsp+D0h] [rbp-5C8h] BYREF
  __int128 *p_dest; // [rsp+E0h] [rbp-5B8h]
  __int128 v38; // [rsp+E8h] [rbp-5B0h]
  __int128 dest; // [rsp+3A0h] [rbp-2F8h] BYREF
  __int128 v40; // [rsp+3B0h] [rbp-2E8h]
  __int128 v41; // [rsp+3C0h] [rbp-2D8h]
  const char *v42; // [rsp+3D0h] [rbp-2C8h]
  __int64 v43; // [rsp+3D8h] [rbp-2C0h]

  uu_dirname::uu_app(&src);
  clap_builder::builder::command::Command::after_help(&dest, &src);
  clap_builder::builder::command::Command::try_get_matches_from(&v22, &dest, a1, a2);
  if ( v22 != 0x8000000000000000LL )
  {
    v30 = v26;
    v29 = v25;
    v28 = v24;
    v27[0] = v22;
    v27[1] = v23;
    v3 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v27, aZero_0, 4LL) == 0;
    v4 = 10;
    if ( !v3 )
      v4 = 0;
    v20 = v4;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&src, v27, aDir, 3LL);
    v5 = aDir;
    clap_builder::parser::error::MatchesError::unwrap(&dest, aDir, 3LL, &src);
    v6 = (void (__fastcall __noreturn *)())dest;
    if ( (_QWORD)dest )
    {
      v7 = (const char *)*((_QWORD *)&dest + 1);
      v8 = v40;
      v9 = v41;
      v5 = v42;
      v10 = v43;
    }
    else
    {
      v9 = 0LL;
      v8 = (unsigned __int64)"&";
      v7 = "&";
      v6 = core::ops::function::FnOnce::call_once;
      v10 = 0LL;
    }
    v31[0] = v6;
    v31[1] = v7;
    v32 = v8;
    v33 = v9;
    v34 = v5;
    v35 = v10;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v22, v31);
    if ( !(_QWORD)v24 )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&dest);
      p_dest = (__int128 *)v40;
      src = dest;
      LODWORD(v38) = 1;
      v2 = alloc::boxed::Box<T>::new(&src);
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v22);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v27);
      return v2;
    }
    v21[0] = v23;
    v21[1] = v23 + 24 * v24;
    v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v21);
    if ( !v11 )
    {
LABEL_19:
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v22);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v27);
      return 0LL;
    }
    while ( 1 )
    {
      v12 = *(_QWORD *)(v11 + 8);
      v13 = *(_QWORD *)(v11 + 16);
      v14 = std::path::Path::parent(v12, v13);
      v16 = v14;
      if ( v14 )
      {
        v17 = v15;
        std::path::Path::components(&src, v14);
        <std::path::Components as core::iter::traits::iterator::Iterator>::next(&dest, &src);
        if ( (_BYTE)dest == 10 )
          goto LABEL_17;
        v18 = uucore::mods::display::print_verbatim(v16, v17);
        core::result::Result<T,E>::unwrap(v18);
      }
      else
      {
        if ( !(unsigned __int8)std::path::Path::is_absolute(v12, v13)
          && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v12, v13, asc_A50B, 1LL) )
        {
LABEL_17:
          *(_QWORD *)&src = &off_1061F8;
          *((_QWORD *)&src + 1) = 1LL;
          p_dest = (_OWORD *)&byte_8;
          v38 = 0LL;
          std::io::stdio::_print(&src);
          goto LABEL_18;
        }
        *(_QWORD *)&src = &off_1061E8;
        *((_QWORD *)&src + 1) = 1LL;
        p_dest = (_OWORD *)&byte_8;
        v38 = 0LL;
        std::io::stdio::_print(&src);
      }
LABEL_18:
      *(_QWORD *)&dest = &v20;
      *((_QWORD *)&dest + 1) = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
      *(_QWORD *)&src = &unk_9EB0;
      *((_QWORD *)&src + 1) = 1LL;
      p_dest = &dest;
      v38 = 1uLL;
      std::io::stdio::_print(&src);
      v11 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v21);
      if ( !v11 )
        goto LABEL_19;
    }
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23);
}
