__int64 __fastcall uu_csplit::csplit(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  char v7; // dl
  __int64 v8; // rax
  bool v9; // al
  char v10; // bp
  __int64 v11; // rax
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  const void *v18; // rsi
  __int64 v19; // rax
  __int128 v20; // [rsp+0h] [rbp-1A8h] BYREF
  __int128 v21; // [rsp+10h] [rbp-198h]
  __int64 v22; // [rsp+20h] [rbp-188h]
  __m256i v23; // [rsp+30h] [rbp-178h] BYREF
  __int128 v24; // [rsp+50h] [rbp-158h]
  __int128 v25; // [rsp+60h] [rbp-148h]
  __int128 v26; // [rsp+70h] [rbp-138h] BYREF
  __int64 v27; // [rsp+80h] [rbp-128h]
  __m256i v28; // [rsp+88h] [rbp-120h] BYREF
  __int128 v29; // [rsp+A8h] [rbp-100h]
  __int128 v30; // [rsp+B8h] [rbp-F0h]
  _QWORD v31[3]; // [rsp+C8h] [rbp-E0h] BYREF
  _QWORD v32[5]; // [rsp+E0h] [rbp-C8h] BYREF
  __int128 v33; // [rsp+108h] [rbp-A0h]
  char v34; // [rsp+118h] [rbp-90h]
  __int128 v35; // [rsp+120h] [rbp-88h] BYREF
  __int64 v36; // [rsp+130h] [rbp-78h]
  _BYTE v37[8]; // [rsp+138h] [rbp-70h] BYREF
  __int64 v38; // [rsp+140h] [rbp-68h]
  const void *v39; // [rsp+148h] [rbp-60h]
  size_t v40; // [rsp+150h] [rbp-58h]
  _BYTE v41[8]; // [rsp+158h] [rbp-50h] BYREF
  __int128 v42; // [rsp+160h] [rbp-48h]
  size_t v43; // [rsp+170h] [rbp-38h]

  *(_QWORD *)&v29 = std::io::BufRead::lines(a5, a6);
  BYTE8(v29) = v7 & 1;
  v28.m256i_i64[0] = 0LL;
  v28.m256i_i64[1] = 8LL;
  *(_OWORD *)&v28.m256i_u64[2] = 0LL;
  *(_QWORD *)&v30 = 1LL;
  BYTE8(v30) = 0;
  v32[4] = a2;
  v33 = 0LL;
  v32[0] = 0x8000000000000000LL;
  v34 = 0;
  uu_csplit::patterns::get_patterns((__int64)&v23);
  v8 = v23.m256i_i64[0];
  v20 = *(_OWORD *)&v23.m256i_u64[1];
  *(_QWORD *)&v21 = v23.m256i_i64[3];
  if ( v23.m256i_i64[0] == 12 )
  {
    v35 = v20;
    v36 = v21;
    uu_csplit::do_csplit((__int64)&v20, (unsigned __int64)v32, (__int64)&v35, &v28);
    v9 = 1;
    v10 = 1;
    if ( (_DWORD)v20 != 12 )
      goto LABEL_5;
    BYTE8(v30) = 1;
    <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v41, &v28);
    v10 = 1;
    if ( (_QWORD)v42 == 0x8000000000000001LL )
    {
LABEL_4:
      v9 = (_QWORD)v20 != 12LL;
LABEL_5:
      if ( !v9 || *(_BYTE *)(a2 + 96) || (v11 = uu_csplit::SplitWriter::delete_all_splits((__int64)v32)) == 0 )
      {
        *(_QWORD *)(a1 + 32) = v22;
        v13 = v20;
        *(_OWORD *)(a1 + 16) = v21;
        *(_OWORD *)a1 = v13;
        result = core::ptr::drop_in_place<uu_csplit::SplitWriter>(v32);
        goto LABEL_20;
      }
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = v11;
      goto LABEL_18;
    }
    v27 = v43;
    v26 = v42;
    v15 = uu_csplit::SplitWriter::new_writer((__int64)v32);
    if ( v15 )
    {
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = v15;
      v10 = 1;
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v26);
    }
    else
    {
      v16 = *((_QWORD *)&v26 + 1);
      if ( (_QWORD)v26 == 0x8000000000000000LL )
      {
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = v16;
      }
      else
      {
        *(_OWORD *)v23.m256i_i8 = v26;
        v23.m256i_i64[2] = v27;
        v17 = uu_csplit::SplitWriter::writeln((__int64)v32, *((const void **)&v26 + 1), v27);
        if ( !v17 )
        {
          core::ptr::drop_in_place<alloc::string::String>(&v23, v16);
          v25 = v30;
          v24 = v29;
          v23 = v28;
          while ( 1 )
          {
            <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v37, &v23);
            if ( v38 == 0x8000000000000001LL )
            {
              core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>>(&v23);
              uu_csplit::SplitWriter::finish_split((__int64)v32);
              v10 = 0;
              goto LABEL_4;
            }
            v18 = v39;
            if ( v38 == 0x8000000000000000LL )
            {
              *(_QWORD *)a1 = 0LL;
              *(_QWORD *)(a1 + 8) = v18;
              goto LABEL_31;
            }
            v31[0] = v38;
            v31[1] = v39;
            v31[2] = v40;
            v19 = uu_csplit::SplitWriter::writeln((__int64)v32, v39, v40);
            if ( v19 )
              break;
            core::ptr::drop_in_place<alloc::string::String>(v31, v18);
          }
          *(_QWORD *)a1 = 0LL;
          *(_QWORD *)(a1 + 8) = v19;
          core::ptr::drop_in_place<alloc::string::String>(v31, v18);
LABEL_31:
          core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>>(&v23);
          v10 = 0;
          goto LABEL_18;
        }
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = v17;
        core::ptr::drop_in_place<alloc::string::String>(&v23, v16);
      }
      v10 = 1;
    }
LABEL_18:
    core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(&v20);
    goto LABEL_19;
  }
  v12 = v24;
  *(_QWORD *)(a1 + 24) = v21;
  *(_OWORD *)(a1 + 8) = v20;
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 32) = v12;
  v10 = 1;
LABEL_19:
  result = core::ptr::drop_in_place<uu_csplit::SplitWriter>(v32);
LABEL_20:
  if ( v10 )
    return core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>>(&v28);
  return result;
}
