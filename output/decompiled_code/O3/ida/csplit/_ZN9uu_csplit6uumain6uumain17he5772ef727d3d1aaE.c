__int64 __fastcall uu_csplit::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rax
  char v7; // dl
  __m256i *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // r14
  char **v12; // rdi
  __int64 v13; // [rsp+8h] [rbp-4A0h] BYREF
  _BYTE v14[8]; // [rsp+10h] [rbp-498h] BYREF
  __int64 v15; // [rsp+18h] [rbp-490h]
  __int64 v16; // [rsp+20h] [rbp-488h]
  __m256i v17; // [rsp+28h] [rbp-480h] BYREF
  __int128 v18; // [rsp+48h] [rbp-460h]
  __int64 v19; // [rsp+58h] [rbp-450h]
  __m256i dest; // [rsp+60h] [rbp-448h] BYREF
  __int128 v21; // [rsp+80h] [rbp-428h]
  __int128 v22; // [rsp+90h] [rbp-418h]
  __m256i v23; // [rsp+110h] [rbp-398h] BYREF
  __int128 v24; // [rsp+130h] [rbp-378h]
  __int128 v25; // [rsp+140h] [rbp-368h]
  _BYTE v26[104]; // [rsp+158h] [rbp-350h] BYREF
  __m256i v27; // [rsp+1C0h] [rbp-2E8h] BYREF
  __int64 v28; // [rsp+1E0h] [rbp-2C8h]

  uu_csplit::uu_app(&v27);
  clap_builder::builder::command::Command::try_get_matches_from(&dest, &v27, a1, a2);
  if ( dest.m256i_i64[0] != 0x8000000000000000LL )
  {
    v19 = v22;
    v18 = v21;
    v17 = dest;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v27, &v17, "filemode{", 4LL);
    v3 = clap_builder::parser::error::MatchesError::unwrap("filemode{", 4LL, &v27);
    if ( v3 )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v27, &v17, aPattern, 7LL);
      clap_builder::parser::error::MatchesError::unwrap(&dest, aPattern, 7LL, &v27);
      if ( dest.m256i_i64[0] )
      {
        v25 = v22;
        v24 = v21;
        v23 = dest;
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v14, &v23);
        uu_csplit::CsplitOptions::new((__int64)v26, (__int64)&v17);
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                *(_QWORD *)(v3 + 8),
                                *(_QWORD *)(v3 + 16),
                                asc_66746,
                                1LL) )
        {
          v13 = std::io::stdio::stdin();
          v4 = v15;
          v5 = v16;
          v6 = std::io::stdio::Stdin::lock(&v13);
          uu_csplit::csplit((__int64)&dest, (__int64)v26, v4, v5, v6, v7 & 1);
          if ( dest.m256i_i32[0] == 12 )
          {
LABEL_7:
            core::ptr::drop_in_place<uu_csplit::CsplitOptions>(v26);
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v14);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v17);
            return 0LL;
          }
          goto LABEL_10;
        }
        std::fs::File::open(&v27, v3);
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          &dest,
          &v27,
          v3);
        v2 = dest.m256i_i64[0];
        if ( dest.m256i_i64[0] )
          goto LABEL_18;
        LODWORD(v13) = dest.m256i_i32[2];
        std::fs::File::metadata(&v27, &v13);
        v8 = &v27;
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&dest);
        if ( dest.m256i_i32[0] == 2 )
        {
          v2 = dest.m256i_i64[1];
        }
        else
        {
          if ( (WORD4(v22) & 0xF000) == 0x8000 )
          {
            v9 = v15;
            v10 = v16;
            std::io::buffered::bufreader::BufReader<R>::with_capacity(&v27, 0x2000LL, (unsigned int)v13);
            uu_csplit::csplit((__int64)&dest, (__int64)v26, v9, v10, (__int64)&v27);
            if ( dest.m256i_i32[0] == 12 )
              goto LABEL_7;
LABEL_10:
            v28 = v21;
            v27 = dest;
            v2 = alloc::boxed::Box<T>::new(&v27);
LABEL_18:
            core::ptr::drop_in_place<uu_csplit::CsplitOptions>(v26);
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v14);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v17);
            return v2;
          }
          v8 = (__m256i *)v3;
          <alloc::string::String as core::clone::Clone>::clone(&dest, v3);
          v27.m256i_i64[3] = dest.m256i_i64[2];
          *(_OWORD *)&v27.m256i_u64[1] = *(_OWORD *)dest.m256i_i8;
          v27.m256i_i64[0] = 11LL;
          v2 = alloc::boxed::Box<T>::new(&v27);
        }
        core::ptr::drop_in_place<std::fs::File>((unsigned int)v13, v8);
        goto LABEL_18;
      }
      v12 = &off_2DF900;
    }
    else
    {
      v12 = &off_2DF8E8;
    }
    core::option::unwrap_failed(v12);
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(dest.m256i_i64[1]);
}
