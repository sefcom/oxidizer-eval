__int64 __fastcall uu_csplit::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rax
  char v7; // dl
  __int64 v8; // rax
  _BYTE *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // r14
  char **v13; // rdi
  __int64 v14; // [rsp+8h] [rbp-4A0h] BYREF
  _BYTE v15[8]; // [rsp+10h] [rbp-498h] BYREF
  __int64 v16; // [rsp+18h] [rbp-490h]
  __int64 v17; // [rsp+20h] [rbp-488h]
  _OWORD v18[3]; // [rsp+28h] [rbp-480h] BYREF
  __int64 v19; // [rsp+58h] [rbp-450h]
  _BYTE dest[48]; // [rsp+60h] [rbp-448h] BYREF
  __int128 v21; // [rsp+90h] [rbp-418h]
  _OWORD v22[4]; // [rsp+110h] [rbp-398h] BYREF
  _BYTE v23[104]; // [rsp+158h] [rbp-350h] BYREF
  _BYTE v24[720]; // [rsp+1C0h] [rbp-2E8h] BYREF

  uu_csplit::uu_app(v24);
  clap_builder::builder::command::Command::try_get_matches_from(dest, v24, a1, a2);
  if ( *(_QWORD *)dest != 0x8000000000000000LL )
  {
    v19 = v21;
    v18[2] = *(_OWORD *)&dest[32];
    v18[1] = *(_OWORD *)&dest[16];
    v18[0] = *(_OWORD *)dest;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v24, v18, "filemode{", 4LL);
    v3 = clap_builder::parser::error::MatchesError::unwrap("filemode{", 4LL, v24);
    if ( v3 )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v24, v18, aPattern, 7LL);
      clap_builder::parser::error::MatchesError::unwrap(dest, aPattern, 7LL, v24);
      if ( *(_QWORD *)dest )
      {
        v22[3] = v21;
        v22[2] = *(_OWORD *)&dest[32];
        v22[1] = *(_OWORD *)&dest[16];
        v22[0] = *(_OWORD *)dest;
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v15, v22);
        uu_csplit::CsplitOptions::new(v23, v18);
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                *(_QWORD *)(v3 + 8),
                                *(_QWORD *)(v3 + 16),
                                asc_66646,
                                1LL) )
        {
          v14 = std::io::stdio::stdin();
          v4 = v16;
          v5 = v17;
          v6 = std::io::stdio::Stdin::lock(&v14);
          uu_csplit::csplit((__int64)dest, (__int64)v23, v4, v5, v6, v7 & 1);
          if ( *(_DWORD *)dest == 12 )
          {
LABEL_7:
            core::ptr::drop_in_place<uu_csplit::CsplitOptions>(v23);
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v15);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v18);
            return 0LL;
          }
          *(_QWORD *)&v24[32] = *(_QWORD *)&dest[32];
          *(_OWORD *)&v24[16] = *(_OWORD *)&dest[16];
          *(_OWORD *)v24 = *(_OWORD *)dest;
          v8 = alloc::boxed::Box<T>::new(v24);
          goto LABEL_11;
        }
        std::fs::File::open(v24, v3);
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          dest,
          v24,
          v3);
        v2 = *(_QWORD *)dest;
        if ( *(_QWORD *)dest )
          goto LABEL_19;
        LODWORD(v14) = *(_DWORD *)&dest[8];
        std::fs::File::metadata(v24, &v14);
        v9 = v24;
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(dest);
        if ( *(_DWORD *)dest == 2 )
        {
          v2 = *(_QWORD *)&dest[8];
        }
        else
        {
          if ( (WORD4(v21) & 0xF000) == 0x8000 )
          {
            v10 = v16;
            v11 = v17;
            std::io::buffered::bufreader::BufReader<R>::with_capacity(v24, 0x2000LL, (unsigned int)v14);
            uu_csplit::csplit((__int64)dest, (__int64)v23, v10, v11, (__int64)v24);
            if ( *(_QWORD *)dest == 12LL )
              goto LABEL_7;
            *(_OWORD *)&v24[24] = *(_OWORD *)&dest[24];
            *(_OWORD *)&v24[8] = *(_OWORD *)&dest[8];
            *(_QWORD *)v24 = *(_QWORD *)dest;
            v8 = alloc::boxed::Box<T>::new(v24);
LABEL_11:
            v2 = v8;
LABEL_19:
            core::ptr::drop_in_place<uu_csplit::CsplitOptions>(v23);
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v15);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v18);
            return v2;
          }
          v9 = (_BYTE *)v3;
          <alloc::string::String as core::clone::Clone>::clone(dest, v3);
          *(_QWORD *)&v24[24] = *(_QWORD *)&dest[16];
          *(_OWORD *)&v24[8] = *(_OWORD *)dest;
          *(_QWORD *)v24 = 11LL;
          v2 = alloc::boxed::Box<T>::new(v24);
        }
        core::ptr::drop_in_place<std::fs::File>((unsigned int)v14, v9);
        goto LABEL_19;
      }
      v13 = &off_2DECC0;
    }
    else
    {
      v13 = &off_2DECA8;
    }
    core::option::unwrap_failed(v13);
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&dest[8]);
}
