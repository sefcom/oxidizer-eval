__int64 __fastcall tabby_index_cli::commands::bench::run_bench(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 result; // rax
  __int128 v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int128 v11; // xmm0
  _OWORD *v12; // rcx
  __int128 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rt0
  char v16; // of
  __int64 v17; // r12
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // r15
  __int64 v27; // rbp
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int128 v33; // rax
  __int128 v34; // kr00_16
  __int64 v35; // rdx
  __int64 v36; // r13
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rcx
  __int128 v40; // xmm0
  __int64 v41; // rax
  __int128 v42; // [rsp+0h] [rbp-2C8h] BYREF
  __m256i v43; // [rsp+10h] [rbp-2B8h]
  __int64 v44; // [rsp+30h] [rbp-298h]
  __int64 v45; // [rsp+40h] [rbp-288h] BYREF
  __int64 v46; // [rsp+48h] [rbp-280h]
  __int64 v47; // [rsp+50h] [rbp-278h]
  __int64 v48; // [rsp+58h] [rbp-270h] BYREF
  _BYTE v49[48]; // [rsp+60h] [rbp-268h] BYREF
  __int64 v50; // [rsp+90h] [rbp-238h]
  __int64 v51; // [rsp+98h] [rbp-230h]
  __int128 v52; // [rsp+A0h] [rbp-228h] BYREF
  unsigned __int64 v53; // [rsp+B8h] [rbp-210h]
  __int64 v54; // [rsp+C0h] [rbp-208h]
  __int64 v55; // [rsp+C8h] [rbp-200h]
  __int128 v56; // [rsp+D0h] [rbp-1F8h] BYREF
  __int64 v57; // [rsp+E0h] [rbp-1E8h]
  __int64 v58; // [rsp+E8h] [rbp-1E0h]
  unsigned __int64 v59; // [rsp+F0h] [rbp-1D8h]
  __int64 v60; // [rsp+F8h] [rbp-1D0h] BYREF
  __int64 v61; // [rsp+100h] [rbp-1C8h] BYREF
  __int64 v62; // [rsp+108h] [rbp-1C0h]
  _BYTE v63[112]; // [rsp+110h] [rbp-1B8h] BYREF
  __int128 v64; // [rsp+180h] [rbp-148h] BYREF
  __int64 v65; // [rsp+190h] [rbp-138h]
  unsigned __int64 v66; // [rsp+1B8h] [rbp-110h]
  __int64 v67; // [rsp+1C0h] [rbp-108h] BYREF
  __int64 v68; // [rsp+1C8h] [rbp-100h]
  _QWORD v69[2]; // [rsp+1D0h] [rbp-F8h] BYREF
  __int128 v70; // [rsp+1E0h] [rbp-E8h] BYREF
  __int64 v71; // [rsp+1F0h] [rbp-D8h]
  __int64 v72; // [rsp+1F8h] [rbp-D0h] BYREF
  __int128 v73; // [rsp+200h] [rbp-C8h]
  unsigned __int64 v74; // [rsp+218h] [rbp-B0h] BYREF
  __m256i v75; // [rsp+220h] [rbp-A8h] BYREF
  __int128 v76; // [rsp+240h] [rbp-88h]
  __int128 v77; // [rsp+250h] [rbp-78h]
  __int128 v78; // [rsp+260h] [rbp-68h]
  __int128 v79; // [rsp+270h] [rbp-58h]
  __int128 v80; // [rsp+280h] [rbp-48h]

  v53 = a6;
  v67 = a2;
  v68 = a3;
  v69[0] = a4;
  v69[1] = a5;
  v75.m256i_i64[0] = (__int64)&v67;
  v75.m256i_i64[1] = (__int64)<&T as core::fmt::Debug>::fmt;
  *(_QWORD *)v63 = &off_5849D0;
  *(_QWORD *)&v63[8] = 2LL;
  *(_QWORD *)&v63[32] = 0LL;
  *(_QWORD *)&v63[16] = &v75;
  *(_QWORD *)&v63[24] = 1LL;
  std::io::stdio::_print(v63);
  v75.m256i_i64[0] = (__int64)v69;
  v75.m256i_i64[1] = (__int64)<&T as core::fmt::Debug>::fmt;
  *(_QWORD *)v63 = &off_5849F0;
  *(_QWORD *)&v63[8] = 2LL;
  *(_QWORD *)&v63[32] = 0LL;
  *(_QWORD *)&v63[16] = &v75;
  *(_QWORD *)&v63[24] = 1LL;
  std::io::stdio::_print(v63);
  *(_QWORD *)v63 = &off_584A10;
  *(_QWORD *)&v63[8] = 1LL;
  *(_QWORD *)&v63[16] = 8LL;
  *(_OWORD *)&v63[24] = 0LL;
  std::io::stdio::_print(v63);
  tantivy::index::index::Index::open_in_dir(v63, v67, v68);
  if ( *(_QWORD *)v63 == 0x8000000000000001LL )
  {
    *(_QWORD *)&v77 = *(_QWORD *)&v63[56];
    v76 = *(_OWORD *)&v63[40];
    v75 = *(__m256i *)&v63[8];
    tabby_index_cli::commands::bench::run_bench::{{closure}}(&v42, &v75);
    result = v43.m256i_i64[0];
    *(_QWORD *)&v49[16] = v43.m256i_i64[0];
    v7 = v42;
    *(_OWORD *)v49 = v42;
    *(_QWORD *)(a1 + 16) = v43.m256i_i64[0];
    *(_OWORD *)a1 = v7;
    return result;
  }
  v51 = a1;
  v43.m256i_i64[0] = *(_QWORD *)&v63[24];
  v76 = *(_OWORD *)&v63[32];
  v77 = *(_OWORD *)&v63[48];
  v78 = *(_OWORD *)&v63[64];
  v79 = *(_OWORD *)&v63[80];
  v80 = *(_OWORD *)&v63[96];
  *(_OWORD *)v49 = *(_OWORD *)&v63[8];
  *(_QWORD *)&v49[16] = *(_QWORD *)&v63[24];
  v75 = *(__m256i *)v63;
  tantivy::index::index::Index::reader(&v42, &v75);
  if ( (_DWORD)v42 == 18 )
  {
    v8 = *((_QWORD *)&v42 + 1);
    v9 = v43.m256i_i64[0];
  }
  else
  {
    *(_QWORD *)&v63[48] = v44;
    *(__m256i *)&v63[16] = v43;
    *(_OWORD *)v63 = v42;
    tabby_index_cli::commands::bench::run_bench::{{closure}}(v49, v63);
    v8 = *(_QWORD *)&v49[8];
    v9 = *(_QWORD *)&v49[16];
    if ( *(_QWORD *)v49 != 0x8000000000000000LL )
    {
      v37 = v51;
      *(_OWORD *)v51 = *(_OWORD *)v49;
      *(_QWORD *)(v37 + 16) = v9;
      return core::ptr::drop_in_place<tantivy::index::index::Index>(&v75);
    }
  }
  *(_QWORD *)&v64 = v8;
  *((_QWORD *)&v64 + 1) = v9;
  v48 = tantivy::reader::IndexReader::searcher(&v64);
  core::ptr::drop_in_place<tantivy::reader::IndexReader>(&v64);
  *(_QWORD *)v63 = tantivy::index::index::Index::schema(&v75);
  tabby_index_cli::commands::bench::extract_search_fields((__int64)&v70, *(__int64 *)v63);
  core::ptr::drop_in_place<tantivy::schema::schema::Schema>(v63);
  v10 = v69[0];
  tabby_index_cli::commands::bench::read_query_file(&v42);
  if ( (_QWORD)v42 == 0x8000000000000000LL )
  {
    tabby_index_cli::commands::bench::run_bench::{{closure}}(v63, *((_QWORD *)&v42 + 1));
    v11 = *(_OWORD *)v63;
    v64 = *(_OWORD *)v63;
    v65 = *(_QWORD *)&v63[16];
    v12 = (_OWORD *)v51;
    *(_QWORD *)(v51 + 16) = *(_QWORD *)&v63[16];
    *v12 = v11;
    v13 = (__int128 *)*((_QWORD *)&v70 + 1);
    core::ptr::drop_in_place<alloc::vec::Vec<tantivy::schema::field::Field>>(v70, *((_QWORD *)&v70 + 1));
LABEL_36:
    core::ptr::drop_in_place<tantivy::core::searcher::Searcher>(&v48, v13);
    return core::ptr::drop_in_place<tantivy::index::index::Index>(&v75);
  }
  v56 = v42;
  v57 = v43.m256i_i64[0];
  v14 = tantivy::index::index::Index::schema(&v75);
  v15 = _InterlockedIncrement64((volatile signed __int64 *)v79);
  if ( (v15 < 0) ^ v16 | (v15 == 0) )
    BUG();
  *(_QWORD *)&v63[24] = v14;
  *(_OWORD *)v63 = v70;
  *(_QWORD *)&v63[16] = v71;
  v63[104] = 0;
  *(_QWORD *)&v63[32] = v79;
  *(_OWORD *)&v63[40] = *(_OWORD *)&off_584AD0;
  *(_OWORD *)&v63[56] = xmmword_584AE0;
  *(_OWORD *)&v63[72] = *(_OWORD *)&off_584AD0;
  *(_OWORD *)&v63[88] = xmmword_584AE0;
  *(_QWORD *)&v42 = &off_584A20;
  *((_QWORD *)&v42 + 1) = 1LL;
  v43.m256i_i64[0] = 8LL;
  *(_OWORD *)&v43.m256i_u64[1] = 0LL;
  std::io::stdio::_print(&v42);
  *(_QWORD *)&v42 = &off_584A30;
  *((_QWORD *)&v42 + 1) = 1LL;
  v43.m256i_i64[0] = 8LL;
  *(_OWORD *)&v43.m256i_u64[1] = 0LL;
  std::io::stdio::_print(&v42);
  if ( !v53 || !v57 )
    goto LABEL_18;
  v17 = *((_QWORD *)&v56 + 1);
  v18 = *((_QWORD *)&v56 + 1) + 24LL;
  v19 = 24 - 24 * v57;
  v20 = 1LL;
  v55 = v19;
  v54 = *((_QWORD *)&v56 + 1);
  v58 = *((_QWORD *)&v56 + 1) + 24LL;
  while ( 2 )
  {
    v59 = v20;
    v21 = v18;
    do
    {
      v60 = v17;
      v22 = *(_QWORD *)(v17 + 8);
      v23 = *(_QWORD *)(v17 + 16);
      v17 = v21;
      tantivy::query::query_parser::query_parser::QueryParser::parse_query(v49, v63, v22, v23);
      if ( v49[0] != 17 )
      {
        v44 = v50;
        v43 = *(__m256i *)&v49[16];
        v42 = *(_OWORD *)v49;
        ((void (__fastcall __noreturn *)(__int64 *, __int128 *))tabby_index_cli::commands::bench::run_bench::{{closure}})(
          &v60,
          &v42);
      }
      v52 = *(_OWORD *)&v49[8];
      v45 = 0LL;
      v46 = 8LL;
      v47 = 0LL;
      tabby_index_cli::timer::TimerTree::open(&v64, &v45, aSearch_0, 6LL);
      v61 = tantivy::collector::top_score_collector::TopDocs::with_limit(10LL);
      v62 = v24;
      tantivy::core::searcher::Searcher::search_with_statistics_provider(v49, &v48, &v52, &v61, &v48);
      if ( *(_DWORD *)v49 != 18 )
      {
        v44 = v50;
        v43 = *(__m256i *)&v49[16];
        v42 = *(_OWORD *)v49;
        ((void (__fastcall *)(__int64 *, __int64 *, __int128 *))tabby_index_cli::commands::bench::run_bench::{{closure}})(
          &v72,
          &v60,
          &v42);
        v26 = v72;
        v40 = v73;
        goto LABEL_34;
      }
      v25 = *(_QWORD *)&v49[8];
      v26 = *(_QWORD *)&v49[16];
      if ( *(_QWORD *)&v49[8] == 0x8000000000000000LL )
      {
        v40 = *(_OWORD *)&v49[24];
LABEL_34:
        v41 = v51;
        *(_QWORD *)v51 = v26;
        *(_OWORD *)(v41 + 8) = v40;
        core::ptr::drop_in_place<tabby_index_cli::timer::OpenTimer>(&v64);
        v13 = (__int128 *)v46;
        core::ptr::drop_in_place<tabby_index_cli::timer::TimerTree>(v45, v46);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn tantivy::query::query::Query>>(&v52);
LABEL_35:
        core::ptr::drop_in_place<tantivy::query::query_parser::query_parser::QueryParser>(v63);
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v56);
        goto LABEL_36;
      }
      v27 = *(_QWORD *)&v49[32];
      core::ptr::drop_in_place<tabby_index_cli::timer::OpenTimer>(&v64);
      v72 = v27;
      *(_QWORD *)&v64 = tabby_index_cli::timer::TimerTree::total_time(v46, v47);
      *(_QWORD *)&v42 = &v60;
      *((_QWORD *)&v42 + 1) = <&T as core::fmt::Display>::fmt;
      v43.m256i_i64[0] = (__int64)&v72;
      v43.m256i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v43.m256i_i64[2] = (__int64)&v64;
      v43.m256i_i64[3] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
      *(_QWORD *)v49 = &unk_584A50;
      *(_QWORD *)&v49[8] = 4LL;
      *(_QWORD *)&v49[32] = 0LL;
      *(_QWORD *)&v49[16] = &v42;
      *(_QWORD *)&v49[24] = 3LL;
      std::io::stdio::_print(v49);
      core::ptr::drop_in_place<alloc::vec::Vec<(f32,tantivy::DocAddress)>>(v25, v26);
      v10 = v46;
      core::ptr::drop_in_place<tabby_index_cli::timer::TimerTree>(v45, v46);
      core::ptr::drop_in_place<alloc::boxed::Box<dyn tantivy::query::query::Query>>(&v52);
      v19 += 24LL;
      v21 = v17 + 24;
    }
    while ( v19 != 24 );
    v20 = (v59 < v53) + v59;
    v19 = v55;
    v17 = v54;
    v18 = v58;
    if ( v59 < v53 )
      continue;
    break;
  }
LABEL_18:
  *(_QWORD *)&v42 = &off_584A40;
  *((_QWORD *)&v42 + 1) = 1LL;
  v43.m256i_i64[0] = 8LL;
  *(_OWORD *)&v43.m256i_u64[1] = 0LL;
  std::io::stdio::_print(&v42);
  *(_QWORD *)&v42 = &off_584A90;
  *((_QWORD *)&v42 + 1) = 1LL;
  v43.m256i_i64[0] = 8LL;
  *(_OWORD *)&v43.m256i_u64[1] = 0LL;
  std::io::stdio::_print(&v42);
  if ( v53 )
  {
    v28 = v57;
    if ( v57 )
    {
      v66 = 1LL;
LABEL_21:
      v29 = *((_QWORD *)&v56 + 1);
      v58 = *((_QWORD *)&v56 + 1) + 24 * v28;
      v30 = *((_QWORD *)&v56 + 1) + 24LL;
      do
      {
        v74 = v29;
        v31 = *(_QWORD *)(v29 + 8);
        v32 = *(_QWORD *)(v29 + 16);
        v59 = v30;
        tantivy::query::query_parser::query_parser::QueryParser::parse_query(&v42, v63, v31, v32);
        *(_QWORD *)&v33 = core::result::Result<T,E>::unwrap(&v42);
        v34 = v33;
        v52 = v33;
        v72 = tantivy::collector::top_score_collector::TopDocs::with_limit(10LL);
        *(_QWORD *)&v73 = v35;
        tantivy::core::searcher::Searcher::search_with_statistics_provider(
          v49,
          &v48,
          v34,
          *(_QWORD *)(*((_QWORD *)&v34 + 1) + 104LL),
          &v72,
          &v48);
        if ( *(_DWORD *)v49 != 18 )
        {
          v44 = v50;
          v43 = *(__m256i *)&v49[16];
          v42 = *(_OWORD *)v49;
          v13 = &v52;
          ((void (__fastcall *)(__int128 *, __int128 *, __int128 *))tabby_index_cli::commands::bench::run_bench::{{closure}})(
            &v64,
            &v52,
            &v42);
          v38 = v65;
          v39 = v51;
          *(_OWORD *)v51 = v64;
          *(_QWORD *)(v39 + 16) = v38;
          core::ptr::drop_in_place<alloc::boxed::Box<dyn tantivy::query::query::Query>>(&v52);
          goto LABEL_35;
        }
        v55 = *(_QWORD *)&v49[8];
        v36 = *(_QWORD *)&v49[24];
        v54 = *(_QWORD *)&v49[16];
        v45 = 0LL;
        v46 = 8LL;
        v47 = 0LL;
        tabby_index_cli::timer::TimerTree::open(&v64, &v45, aTotal, 5LL);
        *(_QWORD *)&v42 = v55;
        *((_QWORD *)&v42 + 1) = v54;
        v43.m256i_i64[0] = v36;
        ((void (__fastcall *)(__int64 *, __int128 *))<alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter)(
          &v72,
          &v42);
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v61, &v72);
        if ( (_DWORD)v61 == 1 )
        {
          do
          {
            tantivy::core::searcher::Searcher::doc(&v42, v48, (unsigned int)v62, HIDWORD(v62));
            core::result::Result<T,E>::unwrap(v49, &v42);
            core::ptr::drop_in_place<tantivy::schema::document::default_document::CompactDoc>(v49);
            <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v61, &v72);
          }
          while ( (v61 & 1) != 0 );
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(f32,tantivy::DocAddress)>>(&v72);
        core::ptr::drop_in_place<tabby_index_cli::timer::OpenTimer>(&v64);
        *(_QWORD *)&v64 = tabby_index_cli::timer::TimerTree::total_time(v46, v47);
        *(_QWORD *)v49 = &v74;
        *(_QWORD *)&v49[8] = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v49[16] = &v64;
        *(_QWORD *)&v49[24] = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
        *(_QWORD *)&v42 = &unk_584AA0;
        *((_QWORD *)&v42 + 1) = 3LL;
        v43.m256i_i64[0] = (__int64)v49;
        *(_OWORD *)&v43.m256i_u64[1] = 2uLL;
        std::io::stdio::_print(&v42);
        v10 = v46;
        core::ptr::drop_in_place<tabby_index_cli::timer::TimerTree>(v45, v46);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn tantivy::query::query::Query>>(&v52);
        v29 = v59;
        v30 = v59 + 24;
      }
      while ( v59 != v58 );
      while ( v66 < v53 )
      {
        ++v66;
        v28 = v57;
        if ( v57 )
          goto LABEL_21;
      }
    }
  }
  *(_QWORD *)v51 = 0x8000000000000000LL;
  core::ptr::drop_in_place<tantivy::query::query_parser::query_parser::QueryParser>(v63);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v56);
  core::ptr::drop_in_place<tantivy::core::searcher::Searcher>(&v48, v10);
  return core::ptr::drop_in_place<tantivy::index::index::Index>(&v75);
}