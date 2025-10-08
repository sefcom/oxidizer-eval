__int64 __fastcall meilitool::upgrade::v1_11::v1_10_to_v1_11(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // r12
  unsigned int v5; // ebp
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // r13
  char v13; // al
  __int64 v14; // rdx
  int v15; // r12d
  __int64 v16; // rbp
  _BYTE v18[24]; // [rsp+10h] [rbp-1E8h] BYREF
  __int128 v19; // [rsp+28h] [rbp-1D0h]
  __int64 v20; // [rsp+48h] [rbp-1B0h] BYREF
  _BYTE v21[24]; // [rsp+50h] [rbp-1A8h] BYREF
  __int128 v22; // [rsp+68h] [rbp-190h]
  __int64 (__fastcall *v23)(); // [rsp+78h] [rbp-180h]
  __int128 *v24; // [rsp+80h] [rbp-178h]
  __int64 (__fastcall *v25)(); // [rsp+88h] [rbp-170h]
  __int64 v26; // [rsp+90h] [rbp-168h] BYREF
  char v27[8]; // [rsp+98h] [rbp-160h] BYREF
  __int128 v28; // [rsp+A0h] [rbp-158h]
  __int128 v29; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-138h]
  __int128 v31; // [rsp+C8h] [rbp-130h] BYREF
  __int64 v32; // [rsp+D8h] [rbp-120h]
  __int128 v33; // [rsp+E0h] [rbp-118h] BYREF
  __int64 v34; // [rsp+F0h] [rbp-108h]
  __int64 v35; // [rsp+100h] [rbp-F8h] BYREF
  __int128 v36; // [rsp+108h] [rbp-F0h]
  unsigned __int64 v37; // [rsp+118h] [rbp-E0h]
  unsigned __int64 v38; // [rsp+120h] [rbp-D8h]
  __int64 v39; // [rsp+128h] [rbp-D0h] BYREF
  char v40[8]; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+138h] [rbp-C0h]
  __int64 v42; // [rsp+140h] [rbp-B8h]
  __int64 v43; // [rsp+148h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+150h] [rbp-A8h]
  __int128 v45; // [rsp+158h] [rbp-A0h]
  __int64 v46; // [rsp+168h] [rbp-90h]
  __int64 v47; // [rsp+170h] [rbp-88h]
  _QWORD v48[2]; // [rsp+178h] [rbp-80h] BYREF
  _BYTE v49[32]; // [rsp+188h] [rbp-70h] BYREF
  __int64 v50; // [rsp+1A8h] [rbp-50h]
  _BYTE v51[72]; // [rsp+1B0h] [rbp-48h] BYREF

  *(_QWORD *)v21 = &off_526288;
  *(_QWORD *)&v21[8] = 1LL;
  *(_QWORD *)&v21[16] = 8LL;
  v22 = 0LL;
  std::io::stdio::_print(v21);
  std::path::Path::join(v40, a1, a2, aTasks_0, 5LL);
  *(_QWORD *)v21 = 0LL;
  *(_DWORD *)&v21[16] = 0;
  DWORD2(v22) = 0;
  *(_QWORD *)&v22 = 0x6400000001LL;
  heed::envs::env_open_options::EnvOpenOptions<T>::open(v18, v21, v40);
  v2 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v18, v41, v42);
  v4 = v3;
  if ( (v2 & 1) == 0 )
  {
    v26 = v3;
    heed::txn::RoTxn<T>::new(v21, &v26);
    *(_OWORD *)v18 = *(_OWORD *)&v21[8];
    *(_QWORD *)&v18[16] = v22;
    if ( *(_DWORD *)v21 == 1 )
    {
      *(_QWORD *)&v21[16] = *(_QWORD *)&v18[16];
      *(_OWORD *)v21 = *(_OWORD *)v18;
      v4 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v21);
LABEL_32:
      core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v26);
      goto LABEL_33;
    }
    v34 = *(_QWORD *)&v18[16];
    v33 = *(_OWORD *)v18;
    meilitool::try_opening_database(v21, &v26, &v33);
    v4 = *(_QWORD *)&v21[8];
    if ( (v21[0] & 1) == 0 )
    {
      v5 = *(_DWORD *)&v21[16];
      heed::databases::database::Database<KC,DC,C,CDUP>::len(v21, *(_QWORD *)&v21[8], *(unsigned int *)&v21[16], &v33);
      v6 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(v21);
      v8 = v7;
      if ( (v6 & 1) == 0 )
      {
        v39 = v7;
        heed::databases::database::Database<KC,DC,C,CDUP>::iter(v18, v4, v5, &v33);
        if ( *(_DWORD *)v18 == 5 )
        {
          core::iter::traits::iterator::Iterator::collect(v51, *(_QWORD *)&v18[8], v18[16]);
          <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v49, v51);
          v50 = 0LL;
          <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v43, v49);
          v9 = v44;
          if ( v44 == 0x8000000000000001LL )
          {
LABEL_8:
            core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<core::result::Result<(alloc::string::String,uuid::Uuid),heed::Error>>>>(v49);
            core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v33);
            core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v26);
            v4 = 0LL;
            goto LABEL_33;
          }
          v38 = 0x8000000000000000LL;
          v37 = 0x800000000000000BLL;
          while ( 1 )
          {
            if ( v9 == v38 )
            {
              *(_OWORD *)v21 = v45;
              *(_QWORD *)&v21[16] = v46;
              v8 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v21);
              goto LABEL_29;
            }
            v10 = v43;
            v36 = v45;
            v35 = v9;
            v48[0] = v46;
            v48[1] = v47;
            std::path::Path::join(v18, a1, a2, aIndexes, 7LL);
            v11 = *(_QWORD *)&v18[8];
            v12 = *(_QWORD *)&v18[16];
            <T as alloc::string::SpecToString>::spec_to_string(v21, v48);
            std::path::Path::join(v27, v11, v12, v21);
            core::ptr::drop_in_place<std::path::PathBuf>(v18);
            *(_QWORD *)&v31 = v10 + 1;
            v29 = v28;
            *(_QWORD *)v21 = &v31;
            *(_QWORD *)&v21[8] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
            *(_QWORD *)&v21[16] = &v39;
            *(_QWORD *)&v22 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
            *((_QWORD *)&v22 + 1) = &v35;
            v23 = <alloc::string::String as core::fmt::Display>::fmt;
            v24 = &v29;
            v25 = <std::path::Display as core::fmt::Display>::fmt;
            *(_QWORD *)v18 = &off_526298;
            *(_QWORD *)&v18[8] = 5LL;
            *(_QWORD *)&v18[16] = v21;
            v19 = 4uLL;
            std::io::stdio::_print(v18);
            *(_QWORD *)v21 = 0LL;
            *(_DWORD *)&v21[16] = 0;
            DWORD2(v22) = 0;
            *(_QWORD *)&v22 = 0x1900000001LL;
            heed::envs::env_open_options::EnvOpenOptions<T>::open(v18, v21, v27);
            v13 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(
                    v18,
                    v28,
                    *((_QWORD *)&v28 + 1),
                    &v35);
            v8 = v14;
            if ( (v13 & 1) != 0 )
              break;
            v20 = v14;
            heed::txn::RoTxn<T>::new(v21, &v20);
            anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(
              v18,
              v21,
              v28,
              *((_QWORD *)&v28 + 1),
              &v35);
            v8 = *(_QWORD *)&v18[8];
            if ( *(_QWORD *)v18 == 2LL )
              goto LABEL_27;
            v31 = *(_OWORD *)v18;
            v32 = *(_QWORD *)&v18[16];
            meilitool::try_opening_poly_database(v21, &v20, &v31, aVectorArroy, 12LL);
            anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v18, v21, &v35);
            v8 = *(_QWORD *)&v18[8];
            if ( (v18[0] & 1) != 0 )
              goto LABEL_26;
            v15 = *(_DWORD *)&v18[16];
            heed::txn::RwTxn::new(v21, &v20);
            anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(
              v18,
              v21,
              v28,
              *((_QWORD *)&v28 + 1),
              &v35);
            v16 = *(_QWORD *)&v18[8];
            if ( *(_QWORD *)v18 == 2LL )
              goto LABEL_25;
            v29 = *(_OWORD *)v18;
            v30 = *(_QWORD *)&v18[16];
            meilitool::try_opening_poly_database(v21, &v20, &v29, aVectorArroy, 12LL);
            anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v18, v21, &v35);
            v16 = *(_QWORD *)&v18[8];
            if ( (v18[0] & 1) != 0 )
              goto LABEL_23;
            arroy::upgrade::cosine_from_0_4_to_0_5(
              (unsigned int)v18,
              (unsigned int)&v31,
              v8,
              v15,
              (unsigned int)&v29,
              *(_DWORD *)&v18[8],
              *(_DWORD *)&v18[16]);
            if ( *(_QWORD *)v18 != v37 )
            {
              v22 = v19;
              *(_OWORD *)&v21[8] = *(_OWORD *)&v18[8];
              *(_QWORD *)v21 = *(_QWORD *)v18;
              v16 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v21);
LABEL_23:
              core::ptr::drop_in_place<heed::txn::RwTxn>(&v29);
LABEL_25:
              v8 = v16;
LABEL_26:
              core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v31);
LABEL_27:
              core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v20);
              break;
            }
            *(_QWORD *)&v21[16] = v30;
            *(_OWORD *)v21 = v29;
            heed::txn::RwTxn::commit(v18, v21);
            if ( *(_DWORD *)v18 != 5 )
            {
              *(_DWORD *)&v21[20] = *(_DWORD *)&v18[20];
              *(_OWORD *)&v21[4] = *(_OWORD *)&v18[4];
              *(_DWORD *)v21 = *(_DWORD *)v18;
              v16 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v21);
              goto LABEL_25;
            }
            core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v31);
            core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v20);
            core::ptr::drop_in_place<std::path::PathBuf>(v27);
            core::ptr::drop_in_place<alloc::string::String>(&v35);
            <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v43, v49);
            v9 = v44;
            if ( v44 == 0x8000000000000001LL )
              goto LABEL_8;
          }
          core::ptr::drop_in_place<std::path::PathBuf>(v27);
          core::ptr::drop_in_place<alloc::string::String>(&v35);
LABEL_29:
          core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<core::result::Result<(alloc::string::String,uuid::Uuid),heed::Error>>>>(v49);
        }
        else
        {
          *(_DWORD *)&v21[20] = *(_DWORD *)&v18[20];
          *(_DWORD *)&v21[17] = *(_DWORD *)&v18[17];
          *(_OWORD *)v21 = *(_OWORD *)v18;
          v21[16] = v18[16];
          v8 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v21);
        }
      }
      v4 = v8;
    }
    core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v33);
    goto LABEL_32;
  }
LABEL_33:
  core::ptr::drop_in_place<std::path::PathBuf>(v40);
  return v4;
}