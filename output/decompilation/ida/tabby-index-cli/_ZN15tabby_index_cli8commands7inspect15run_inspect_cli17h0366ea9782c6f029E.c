__int64 __fastcall tabby_index_cli::commands::inspect::run_inspect_cli(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // kr00_16
  __int64 v7; // rcx
  __int64 *v8; // r14
  __int64 v9; // r12
  __int64 v10; // rsi
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 i; // rax
  __int64 v15; // rbp
  __int128 v16; // [rsp+0h] [rbp-208h] BYREF
  __m256i v17; // [rsp+10h] [rbp-1F8h]
  __int64 v18; // [rsp+30h] [rbp-1D8h]
  __int64 v19; // [rsp+38h] [rbp-1D0h] BYREF
  __int64 *v20; // [rsp+40h] [rbp-1C8h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+48h] [rbp-1C0h]
  _QWORD *v22; // [rsp+50h] [rbp-1B8h]
  __int64 (__fastcall *v23)(); // [rsp+58h] [rbp-1B0h]
  _BYTE v24[56]; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v25; // [rsp+98h] [rbp-170h]
  __int128 v26; // [rsp+A0h] [rbp-168h]
  __int128 v27; // [rsp+B0h] [rbp-158h]
  __int128 v28; // [rsp+C0h] [rbp-148h]
  __int64 v29; // [rsp+D0h] [rbp-138h] BYREF
  __int64 v30; // [rsp+D8h] [rbp-130h] BYREF
  _QWORD v31[3]; // [rsp+E0h] [rbp-128h] BYREF
  _QWORD *v32; // [rsp+F8h] [rbp-110h]
  __int64 v33; // [rsp+100h] [rbp-108h]
  __int64 v34; // [rsp+108h] [rbp-100h] BYREF
  __int64 v35; // [rsp+110h] [rbp-F8h]
  __int64 v36; // [rsp+118h] [rbp-F0h]
  __int128 v37; // [rsp+120h] [rbp-E8h] BYREF
  __int128 v38; // [rsp+130h] [rbp-D8h]
  _QWORD v39[2]; // [rsp+140h] [rbp-C8h] BYREF
  __int128 v40; // [rsp+150h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+168h] [rbp-A0h] BYREF
  __int128 v42; // [rsp+170h] [rbp-98h]
  __m256i v43; // [rsp+180h] [rbp-88h]
  __int64 v44; // [rsp+1A0h] [rbp-68h]
  __int128 v45; // [rsp+1A8h] [rbp-60h]
  __int128 v46; // [rsp+1B8h] [rbp-50h]
  __int128 v47; // [rsp+1C8h] [rbp-40h]

  v39[0] = a2;
  v39[1] = a3;
  tantivy::index::index::Index::open_in_dir(v24, a2, a3);
  v18 = v25;
  v16 = *(_OWORD *)&v24[8];
  v17 = *(__m256i *)&v24[24];
  if ( *(_QWORD *)v24 == 0x8000000000000001LL )
  {
    result = v18;
    *(_QWORD *)(a1 + 48) = v18;
    v4 = v16;
    v5 = *(_OWORD *)v17.m256i_i8;
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v17.m256i_u64[2];
    *(_OWORD *)(a1 + 16) = v5;
    *(_OWORD *)a1 = v4;
    return result;
  }
  v47 = v28;
  v46 = v27;
  v45 = v26;
  v42 = v16;
  v43 = v17;
  v44 = v18;
  v41 = *(_QWORD *)v24;
  v19 = tantivy::index::index::Index::schema(&v41);
  tantivy::index::index::Index::reader(v24, &v41);
  v6 = *(_OWORD *)v24;
  v7 = *(_QWORD *)&v24[16];
  if ( *(_QWORD *)v24 == 18LL )
  {
    v16 = *(_OWORD *)&v24[8];
    v29 = tantivy::reader::IndexReader::searcher(&v16);
    core::ptr::drop_in_place<tantivy::reader::IndexReader>(&v16);
    v33 = *(_QWORD *)(v29 + 24);
    v8 = *(__int64 **)(v29 + 32);
    *(_QWORD *)v24 = &off_584C38;
    *(_QWORD *)&v24[8] = 1LL;
    *(_QWORD *)&v24[16] = 8LL;
    *(_OWORD *)&v24[24] = 0LL;
    std::io::stdio::_print(v24);
    *(_QWORD *)v24 = &off_584C48;
    *(_QWORD *)&v24[8] = 1LL;
    *(_QWORD *)&v24[16] = 8LL;
    *(_OWORD *)&v24[24] = 0LL;
    std::io::stdio::_print(v24);
    *(_QWORD *)v24 = &off_584C58;
    *(_QWORD *)&v24[8] = 1LL;
    *(_QWORD *)&v24[16] = 8LL;
    *(_OWORD *)&v24[24] = 0LL;
    std::io::stdio::_print(v24);
    *(_QWORD *)v24 = &off_584C68;
    *(_QWORD *)&v24[8] = 1LL;
    *(_QWORD *)&v24[16] = 8LL;
    *(_OWORD *)&v24[24] = 0LL;
    std::io::stdio::_print(v24);
    *(_QWORD *)v24 = &off_584C78;
    *(_QWORD *)&v24[8] = 1LL;
    *(_QWORD *)&v24[16] = 8LL;
    *(_OWORD *)&v24[24] = 0LL;
    std::io::stdio::_print(v24);
    *(_QWORD *)v24 = &off_584C48;
    *(_QWORD *)&v24[8] = 1LL;
    *(_QWORD *)&v24[16] = 8LL;
    *(_OWORD *)&v24[24] = 0LL;
    std::io::stdio::_print(v24);
    *(_QWORD *)&v16 = v39;
    *((_QWORD *)&v16 + 1) = <&T as core::fmt::Debug>::fmt;
    *(_QWORD *)v24 = &off_584C88;
    *(_QWORD *)&v24[8] = 2LL;
    *(_QWORD *)&v24[16] = &v16;
    *(_OWORD *)&v24[24] = 1uLL;
    std::io::stdio::_print(v24);
    v20 = v8;
    *(_QWORD *)&v16 = &v20;
    *((_QWORD *)&v16 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)v24 = &off_584CA8;
    *(_QWORD *)&v24[8] = 2LL;
    *(_QWORD *)&v24[16] = &v16;
    *(_OWORD *)&v24[24] = 1uLL;
    std::io::stdio::_print(v24);
    tantivy::core::searcher::Searcher::space_usage(v24, &v29);
    v9 = *(_QWORD *)&v24[8];
    if ( *(_QWORD *)v24 != 0x8000000000000000LL )
    {
      v32 = (_QWORD *)a1;
      v38 = *(_OWORD *)&v24[16];
      v37 = *(_OWORD *)v24;
      v20 = *(__int64 **)&v24[24];
      *(_QWORD *)&v16 = &v20;
      *((_QWORD *)&v16 + 1) = <tantivy_common::byte_count::ByteCount as core::fmt::Display>::fmt;
      *(_QWORD *)v24 = &off_584CC8;
      *(_QWORD *)&v24[8] = 2LL;
      *(_QWORD *)&v24[16] = &v16;
      *(_OWORD *)&v24[24] = 1uLL;
      std::io::stdio::_print(v24);
      *(_QWORD *)v24 = &off_584C38;
      *(_QWORD *)&v24[8] = 1LL;
      *(_QWORD *)&v24[16] = 8LL;
      *(_OWORD *)&v24[24] = 0LL;
      std::io::stdio::_print(v24);
      core::iter::traits::iterator::Iterator::zip(v24, v33, v33 + 400LL * (_QWORD)v8, v9, v9 + 320 * v38);
      v25 = 0LL;
      <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v34, v24);
      for ( i = v35; v35; i = v35 )
      {
        v15 = v36;
        v30 = v34 + 2;
        v40 = *(_OWORD *)(i + 328);
        tantivy::index::segment_id::SegmentId::uuid_string(v31, &v40);
        v20 = &v30;
        v21 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v22 = v31;
        v23 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v16 = &unk_584CE8;
        *((_QWORD *)&v16 + 1) = 3LL;
        v17.m256i_i64[0] = (__int64)&v20;
        *(_OWORD *)&v17.m256i_u64[1] = 2uLL;
        std::io::stdio::_print(&v16);
        core::ptr::drop_in_place<alloc::string::String>(v31);
        *(_QWORD *)&v16 = &off_584D18;
        *((_QWORD *)&v16 + 1) = 1LL;
        v17.m256i_i64[0] = 8LL;
        *(_OWORD *)&v17.m256i_u64[1] = 0LL;
        std::io::stdio::_print(&v16);
        LODWORD(v31[0]) = *(_DWORD *)(v15 + 312);
        v20 = v31;
        v21 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        *(_QWORD *)&v16 = &off_584D28;
        *((_QWORD *)&v16 + 1) = 2LL;
        v17.m256i_i64[0] = (__int64)&v20;
        *(_OWORD *)&v17.m256i_u64[1] = 1uLL;
        std::io::stdio::_print(&v16);
        *(_QWORD *)&v16 = &off_584D48;
        *((_QWORD *)&v16 + 1) = 1LL;
        v17.m256i_i64[0] = 8LL;
        *(_OWORD *)&v17.m256i_u64[1] = 0LL;
        std::io::stdio::_print(&v16);
        v31[0] = *(_QWORD *)(v15 + 280) + *(_QWORD *)(v15 + 288);
        v20 = v31;
        v21 = <tantivy_common::byte_count::ByteCount as core::fmt::Display>::fmt;
        *(_QWORD *)&v16 = &off_584CC8;
        *((_QWORD *)&v16 + 1) = 2LL;
        v17.m256i_i64[0] = (__int64)&v20;
        *(_OWORD *)&v17.m256i_u64[1] = 1uLL;
        std::io::stdio::_print(&v16);
        v31[0] = *(_QWORD *)(v15 + 288);
        v20 = v31;
        v21 = <tantivy_common::byte_count::ByteCount as core::fmt::Display>::fmt;
        *(_QWORD *)&v16 = &off_584D58;
        *((_QWORD *)&v16 + 1) = 2LL;
        v17.m256i_i64[0] = (__int64)&v20;
        *(_OWORD *)&v17.m256i_u64[1] = 1uLL;
        std::io::stdio::_print(&v16);
        *(_QWORD *)&v16 = &off_584C38;
        *((_QWORD *)&v16 + 1) = 1LL;
        v17.m256i_i64[0] = 8LL;
        *(_OWORD *)&v17.m256i_u64[1] = 0LL;
        std::io::stdio::_print(&v16);
        v20 = &v30;
        v21 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        *(_QWORD *)&v16 = &unk_584D78;
        *((_QWORD *)&v16 + 1) = 2LL;
        v17.m256i_i64[0] = (__int64)&v20;
        *(_OWORD *)&v17.m256i_u64[1] = 1uLL;
        std::io::stdio::_print(&v16);
        *(_QWORD *)&v16 = &off_584D98;
        *((_QWORD *)&v16 + 1) = 1LL;
        v17.m256i_i64[0] = 8LL;
        *(_OWORD *)&v17.m256i_u64[1] = 0LL;
        std::io::stdio::_print(&v16);
        v31[0] = *(_QWORD *)(v15 + 48);
        v20 = v31;
        v21 = <tantivy_common::byte_count::ByteCount as core::fmt::Display>::fmt;
        *(_QWORD *)&v16 = &off_584CC8;
        *((_QWORD *)&v16 + 1) = 2LL;
        v17.m256i_i64[0] = (__int64)&v20;
        *(_OWORD *)&v17.m256i_u64[1] = 1uLL;
        std::io::stdio::_print(&v16);
        tabby_index_cli::commands::inspect::print_fields_space_usage(&v19, v15);
        *(_QWORD *)&v16 = &off_584C38;
        *((_QWORD *)&v16 + 1) = 1LL;
        v17.m256i_i64[0] = 8LL;
        *(_OWORD *)&v17.m256i_u64[1] = 0LL;
        std::io::stdio::_print(&v16);
        v20 = &v30;
        v21 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        *(_QWORD *)&v16 = &unk_584DA8;
        *((_QWORD *)&v16 + 1) = 2LL;
        v17.m256i_i64[0] = (__int64)&v20;
        *(_OWORD *)&v17.m256i_u64[1] = 1uLL;
        std::io::stdio::_print(&v16);
        *(_QWORD *)&v16 = &off_584D98;
        *((_QWORD *)&v16 + 1) = 1LL;
        v17.m256i_i64[0] = 8LL;
        *(_OWORD *)&v17.m256i_u64[1] = 0LL;
        std::io::stdio::_print(&v16);
        v31[0] = *(_QWORD *)(v15 + 216);
        v20 = v31;
        v21 = <tantivy_common::byte_count::ByteCount as core::fmt::Display>::fmt;
        *(_QWORD *)&v16 = &off_584CC8;
        *((_QWORD *)&v16 + 1) = 2LL;
        v17.m256i_i64[0] = (__int64)&v20;
        *(_OWORD *)&v17.m256i_u64[1] = 1uLL;
        std::io::stdio::_print(&v16);
        tabby_index_cli::commands::inspect::print_fields_space_usage(&v19, v15 + 168);
        *(_QWORD *)&v16 = &off_584C38;
        *((_QWORD *)&v16 + 1) = 1LL;
        v17.m256i_i64[0] = 8LL;
        *(_OWORD *)&v17.m256i_u64[1] = 0LL;
        std::io::stdio::_print(&v16);
        v20 = &v30;
        v21 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        *(_QWORD *)&v16 = &unk_584DC8;
        *((_QWORD *)&v16 + 1) = 2LL;
        v17.m256i_i64[0] = (__int64)&v20;
        *(_OWORD *)&v17.m256i_u64[1] = 1uLL;
        std::io::stdio::_print(&v16);
        *(_QWORD *)&v16 = &off_584D98;
        *((_QWORD *)&v16 + 1) = 1LL;
        v17.m256i_i64[0] = 8LL;
        *(_OWORD *)&v17.m256i_u64[1] = 0LL;
        std::io::stdio::_print(&v16);
        v31[0] = *(_QWORD *)(v15 + 104);
        v20 = v31;
        v21 = <tantivy_common::byte_count::ByteCount as core::fmt::Display>::fmt;
        *(_QWORD *)&v16 = &off_584CC8;
        *((_QWORD *)&v16 + 1) = 2LL;
        v17.m256i_i64[0] = (__int64)&v20;
        *(_OWORD *)&v17.m256i_u64[1] = 1uLL;
        std::io::stdio::_print(&v16);
        tabby_index_cli::commands::inspect::print_fields_space_usage(&v19, v15 + 56);
        *(_QWORD *)&v16 = &off_584C38;
        *((_QWORD *)&v16 + 1) = 1LL;
        v17.m256i_i64[0] = 8LL;
        *(_OWORD *)&v17.m256i_u64[1] = 0LL;
        std::io::stdio::_print(&v16);
        v20 = &v30;
        v21 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        *(_QWORD *)&v16 = &unk_584DE8;
        *((_QWORD *)&v16 + 1) = 2LL;
        v17.m256i_i64[0] = (__int64)&v20;
        *(_OWORD *)&v17.m256i_u64[1] = 1uLL;
        std::io::stdio::_print(&v16);
        *(_QWORD *)&v16 = &off_584D98;
        *((_QWORD *)&v16 + 1) = 1LL;
        v17.m256i_i64[0] = 8LL;
        *(_OWORD *)&v17.m256i_u64[1] = 0LL;
        std::io::stdio::_print(&v16);
        v31[0] = *(_QWORD *)(v15 + 160);
        v20 = v31;
        v21 = <tantivy_common::byte_count::ByteCount as core::fmt::Display>::fmt;
        *(_QWORD *)&v16 = &off_584CC8;
        *((_QWORD *)&v16 + 1) = 2LL;
        v17.m256i_i64[0] = (__int64)&v20;
        *(_OWORD *)&v17.m256i_u64[1] = 1uLL;
        std::io::stdio::_print(&v16);
        tabby_index_cli::commands::inspect::print_fields_space_usage(&v19, v15 + 112);
        *(_QWORD *)&v16 = &off_584C38;
        *((_QWORD *)&v16 + 1) = 1LL;
        v17.m256i_i64[0] = 8LL;
        *(_OWORD *)&v17.m256i_u64[1] = 0LL;
        std::io::stdio::_print(&v16);
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v34, v24);
      }
      *(_QWORD *)v24 = &off_584C38;
      *(_QWORD *)&v24[8] = 1LL;
      *(_QWORD *)&v24[16] = 8LL;
      *(_OWORD *)&v24[24] = 0LL;
      std::io::stdio::_print(v24);
      *(_QWORD *)v24 = &off_584E08;
      *(_QWORD *)&v24[8] = 1LL;
      *(_QWORD *)&v24[16] = 8LL;
      *(_OWORD *)&v24[24] = 0LL;
      std::io::stdio::_print(v24);
      *v32 = 18LL;
      core::ptr::drop_in_place<tantivy::space_usage::SearcherSpaceUsage>(&v37);
      core::ptr::drop_in_place<tantivy::core::searcher::Searcher>(&v29, v24);
      core::ptr::drop_in_place<tantivy::schema::schema::Schema>(&v19);
      return core::ptr::drop_in_place<tantivy::index::index::Index>(&v41);
    }
    v10 = *(_QWORD *)&v24[8];
    <tantivy::error::TantivyError as core::convert::From<std::io::error::Error>>::from(v24, *(_QWORD *)&v24[8]);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)&v24[48];
    v11 = *(_OWORD *)v24;
    v12 = *(_OWORD *)&v24[16];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v24[32];
    *(_OWORD *)(a1 + 16) = v12;
    *(_OWORD *)a1 = v11;
    core::ptr::drop_in_place<tantivy::core::searcher::Searcher>(&v29, v10);
  }
  else
  {
    v13 = *(_OWORD *)&v24[24];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v24[40];
    *(_OWORD *)(a1 + 24) = v13;
    *(_OWORD *)a1 = v6;
    *(_QWORD *)(a1 + 16) = v7;
  }
  core::ptr::drop_in_place<tantivy::schema::schema::Schema>(&v19);
  return core::ptr::drop_in_place<tantivy::index::index::Index>(&v41);
}