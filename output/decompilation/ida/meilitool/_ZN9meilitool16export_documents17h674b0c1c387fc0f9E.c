__int64 __fastcall meilitool::export_documents(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r14
  __int64 v9; // r15
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  _QWORD *v22; // r13
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v29; // rdx
  char v30; // bp
  __int64 v31; // rax
  _QWORD *v32; // rsi
  int v33; // [rsp+14h] [rbp-B84h] BYREF
  __int64 v34; // [rsp+18h] [rbp-B80h] BYREF
  __int64 v35; // [rsp+20h] [rbp-B78h]
  __int64 v36; // [rsp+28h] [rbp-B70h] BYREF
  char v37; // [rsp+30h] [rbp-B68h]
  int v38; // [rsp+3Ch] [rbp-B5Ch]
  __int128 v39; // [rsp+40h] [rbp-B58h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B48h]
  __int64 v41; // [rsp+58h] [rbp-B40h]
  char v42[8]; // [rsp+60h] [rbp-B38h] BYREF
  __int64 v43; // [rsp+68h] [rbp-B30h]
  __int64 v44; // [rsp+70h] [rbp-B28h]
  __int64 v45; // [rsp+78h] [rbp-B20h] BYREF
  __int64 v46; // [rsp+80h] [rbp-B18h]
  __int64 v47; // [rsp+88h] [rbp-B10h]
  __int128 v48; // [rsp+90h] [rbp-B08h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-AF8h]
  __int128 v50; // [rsp+B0h] [rbp-AE8h] BYREF
  __int64 v51; // [rsp+C0h] [rbp-AD8h]
  __int64 v52; // [rsp+C8h] [rbp-AD0h]
  __int64 v53; // [rsp+D0h] [rbp-AC8h]
  __int64 v54; // [rsp+D8h] [rbp-AC0h]
  __int64 v55; // [rsp+E0h] [rbp-AB8h]
  __int64 v56; // [rsp+E8h] [rbp-AB0h]
  __int64 v57; // [rsp+F0h] [rbp-AA8h]
  char v58[8]; // [rsp+F8h] [rbp-AA0h] BYREF
  __int64 v59; // [rsp+100h] [rbp-A98h]
  __int64 v60; // [rsp+108h] [rbp-A90h]
  _OWORD v61[29]; // [rsp+110h] [rbp-A88h] BYREF
  _OWORD v62[2]; // [rsp+2E0h] [rbp-8B8h] BYREF
  __int128 v63; // [rsp+300h] [rbp-898h]
  __int16 v64; // [rsp+310h] [rbp-888h]
  int v65; // [rsp+312h] [rbp-886h]
  __int16 v66; // [rsp+316h] [rbp-882h]
  __int128 v67; // [rsp+320h] [rbp-878h] BYREF
  __int64 v68; // [rsp+330h] [rbp-868h]
  int v69; // [rsp+338h] [rbp-860h] BYREF
  __int64 v70; // [rsp+340h] [rbp-858h]
  __int64 v71; // [rsp+348h] [rbp-850h]
  __int128 v72; // [rsp+350h] [rbp-848h]
  _QWORD v73[2]; // [rsp+360h] [rbp-838h] BYREF
  __int128 v74; // [rsp+370h] [rbp-828h] BYREF
  __int64 v75; // [rsp+380h] [rbp-818h]
  _BYTE v76[40]; // [rsp+3B8h] [rbp-7E0h] BYREF
  _OWORD v77[4]; // [rsp+3E0h] [rbp-7B8h] BYREF
  __int64 v78; // [rsp+420h] [rbp-778h]
  _OWORD v79[20]; // [rsp+430h] [rbp-768h] BYREF
  _BYTE v80[464]; // [rsp+570h] [rbp-628h] BYREF
  __int128 v81; // [rsp+740h] [rbp-458h] BYREF
  _QWORD v82[3]; // [rsp+758h] [rbp-440h] BYREF
  __int128 v83; // [rsp+770h] [rbp-428h]
  __int64 v84; // [rsp+780h] [rbp-418h]
  char v85; // [rsp+788h] [rbp-410h]
  char v86; // [rsp+789h] [rbp-40Fh]
  _OWORD v87[8]; // [rsp+790h] [rbp-408h] BYREF
  __int64 v88; // [rsp+810h] [rbp-388h]
  __int128 *v89; // [rsp+818h] [rbp-380h]
  __int128 *v90; // [rsp+820h] [rbp-378h]
  __int64 v91; // [rsp+828h] [rbp-370h]
  __int64 v92; // [rsp+830h] [rbp-368h] BYREF
  __int128 v93; // [rsp+838h] [rbp-360h]
  __int64 v94; // [rsp+848h] [rbp-350h]
  char v95; // [rsp+850h] [rbp-348h]
  _OWORD v96[20]; // [rsp+858h] [rbp-340h] BYREF
  __int128 v97; // [rsp+998h] [rbp-200h] BYREF
  _BYTE dest[448]; // [rsp+9A8h] [rbp-1F0h] BYREF

  v35 = a2;
  v8 = a1;
  v9 = *(_QWORD *)(a1 + 8);
  v57 = *(_QWORD *)(a1 + 16);
  std::path::Path::join(v58, v9, v57, aTasks_0, 5LL);
  *(_QWORD *)&v61[0] = 0LL;
  LODWORD(v61[1]) = 0;
  LODWORD(v61[2]) = 0;
  *((_QWORD *)&v61[1] + 1) = 0x6400000001LL;
  heed::envs::env_open_options::EnvOpenOptions<T>::open(v80, v61, v58);
  v10 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v80, v59, v60);
  v12 = v11;
  if ( (v10 & 1) != 0 )
    goto LABEL_58;
  v34 = v11;
  heed::txn::RoTxn<T>::new(v61, &v34);
  *(_OWORD *)v80 = *(_OWORD *)((char *)v61 + 8);
  *(_QWORD *)&v80[16] = *((_QWORD *)&v61[1] + 1);
  if ( LODWORD(v61[0]) == 1 )
  {
    *(_QWORD *)&v61[1] = *(_QWORD *)&v80[16];
    v61[0] = *(_OWORD *)v80;
    v12 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v61);
LABEL_57:
    core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v34);
    goto LABEL_58;
  }
  v49 = *(_QWORD *)&v80[16];
  v48 = *(_OWORD *)v80;
  meilitool::try_opening_database(v61, &v34, &v48);
  v12 = *((_QWORD *)&v61[0] + 1);
  if ( (v61[0] & 1) != 0 )
  {
LABEL_56:
    core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v48);
    goto LABEL_57;
  }
  heed::databases::database::Database<KC,DC,C,CDUP>::iter(v80, *((_QWORD *)&v61[0] + 1), LODWORD(v61[1]), &v48);
  if ( *(_DWORD *)v80 != 5 )
  {
    DWORD1(v61[1]) = *(_DWORD *)&v80[20];
    *(_DWORD *)((char *)&v61[1] + 1) = *(_DWORD *)&v80[17];
    v61[0] = *(_OWORD *)v80;
    LOBYTE(v61[1]) = v80[16];
    v12 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v61);
    goto LABEL_56;
  }
  v54 = v9;
  v38 = a3;
  v36 = *(_QWORD *)&v80[8];
  v37 = v80[16];
  v56 = *(_QWORD *)(v35 + 8);
  v55 = *(_QWORD *)(v35 + 16);
  v53 = a4;
  v13 = 0LL;
  v52 = a5;
  if ( (a4 & 1) != 0 )
    v13 = a5;
  v41 = v13;
  while ( 1 )
  {
    <heed::iterator::iter::RoIter<KC,DC,IM> as core::iter::traits::iterator::Iterator>::next(&v69, &v36);
    if ( v69 != 1 )
      break;
    if ( !v70 )
    {
      *(_OWORD *)((char *)v61 + 8) = v72;
      *(_QWORD *)&v61[0] = v71;
      v12 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v61);
LABEL_55:
      core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v36);
      goto LABEL_56;
    }
    v81 = v72;
    v73[0] = v70;
    v73[1] = v71;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v70, v71, v56, v55) )
    {
      std::path::Path::join(v80, v54, v57, aIndexes, 7LL);
      v14 = *(_QWORD *)&v80[8];
      v15 = *(_QWORD *)&v80[16];
      <T as alloc::string::SpecToString>::spec_to_string(v61, &v81);
      std::path::Path::join(v42, v14, v15, v61);
      core::ptr::drop_in_place<std::path::PathBuf>(v80);
      *(_QWORD *)&v96[0] = 0LL;
      LODWORD(v96[1]) = 0;
      DWORD2(v96[1]) = 0;
      LODWORD(v96[2]) = 0;
      milli::index::Index::new(v61);
      anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(v80, v61, v43, v44);
      v12 = *(_QWORD *)&v80[8];
      if ( *(_QWORD *)v80 )
      {
        memcpy(dest, &v80[16], sizeof(dest));
        v97 = *(_OWORD *)v80;
        milli::index::Index::read_txn(v61, &v97);
        *(_OWORD *)v80 = *(_OWORD *)((char *)v61 + 8);
        *(_QWORD *)&v80[16] = *((_QWORD *)&v61[1] + 1);
        if ( LODWORD(v61[0]) == 1 )
        {
          *(_QWORD *)&v61[1] = *(_QWORD *)&v80[16];
          v61[0] = *(_OWORD *)v80;
          v8 = a1;
          v12 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v61);
        }
        else
        {
          v40 = *(_QWORD *)&v80[16];
          v39 = *(_OWORD *)v80;
          v8 = a1;
          milli::index::Index::fields_ids_map(v61, &v97, &v39);
          if ( LOWORD(v61[3]) == 2 )
          {
            *(_QWORD *)&v80[16] = *(_QWORD *)&v61[1];
            *(_OWORD *)v80 = v61[0];
            v12 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v61);
          }
          else
          {
            *(_OWORD *)&v80[32] = v61[2];
            *(_OWORD *)&v80[16] = v61[1];
            *(_OWORD *)v80 = v61[0];
            v66 = WORD3(v61[3]);
            v65 = *(_DWORD *)((char *)&v61[3] + 2);
            v62[0] = v61[0];
            v62[1] = v61[1];
            v63 = v61[2];
            v64 = v61[3];
            v16 = *((_QWORD *)&v61[1] + 1);
            v17 = 0LL;
            v18 = *((_QWORD *)&v61[1] + 1);
            if ( *((_QWORD *)&v61[1] + 1) )
              v18 = *((_QWORD *)&v63 + 1);
            LOBYTE(v17) = *((_QWORD *)&v61[1] + 1) != 0LL;
            v61[0] = v17;
            *(_QWORD *)&v61[1] = *((_QWORD *)&v61[1] + 1);
            *((_QWORD *)&v61[1] + 1) = v63;
            v61[2] = v17;
            *(_QWORD *)&v61[3] = v16;
            *((_QWORD *)&v61[3] + 1) = v63;
            *(_QWORD *)&v61[4] = v18;
            core::iter::traits::iterator::Iterator::collect(&v45, v61);
            if ( (v53 & 1) != 0 )
            {
              *(_QWORD *)&v96[0] = v52;
              *(_QWORD *)v80 = v96;
              *(_QWORD *)&v80[8] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
              *(_QWORD *)&v61[0] = &off_526EE0;
              *((_QWORD *)&v61[0] + 1) = 2LL;
              *(_QWORD *)&v61[2] = 0LL;
              *(_QWORD *)&v61[1] = v80;
              *((_QWORD *)&v61[1] + 1) = 1LL;
              std::io::stdio::_eprint(v61);
            }
            v19 = std::io::stdio::stdout();
            std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v76, v19);
            milli::index::Index::documents_ids(v80, &v97, &v39);
            v67 = *(_OWORD *)&v80[8];
            v68 = *(_QWORD *)&v80[24];
            if ( *(_DWORD *)v80 == 1 )
            {
              *(_QWORD *)&v80[16] = v68;
              *(_OWORD *)v80 = v67;
              v31 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v80);
            }
            else
            {
              roaring::bitmap::iter::<impl core::iter::traits::collect::IntoIterator for roaring::bitmap::RoaringBitmap>::into_iter(
                v61,
                &v67);
              v87[7] = v61[7];
              v87[6] = v61[6];
              v87[5] = v61[5];
              v87[4] = v61[4];
              v87[3] = v61[3];
              v87[2] = v61[2];
              v87[1] = v61[1];
              v87[0] = v61[0];
              v88 = v41;
              v89 = &v97;
              v90 = &v39;
              v91 = 0LL;
              while ( 1 )
              {
                <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(
                  v80,
                  v87);
                if ( *(_QWORD *)&v80[8] == 94LL )
                  break;
                if ( *(_DWORD *)&v80[8] != 93 )
                {
                  memcpy(&v61[2], &v80[40], 0x120uLL);
                  v61[0] = *(_OWORD *)&v80[8];
                  v61[1] = *(_OWORD *)&v80[24];
                  v8 = a1;
                  v26 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v61);
LABEL_45:
                  v12 = v26;
                  goto LABEL_50;
                }
                v20 = *(_QWORD *)v80;
                v33 = *(_DWORD *)&v80[16];
                milli::obkv_to_json(v96, v46, v47, v62, *(_QWORD *)&v80[24], *(_QWORD *)&v80[32]);
                v79[0] = *(_OWORD *)((char *)v96 + 8);
                v79[1] = *(_OWORD *)((char *)&v96[1] + 8);
                v79[2] = *(_OWORD *)((char *)&v96[2] + 8);
                v79[3] = *(_OWORD *)((char *)&v96[3] + 8);
                *(_QWORD *)&v79[4] = *((_QWORD *)&v96[4] + 1);
                if ( *(_QWORD *)&v96[0] != 93LL )
                {
                  memcpy(&v61[5], &v96[5], 0xF0uLL);
                  *(_OWORD *)((char *)v61 + 8) = v79[0];
                  *(_OWORD *)((char *)&v61[1] + 8) = v79[1];
                  *(_OWORD *)((char *)&v61[2] + 8) = v79[2];
                  *(_OWORD *)((char *)&v61[3] + 8) = v79[3];
                  *((_QWORD *)&v61[4] + 1) = *(_QWORD *)&v79[4];
                  *(_QWORD *)&v61[0] = *(_QWORD *)&v96[0];
                  v8 = a1;
                  v26 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v61);
                  goto LABEL_45;
                }
                v77[0] = v79[0];
                v77[1] = v79[1];
                v77[2] = v79[2];
                v77[3] = v79[3];
                v78 = *(_QWORD *)&v79[4];
                if ( __ROR8__(0xD288CE703AFB7E91LL * v20, 4) <= 0x68DB8BAC710CBuLL )
                {
                  *(_QWORD *)&v79[0] = v41 + v20;
                  *(_QWORD *)&v96[0] = v79;
                  *((_QWORD *)&v96[0] + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
                  *(_QWORD *)&v61[0] = &off_526F00;
                  *((_QWORD *)&v61[0] + 1) = 2LL;
                  *(_QWORD *)&v61[2] = 0LL;
                  *(_QWORD *)&v61[1] = v96;
                  *((_QWORD *)&v61[1] + 1) = 1LL;
                  std::io::stdio::_eprint(v61);
                }
                if ( !(_BYTE)v38 )
                {
                  milli::index::Index::embeddings(v96);
                  v79[0] = *(_OWORD *)((char *)v96 + 8);
                  *(_QWORD *)&v79[1] = *((_QWORD *)&v96[1] + 1);
                  if ( *(_QWORD *)&v96[0] != 93LL )
                  {
                    memcpy(&v61[2], &v96[2], 0x120uLL);
                    *(_OWORD *)((char *)v61 + 8) = v79[0];
                    *((_QWORD *)&v61[1] + 1) = *(_QWORD *)&v79[1];
                    *(_QWORD *)&v61[0] = *(_QWORD *)&v96[0];
                    v8 = a1;
                    v27 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v61);
LABEL_48:
                    v12 = v27;
                    goto LABEL_49;
                  }
                  v50 = v79[0];
                  v51 = *(_QWORD *)&v79[1];
                  if ( *(_QWORD *)&v79[1] )
                  {
                    serde_json::map::Map<alloc::string::String,serde_json::value::Value>::entry(v96, v77);
                    v8 = a1;
                    v21 = std::thread::local::LocalKey<T>::with();
                    indexmap::map::IndexMap<K,V,S>::with_capacity_and_hasher(v61, v21);
                    v22 = (_QWORD *)serde_json::map::Entry::or_insert(v96, v61);
                    if ( *v22 <= (signed __int64)0x8000000000000004LL )
                    {
                      milli::index::Index::external_id_of(v79);
                      if ( LODWORD(v79[0]) == 93 )
                      {
                        meilitool::export_documents::{{closure}}(v96);
                        memcpy((char *)v61 + 8, v96, 0x140uLL);
                        *(_QWORD *)&v61[0] = 0LL;
                        if ( *((_QWORD *)&v61[0] + 1) == 93LL )
                        {
                          v75 = *(_QWORD *)&v61[2];
                          v74 = v61[1];
                          v30 = 0;
                          goto LABEL_71;
                        }
                      }
                      else
                      {
                        memcpy((char *)v61 + 8, v79, 0x140uLL);
                        *(_QWORD *)&v61[0] = 1LL;
                      }
                      *(_QWORD *)&v74 = &v33;
                      *((_QWORD *)&v74 + 1) = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
                      *(_QWORD *)&v96[0] = &off_526F20;
                      *((_QWORD *)&v96[0] + 1) = 1LL;
                      *(_QWORD *)&v96[2] = 0LL;
                      *(_QWORD *)&v96[1] = &v74;
                      *((_QWORD *)&v96[1] + 1) = 1LL;
                      core::option::Option<T>::map_or_else(v79, 0LL, v29, v96);
                      v74 = v79[0];
                      v75 = *(_QWORD *)&v79[1];
                      v30 = 1;
LABEL_71:
                      v32 = v22;
                      <serde_json::value::Value as core::clone::Clone>::clone(v79, v22);
                      *((_QWORD *)&v96[1] + 1) = v75;
                      *(_OWORD *)((char *)v96 + 8) = v74;
                      v96[2] = v79[0];
                      v96[3] = v79[1];
                      v96[4] = v79[2];
                      v96[5] = v79[3];
                      *(_QWORD *)&v96[6] = *(_QWORD *)&v79[4];
                      *(_QWORD *)&v96[0] = 40LL;
                      v12 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v96);
                      if ( LODWORD(v61[0]) == 1 )
                      {
                        core::ptr::drop_in_place<core::result::Result<core::option::Option<core::result::Result<alloc::string::String,milli::error::Error>>,milli::error::Error>>(v61);
                      }
                      else if ( *((_QWORD *)&v61[0] + 1) == 93LL )
                      {
                        if ( v30 )
                          core::ptr::drop_in_place<alloc::string::String>(&v61[1]);
                      }
                      else if ( DWORD2(v61[0]) != 94 )
                      {
                        core::ptr::drop_in_place<core::result::Result<alloc::string::String,milli::error::Error>>((char *)v61 + 8);
                      }
                      core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,milli::index::EmbeddingsWithMetadata>>(
                        &v50,
                        v32);
LABEL_49:
                      core::ptr::drop_in_place<serde_json::map::Map<alloc::string::String,serde_json::value::Value>>(v77);
LABEL_50:
                      core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<core::iter::adapters::skip::Skip<roaring::bitmap::iter::IntoIter>,milli::index::Index::iter_documents<core::iter::adapters::skip::Skip<roaring::bitmap::iter::IntoIter>>::{{closure}}>>>(v87);
                      goto LABEL_51;
                    }
                    <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(
                      &v74,
                      &v50);
                    while ( 1 )
                    {
                      <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(
                        v82,
                        &v74);
                      if ( v82[0] == 0x8000000000000000LL )
                        break;
                      v94 = v84;
                      v93 = v83;
                      v23 = v86 ^ 1;
                      if ( !v85 )
                        v23 = 0;
                      v92 = 0LL;
                      v95 = v23;
                      serde_json::value::to_value(v61, &v92);
                      core::result::Result<T,E>::unwrap(v96, v61);
                      indexmap::map::IndexMap<K,V,S>::insert_full(v61, v22, v82, v96);
                      *(_QWORD *)&v79[4] = *((_QWORD *)&v61[4] + 1);
                      v79[3] = *(_OWORD *)((char *)&v61[3] + 8);
                      v79[2] = *(_OWORD *)((char *)&v61[2] + 8);
                      v79[1] = *(_OWORD *)((char *)&v61[1] + 8);
                      v79[0] = *(_OWORD *)((char *)v61 + 8);
                      core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(v79);
                    }
                    core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<alloc::string::String,milli::index::EmbeddingsWithMetadata>>(&v74);
                  }
                  else
                  {
                    core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,milli::index::EmbeddingsWithMetadata>>(
                      &v50,
                      &v97);
                  }
                }
                v24 = serde_json::ser::to_writer(v76, v77);
                if ( v24 )
                {
                  v8 = a1;
                  v27 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v24);
                  goto LABEL_48;
                }
                core::ptr::drop_in_place<serde_json::map::Map<alloc::string::String,serde_json::value::Value>>(v77);
              }
              v8 = a1;
              core::ptr::drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<core::iter::adapters::skip::Skip<roaring::bitmap::iter::IntoIter>,milli::index::Index::iter_documents<core::iter::adapters::skip::Skip<roaring::bitmap::iter::IntoIter>>::{{closure}}>>>(v87);
              v25 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v76);
              if ( !v25 )
              {
                core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(v76);
                core::ptr::drop_in_place<alloc::vec::Vec<u16>>(v45, v46);
                core::ptr::drop_in_place<milli::fields_ids_map::FieldsIdsMap>(v62);
                core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v39);
                core::ptr::drop_in_place<milli::index::Index>(&v97);
                core::ptr::drop_in_place<std::path::PathBuf>(v42);
                v8 = a1;
                continue;
              }
              v31 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v25);
            }
            v12 = v31;
LABEL_51:
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(v76);
            core::ptr::drop_in_place<alloc::vec::Vec<u16>>(v45, v46);
            core::ptr::drop_in_place<milli::fields_ids_map::FieldsIdsMap>(v62);
          }
          core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v39);
        }
        core::ptr::drop_in_place<milli::index::Index>(&v97);
      }
      else
      {
        v8 = a1;
      }
      core::ptr::drop_in_place<std::path::PathBuf>(v42);
      goto LABEL_55;
    }
    *(_QWORD *)v80 = v73;
    *(_QWORD *)&v80[8] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v61[0] = &off_526F30;
    *((_QWORD *)&v61[0] + 1) = 2LL;
    *(_QWORD *)&v61[2] = 0LL;
    *(_QWORD *)&v61[1] = v80;
    *((_QWORD *)&v61[1] + 1) = 1LL;
    std::io::stdio::_eprint(v61);
  }
  core::ptr::drop_in_place<heed::iterator::iter::RoIter<heed_types::bytes::Bytes,heed_types::bytes::Bytes>>(&v36);
  core::ptr::drop_in_place<heed::txn::RoTxn<heed::txn::WithoutTls>>(&v48);
  core::ptr::drop_in_place<heed::envs::env::Env<heed::txn::WithoutTls>>(&v34);
  v12 = 0LL;
LABEL_58:
  core::ptr::drop_in_place<std::path::PathBuf>(v58);
  core::ptr::drop_in_place<alloc::string::String>(v35);
  core::ptr::drop_in_place<std::path::PathBuf>(v8);
  return v12;
}