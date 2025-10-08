__int64 __fastcall meilitool::compact_index(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r15
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r14
  int v13; // edx
  __m128i v14; // xmm1
  __m128d v15; // xmm0
  double v16; // xmm3_8
  __m128d v17; // xmm0
  int v18; // edx
  __int64 v19; // rax
  unsigned int v21; // [rsp+14h] [rbp-5D4h] BYREF
  __int64 v22; // [rsp+18h] [rbp-5D0h] BYREF
  char v23[8]; // [rsp+20h] [rbp-5C8h] BYREF
  __int64 v24; // [rsp+28h] [rbp-5C0h]
  __int64 v25; // [rsp+30h] [rbp-5B8h]
  __int64 v26; // [rsp+38h] [rbp-5B0h] BYREF
  char v27; // [rsp+40h] [rbp-5A8h]
  char v28[8]; // [rsp+48h] [rbp-5A0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-598h]
  __int64 v30; // [rsp+58h] [rbp-590h]
  char v31[8]; // [rsp+60h] [rbp-588h] BYREF
  __int64 v32; // [rsp+68h] [rbp-580h]
  __int64 v33; // [rsp+70h] [rbp-578h]
  __int64 v34; // [rsp+78h] [rbp-570h] BYREF
  __int128 v35; // [rsp+80h] [rbp-568h] BYREF
  __int64 v36; // [rsp+90h] [rbp-558h]
  char v37[8]; // [rsp+A0h] [rbp-548h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-540h]
  __int64 v39; // [rsp+B0h] [rbp-538h]
  _QWORD v40[2]; // [rsp+B8h] [rbp-530h] BYREF
  unsigned __int64 v41; // [rsp+C8h] [rbp-520h] BYREF
  double v42; // [rsp+D0h] [rbp-518h] BYREF
  _QWORD v43[3]; // [rsp+D8h] [rbp-510h] BYREF
  _QWORD v44[2]; // [rsp+F0h] [rbp-4F8h] BYREF
  __int64 v45; // [rsp+100h] [rbp-4E8h] BYREF
  int v46; // [rsp+108h] [rbp-4E0h]
  _QWORD v47[2]; // [rsp+110h] [rbp-4D8h] BYREF
  __int128 v48; // [rsp+120h] [rbp-4C8h] BYREF
  _QWORD src[56]; // [rsp+130h] [rbp-4B8h] BYREF
  int v50; // [rsp+2F8h] [rbp-2F0h] BYREF
  __int64 v51; // [rsp+300h] [rbp-2E8h]
  __int64 v52; // [rsp+308h] [rbp-2E0h]
  __int128 v53; // [rsp+310h] [rbp-2D8h]
  char **v54; // [rsp+320h] [rbp-2C8h] BYREF
  __int64 v55; // [rsp+328h] [rbp-2C0h]
  __int128 *v56; // [rsp+330h] [rbp-2B8h]
  __int64 v57; // [rsp+338h] [rbp-2B0h]
  void *v58; // [rsp+340h] [rbp-2A8h]
  __int64 v59; // [rsp+348h] [rbp-2A0h]
  unsigned __int64 v60; // [rsp+370h] [rbp-278h]
  __int128 v61; // [rsp+3D0h] [rbp-218h] BYREF
  _OWORD v62[32]; // [rsp+3E0h] [rbp-208h] BYREF

  v4 = a1;
  v44[0] = a2;
  v44[1] = a3;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 16);
  std::path::Path::join(v37, v5, v6, aTasks_0, 5LL);
  *(_QWORD *)&v62[0] = 0LL;
  LODWORD(v62[1]) = 0;
  LODWORD(v62[2]) = 0;
  *((_QWORD *)&v62[1] + 1) = 0x6400000001LL;
  heed::envs::env_open_options::EnvOpenOptions<T>::open(&v48, v62, v37);
  v7 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v48, v38, v39);
  v9 = v8;
  if ( (v7 & 1) == 0 )
  {
    v22 = v8;
    heed::txn::RoTxn<T>::new(v62, &v22);
    v48 = *(_OWORD *)((char *)v62 + 8);
    src[0] = *((_QWORD *)&v62[1] + 1);
    if ( LODWORD(v62[0]) == 1 )
    {
      *(_QWORD *)&v62[1] = src[0];
      v62[0] = v48;
      v9 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v62);
LABEL_31:
      core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v22);
      goto LABEL_32;
    }
    v36 = src[0];
    v35 = v48;
    meilitool::try_opening_database(v62, &v22, &v35);
    v9 = *((_QWORD *)&v62[0] + 1);
    if ( (v62[0] & 1) == 0 )
    {
      heed::databases::database::Database<KC,DC,C,CDUP>::iter(&v48, *((_QWORD *)&v62[0] + 1), LODWORD(v62[1]), &v35);
      if ( (_DWORD)v48 == 5 )
      {
        v26 = *((_QWORD *)&v48 + 1);
        v27 = src[0];
        while ( 1 )
        {
          <heed::iterator::iter::RoIter<KC,DC,IM> as core::iter::traits::iterator::Iterator>::next(&v50, &v26);
          if ( v50 != 1 )
          {
            v4 = a1;
            core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v26);
            *(_QWORD *)&v48 = v44;
            *((_QWORD *)&v48 + 1) = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)&v62[0] = &off_526E20;
            *((_QWORD *)&v62[0] + 1) = 2LL;
            *(_QWORD *)&v62[2] = 0LL;
            *(_QWORD *)&v62[1] = &v48;
            *((_QWORD *)&v62[1] + 1) = 1LL;
            v10 = anyhow::__private::format_err(v62);
            goto LABEL_13;
          }
          if ( !v51 )
          {
            *(_OWORD *)((char *)v62 + 8) = v53;
            *(_QWORD *)&v62[0] = v52;
            v9 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v62);
            v4 = a1;
            goto LABEL_29;
          }
          v61 = v53;
          v40[0] = v51;
          v40[1] = v52;
          if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v51, v52, a2, a3) )
            break;
          *(_QWORD *)&v48 = v40;
          *((_QWORD *)&v48 + 1) = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v62[0] = &off_526DA0;
          *((_QWORD *)&v62[0] + 1) = 2LL;
          *(_QWORD *)&v62[2] = 0LL;
          *(_QWORD *)&v62[1] = &v48;
          *((_QWORD *)&v62[1] + 1) = 1LL;
          std::io::stdio::_eprint(v62);
        }
        *(_QWORD *)&v48 = v40;
        *((_QWORD *)&v48 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v62[0] = &off_526DC0;
        *((_QWORD *)&v62[0] + 1) = 2LL;
        *(_QWORD *)&v62[2] = 0LL;
        *(_QWORD *)&v62[1] = &v48;
        *((_QWORD *)&v62[1] + 1) = 1LL;
        std::io::stdio::_eprint(v62);
        std::path::Path::join(&v48, v5, v6, aIndexes, 7LL);
        v11 = *((_QWORD *)&v48 + 1);
        v12 = src[0];
        <T as alloc::string::SpecToString>::spec_to_string(v62, &v61);
        std::path::Path::join(v23, v11, v12, v62);
        core::ptr::drop_in_place<std::path::PathBuf>(&v48);
        v54 = 0LL;
        LODWORD(v56) = 0;
        LODWORD(v57) = 0;
        LODWORD(v58) = 0;
        milli::index::Index::new(v62);
        anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v48, v62, v24, v25);
        v9 = *((_QWORD *)&v48 + 1);
        if ( !(_QWORD)v48 )
        {
          v4 = a1;
          goto LABEL_28;
        }
        memcpy(&v62[1], src, 0x1C0uLL);
        v62[0] = v48;
        *(_QWORD *)&v48 = &off_526DE0;
        *((_QWORD *)&v48 + 1) = 1LL;
        src[0] = 8LL;
        *(_OWORD *)&src[1] = 0LL;
        v4 = a1;
        std::io::stdio::_eprint(&v48);
        milli::index::Index::write_txn(&v48, v62);
        anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v54, &v48);
        v9 = v55;
        if ( v54 == (char **)((char *)&dword_0 + 2) )
        {
LABEL_27:
          core::ptr::drop_in_place<milli::index::Index>(v62);
LABEL_28:
          core::ptr::drop_in_place<std::path::PathBuf>(v23);
LABEL_29:
          core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v26);
          goto LABEL_30;
        }
        v43[0] = v54;
        v43[1] = v55;
        v43[2] = v56;
        std::path::Path::join(v28, v24, v25, aDataMdb_0, 8LL);
        std::path::Path::join(v31, v24, v25, "data.mdb.cpyCompaction successful. Took around ", 12LL);
        *(_QWORD *)&v48 = &off_526DF0;
        *((_QWORD *)&v48 + 1) = 1LL;
        src[0] = 8LL;
        *(_OWORD *)&src[1] = 0LL;
        std::io::stdio::_eprint(&v48);
        v45 = std::time::Instant::now();
        v46 = v13;
        milli::index::Index::copy_to_path(&v48, *(_QWORD *)&v62[0], v31);
        anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v54, &v48, v32, v33);
        if ( ((unsigned __int8)v54 & 1) != 0 )
        {
          v9 = v55;
        }
        else
        {
          v21 = HIDWORD(v54);
          std::fs::File::metadata(&v48, &v21);
          if ( (_DWORD)v48 == 2 )
          {
            v9 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(*((_QWORD *)&v48 + 1));
          }
          else
          {
            v34 = src[8];
            std::fs::metadata(&v48);
            anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(
              &v54,
              &v48,
              v29,
              v30);
            if ( (_DWORD)v54 == 2 )
            {
              v9 = v55;
            }
            else
            {
              v41 = v60;
              v14 = _mm_loadl_epi64((const __m128i *)&xmmword_145C80);
              v15 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v60, v14), (__m128d)xmmword_145B20);
              v16 = _mm_unpackhi_pd(v15, v15).m128d_f64[0] + v15.m128d_f64[0];
              v17 = _mm_sub_pd(
                      (__m128d)_mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)&v34), v14),
                      (__m128d)xmmword_145B20);
              v42 = v16 / (_mm_unpackhi_pd(v17, v17).m128d_f64[0] + v17.m128d_f64[0]);
              v54 = (char **)std::time::Instant::elapsed(&v45);
              LODWORD(v55) = v18;
              v47[0] = &v54;
              v47[1] = <core::time::Duration as core::fmt::Debug>::fmt;
              *(_QWORD *)&v48 = &off_526E40;
              *((_QWORD *)&v48 + 1) = 2LL;
              src[2] = "";
              src[3] = 1LL;
              src[0] = v47;
              src[1] = 1LL;
              std::io::stdio::_print(&v48);
              *(_QWORD *)&v48 = &v41;
              *((_QWORD *)&v48 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
              src[0] = &v34;
              src[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
              src[2] = &v42;
              src[3] = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
              v54 = &off_526E60;
              v55 = 4LL;
              v58 = &unk_153268;
              v59 = 3LL;
              v56 = &v48;
              v57 = 3LL;
              std::io::stdio::_eprint(&v54);
              *(_QWORD *)&v48 = &off_526E00;
              *((_QWORD *)&v48 + 1) = 1LL;
              src[0] = 8LL;
              *(_OWORD *)&src[1] = 0LL;
              std::io::stdio::_eprint(&v48);
              v19 = std::fs::rename(v31, v28);
              v9 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(
                     v19,
                     v32,
                     v33,
                     v29,
                     v30);
              if ( !v9 )
              {
                core::ptr::drop_in_place<std::fs::File>(v21);
                *(_QWORD *)&v48 = &off_526E10;
                *((_QWORD *)&v48 + 1) = 1LL;
                src[0] = 8LL;
                *(_OWORD *)&src[1] = 0LL;
                v4 = a1;
                std::io::stdio::_print(&v48);
                v9 = 0LL;
                goto LABEL_26;
              }
            }
          }
          v4 = a1;
          core::ptr::drop_in_place<std::fs::File>(v21);
        }
LABEL_26:
        core::ptr::drop_in_place<std::path::PathBuf>(v31);
        core::ptr::drop_in_place<std::path::PathBuf>(v28);
        core::ptr::drop_in_place<heed::txn::RwTxn>(v43);
        goto LABEL_27;
      }
      DWORD1(v62[1]) = HIDWORD(src[0]);
      *(_DWORD *)((char *)&v62[1] + 1) = *(_DWORD *)((char *)src + 1);
      v62[0] = v48;
      LOBYTE(v62[1]) = src[0];
      v10 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v62);
LABEL_13:
      v9 = v10;
    }
LABEL_30:
    core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v35);
    goto LABEL_31;
  }
LABEL_32:
  core::ptr::drop_in_place<std::path::PathBuf>(v37);
  core::ptr::drop_in_place<std::path::PathBuf>(v4);
  return v9;
}