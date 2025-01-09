__int64 __fastcall uu_csplit::csplit(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  bool v7; // al
  char v8; // bp
  __int64 v9; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  const void *v16; // rsi
  __int64 v17; // rax
  __int128 v18; // [rsp+0h] [rbp-1E8h] BYREF
  __int128 v19; // [rsp+10h] [rbp-1D8h]
  __int64 v20; // [rsp+20h] [rbp-1C8h]
  __int128 v21; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-1A8h]
  _QWORD v23[3]; // [rsp+48h] [rbp-1A0h] BYREF
  __m256i v24; // [rsp+60h] [rbp-188h] BYREF
  __int128 v25; // [rsp+80h] [rbp-168h]
  __int128 v26; // [rsp+90h] [rbp-158h]
  __int128 v27; // [rsp+A0h] [rbp-148h]
  __int128 v28; // [rsp+B0h] [rbp-138h]
  _QWORD v29[5]; // [rsp+C0h] [rbp-128h] BYREF
  __int128 v30; // [rsp+E8h] [rbp-100h]
  char v31; // [rsp+F8h] [rbp-F0h]
  __m256i v32; // [rsp+100h] [rbp-E8h] BYREF
  __int128 v33; // [rsp+120h] [rbp-C8h]
  __int128 v34; // [rsp+130h] [rbp-B8h]
  __int128 v35; // [rsp+140h] [rbp-A8h]
  __int128 v36; // [rsp+150h] [rbp-98h]
  __int128 v37; // [rsp+160h] [rbp-88h] BYREF
  __int64 v38; // [rsp+170h] [rbp-78h]
  _BYTE v39[8]; // [rsp+178h] [rbp-70h] BYREF
  __int64 v40; // [rsp+180h] [rbp-68h]
  const void *v41; // [rsp+188h] [rbp-60h]
  size_t v42; // [rsp+190h] [rbp-58h]
  _BYTE v43[8]; // [rsp+198h] [rbp-50h] BYREF
  __int128 v44; // [rsp+1A0h] [rbp-48h]
  size_t v45; // [rsp+1B0h] [rbp-38h]

  std::io::BufRead::lines(&v32.m256i_u64[3], a5);
  *((_QWORD *)&v35 + 1) = 0LL;
  v32.m256i_i64[0] = 0LL;
  *(_OWORD *)&v32.m256i_u64[1] = 8uLL;
  *(_QWORD *)&v36 = 1LL;
  BYTE8(v36) = 0;
  v29[4] = a2;
  v30 = 0LL;
  v29[0] = 0x8000000000000000LL;
  v31 = 0;
  uu_csplit::patterns::get_patterns((__int64)&v24);
  v6 = v24.m256i_i64[0];
  v18 = *(_OWORD *)&v24.m256i_u64[1];
  *(_QWORD *)&v19 = v24.m256i_i64[3];
  if ( v24.m256i_i64[0] == 12 )
  {
    v37 = v18;
    v38 = v19;
    uu_csplit::do_csplit((__int64)&v18, (unsigned __int64)v29, (__int64)&v37, &v32);
    v7 = 1;
    v8 = 1;
    if ( (_DWORD)v18 != 12 )
      goto LABEL_5;
    BYTE8(v36) = 1;
    <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v43, &v32);
    v8 = 1;
    if ( (_QWORD)v44 == 0x8000000000000001LL )
    {
LABEL_4:
      v7 = (_QWORD)v18 != 12LL;
LABEL_5:
      if ( !v7 || *(_BYTE *)(a2 + 96) || (v9 = uu_csplit::SplitWriter::delete_all_splits((__int64)v29)) == 0 )
      {
        *(_QWORD *)(a1 + 32) = v20;
        v11 = v18;
        *(_OWORD *)(a1 + 16) = v19;
        *(_OWORD *)a1 = v11;
        result = core::ptr::drop_in_place<uu_csplit::SplitWriter>(v29);
        goto LABEL_20;
      }
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = v9;
      goto LABEL_18;
    }
    v22 = v45;
    v21 = v44;
    v13 = uu_csplit::SplitWriter::new_writer((__int64)v29);
    if ( v13 )
    {
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = v13;
      v8 = 1;
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v21);
    }
    else
    {
      v14 = *((_QWORD *)&v21 + 1);
      if ( (_QWORD)v21 == 0x8000000000000000LL )
      {
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = v14;
      }
      else
      {
        *(_OWORD *)v24.m256i_i8 = v21;
        v24.m256i_i64[2] = v22;
        v15 = uu_csplit::SplitWriter::writeln((__int64)v29, *((const void **)&v21 + 1), v22);
        if ( !v15 )
        {
          core::ptr::drop_in_place<alloc::string::String>(&v24, v14);
          v28 = v36;
          v27 = v35;
          v26 = v34;
          v25 = v33;
          v24 = v32;
          while ( 1 )
          {
            <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v39, &v24);
            if ( v40 == 0x8000000000000001LL )
            {
              core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>>(&v24);
              uu_csplit::SplitWriter::finish_split((__int64)v29);
              v8 = 0;
              goto LABEL_4;
            }
            v16 = v41;
            if ( v40 == 0x8000000000000000LL )
            {
              *(_QWORD *)a1 = 0LL;
              *(_QWORD *)(a1 + 8) = v16;
              goto LABEL_31;
            }
            v23[0] = v40;
            v23[1] = v41;
            v23[2] = v42;
            v17 = uu_csplit::SplitWriter::writeln((__int64)v29, v41, v42);
            if ( v17 )
              break;
            core::ptr::drop_in_place<alloc::string::String>(v23, v16);
          }
          *(_QWORD *)a1 = 0LL;
          *(_QWORD *)(a1 + 8) = v17;
          core::ptr::drop_in_place<alloc::string::String>(v23, v16);
LABEL_31:
          core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>>(&v24);
          v8 = 0;
          goto LABEL_18;
        }
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = v15;
        core::ptr::drop_in_place<alloc::string::String>(&v24, v14);
      }
      v8 = 1;
    }
LABEL_18:
    core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(&v18);
    goto LABEL_19;
  }
  v10 = v25;
  *(_QWORD *)(a1 + 24) = v19;
  *(_OWORD *)(a1 + 8) = v18;
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 32) = v10;
  v8 = 1;
LABEL_19:
  result = core::ptr::drop_in_place<uu_csplit::SplitWriter>(v29);
LABEL_20:
  if ( v8 )
    return core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>>(&v32);
  return result;
}
