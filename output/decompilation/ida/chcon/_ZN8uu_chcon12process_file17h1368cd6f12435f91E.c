__int64 __fastcall uu_chcon::process_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  FTSENT *v5; // r15
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __m128 v15; // xmm0
  struct stat *fts_statp; // rcx
  __dev_t st_dev; // r8
  __int128 *st_ino; // rdi
  __int64 v19; // rdx
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int128 v26; // xmm3
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm2
  __int64 v32; // rsi
  __int64 v33; // rbp
  __int64 v34; // rbp
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int128 v39; // [rsp+0h] [rbp-1B8h] BYREF
  __int128 v40; // [rsp+10h] [rbp-1A8h]
  __int128 v41; // [rsp+20h] [rbp-198h]
  __int128 v42; // [rsp+30h] [rbp-188h]
  __int64 v43; // [rsp+40h] [rbp-178h]
  __int128 v44; // [rsp+50h] [rbp-168h] BYREF
  _BYTE v45[56]; // [rsp+60h] [rbp-158h]
  __int128 v46; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-108h]
  __int128 v48; // [rsp+C0h] [rbp-F8h] BYREF
  __int128 v49; // [rsp+D0h] [rbp-E8h]
  __int128 v50; // [rsp+E0h] [rbp-D8h]
  __int128 v51; // [rsp+F0h] [rbp-C8h]
  __int64 v52; // [rsp+100h] [rbp-B8h]
  __dev_t v53; // [rsp+110h] [rbp-A8h]
  __int128 *v54; // [rsp+118h] [rbp-A0h]
  __int64 v55; // [rsp+120h] [rbp-98h]
  __int64 v56; // [rsp+128h] [rbp-90h]
  _QWORD v57[2]; // [rsp+130h] [rbp-88h] BYREF
  _QWORD v58[15]; // [rsp+140h] [rbp-78h] BYREF

  v5 = *(FTSENT **)(a4 + 8);
  if ( !v5 )
    core::option::unwrap_failed(&off_F0488);
  v11 = uu_chcon::fts::EntryRef::path(*(_QWORD *)(a4 + 8));
  if ( !v11 || (<T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v44, v11), __OFSUB__(0LL, (_QWORD)v44)) )
  {
    *(_DWORD *)a1 = 16;
    *(_QWORD *)(a1 + 8) = aFileNameValida;
    *(_QWORD *)(a1 + 16) = 20LL;
    result = 0x1400000003LL;
    *(_QWORD *)(a1 + 24) = 0x1400000003LL;
    return result;
  }
  v46 = v44;
  v47 = *(_QWORD *)v45;
  v13 = uu_chcon::fts::EntryRef::access_path((__int64)v5);
  if ( v13
    || (uu_chcon::errors::Error::from_io1(&v44, aFileNameValida, 20LL, &v46, 0x1400000003LL),
        v15 = (__m128)(unsigned __int64)v44,
        v13 = *((_QWORD *)&v44 + 1),
        v14 = *(_QWORD *)v45,
        v39 = *(_OWORD *)&v45[8],
        v40 = *(_OWORD *)&v45[24],
        v41 = *(_OWORD *)&v45[40],
        (_DWORD)v44 == 18) )
  {
    fts_statp = v5->fts_statp;
    if ( fts_statp )
    {
      v56 = v14;
      st_dev = fts_statp->st_dev;
      st_ino = (__int128 *)fts_statp->st_ino;
      LODWORD(v48) = 18;
      v19 = (unsigned int)v5->fts_info - 1;
      switch ( v5->fts_info )
      {
        case 1u:
          if ( !*(_BYTE *)(a2 + 123) )
            goto LABEL_29;
          if ( *(_DWORD *)a5 != 1 || *(_QWORD *)(a5 + 8) != st_dev || *(__int128 **)(a5 + 16) != st_ino )
            goto LABEL_25;
          uu_chcon::root_dev_ino_warn(*((_QWORD *)&v46 + 1), v47);
          uu_chcon::fts::FTS::set((__int64)v58, *(FTS **)a4, v5, 4);
          uu_chcon::fts::FTS::read_next_entry((__int64)&v39, a4);
          uu_chcon::errors::Error::from_io1(&v44, aModifyingRootP, 19LL, &v46, 0x100000003LL);
          *(_QWORD *)(a1 + 64) = *(_QWORD *)&v45[48];
          v20 = v44;
          v21 = *(_OWORD *)v45;
          v22 = *(_OWORD *)&v45[16];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v45[32];
          *(_OWORD *)(a1 + 32) = v22;
          *(_OWORD *)(a1 + 16) = v21;
          *(_OWORD *)a1 = v20;
          core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(&v39);
          core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(v58);
          goto LABEL_26;
        case 2u:
          fts_statp = (struct stat *)*(unsigned __int8 *)(a2 + 123);
          if ( (unsigned int)fts_statp >= 2 && ((_DWORD)fts_statp == 2 || !v5->fts_level) )
            goto LABEL_29;
          uu_chcon::emit_cycle_warning(*((_QWORD *)&v46 + 1), v47, v19, fts_statp, st_dev);
          uu_chcon::errors::Error::from_io1(&v44, aReadingCyclicD, 24LL, &v46, 0x1500000003LL);
          *(_QWORD *)(a1 + 64) = *(_QWORD *)&v45[48];
          v29 = v44;
          v30 = *(_OWORD *)v45;
          v31 = *(_OWORD *)&v45[16];
          *(_OWORD *)(a1 + 48) = *(_OWORD *)&v45[32];
          *(_OWORD *)(a1 + 32) = v31;
          *(_OWORD *)(a1 + 16) = v30;
          *(_OWORD *)a1 = v29;
          goto LABEL_26;
        case 4u:
          v53 = st_dev;
          v54 = st_ino;
          v55 = v13;
          uu_chcon::errors::Error::from_io1(
            &v44,
            aReadingDirecto,
            17LL,
            &v46,
            ((unsigned __int64)(unsigned int)v5->fts_errno << 32) | 2);
          v43 = *(_QWORD *)&v45[48];
          v42 = *(_OWORD *)&v45[32];
          v41 = *(_OWORD *)&v45[16];
          v40 = *(_OWORD *)v45;
          v39 = v44;
          core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(&v48);
          goto LABEL_28;
        case 6u:
          if ( *(_BYTE *)(a2 + 123) )
            goto LABEL_29;
LABEL_25:
          *(_DWORD *)a1 = 18;
          goto LABEL_26;
        case 7u:
          goto LABEL_27;
        case 0xAu:
          if ( v5->fts_level || v5->fts_number )
          {
LABEL_27:
            v53 = st_dev;
            v54 = st_ino;
            v55 = v13;
            uu_chcon::errors::Error::from_io1(
              &v44,
              aAccessing,
              9LL,
              &v46,
              ((unsigned __int64)(unsigned int)v5->fts_errno << 32) | 2);
            v43 = *(_QWORD *)&v45[48];
            v42 = *(_OWORD *)&v45[32];
            v41 = *(_OWORD *)&v45[16];
            v40 = *(_OWORD *)v45;
            v39 = v44;
            core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(&v48);
LABEL_28:
            v52 = v43;
            v51 = v42;
            v50 = v41;
            v49 = v40;
            v48 = v39;
            v13 = v55;
            st_ino = v54;
            st_dev = v53;
LABEL_29:
            LOBYTE(fts_statp) = v5->fts_info == 6;
            v32 = (unsigned int)v48;
            LOBYTE(v19) = (_DWORD)v48 == 18;
            if ( (((_DWORD)v48 == 18) & (unsigned __int8)fts_statp) != 0 )
            {
              if ( *(_DWORD *)a5 != 1 || *(_QWORD *)(a5 + 8) != st_dev || *(__int128 **)(a5 + 16) != st_ino )
                goto LABEL_35;
              v33 = v13;
              uu_chcon::root_dev_ino_warn(*((_QWORD *)&v46 + 1), v47);
              uu_chcon::errors::Error::from_io1(&v44, aModifyingRootP, 19LL, &v46, 0x100000003LL);
              v43 = *(_QWORD *)&v45[48];
              v42 = *(_OWORD *)&v45[32];
              v41 = *(_OWORD *)&v45[16];
              v40 = *(_OWORD *)v45;
              v39 = v44;
              st_ino = &v48;
              core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(&v48);
              v52 = v43;
              v51 = v42;
              v50 = v41;
              v49 = v40;
              v48 = v39;
              v32 = (unsigned int)v39;
              v13 = v33;
            }
            if ( (_DWORD)v32 != 18 )
            {
LABEL_38:
              if ( !*(_BYTE *)(a2 + 123) )
              {
                uu_chcon::fts::FTS::set((__int64)&v44, *(FTS **)a4, v5, 4);
                core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(&v44);
              }
              *(_QWORD *)(a1 + 64) = v52;
              v23 = v48;
              v24 = v49;
              v25 = v50;
              v26 = v51;
              goto LABEL_41;
            }
LABEL_35:
            v34 = v13;
            if ( *(_BYTE *)(a2 + 120) )
            {
              v57[0] = uucore::util_name(st_ino, v32, v19, fts_statp, st_dev);
              v57[1] = v35;
              BYTE8(v40) = 1;
              v58[0] = v57;
              v58[1] = <&T as core::fmt::Display>::fmt;
              v58[2] = &v39;
              v58[3] = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)&v44 = &unk_F0458;
              *((_QWORD *)&v44 + 1) = 3LL;
              *(_QWORD *)&v45[16] = 0LL;
              *(_QWORD *)v45 = v58;
              *(_QWORD *)&v45[8] = 2LL;
              std::io::stdio::_print(
                &v44,
                v32,
                v35,
                v36,
                v37,
                v38,
                1LL,
                *((_QWORD *)&v46 + 1),
                v47,
                *((_QWORD *)&v40 + 1));
            }
            uu_chcon::change_file_context(&v44, a2, a3, v34, v56);
            core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(&v48);
            v52 = *(_QWORD *)&v45[48];
            v51 = *(_OWORD *)&v45[32];
            v50 = *(_OWORD *)&v45[16];
            v49 = *(_OWORD *)v45;
            v48 = v44;
            goto LABEL_38;
          }
          v5->fts_number = 1LL;
          uu_chcon::fts::FTS::set((__int64)&v44, *(FTS **)a4, v5, 1);
          *(_DWORD *)a1 = 18;
          core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(&v44);
LABEL_26:
          core::ptr::drop_in_place<core::result::Result<bool,uu_chcon::errors::Error>>(&v48);
          break;
        default:
          goto LABEL_29;
      }
    }
    else
    {
      uu_chcon::errors::Error::from_io1(&v44, aGettingMetaDat, 17LL, &v46, 0x1400000003LL);
      *(_QWORD *)(a1 + 64) = *(_QWORD *)&v45[48];
      v23 = v44;
      v24 = *(_OWORD *)v45;
      v25 = *(_OWORD *)&v45[16];
      v26 = *(_OWORD *)&v45[32];
LABEL_41:
      *(_OWORD *)(a1 + 48) = v26;
      *(_OWORD *)(a1 + 32) = v25;
      *(_OWORD *)(a1 + 16) = v24;
      *(_OWORD *)a1 = v23;
    }
  }
  else
  {
    v27 = v39;
    v28 = v40;
    *(_OWORD *)(a1 + 56) = v41;
    *(_OWORD *)(a1 + 40) = v28;
    *(_OWORD *)(a1 + 24) = v27;
    _mm_storel_ps((double *)a1, v15);
    *(_QWORD *)(a1 + 8) = v13;
    *(_QWORD *)(a1 + 16) = v14;
  }
  return core::ptr::drop_in_place<std::path::PathBuf>(v46, *((_QWORD *)&v46 + 1));
}