__int64 __fastcall meilitool::hair_dryer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r13
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // r14
  __m128i v19; // xmm2
  __m128d v20; // xmm0
  double v21; // xmm1_8
  __m128d v22; // xmm0
  __int64 v24; // rax
  int v25; // [rsp+14h] [rbp-6F4h] BYREF
  __int64 v26; // [rsp+18h] [rbp-6F0h] BYREF
  __int64 v27; // [rsp+20h] [rbp-6E8h]
  __int64 v28; // [rsp+28h] [rbp-6E0h] BYREF
  char v29; // [rsp+30h] [rbp-6D8h]
  __int64 v30; // [rsp+38h] [rbp-6D0h]
  __m128i v31; // [rsp+40h] [rbp-6C8h] BYREF
  _QWORD v32[2]; // [rsp+50h] [rbp-6B8h] BYREF
  __int128 v33; // [rsp+60h] [rbp-6A8h] BYREF
  __int64 v34; // [rsp+70h] [rbp-698h]
  __int128 v35; // [rsp+80h] [rbp-688h] BYREF
  __int64 v36; // [rsp+90h] [rbp-678h]
  char v37[8]; // [rsp+98h] [rbp-670h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-668h]
  __int64 v39; // [rsp+A8h] [rbp-660h]
  _QWORD v40[2]; // [rsp+B0h] [rbp-658h] BYREF
  char v41; // [rsp+C0h] [rbp-648h]
  __int64 v42; // [rsp+C8h] [rbp-640h]
  __int64 v43; // [rsp+D0h] [rbp-638h]
  char v44[8]; // [rsp+D8h] [rbp-630h] BYREF
  __int64 v45; // [rsp+E0h] [rbp-628h]
  __int64 v46; // [rsp+E8h] [rbp-620h]
  _QWORD v47[2]; // [rsp+F0h] [rbp-618h] BYREF
  __int64 v48; // [rsp+100h] [rbp-608h]
  __int128 v49; // [rsp+108h] [rbp-600h]
  __int64 v50; // [rsp+118h] [rbp-5F0h]
  double v51; // [rsp+120h] [rbp-5E8h] BYREF
  int v52; // [rsp+128h] [rbp-5E0h] BYREF
  __int64 v53; // [rsp+130h] [rbp-5D8h]
  __int64 v54; // [rsp+138h] [rbp-5D0h]
  __int128 v55; // [rsp+140h] [rbp-5C8h]
  _BYTE v56[24]; // [rsp+150h] [rbp-5B8h] BYREF
  __int128 v57; // [rsp+168h] [rbp-5A0h]
  __int64 (__fastcall *v58)(); // [rsp+178h] [rbp-590h]
  __int128 v59; // [rsp+320h] [rbp-3E8h] BYREF
  _QWORD src[56]; // [rsp+330h] [rbp-3D8h] BYREF
  __int128 v61; // [rsp+4F0h] [rbp-218h] BYREF
  __int128 v62; // [rsp+508h] [rbp-200h] BYREF
  _QWORD dest[56]; // [rsp+518h] [rbp-1F0h] BYREF

  v27 = a2;
  v6 = a1;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(a1 + 16);
  std::path::Path::join(v44, v7, v8, aTasks_0, 5LL);
  *(_QWORD *)v56 = 0LL;
  *(_DWORD *)&v56[16] = 0;
  DWORD2(v57) = 0;
  *(_QWORD *)&v57 = 0x6400000001LL;
  heed::envs::env_open_options::EnvOpenOptions<T>::open(&v59, v56, v44);
  v9 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v59, v45, v46);
  v11 = v10;
  if ( (v9 & 1) != 0 )
    goto LABEL_32;
  v26 = v10;
  *(_QWORD *)v56 = &off_526F68;
  *(_QWORD *)&v56[8] = 1LL;
  *(_QWORD *)&v56[16] = 8LL;
  v57 = 0LL;
  std::io::stdio::_eprint(v56);
  heed::txn::RoTxn<T>::new(v56, &v26);
  v59 = *(_OWORD *)&v56[8];
  src[0] = v57;
  if ( *(_DWORD *)v56 == 1 )
  {
    *(_QWORD *)&v56[16] = src[0];
    *(_OWORD *)v56 = v59;
    v11 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v56);
LABEL_31:
    core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v26);
    goto LABEL_32;
  }
  v30 = a4;
  v34 = src[0];
  v33 = v59;
  meilitool::try_opening_database(v56, &v26, &v33);
  v11 = *(_QWORD *)&v56[8];
  if ( (v56[0] & 1) != 0 )
  {
LABEL_30:
    core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v33);
    goto LABEL_31;
  }
  heed::databases::database::Database<KC,DC,C,CDUP>::iter(&v59, *(_QWORD *)&v56[8], *(unsigned int *)&v56[16], &v33);
  if ( (_DWORD)v59 != 5 )
  {
    *(_DWORD *)&v56[20] = HIDWORD(src[0]);
    *(_DWORD *)&v56[17] = *(_DWORD *)((char *)src + 1);
    *(_OWORD *)v56 = v59;
    v56[16] = src[0];
    v11 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v56);
    goto LABEL_30;
  }
  v28 = *((_QWORD *)&v59 + 1);
  v29 = src[0];
  v12 = v27;
  v13 = v27 + 24 * a3;
  v42 = v13;
  while ( 1 )
  {
    <heed::iterator::iter::RoIter<KC,DC,IM> as core::iter::traits::iterator::Iterator>::next(&v52, &v28);
    if ( v52 != 1 )
      break;
    if ( !v53 )
    {
      *(_OWORD *)&v56[8] = v55;
      *(_QWORD *)v56 = v54;
      v11 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v56);
      goto LABEL_29;
    }
    v61 = v55;
    v32[0] = v53;
    v32[1] = v54;
    *(_QWORD *)v56 = v12;
    *(_QWORD *)&v56[8] = v13;
    if ( (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v56, v32) )
    {
      std::path::Path::join(&v59, v7, v8, aIndexes, 7LL);
      v14 = *((_QWORD *)&v59 + 1);
      v15 = src[0];
      <T as alloc::string::SpecToString>::spec_to_string(v56, &v61);
      std::path::Path::join(v37, v14, v15, v56);
      core::ptr::drop_in_place<std::path::PathBuf>(&v59);
      v47[0] = 0LL;
      LODWORD(v48) = 0;
      LODWORD(v49) = 0;
      DWORD2(v49) = 0;
      milli::index::Index::new(v56);
      anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v59, v56, v38, v39);
      v11 = *((_QWORD *)&v59 + 1);
      if ( !(_QWORD)v59 )
      {
        v6 = a1;
        goto LABEL_28;
      }
      memcpy(dest, src, sizeof(dest));
      v62 = v59;
      *(_QWORD *)&v59 = v32;
      *((_QWORD *)&v59 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v56 = &off_526F78;
      *(_QWORD *)&v56[8] = 2LL;
      *(_QWORD *)&v56[16] = &v59;
      v57 = 1uLL;
      std::io::stdio::_eprint(v56);
      milli::index::Index::read_txn(v56, &v62);
      v59 = *(_OWORD *)&v56[8];
      src[0] = v57;
      if ( *(_DWORD *)v56 == 1 )
      {
        *(_QWORD *)&v56[16] = src[0];
        *(_OWORD *)v56 = v59;
        v6 = a1;
        v11 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v56);
        goto LABEL_27;
      }
      v36 = src[0];
      v35 = v59;
      if ( v30 )
      {
        v16 = v30;
        while ( 2 )
        {
          v25 = 0;
          heed::databases::database::Database<KC,DC,C,CDUP>::len(v56, dest[43], LODWORD(dest[44]), &v35);
          if ( *(_DWORD *)v56 != 5 )
          {
            v6 = a1;
            v24 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v56);
LABEL_37:
            v11 = v24;
LABEL_26:
            core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v35);
LABEL_27:
            core::ptr::drop_in_place<milli::index::Index>(&v62);
LABEL_28:
            core::ptr::drop_in_place<std::path::PathBuf>(v37);
LABEL_29:
            core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v28);
            goto LABEL_30;
          }
          v31.m128i_i64[0] = *(_QWORD *)&v56[8];
          *(_QWORD *)&v59 = v32;
          *((_QWORD *)&v59 + 1) = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)v56 = &off_526F98;
          *(_QWORD *)&v56[8] = 2LL;
          *(_QWORD *)&v56[16] = &v59;
          v57 = 1uLL;
          std::io::stdio::_eprint(v56);
          heed::databases::database::Database<KC,DC,C,CDUP>::iter(&v59, dest[43], LODWORD(dest[44]), &v35);
          if ( (_DWORD)v59 != 5 )
          {
            *(_DWORD *)&v56[20] = HIDWORD(src[0]);
            *(_DWORD *)&v56[17] = *(_DWORD *)((char *)src + 1);
            *(_OWORD *)v56 = v59;
            v56[16] = src[0];
            v6 = a1;
            v24 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v56);
            goto LABEL_37;
          }
          v43 = v16 - 1;
          v40[0] = 0LL;
          v40[1] = *((_QWORD *)&v59 + 1);
          v41 = src[0];
          v6 = a1;
          while ( 1 )
          {
            <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v47, v40);
            if ( LODWORD(v47[0]) != 1 )
              break;
            v31.m128i_i64[1] = v47[1];
            v17 = *((_QWORD *)&v49 + 1);
            v18 = v50;
            if ( !v48 )
            {
              *(_OWORD *)v56 = v49;
              *(_QWORD *)&v56[16] = v50;
              v11 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v56);
              core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>>(v40);
              goto LABEL_26;
            }
            *(_DWORD *)v56 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(
                               v48,
                               v48 + v49);
            v25 += *(_DWORD *)v56;
            *(_DWORD *)v56 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(
                               v17,
                               v17 + v18);
            v25 += *(_DWORD *)v56;
            if ( __ROR8__(0xD288CE703AFB7E91LL * v31.m128i_i64[1], 4) <= 0x68DB8BAC710CBuLL )
            {
              v19 = _mm_loadl_epi64((const __m128i *)&xmmword_145C80);
              v20 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v31.m128i_u64[1], v19), (__m128d)xmmword_145B20);
              v21 = _mm_unpackhi_pd(v20, v20).m128d_f64[0] + v20.m128d_f64[0];
              v22 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32(_mm_loadl_epi64(&v31), v19), (__m128d)xmmword_145B20);
              v51 = v21 / (_mm_unpackhi_pd(v22, v22).m128d_f64[0] + v22.m128d_f64[0]) * 100.0;
              *(_QWORD *)v56 = &v31.m128i_i64[1];
              *(_QWORD *)&v56[8] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
              *(_QWORD *)&v56[16] = &v31;
              *(_QWORD *)&v57 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
              *((_QWORD *)&v57 + 1) = &v51;
              v58 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
              *(_QWORD *)&v59 = &off_526FD8;
              *((_QWORD *)&v59 + 1) = 4LL;
              src[2] = &unk_153268;
              src[3] = 3LL;
              src[0] = v56;
              src[1] = 3LL;
              std::io::stdio::_eprint(&v59);
            }
          }
          core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>>(v40);
          v16 = v43;
          *(_QWORD *)&v59 = &v25;
          *((_QWORD *)&v59 + 1) = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
          *(_QWORD *)v56 = &off_526FB8;
          *(_QWORD *)&v56[8] = 2LL;
          *(_QWORD *)&v56[16] = &v59;
          v57 = 1uLL;
          std::io::stdio::_eprint(v56);
          if ( v16 )
            continue;
          break;
        }
      }
      core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v35);
      core::ptr::drop_in_place<milli::index::Index>(&v62);
      core::ptr::drop_in_place<std::path::PathBuf>(v37);
      v12 = v27;
      v13 = v42;
      v6 = a1;
    }
    else
    {
      *(_QWORD *)&v59 = v32;
      *((_QWORD *)&v59 + 1) = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)v56 = &off_526F30;
      *(_QWORD *)&v56[8] = 2LL;
      *(_QWORD *)&v56[16] = &v59;
      v57 = 1uLL;
      std::io::stdio::_eprint(v56);
      v12 = v27;
    }
  }
  core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v28);
  core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v33);
  core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v26);
  v11 = 0LL;
LABEL_32:
  core::ptr::drop_in_place<std::path::PathBuf>(v44);
  core::ptr::drop_in_place<std::path::PathBuf>(v6);
  return v11;
}