__int64 __fastcall uu_join::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // r14
  char **v19; // rdi
  __int128 v20; // [rsp+18h] [rbp-550h] BYREF
  _BYTE v21[80]; // [rsp+28h] [rbp-540h]
  __int64 v22; // [rsp+78h] [rbp-4F0h]
  __int64 v23; // [rsp+80h] [rbp-4E8h]
  _OWORD v24[3]; // [rsp+88h] [rbp-4E0h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-4B0h]
  _OWORD v26[6]; // [rsp+C0h] [rbp-4A8h] BYREF
  _OWORD src[46]; // [rsp+120h] [rbp-448h] BYREF
  _OWORD dest[22]; // [rsp+400h] [rbp-168h] BYREF

  uu_join::uu_app(src);
  clap_builder::builder::command::Command::try_get_matches_from(dest, src, a1, a2);
  if ( __OFSUB__(-*(_QWORD *)&dest[0], 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&dest[0] + 1),
             src,
             v2,
             -*(_QWORD *)&dest[0]);
  v25 = *(_QWORD *)&dest[3];
  v24[2] = dest[2];
  v24[1] = dest[1];
  v24[0] = dest[0];
  uu_join::parse_settings(src, v24);
  v4 = *((_QWORD *)&src[0] + 1);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
  {
    *(_QWORD *)&v21[72] = *((_QWORD *)&src[5] + 1);
    *(_OWORD *)&v21[56] = *(_OWORD *)((char *)&src[4] + 8);
    *(_OWORD *)&v21[40] = *(_OWORD *)((char *)&src[3] + 8);
    *(_OWORD *)&v21[24] = *(_OWORD *)((char *)&src[2] + 8);
    *(_OWORD *)&v21[8] = *(_OWORD *)((char *)&src[1] + 8);
    v20 = src[0];
    *(_QWORD *)v21 = *(_QWORD *)&src[1];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, v24, aFile1file2);
    v5 = clap_builder::parser::error::MatchesError::unwrap(aFile1file2, src);
    if ( v5 )
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(src, v24, &aFile1file2[5]);
      v6 = clap_builder::parser::error::MatchesError::unwrap(&aFile1file2[5], src);
      if ( v6 )
      {
        v7 = 1LL;
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                *(_QWORD *)(v5 + 8),
                                *(_QWORD *)(v5 + 16),
                                asc_19CD6,
                                1LL)
          && (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                *(_QWORD *)(v6 + 8),
                                *(_QWORD *)(v6 + 16),
                                asc_19CD6,
                                1LL) )
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, aBothFilesCanno, 35LL);
          *(_QWORD *)&src[1] = *(_QWORD *)&dest[1];
          src[0] = dest[0];
          DWORD2(src[1]) = 1;
          v4 = alloc::boxed::Box<T>::new(src);
          core::ptr::drop_in_place<uu_join::Settings>(&v20);
        }
        else
        {
          v8 = *(_QWORD *)&v21[32];
          if ( (*(_QWORD *)&v21[32] ^ 0x8000000000000000LL) < 4 )
            v7 = *(_QWORD *)&v21[32] ^ 0x8000000000000000LL;
          switch ( v7 )
          {
            case 0uLL:
              LOBYTE(v9) = v21[40];
              v7 = ((unsigned __int64)((v21[47] << 16) | (unsigned int)*(unsigned __int16 *)&v21[45]) << 32) | *(unsigned int *)&v21[41];
              v10 = 1LL;
              if ( (*(_QWORD *)&v21[32] ^ 0x8000000000000000LL) < 4 )
                v10 = *(_QWORD *)&v21[32] ^ 0x8000000000000000LL;
              switch ( v10 )
              {
                case 0uLL:
                  goto LABEL_23;
                case 1uLL:
                  goto LABEL_28;
                case 2uLL:
                  goto LABEL_25;
                case 3uLL:
                  goto LABEL_27;
              }
            case 1uLL:
              <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(src, *(_QWORD *)&v21[40], *(_QWORD *)&v21[48]);
              v8 = *(_QWORD *)&src[0];
              LOBYTE(v9) = BYTE8(src[0]);
              v7 = ((unsigned __int64)((HIBYTE(src[0]) << 16) | (unsigned int)*(unsigned __int16 *)((char *)src + 13)) << 32) | *(unsigned int *)((char *)src + 9);
              v11 = 1LL;
              if ( (*(_QWORD *)&src[0] ^ 0x8000000000000000LL) < 4 )
                v11 = *(_QWORD *)&src[0] ^ 0x8000000000000000LL;
              switch ( v11 )
              {
                case 0uLL:
                  goto LABEL_23;
                case 1uLL:
                  goto LABEL_28;
                case 2uLL:
                  goto LABEL_25;
                case 3uLL:
                  goto LABEL_27;
              }
            case 2uLL:
              v8 = 0x8000000000000002LL;
              break;
            case 3uLL:
              v8 = 0x8000000000000003LL;
              break;
          }
          v9 = 1LL;
          if ( (v8 ^ 0x8000000000000000LL) < 4 )
            v9 = v8 ^ 0x8000000000000000LL;
          switch ( v9 )
          {
            case 0uLL:
LABEL_23:
              src[5] = *(_OWORD *)&v21[64];
              src[4] = *(_OWORD *)&v21[48];
              src[3] = *(_OWORD *)&v21[32];
              src[2] = *(_OWORD *)&v21[16];
              src[1] = *(_OWORD *)v21;
              src[0] = v20;
              JUMPOUT(0x660E3LL);
            case 1uLL:
LABEL_28:
              v16 = (unsigned __int8)v9 | (v7 << 8);
              v17 = *(_QWORD *)(v5 + 8);
              v23 = *(_QWORD *)(v5 + 16);
              v22 = *(_QWORD *)(v6 + 8);
              v18 = *(_QWORD *)(v6 + 16);
              v26[5] = *(_OWORD *)&v21[64];
              v26[4] = *(_OWORD *)&v21[48];
              v26[3] = *(_OWORD *)&v21[32];
              v26[2] = *(_OWORD *)&v21[16];
              v26[1] = *(_OWORD *)v21;
              v26[0] = v20;
              memchr::memmem::FinderBuilder::build_forward_with_ranker(src);
              memcpy(dest, src, 0x120uLL);
              v4 = uu_join::exec(v17, v23, v22, v18, v26, dest);
              core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v8, v16);
              break;
            case 2uLL:
LABEL_25:
              src[5] = *(_OWORD *)&v21[64];
              src[4] = *(_OWORD *)&v21[48];
              src[3] = *(_OWORD *)&v21[32];
              src[2] = *(_OWORD *)&v21[16];
              src[1] = *(_OWORD *)v21;
              JUMPOUT(0x6614BLL);
            case 3uLL:
LABEL_27:
              v12 = *(_QWORD *)(v5 + 8);
              v13 = *(_QWORD *)(v5 + 16);
              v14 = *(_QWORD *)(v6 + 8);
              v15 = *(_QWORD *)(v6 + 16);
              src[5] = *(_OWORD *)&v21[64];
              src[4] = *(_OWORD *)&v21[48];
              src[3] = *(_OWORD *)&v21[32];
              src[2] = *(_OWORD *)&v21[16];
              src[1] = *(_OWORD *)v21;
              src[0] = v20;
              v4 = uu_join::exec(v12, v13, v14, v15, src);
              break;
          }
        }
        goto LABEL_29;
      }
      v19 = &off_FD4F0;
    }
    else
    {
      v19 = &off_FD4D8;
    }
    core::option::unwrap_failed(v19);
  }
LABEL_29:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v24);
  return v4;
}