__int64 __fastcall meilitool::upgrade::v1_10::v1_9_to_v1_10(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // r13
  unsigned int v5; // ebp
  char v6; // al
  __int64 v7; // rdx
  __int64 updated; // r15
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int128 v11; // kr00_16
  __int64 v12; // r15
  __int64 (__fastcall *v13)(); // rbp
  char v14; // al
  __int64 v15; // rdx
  __int128 *v16; // r13
  __int128 *v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rbp
  __int128 *v20; // r14
  __int64 v21; // r15
  __int64 (__fastcall *v22)(); // r13
  char v23; // al
  __int64 v24; // rdx
  __int128 v26; // [rsp+0h] [rbp-2B8h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+10h] [rbp-2A8h]
  __int64 v28; // [rsp+18h] [rbp-2A0h]
  __int64 v29; // [rsp+20h] [rbp-298h]
  char v30[8]; // [rsp+30h] [rbp-288h] BYREF
  __int128 v31; // [rsp+38h] [rbp-280h]
  __int64 v32; // [rsp+48h] [rbp-270h] BYREF
  _BYTE v33[24]; // [rsp+50h] [rbp-268h] BYREF
  __int128 v34; // [rsp+70h] [rbp-248h] BYREF
  __int64 (__fastcall *v35)(); // [rsp+80h] [rbp-238h]
  __int64 v36; // [rsp+88h] [rbp-230h] BYREF
  _BYTE v37[24]; // [rsp+90h] [rbp-228h] BYREF
  __int128 v38; // [rsp+A8h] [rbp-210h]
  __int64 (__fastcall *v39)(); // [rsp+B8h] [rbp-200h]
  __int128 *v40; // [rsp+C0h] [rbp-1F8h]
  __int64 (__fastcall *v41)(); // [rsp+C8h] [rbp-1F0h]
  unsigned __int64 v42; // [rsp+E0h] [rbp-1D8h]
  char v43[32]; // [rsp+130h] [rbp-188h] BYREF
  _QWORD v44[2]; // [rsp+150h] [rbp-168h] BYREF
  __int64 v45; // [rsp+160h] [rbp-158h]
  unsigned __int128 v46; // [rsp+168h] [rbp-150h] BYREF
  unsigned int v47; // [rsp+17Ch] [rbp-13Ch]
  __int128 v48; // [rsp+180h] [rbp-138h] BYREF
  __int64 (__fastcall *v49)(); // [rsp+190h] [rbp-128h]
  __m256i v50; // [rsp+1A0h] [rbp-118h] BYREF
  unsigned __int128 v51; // [rsp+1C0h] [rbp-F8h]
  _QWORD v52[3]; // [rsp+1D0h] [rbp-E8h] BYREF
  __int64 v53; // [rsp+1E8h] [rbp-D0h]
  __int64 v54; // [rsp+1F0h] [rbp-C8h]
  __int64 v55; // [rsp+1F8h] [rbp-C0h] BYREF
  _BYTE v56[32]; // [rsp+200h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+220h] [rbp-98h]
  char v58[8]; // [rsp+228h] [rbp-90h] BYREF
  __int64 v59; // [rsp+230h] [rbp-88h]
  __int64 v60; // [rsp+238h] [rbp-80h]
  unsigned __int64 v61; // [rsp+240h] [rbp-78h]
  __int64 v62; // [rsp+248h] [rbp-70h]
  __int64 v63; // [rsp+250h] [rbp-68h]
  __int64 v64; // [rsp+258h] [rbp-60h]
  unsigned __int128 v65; // [rsp+260h] [rbp-58h] BYREF
  _BYTE v66[72]; // [rsp+270h] [rbp-48h] BYREF

  *(_QWORD *)v37 = &off_526058;
  *(_QWORD *)&v37[8] = 1LL;
  *(_QWORD *)&v37[16] = 8LL;
  v38 = 0LL;
  std::io::stdio::_print(v37);
  std::path::Path::join(v58, a1, a2, aTasks_0, 5LL);
  *(_QWORD *)v37 = 0LL;
  *(_DWORD *)&v37[16] = 0;
  DWORD2(v38) = 0;
  *(_QWORD *)&v38 = 0x6400000001LL;
  heed::envs::env_open_options::EnvOpenOptions<T>::open(&v26, v37, v58);
  v2 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v26, v59, v60);
  v4 = v3;
  if ( (v2 & 1) == 0 )
  {
    v32 = v3;
    heed::txn::RwTxn::new(v37, &v32);
    v26 = *(_OWORD *)&v37[8];
    v27 = (__int64 (__fastcall *)())v38;
    if ( *(_DWORD *)v37 == 1 )
    {
      *(_QWORD *)&v37[16] = v27;
      *(_OWORD *)v37 = v26;
      v4 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v37);
LABEL_41:
      core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v32);
      goto LABEL_42;
    }
    v49 = v27;
    v48 = v26;
    meilitool::try_opening_database(v37, &v32, &v48);
    v4 = *(_QWORD *)&v37[8];
    if ( (v37[0] & 1) != 0 )
    {
LABEL_40:
      core::ptr::drop_in_place<heed::txn::RwTxn>(&v48);
      goto LABEL_41;
    }
    v5 = *(_DWORD *)&v37[16];
    meilitool::try_opening_database(v37, &v32, &v48);
    anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v26, v37, v59, v60);
    if ( (v26 & 1) != 0 )
    {
      v4 = *((_QWORD *)&v26 + 1);
      goto LABEL_40;
    }
    v64 = *((_QWORD *)&v26 + 1);
    v47 = (unsigned int)v27;
    heed::databases::database::Database<KC,DC,C,CDUP>::len(v37, v4, v5, &v48);
    v6 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(v37);
    updated = v7;
    if ( (v6 & 1) == 0 )
    {
      v55 = v7;
      heed::databases::database::Database<KC,DC,C,CDUP>::iter(&v26, v4, v5, &v48);
      if ( (_DWORD)v26 != 5 )
      {
        *(_DWORD *)&v37[20] = HIDWORD(v27);
        *(_DWORD *)&v37[17] = *(_DWORD *)((char *)&v27 + 1);
        *(_OWORD *)v37 = v26;
        v37[16] = (_BYTE)v27;
        updated = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v37);
        goto LABEL_39;
      }
      core::iter::traits::iterator::Iterator::collect(v66, *((_QWORD *)&v26 + 1), (unsigned __int8)v27);
      v53 = a1;
      v54 = a2;
      v44[0] = 0LL;
      v44[1] = 8LL;
      v45 = 0LL;
      v52[0] = 0LL;
      v52[1] = 8LL;
      v52[2] = 0LL;
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v56, v66);
      v57 = 0LL;
      <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v50, v56);
      v9 = v50.m256i_i64[1];
      v61 = 0x8000000000000001LL;
      if ( v50.m256i_i64[1] == 0x8000000000000001LL )
      {
LABEL_10:
        core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<core::result::Result<(alloc::string::String,uuid::Uuid),heed::Error>>>>(v56);
        if ( v45 )
        {
          <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v43, v44);
          *(_QWORD *)v37 = 0x8000000000000000LL;
          v42 = 0x8000000000000000LL;
          core::iter::traits::iterator::Iterator::collect(&v26, v37);
          alloc::str::join_generic_copy(v37, *((_QWORD *)&v26 + 1), v27);
          v50.m256i_i64[2] = *(_QWORD *)&v37[16];
          *(_OWORD *)v50.m256i_i8 = *(_OWORD *)v37;
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v26);
          *(_QWORD *)&v26 = &v50;
          *((_QWORD *)&v26 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
          *(_QWORD *)v37 = &off_5260D8;
          *(_QWORD *)&v37[8] = 2LL;
          *(_QWORD *)&v37[16] = &v26;
          v38 = 1uLL;
          updated = anyhow::__private::format_err(v37);
          core::ptr::drop_in_place<alloc::string::String>(&v50);
          core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,uuid::Uuid)>>(v52);
          goto LABEL_39;
        }
        *(_QWORD *)v37 = &off_5260C8;
        *(_QWORD *)&v37[8] = 1LL;
        *(_QWORD *)&v37[16] = 8LL;
        v38 = 0LL;
        std::io::stdio::_print(v37);
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v56, v52);
        v57 = 0LL;
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v50, v56);
        if ( v50.m256i_i64[1] == 0x8000000000000000LL )
        {
LABEL_23:
          core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<(alloc::string::String,uuid::Uuid)>>>(v56);
          *(_QWORD *)&v37[16] = v49;
          *(_OWORD *)v37 = v48;
          heed::txn::RwTxn::commit(&v26, v37);
          v4 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(
                 &v26,
                 aWhileCommittin_0,
                 54LL);
          if ( !v4 )
          {
            *(_QWORD *)v37 = &off_526168;
            *(_QWORD *)&v37[8] = 1LL;
            *(_QWORD *)&v37[16] = 8LL;
            v38 = 0LL;
            std::io::stdio::_print(v37);
            core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,alloc::vec::Vec<alloc::string::String>)>>(v44);
            core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v32);
            v4 = 0LL;
            goto LABEL_42;
          }
          core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,alloc::vec::Vec<alloc::string::String>)>>(v44);
          goto LABEL_41;
        }
        v16 = &v26;
        v17 = (__int128 *)&v46;
        while ( 1 )
        {
          v18 = (__int64)v17;
          v19 = v50.m256i_i64[0];
          *(_QWORD *)&v33[16] = v50.m256i_i64[3];
          *(_OWORD *)v33 = *(_OWORD *)&v50.m256i_u64[1];
          v65 = v51;
          v20 = v16;
          std::path::Path::join(v16, v53, v54, aIndexes, 7LL);
          v21 = *((_QWORD *)&v26 + 1);
          v22 = v27;
          <T as alloc::string::SpecToString>::spec_to_string(v37, &v65);
          std::path::Path::join(v30, v21, v22, v37);
          core::ptr::drop_in_place<std::path::PathBuf>(v20);
          *(_QWORD *)&v46 = v19 + 1;
          v16 = v20;
          v34 = v31;
          v17 = (__int128 *)v18;
          *(_QWORD *)v37 = v18;
          *(_QWORD *)&v37[8] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          *(_QWORD *)&v37[16] = &v55;
          *(_QWORD *)&v38 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          *((_QWORD *)&v38 + 1) = v33;
          v39 = <alloc::string::String as core::fmt::Display>::fmt;
          v40 = &v34;
          v41 = <std::path::Display as core::fmt::Display>::fmt;
          *(_QWORD *)&v26 = &off_5260F8;
          *((_QWORD *)&v26 + 1) = 5LL;
          v29 = 0LL;
          v27 = (__int64 (__fastcall *)())v37;
          v28 = 4LL;
          std::io::stdio::_print(v16);
          *(_QWORD *)v37 = 0LL;
          *(_DWORD *)&v37[16] = 0;
          DWORD2(v38) = 0;
          *(_QWORD *)&v38 = 0x1900000001LL;
          heed::envs::env_open_options::EnvOpenOptions<T>::open(v16, v37, v30);
          v23 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(
                  v16,
                  v31,
                  *((_QWORD *)&v31 + 1),
                  v33);
          updated = v24;
          if ( (v23 & 1) != 0 )
            break;
          *(_QWORD *)&v46 = v24;
          heed::txn::RwTxn::new(v37, v18);
          anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(
            v16,
            v37,
            v31,
            *((_QWORD *)&v31 + 1),
            v33);
          updated = *((_QWORD *)&v26 + 1);
          if ( (_QWORD)v26 == 2LL )
            goto LABEL_45;
          v34 = v26;
          v35 = v27;
          *(_QWORD *)v37 = &off_526148;
          *(_QWORD *)&v37[8] = 1LL;
          *(_QWORD *)&v37[16] = 8LL;
          v38 = 0LL;
          std::io::stdio::_print(v37);
          *(_OWORD *)v37 = v65;
          updated = meilitool::upgrade::v1_10::update_index_stats(
                      v64,
                      v47,
                      *(__int64 *)&v33[8],
                      *(__int64 *)&v33[16],
                      (__int64)v37,
                      (__int64)&v48);
          if ( updated
            || (*(_QWORD *)v37 = &off_526158,
                *(_QWORD *)&v37[8] = 1LL,
                *(_QWORD *)&v37[16] = 8LL,
                v38 = 0LL,
                std::io::stdio::_print(v37),
                (updated = meilitool::upgrade::v1_10::update_date_format(
                             *(__int64 *)&v33[8],
                             *(__int64 *)&v33[16],
                             v18,
                             (__int64)&v34)) != 0) )
          {
            core::ptr::drop_in_place<heed::txn::RwTxn>(&v34);
LABEL_45:
            core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v46);
            break;
          }
          *(_QWORD *)&v37[16] = v35;
          *(_OWORD *)v37 = v34;
          heed::txn::RwTxn::commit(v16, v37);
          updated = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(
                      v16,
                      v31,
                      *((_QWORD *)&v31 + 1),
                      v33);
          if ( updated )
            goto LABEL_45;
          core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(v18);
          core::ptr::drop_in_place<std::path::PathBuf>(v30);
          core::ptr::drop_in_place<alloc::string::String>(v33);
          <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v50, v56);
          if ( v50.m256i_i64[1] == 0x8000000000000000LL )
            goto LABEL_23;
        }
        core::ptr::drop_in_place<std::path::PathBuf>(v30);
        core::ptr::drop_in_place<alloc::string::String>(v33);
        core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<(alloc::string::String,uuid::Uuid)>>>(v56);
      }
      else
      {
        while ( 1 )
        {
          if ( v9 == 0x8000000000000000LL )
          {
            *(_OWORD *)v37 = *(_OWORD *)&v50.m256i_u64[2];
            *(_QWORD *)&v37[16] = v51;
            updated = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v37);
            goto LABEL_37;
          }
          v10 = v50.m256i_i64[0];
          *(_OWORD *)&v33[8] = *(_OWORD *)&v50.m256i_u64[2];
          *(_QWORD *)v33 = v9;
          v11 = v51;
          v62 = v11 >> 64;
          v63 = v11;
          v46 = v51;
          std::path::Path::join(&v26, v53, v54, aIndexes, 7LL);
          v12 = *((_QWORD *)&v26 + 1);
          v13 = v27;
          <T as alloc::string::SpecToString>::spec_to_string(v37, &v46);
          std::path::Path::join(v30, v12, v13, v37);
          core::ptr::drop_in_place<std::path::PathBuf>(&v26);
          v36 = v10 + 1;
          v34 = v31;
          *(_QWORD *)v37 = &v36;
          *(_QWORD *)&v37[8] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          *(_QWORD *)&v37[16] = &v55;
          *(_QWORD *)&v38 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          *((_QWORD *)&v38 + 1) = v33;
          v39 = <alloc::string::String as core::fmt::Display>::fmt;
          v40 = &v34;
          v41 = <std::path::Display as core::fmt::Display>::fmt;
          *(_QWORD *)&v26 = &off_526068;
          *((_QWORD *)&v26 + 1) = 5LL;
          v29 = 0LL;
          v27 = (__int64 (__fastcall *)())v37;
          v28 = 4LL;
          std::io::stdio::_print(&v26);
          *(_QWORD *)v37 = 0LL;
          *(_DWORD *)&v37[16] = 0;
          DWORD2(v38) = 0;
          *(_QWORD *)&v38 = 0x1900000001LL;
          heed::envs::env_open_options::EnvOpenOptions<T>::open(&v26, v37, v30);
          v14 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(
                  &v26,
                  v31,
                  *((_QWORD *)&v31 + 1),
                  v33);
          updated = v15;
          if ( (v14 & 1) != 0 )
            break;
          v36 = v15;
          heed::txn::RoTxn<T>::new(v37, &v36);
          anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(
            &v26,
            v37,
            v31,
            *((_QWORD *)&v31 + 1),
            v33);
          updated = *((_QWORD *)&v26 + 1);
          if ( (_QWORD)v26 == 2LL )
            goto LABEL_35;
          v34 = v26;
          v35 = v27;
          *(_QWORD *)v37 = &off_5260B8;
          *(_QWORD *)&v37[8] = 1LL;
          *(_QWORD *)&v37[16] = 8LL;
          v38 = 0LL;
          std::io::stdio::_print(v37);
          meilitool::upgrade::v1_10::find_rest_embedders(
            v37,
            *(__int64 *)&v33[8],
            *(__int64 *)&v33[16],
            (__int64)&v36,
            (__int64)&v34);
          updated = *(_QWORD *)&v37[8];
          if ( *(_QWORD *)v37 == 0x8000000000000000LL )
          {
            core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v34);
LABEL_35:
            core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v36);
            break;
          }
          v26 = *(_OWORD *)v37;
          v27 = *(__int64 (__fastcall **)())&v37[16];
          if ( *(_QWORD *)&v37[16] )
          {
            *(_QWORD *)&v37[16] = *(_QWORD *)&v33[16];
            *(_OWORD *)v37 = *(_OWORD *)v33;
            v39 = v27;
            v38 = v26;
            alloc::vec::Vec<T,A>::push(v44, v37);
          }
          else
          {
            *(_QWORD *)&v37[16] = *(_QWORD *)&v33[16];
            *(_OWORD *)v37 = *(_OWORD *)v33;
            *(_QWORD *)&v38 = v63;
            *((_QWORD *)&v38 + 1) = v62;
            alloc::vec::Vec<T,A>::push(v52, v37);
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v26);
          }
          core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v34);
          core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v36);
          core::ptr::drop_in_place<std::path::PathBuf>(v30);
          <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v50, v56);
          v9 = v50.m256i_i64[1];
          if ( v50.m256i_i64[1] == v61 )
            goto LABEL_10;
        }
        core::ptr::drop_in_place<std::path::PathBuf>(v30);
        core::ptr::drop_in_place<alloc::string::String>(v33);
LABEL_37:
        core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<core::result::Result<(alloc::string::String,uuid::Uuid),heed::Error>>>>(v56);
        core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,uuid::Uuid)>>(v52);
      }
      core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,alloc::vec::Vec<alloc::string::String>)>>(v44);
    }
LABEL_39:
    v4 = updated;
    goto LABEL_40;
  }
LABEL_42:
  core::ptr::drop_in_place<std::path::PathBuf>(v58);
  return v4;
}