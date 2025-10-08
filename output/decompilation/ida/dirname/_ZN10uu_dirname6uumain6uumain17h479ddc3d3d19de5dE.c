__int64 __fastcall uu_dirname::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  bool v4; // zf
  char v5; // al
  __int128 *p_src; // rsi
  void (__fastcall __noreturn *v7)(); // rax
  const char *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rbp
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rbx
  char v22; // [rsp+7h] [rbp-641h] BYREF
  __int64 v23; // [rsp+8h] [rbp-640h]
  __int64 v24; // [rsp+10h] [rbp-638h] BYREF
  __int64 v25; // [rsp+18h] [rbp-630h]
  __int128 v26; // [rsp+20h] [rbp-628h]
  __int128 v27; // [rsp+30h] [rbp-618h]
  __int64 v28; // [rsp+40h] [rbp-608h]
  _QWORD v29[2]; // [rsp+48h] [rbp-600h] BYREF
  __int128 v30; // [rsp+58h] [rbp-5F0h]
  __int128 v31; // [rsp+68h] [rbp-5E0h]
  __int64 v32; // [rsp+78h] [rbp-5D0h]
  __int128 src; // [rsp+80h] [rbp-5C8h] BYREF
  __m256i v34; // [rsp+90h] [rbp-5B8h]
  __int128 *v35; // [rsp+B0h] [rbp-598h]
  __int64 v36; // [rsp+B8h] [rbp-590h]
  __int128 dest; // [rsp+350h] [rbp-2F8h] BYREF
  __int128 v38; // [rsp+360h] [rbp-2E8h]
  __int128 v39; // [rsp+370h] [rbp-2D8h]
  __int128 *v40; // [rsp+380h] [rbp-2C8h]
  __int64 v41; // [rsp+388h] [rbp-2C0h]

  uu_dirname::uu_app(&src);
  clap_builder::builder::command::Command::after_help(&dest, &src);
  clap_builder::builder::command::Command::try_get_matches_from(&v24, &dest, a1, a2);
  if ( __OFSUB__(-v24, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v25,
             &dest,
             v2,
             -v24);
  v32 = v28;
  v31 = v27;
  v30 = v26;
  v29[0] = v24;
  v29[1] = v25;
  v4 = (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v29, aZero_0, 4LL) == 0;
  v5 = 10;
  if ( !v4 )
    v5 = 0;
  v22 = v5;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&src, v29);
  p_src = &src;
  clap_builder::parser::error::MatchesError::unwrap(&dest, &src);
  v7 = (void (__fastcall __noreturn *)())dest;
  if ( (_QWORD)dest )
  {
    v8 = (const char *)*((_QWORD *)&dest + 1);
    v9 = v38;
    v10 = v39;
    p_src = v40;
    v11 = v41;
  }
  else
  {
    v10 = 0LL;
    v9 = (unsigned __int64)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v8 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v7 = core::ops::function::FnOnce::call_once;
    v11 = 0LL;
  }
  *(_QWORD *)&src = v7;
  *((_QWORD *)&src + 1) = v8;
  *(_OWORD *)v34.m256i_i8 = v9;
  *(_OWORD *)&v34.m256i_u64[2] = v10;
  v35 = p_src;
  v36 = v11;
  core::iter::traits::iterator::Iterator::collect(&v24, &src);
  if ( (_QWORD)v26 )
  {
    v12 = v25;
    v23 = 24 * v26;
    v13 = 0LL;
    while ( 1 )
    {
      v14 = *(_QWORD *)(v12 + v13 + 8);
      v15 = *(_QWORD *)(v12 + v13 + 16);
      v16 = std::path::Path::parent(v14, v15);
      v18 = v16;
      if ( v16 )
      {
        v19 = v17;
        std::path::Path::components(&src, v16);
        <std::path::Components as core::iter::traits::iterator::Iterator>::next(&dest, &src);
        if ( (_BYTE)dest == 10 )
          goto LABEL_17;
        v20 = uucore::mods::display::print_verbatim(v18, v19);
        core::result::Result<T,E>::unwrap(v20);
      }
      else
      {
        if ( !(unsigned __int8)std::path::Path::is_absolute(v14, v15)
          && !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                 *(_QWORD *)(v12 + v13 + 8),
                                 *(_QWORD *)(v12 + v13 + 16),
                                 asc_16CFA,
                                 1LL) )
        {
LABEL_17:
          *(_QWORD *)&src = &off_D81E8;
          *((_QWORD *)&src + 1) = 1LL;
          v34.m256i_i64[0] = 8LL;
          *(_OWORD *)&v34.m256i_u64[1] = 0LL;
          std::io::stdio::_print(&src);
          goto LABEL_18;
        }
        *(_QWORD *)&src = &off_D81F8;
        *((_QWORD *)&src + 1) = 1LL;
        v34.m256i_i64[0] = 8LL;
        *(_OWORD *)&v34.m256i_u64[1] = 0LL;
        std::io::stdio::_print(&src);
      }
LABEL_18:
      *(_QWORD *)&dest = &v22;
      *((_QWORD *)&dest + 1) = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
      *(_QWORD *)&src = &unk_169E0;
      *((_QWORD *)&src + 1) = 1LL;
      v34.m256i_i64[0] = (__int64)&dest;
      *(_OWORD *)&v34.m256i_u64[1] = 1uLL;
      std::io::stdio::_print(&src);
      v13 += 24LL;
      if ( v23 == v13 )
      {
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v24);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v29);
        return 0LL;
      }
    }
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, aMissingOperand, 15LL);
  v34.m256i_i64[0] = v38;
  src = dest;
  v34.m256i_i32[2] = 1;
  v21 = alloc::boxed::Box<T>::new(&src);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v24);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v29);
  return v21;
}