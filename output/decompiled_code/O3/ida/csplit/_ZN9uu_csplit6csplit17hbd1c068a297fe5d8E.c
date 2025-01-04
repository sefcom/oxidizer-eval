__int64 __fastcall uu_csplit::csplit(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
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
  __int64 v18; // rsi
  __int64 v19; // rax
  __int128 v20; // [rsp+0h] [rbp-1E8h] BYREF
  __int128 v21; // [rsp+10h] [rbp-1D8h]
  __int64 v22; // [rsp+20h] [rbp-1C8h]
  __int128 v23; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-1A8h]
  _QWORD v25[3]; // [rsp+48h] [rbp-1A0h] BYREF
  __m256i v26; // [rsp+60h] [rbp-188h] BYREF
  __int128 v27; // [rsp+80h] [rbp-168h]
  __int128 v28; // [rsp+90h] [rbp-158h]
  __int128 v29; // [rsp+A0h] [rbp-148h]
  __int128 v30; // [rsp+B0h] [rbp-138h]
  _QWORD v31[5]; // [rsp+C0h] [rbp-128h] BYREF
  __int128 v32; // [rsp+E8h] [rbp-100h]
  char v33; // [rsp+F8h] [rbp-F0h]
  __int128 v34; // [rsp+100h] [rbp-E8h] BYREF
  _OWORD v35[3]; // [rsp+110h] [rbp-D8h] BYREF
  __int128 v36; // [rsp+140h] [rbp-A8h]
  __int128 v37; // [rsp+150h] [rbp-98h]
  __int128 v38; // [rsp+160h] [rbp-88h] BYREF
  __int64 v39; // [rsp+170h] [rbp-78h]
  _BYTE v40[8]; // [rsp+178h] [rbp-70h] BYREF
  __int64 v41; // [rsp+180h] [rbp-68h]
  __int64 v42; // [rsp+188h] [rbp-60h]
  __int64 v43; // [rsp+190h] [rbp-58h]
  _BYTE v44[8]; // [rsp+198h] [rbp-50h] BYREF
  __int128 v45; // [rsp+1A0h] [rbp-48h]
  __int64 v46; // [rsp+1B0h] [rbp-38h]

  std::io::BufRead::lines((char *)v35 + 8, a5);
  *((_QWORD *)&v36 + 1) = 0LL;
  *(_QWORD *)&v34 = 0LL;
  *((_QWORD *)&v34 + 1) = 8LL;
  *(_QWORD *)&v35[0] = 0LL;
  *(_QWORD *)&v37 = 1LL;
  BYTE8(v37) = 0;
  v31[4] = a2;
  v32 = 0LL;
  v31[0] = 0x8000000000000000LL;
  v33 = 0;
  uu_csplit::patterns::get_patterns(&v26, a3, a4);
  v8 = v26.m256i_i64[0];
  v20 = *(_OWORD *)&v26.m256i_u64[1];
  *(_QWORD *)&v21 = v26.m256i_i64[3];
  if ( v26.m256i_i64[0] == 12 )
  {
    v38 = v20;
    v39 = v21;
    uu_csplit::do_csplit(&v20, v31, &v38, &v34);
    v9 = 1;
    v10 = 1;
    if ( (_DWORD)v20 != 12 )
      goto LABEL_5;
    BYTE8(v37) = 1;
    <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v44, &v34);
    v10 = 1;
    if ( (_QWORD)v45 == 0x8000000000000001LL )
    {
LABEL_4:
      v9 = (_QWORD)v20 != 12LL;
LABEL_5:
      if ( !v9 || *(_BYTE *)(a2 + 96) || (v11 = uu_csplit::SplitWriter::delete_all_splits(v31)) == 0 )
      {
        *(_QWORD *)(a1 + 32) = v22;
        v13 = v20;
        *(_OWORD *)(a1 + 16) = v21;
        *(_OWORD *)a1 = v13;
        result = core::ptr::drop_in_place<uu_csplit::SplitWriter>(v31);
        goto LABEL_20;
      }
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = v11;
      goto LABEL_18;
    }
    v24 = v46;
    v23 = v45;
    v15 = uu_csplit::SplitWriter::new_writer(v31);
    if ( v15 )
    {
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = v15;
      v10 = 1;
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v23);
    }
    else
    {
      v16 = *((_QWORD *)&v23 + 1);
      if ( (_QWORD)v23 == 0x8000000000000000LL )
      {
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = v16;
      }
      else
      {
        *(_OWORD *)v26.m256i_i8 = v23;
        v26.m256i_i64[2] = v24;
        v17 = uu_csplit::SplitWriter::writeln(v31, *((_QWORD *)&v23 + 1), v24);
        if ( !v17 )
        {
          core::ptr::drop_in_place<alloc::string::String>(&v26, v16);
          v30 = v37;
          v29 = v36;
          v28 = v35[2];
          v27 = v35[1];
          *(_OWORD *)&v26.m256i_u64[2] = v35[0];
          *(_OWORD *)v26.m256i_i8 = v34;
          while ( 1 )
          {
            <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v40, &v26);
            if ( v41 == 0x8000000000000001LL )
            {
              core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>>(&v26);
              uu_csplit::SplitWriter::finish_split(v31);
              v10 = 0;
              goto LABEL_4;
            }
            v18 = v42;
            if ( v41 == 0x8000000000000000LL )
            {
              *(_QWORD *)a1 = 0LL;
              *(_QWORD *)(a1 + 8) = v18;
              goto LABEL_31;
            }
            v25[0] = v41;
            v25[1] = v42;
            v25[2] = v43;
            v19 = uu_csplit::SplitWriter::writeln(v31, v42, v43);
            if ( v19 )
              break;
            core::ptr::drop_in_place<alloc::string::String>(v25, v18);
          }
          *(_QWORD *)a1 = 0LL;
          *(_QWORD *)(a1 + 8) = v19;
          core::ptr::drop_in_place<alloc::string::String>(v25, v18);
LABEL_31:
          core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>>(&v26);
          v10 = 0;
          goto LABEL_18;
        }
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = v17;
        core::ptr::drop_in_place<alloc::string::String>(&v26, v16);
      }
      v10 = 1;
    }
LABEL_18:
    core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(&v20);
    goto LABEL_19;
  }
  v12 = v27;
  *(_QWORD *)(a1 + 24) = v21;
  *(_OWORD *)(a1 + 8) = v20;
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(a1 + 32) = v12;
  v10 = 1;
LABEL_19:
  result = core::ptr::drop_in_place<uu_csplit::SplitWriter>(v31);
LABEL_20:
  if ( v10 )
    return core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>>(&v34);
  return result;
}
