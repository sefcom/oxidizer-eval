__int64 __fastcall tabby_index_cli::commands::head::run_head_cli(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned int v7; // eax
  __int64 *v8; // rdx
  unsigned int v9; // r15d
  __int64 *v10; // r12
  __int64 v11; // rbp
  __int64 *v12; // rdx
  unsigned __int64 v13; // rdi
  unsigned int v14; // ebx
  __int64 v15; // rbx
  __int64 v17; // [rsp+8h] [rbp-FF0h] BYREF
  __int64 v18; // [rsp+10h] [rbp-FE8h] BYREF
  _QWORD v19[4]; // [rsp+18h] [rbp-FE0h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-FC0h]
  __int64 v21; // [rsp+40h] [rbp-FB8h]
  __int64 v22; // [rsp+48h] [rbp-FB0h]
  _QWORD v23[3]; // [rsp+50h] [rbp-FA8h] BYREF
  _BYTE v24[24]; // [rsp+68h] [rbp-F90h] BYREF
  _QWORD v25[2]; // [rsp+80h] [rbp-F78h] BYREF
  __int64 v26; // [rsp+90h] [rbp-F68h] BYREF
  __int128 v27; // [rsp+98h] [rbp-F60h]
  __int128 v28; // [rsp+A8h] [rbp-F50h]
  __int128 v29; // [rsp+B8h] [rbp-F40h]
  __int64 v30; // [rsp+C8h] [rbp-F30h]
  __int128 v31; // [rsp+D0h] [rbp-F28h]
  __int128 v32; // [rsp+E0h] [rbp-F18h]
  __int128 v33; // [rsp+F0h] [rbp-F08h]
  _BYTE v34[48]; // [rsp+100h] [rbp-EF8h] BYREF
  _OWORD dest[117]; // [rsp+130h] [rbp-EC8h] BYREF
  _OWORD src[119]; // [rsp+880h] [rbp-778h] BYREF

  tantivy::index::index::Index::open_in_dir(src, a1, a2);
  *(_QWORD *)&dest[3] = *((_QWORD *)&src[3] + 1);
  dest[0] = *(_OWORD *)((char *)src + 8);
  dest[1] = *(_OWORD *)((char *)&src[1] + 8);
  dest[2] = *(_OWORD *)((char *)&src[2] + 8);
  if ( *(_QWORD *)&src[0] == 0x8000000000000001LL )
  {
    *(_QWORD *)&src[3] = *(_QWORD *)&dest[3];
    src[2] = dest[2];
    src[1] = dest[1];
    src[0] = dest[0];
    return anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(src);
  }
  v33 = src[6];
  v32 = src[5];
  v31 = src[4];
  v27 = dest[0];
  v28 = dest[1];
  v29 = dest[2];
  v30 = *(_QWORD *)&dest[3];
  v26 = *(_QWORD *)&src[0];
  v4 = &v26;
  tantivy::index::index::Index::reader(dest, &v26);
  if ( *(_QWORD *)&dest[0] != 18LL )
  {
    *(_OWORD *)((char *)&src[2] + 8) = *(_OWORD *)((char *)&dest[2] + 8);
    *(_OWORD *)((char *)&src[1] + 8) = *(_OWORD *)((char *)&dest[1] + 8);
    src[0] = dest[0];
    *(_QWORD *)&src[1] = *(_QWORD *)&dest[1];
    v15 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(src);
    core::ptr::drop_in_place<tantivy::index::index::Index>(&v26);
    return v15;
  }
  v19[0] = *((_QWORD *)&dest[0] + 1);
  v19[1] = *(_QWORD *)&dest[1];
  v18 = tantivy::reader::IndexReader::searcher(v19);
  core::ptr::drop_in_place<tantivy::reader::IndexReader>(v19);
  v5 = tabby_common::index::IndexSchema::instance();
  v6 = *(_QWORD *)(v18 + 24) + 400LL * *(_QWORD *)(v18 + 32);
  v23[0] = *(_QWORD *)(v18 + 24);
  v23[1] = v6;
  v23[2] = 0LL;
  v7 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v23);
  if ( !v8 )
    goto LABEL_24;
  v9 = v7;
  v10 = v8;
  v22 = a3[1];
  v21 = a3[2];
  v20 = a3[3];
  v11 = 0LL;
  while ( 1 )
  {
    v4 = v10;
    tantivy::index::segment_reader::SegmentReader::inverted_index(src, v10, *(unsigned int *)(v5 + 8));
    if ( LODWORD(src[0]) == 18 )
      break;
    core::ptr::drop_in_place<core::result::Result<alloc::sync::Arc<tantivy::index::inverted_index_reader::InvertedIndexReader>,tantivy::error::TantivyError>>(src);
LABEL_6:
    v9 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v23);
    v10 = v12;
    if ( !v12 )
      goto LABEL_24;
  }
  v17 = *((_QWORD *)&src[0] + 1);
  tantivy::schema::term::Term::from_field_text(v24, *(unsigned int *)(v5 + 8), v22, v21);
  v4 = (__int64 *)(v17 + 16);
  tantivy::index::inverted_index_reader::InvertedIndexReader::read_postings(src, v17 + 16, v24, 0LL);
  if ( LODWORD(src[0]) >= 2 )
  {
    core::ptr::drop_in_place<core::result::Result<core::option::Option<tantivy::postings::segment_postings::SegmentPostings>,std::io::error::Error>>(src);
    core::ptr::drop_in_place<tantivy::schema::term::Term>(v24);
    core::ptr::drop_in_place<alloc::sync::Arc<tantivy::index::inverted_index_reader::InvertedIndexReader>>(&v17);
    goto LABEL_6;
  }
  v4 = (__int64 *)src;
  memcpy(dest, src, 0x748uLL);
  v13 = *(_QWORD *)&dest[116];
  if ( *(_QWORD *)&dest[116] >= 0x80uLL )
LABEL_25:
    core::panicking::panic_bounds_check(v13, 128LL, &off_584BD8);
  while ( 2 )
  {
    v14 = *((_DWORD *)dest + v13 + 2);
    if ( v14 == 0x7FFFFFFF )
    {
      core::ptr::drop_in_place<tantivy::postings::segment_postings::SegmentPostings>(dest);
      core::ptr::drop_in_place<tantivy::schema::term::Term>(v24);
      core::ptr::drop_in_place<alloc::sync::Arc<tantivy::index::inverted_index_reader::InvertedIndexReader>>(&v17);
      goto LABEL_6;
    }
    v4 = (__int64 *)v14;
    if ( (unsigned __int8)tantivy::index::segment_reader::SegmentReader::is_deleted(v10, v14) )
    {
LABEL_17:
      if ( *(_QWORD *)&dest[116] == 127LL )
      {
        *(_QWORD *)&dest[116] = 0LL;
        tantivy::postings::block_segment_postings::BlockSegmentPostings::advance(dest);
        v13 = *(_QWORD *)&dest[116];
        if ( *(_QWORD *)&dest[116] >= 0x80uLL )
          goto LABEL_25;
      }
      else
      {
        v13 = *(_QWORD *)&dest[116] + 1LL;
        *(_QWORD *)&dest[116] = v13;
        if ( v13 >= 0x80 )
          goto LABEL_25;
      }
      continue;
    }
    break;
  }
  tantivy::core::searcher::Searcher::doc(src, v18, v9, v14);
  core::result::Result<T,E>::expect(v34, src);
  v4 = (__int64 *)v34;
  tabby_index_cli::commands::head::to_json_value(v19, v34, v5);
  v25[0] = v19;
  v25[1] = <serde_json::value::Value as core::fmt::Display>::fmt;
  *(_QWORD *)&src[0] = &unk_584BB8;
  *((_QWORD *)&src[0] + 1) = 2LL;
  *(_QWORD *)&src[1] = v25;
  *(_OWORD *)((char *)&src[1] + 8) = 1uLL;
  std::io::stdio::_print(src);
  if ( ++v11 < v20 )
  {
    core::ptr::drop_in_place<serde_json::value::Value>(v19);
    goto LABEL_17;
  }
  core::ptr::drop_in_place<serde_json::value::Value>(v19);
  core::ptr::drop_in_place<tantivy::postings::segment_postings::SegmentPostings>(dest);
  core::ptr::drop_in_place<tantivy::schema::term::Term>(v24);
  core::ptr::drop_in_place<alloc::sync::Arc<tantivy::index::inverted_index_reader::InvertedIndexReader>>(&v17);
LABEL_24:
  core::ptr::drop_in_place<tantivy::core::searcher::Searcher>(&v18, v4);
  core::ptr::drop_in_place<tantivy::index::index::Index>(&v26);
  return 0LL;
}