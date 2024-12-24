__int64 __fastcall uu_join::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // r15
  char **v18; // rdi
  __int128 v19; // [rsp+10h] [rbp-558h] BYREF
  _BYTE v20[80]; // [rsp+20h] [rbp-548h] BYREF
  __int64 v21; // [rsp+70h] [rbp-4F8h] BYREF
  char v22; // [rsp+78h] [rbp-4F0h]
  _BYTE v23[15]; // [rsp+79h] [rbp-4EFh]
  _OWORD v24[3]; // [rsp+88h] [rbp-4E0h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-4B0h]
  __int128 v26[6]; // [rsp+C0h] [rbp-4A8h] BYREF
  __int128 src[46]; // [rsp+120h] [rbp-448h] BYREF
  _OWORD dest[22]; // [rsp+400h] [rbp-168h] BYREF

  uu_join::uu_app(src);
  clap_builder::builder::command::Command::try_get_matches_from(dest, src, a1, a2);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
  {
    v25 = *(_QWORD *)&dest[3];
    v24[2] = dest[2];
    v24[1] = dest[1];
    v24[0] = dest[0];
    uu_join::parse_settings((__int64)src, (__int64)v24);
    v2 = *((_QWORD *)&src[0] + 1);
    if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    {
      *(_QWORD *)&v20[72] = *((_QWORD *)&src[5] + 1);
      *(_OWORD *)&v20[56] = *(__int128 *)((char *)&src[4] + 8);
      *(_OWORD *)&v20[40] = *(__int128 *)((char *)&src[3] + 8);
      *(_OWORD *)&v20[24] = *(__int128 *)((char *)&src[2] + 8);
      *(_OWORD *)&v20[8] = *(__int128 *)((char *)&src[1] + 8);
      v19 = src[0];
      *(_QWORD *)v20 = *(_QWORD *)&src[1];
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, v24, aFile1, 5LL);
      v3 = clap_builder::parser::error::MatchesError::unwrap(aFile1, 5LL, src);
      if ( v3 )
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, v24, aFile2, 5LL);
        v4 = clap_builder::parser::error::MatchesError::unwrap(aFile2, 5LL, src);
        if ( v4 )
        {
          v5 = *(_QWORD *)(v3 + 8);
          v6 = *(_QWORD *)(v3 + 16);
          if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, asc_C03E, 1LL)
            && (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                  *(_QWORD *)(v4 + 8),
                                  *(_QWORD *)(v4 + 16),
                                  asc_C03E,
                                  1LL) )
          {
            <T as alloc::slice::hack::ConvertVec>::to_vec(dest);
            *(_QWORD *)&src[1] = *(_QWORD *)&dest[1];
            src[0] = dest[0];
            DWORD2(src[1]) = 1;
            v2 = alloc::boxed::Box<T>::new(src);
            core::ptr::drop_in_place<uu_join::Settings>(&v19);
          }
          else
          {
            v7 = 1LL;
            if ( (*(_QWORD *)&v20[32] ^ 0x8000000000000000LL) < 4 )
              v7 = *(_QWORD *)&v20[32] ^ 0x8000000000000000LL;
            switch ( v7 )
            {
              case 0uLL:
                v8 = *(_QWORD *)(v4 + 8);
                v9 = *(_QWORD *)(v4 + 16);
                src[5] = *(_OWORD *)&v20[64];
                src[4] = *(_OWORD *)&v20[48];
                src[3] = *(_OWORD *)&v20[32];
                src[2] = *(_OWORD *)&v20[16];
                src[1] = *(_OWORD *)v20;
                src[0] = v19;
                v10 = uu_join::exec(v5, v6, v8, v9, src, v20[40]);
                goto LABEL_15;
              case 1uLL:
                <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(src, &v20[32]);
                *(_QWORD *)&v23[7] = *(_QWORD *)&src[1];
                *(_QWORD *)v23 = *(_QWORD *)((char *)src + 9);
                v21 = *(_QWORD *)&src[0];
                v22 = BYTE8(src[0]);
                v15 = *(_QWORD *)(v4 + 8);
                v16 = *(_QWORD *)(v4 + 16);
                v26[5] = *(_OWORD *)&v20[64];
                v26[4] = *(_OWORD *)&v20[48];
                v26[3] = *(_OWORD *)&v20[32];
                v26[2] = *(_OWORD *)&v20[16];
                v26[1] = *(_OWORD *)v20;
                v26[0] = v19;
                LOBYTE(dest[0]) = 1;
                memchr::memmem::FinderBuilder::build_forward_with_ranker(src);
                memcpy(dest, src, 0x120uLL);
                v2 = uu_join::exec(v5, v6, v15, v16, v26, dest);
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v21);
                goto LABEL_17;
              case 2uLL:
                v11 = *(_QWORD *)(v4 + 8);
                v12 = *(_QWORD *)(v4 + 16);
                src[5] = *(_OWORD *)&v20[64];
                src[4] = *(_OWORD *)&v20[48];
                src[3] = *(_OWORD *)&v20[32];
                src[2] = *(_OWORD *)&v20[16];
                src[1] = *(_OWORD *)v20;
                src[0] = v19;
                v10 = uu_join::exec(v5, v6, v11, v12, src);
                goto LABEL_15;
              case 3uLL:
                v13 = *(_QWORD *)(v4 + 8);
                v14 = *(_QWORD *)(v4 + 16);
                src[5] = *(_OWORD *)&v20[64];
                src[4] = *(_OWORD *)&v20[48];
                src[3] = *(_OWORD *)&v20[32];
                src[2] = *(_OWORD *)&v20[16];
                src[1] = *(_OWORD *)v20;
                src[0] = v19;
                v10 = uu_join::exec(v5, v6, v13, v14, src);
LABEL_15:
                v2 = v10;
                break;
            }
          }
          goto LABEL_17;
        }
        v18 = &off_133378;
      }
      else
      {
        v18 = &off_133360;
      }
      core::option::unwrap_failed(v18);
    }
LABEL_17:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v24);
    return v2;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&dest[0] + 1));
}
