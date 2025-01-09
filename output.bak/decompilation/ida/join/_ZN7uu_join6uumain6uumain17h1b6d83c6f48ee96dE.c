__int64 __fastcall uu_join::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r12
  __int64 v17; // r15
  char **v19; // rdi
  __int128 v20; // [rsp+0h] [rbp-568h] BYREF
  _BYTE v21[80]; // [rsp+10h] [rbp-558h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-508h] BYREF
  char v23; // [rsp+68h] [rbp-500h]
  _BYTE v24[15]; // [rsp+69h] [rbp-4FFh]
  _QWORD v25[2]; // [rsp+78h] [rbp-4F0h]
  _OWORD v26[3]; // [rsp+88h] [rbp-4E0h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-4B0h]
  __int128 v28[6]; // [rsp+C0h] [rbp-4A8h] BYREF
  __int128 src[46]; // [rsp+120h] [rbp-448h] BYREF
  _OWORD dest[22]; // [rsp+400h] [rbp-168h] BYREF

  uu_join::uu_app(src);
  clap_builder::builder::command::Command::try_get_matches_from(dest, src, a1, a2);
  if ( *(_QWORD *)&dest[0] != 0x8000000000000000LL )
  {
    v27 = *(_QWORD *)&dest[3];
    v26[2] = dest[2];
    v26[1] = dest[1];
    v26[0] = dest[0];
    uu_join::parse_settings((__int64)src, (__int64)v26);
    v2 = *((_QWORD *)&src[0] + 1);
    if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
    {
      *(_QWORD *)&v21[72] = *((_QWORD *)&src[5] + 1);
      *(_OWORD *)&v21[56] = *(__int128 *)((char *)&src[4] + 8);
      *(_OWORD *)&v21[40] = *(__int128 *)((char *)&src[3] + 8);
      *(_OWORD *)&v21[24] = *(__int128 *)((char *)&src[2] + 8);
      *(_OWORD *)&v21[8] = *(__int128 *)((char *)&src[1] + 8);
      v20 = src[0];
      *(_QWORD *)v21 = *(_QWORD *)&src[1];
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, v26, aFile1, 5LL);
      v3 = clap_builder::parser::error::MatchesError::unwrap(aFile1, 5LL, src);
      if ( v3 )
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, v26, aFile2, 5LL);
        v4 = clap_builder::parser::error::MatchesError::unwrap(aFile2, 5LL, src);
        if ( v4 )
        {
          v5 = *(_QWORD *)(v3 + 8);
          v6 = *(_QWORD *)(v3 + 16);
          if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, asc_C066, 1LL)
            || !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                   *(_QWORD *)(v4 + 8),
                                   *(_QWORD *)(v4 + 16),
                                   asc_C066,
                                   1LL) )
          {
            v7 = *(_QWORD *)&v21[32] ^ 0x8000000000000000LL;
            v8 = 1LL;
            if ( (*(_QWORD *)&v21[32] ^ 0x8000000000000000LL) >= 4 )
              v7 = 1LL;
            switch ( v7 )
            {
              case 0uLL:
                LOBYTE(v7) = v21[40];
LABEL_21:
                v11 = *(_QWORD *)(v4 + 8);
                v12 = *(_QWORD *)(v4 + 16);
                src[5] = *(_OWORD *)&v21[64];
                src[4] = *(_OWORD *)&v21[48];
                src[3] = *(_OWORD *)&v21[32];
                src[2] = *(_OWORD *)&v21[16];
                src[1] = *(_OWORD *)v21;
                src[0] = v20;
                v13 = uu_join::exec(v5, v6, v11, v12, src, v7);
LABEL_25:
                v2 = v13;
                goto LABEL_27;
              case 1uLL:
                <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(src, &v21[32]);
                v9 = *(_QWORD *)&src[0];
                LOBYTE(v7) = BYTE8(src[0]);
                v25[0] = *(_QWORD *)((char *)src + 9);
                v10 = 1LL;
                if ( (*(_QWORD *)&src[0] ^ 0x8000000000000000LL) < 4 )
                  v10 = *(_QWORD *)&src[0] ^ 0x8000000000000000LL;
                *(_QWORD *)((char *)v25 + 7) = *(_QWORD *)&src[1];
                switch ( v10 )
                {
                  case 0uLL:
                    goto LABEL_21;
                  case 1uLL:
                    goto LABEL_26;
                  case 2uLL:
                    goto LABEL_22;
                  case 3uLL:
                    goto LABEL_24;
                }
              case 2uLL:
                v9 = 0x8000000000000002LL;
                goto LABEL_15;
              case 3uLL:
                v9 = 0x8000000000000003LL;
LABEL_15:
                if ( (v9 ^ 0x8000000000000000LL) < 4 )
                  v8 = v9 ^ 0x8000000000000000LL;
                switch ( v8 )
                {
                  case 0uLL:
                    goto LABEL_21;
                  case 1uLL:
LABEL_26:
                    v22 = v9;
                    v23 = v7;
                    *(_QWORD *)v24 = v25[0];
                    *(_QWORD *)&v24[7] = *(_QWORD *)((char *)v25 + 7);
                    v16 = *(_QWORD *)(v4 + 8);
                    v17 = *(_QWORD *)(v4 + 16);
                    v28[5] = *(_OWORD *)&v21[64];
                    v28[4] = *(_OWORD *)&v21[48];
                    v28[3] = *(_OWORD *)&v21[32];
                    v28[2] = *(_OWORD *)&v21[16];
                    v28[1] = *(_OWORD *)v21;
                    v28[0] = v20;
                    LOBYTE(dest[0]) = 1;
                    memchr::memmem::FinderBuilder::build_forward_with_ranker(src);
                    memcpy(dest, src, 0x120uLL);
                    v2 = uu_join::exec(v5, v6, v16, v17, v28, dest);
                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v22);
                    goto LABEL_27;
                  case 2uLL:
LABEL_22:
                    src[5] = *(_OWORD *)&v21[64];
                    src[4] = *(_OWORD *)&v21[48];
                    src[3] = *(_OWORD *)&v21[32];
                    src[2] = *(_OWORD *)&v21[16];
                    src[1] = *(_OWORD *)v21;
                    src[0] = v20;
                    JUMPOUT(0x75497LL);
                  case 3uLL:
LABEL_24:
                    v14 = *(_QWORD *)(v4 + 8);
                    v15 = *(_QWORD *)(v4 + 16);
                    src[5] = *(_OWORD *)&v21[64];
                    src[4] = *(_OWORD *)&v21[48];
                    src[3] = *(_OWORD *)&v21[32];
                    src[2] = *(_OWORD *)&v21[16];
                    src[1] = *(_OWORD *)v21;
                    src[0] = v20;
                    v13 = uu_join::exec(v5, v6, v14, v15, src);
                    goto LABEL_25;
                }
            }
          }
          <T as alloc::slice::hack::ConvertVec>::to_vec(dest);
          *(_QWORD *)&src[1] = *(_QWORD *)&dest[1];
          src[0] = dest[0];
          DWORD2(src[1]) = 1;
          v2 = alloc::boxed::Box<T>::new(src);
          core::ptr::drop_in_place<uu_join::Settings>(&v20);
          goto LABEL_27;
        }
        v19 = &off_1327D8;
      }
      else
      {
        v19 = &off_1327C0;
      }
      core::option::unwrap_failed(v19);
    }
LABEL_27:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v26);
    return v2;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&dest[0] + 1));
}
