__int64 __fastcall uu_csplit::csplit(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  char v9; // dl
  __int64 v10; // rax
  bool v11; // al
  char v12; // bp
  __int64 v13; // rax
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int128 v22; // [rsp+0h] [rbp-1A8h] BYREF
  __int128 v23; // [rsp+10h] [rbp-198h]
  __int64 v24; // [rsp+20h] [rbp-188h]
  __m256i v25; // [rsp+30h] [rbp-178h] BYREF
  __int128 v26; // [rsp+50h] [rbp-158h]
  __int128 v27; // [rsp+60h] [rbp-148h]
  __int128 v28; // [rsp+70h] [rbp-138h] BYREF
  __int64 v29; // [rsp+80h] [rbp-128h]
  __m256i v30; // [rsp+88h] [rbp-120h] BYREF
  __int128 v31; // [rsp+A8h] [rbp-100h]
  __int128 v32; // [rsp+B8h] [rbp-F0h]
  _QWORD v33[3]; // [rsp+C8h] [rbp-E0h] BYREF
  _QWORD v34[5]; // [rsp+E0h] [rbp-C8h] BYREF
  __int128 v35; // [rsp+108h] [rbp-A0h]
  char v36; // [rsp+118h] [rbp-90h]
  __int128 v37; // [rsp+120h] [rbp-88h] BYREF
  __int64 v38; // [rsp+130h] [rbp-78h]
  _BYTE v39[8]; // [rsp+138h] [rbp-70h] BYREF
  __int64 v40; // [rsp+140h] [rbp-68h]
  __int64 v41; // [rsp+148h] [rbp-60h]
  __int64 v42; // [rsp+150h] [rbp-58h]
  _BYTE v43[8]; // [rsp+158h] [rbp-50h] BYREF
  __int128 v44; // [rsp+160h] [rbp-48h]
  __int64 v45; // [rsp+170h] [rbp-38h]

  *(_QWORD *)&v31 = std::io::BufRead::lines(a5, a6);
  BYTE8(v31) = v9 & 1;
  v30.m256i_i64[0] = 0LL;
  v30.m256i_i64[1] = 8LL;
  *(_OWORD *)&v30.m256i_u64[2] = 0LL;
  *(_QWORD *)&v32 = 1LL;
  BYTE8(v32) = 0;
  v34[4] = a2;
  v35 = 0LL;
  v34[0] = 0x8000000000000000LL;
  v36 = 0;
  uu_csplit::patterns::get_patterns(&v25, a3, a4);
  v10 = v25.m256i_i64[0];
  v22 = *(_OWORD *)&v25.m256i_u64[1];
  *(_QWORD *)&v23 = v25.m256i_i64[3];
  if ( v25.m256i_i64[0] == 12 )
  {
    v37 = v22;
    v38 = v23;
    uu_csplit::do_csplit(&v22, v34, &v37, &v30);
    v11 = 1;
    v12 = 1;
    if ( (_DWORD)v22 != 12 )
      goto LABEL_5;
    BYTE8(v32) = 1;
    <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v43, &v30);
    v12 = 1;
    if ( (_QWORD)v44 == 0x8000000000000001LL )
    {
LABEL_4:
      v11 = (_QWORD)v22 != 12LL;
LABEL_5:
      if ( !v11 || *(_BYTE *)(a2 + 96) || (v13 = uu_csplit::SplitWriter::delete_all_splits(v34)) == 0 )
      {
        *(_QWORD *)(a1 + 32) = v24;
        v15 = v22;
        *(_OWORD *)(a1 + 16) = v23;
        *(_OWORD *)a1 = v15;
        result = core::ptr::drop_in_place<uu_csplit::SplitWriter>(v34);
        goto LABEL_20;
      }
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = v13;
      goto LABEL_18;
    }
    v29 = v45;
    v28 = v44;
    v17 = uu_csplit::SplitWriter::new_writer(v34);
    if ( v17 )
    {
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = v17;
      v12 = 1;
      core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v28);
    }
    else
    {
      v18 = *((_QWORD *)&v28 + 1);
      if ( (_QWORD)v28 == 0x8000000000000000LL )
      {
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = v18;
      }
      else
      {
        *(_OWORD *)v25.m256i_i8 = v28;
        v25.m256i_i64[2] = v29;
        v19 = uu_csplit::SplitWriter::writeln(v34, *((_QWORD *)&v28 + 1), v29);
        if ( !v19 )
        {
          core::ptr::drop_in_place<alloc::string::String>(&v25, v18);
          v27 = v32;
          v26 = v31;
          v25 = v30;
          while ( 1 )
          {
            <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v39, &v25);
            if ( v40 == 0x8000000000000001LL )
            {
              core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>>(&v25);
              uu_csplit::SplitWriter::finish_split(v34);
              v12 = 0;
              goto LABEL_4;
            }
            v20 = v41;
            if ( v40 == 0x8000000000000000LL )
            {
              *(_QWORD *)a1 = 0LL;
              *(_QWORD *)(a1 + 8) = v20;
              goto LABEL_31;
            }
            v33[0] = v40;
            v33[1] = v41;
            v33[2] = v42;
            v21 = uu_csplit::SplitWriter::writeln(v34, v41, v42);
            if ( v21 )
              break;
            core::ptr::drop_in_place<alloc::string::String>(v33, v20);
          }
          *(_QWORD *)a1 = 0LL;
          *(_QWORD *)(a1 + 8) = v21;
          core::ptr::drop_in_place<alloc::string::String>(v33, v20);
LABEL_31:
          core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>>(&v25);
          v12 = 0;
          goto LABEL_18;
        }
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = v19;
        core::ptr::drop_in_place<alloc::string::String>(&v25, v18);
      }
      v12 = 1;
    }
LABEL_18:
    core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(&v22);
    goto LABEL_19;
  }
  v14 = v26;
  *(_QWORD *)(a1 + 24) = v23;
  *(_OWORD *)(a1 + 8) = v22;
  *(_QWORD *)a1 = v10;
  *(_QWORD *)(a1 + 32) = v14;
  v12 = 1;
LABEL_19:
  result = core::ptr::drop_in_place<uu_csplit::SplitWriter>(v34);
LABEL_20:
  if ( v12 )
    return core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::stdio::StdinLock>>>>(&v30);
  return result;
}
