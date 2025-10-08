__int64 __fastcall uu_csplit::csplit(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int128 *a5)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v7; // rax
  char v8; // bp
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int64 result; // rax
  __int128 v21; // [rsp+0h] [rbp-1C8h] BYREF
  __int128 v22; // [rsp+10h] [rbp-1B8h]
  __int64 v23; // [rsp+20h] [rbp-1A8h]
  _BYTE v24[8]; // [rsp+28h] [rbp-1A0h] BYREF
  _QWORD v25[3]; // [rsp+30h] [rbp-198h] BYREF
  _QWORD v26[3]; // [rsp+48h] [rbp-180h] BYREF
  __m256i v27; // [rsp+60h] [rbp-168h] BYREF
  __int128 v28; // [rsp+80h] [rbp-148h]
  __int128 v29; // [rsp+90h] [rbp-138h]
  __int128 v30; // [rsp+A0h] [rbp-128h]
  __int128 v31; // [rsp+B0h] [rbp-118h]
  __int128 v32; // [rsp+C0h] [rbp-108h] BYREF
  _BYTE v33[64]; // [rsp+D0h] [rbp-F8h]
  __int128 v34; // [rsp+110h] [rbp-B8h]
  _QWORD v35[5]; // [rsp+120h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+148h] [rbp-80h]
  char v37; // [rsp+158h] [rbp-70h]
  __int128 v38; // [rsp+160h] [rbp-68h] BYREF
  __int64 v39; // [rsp+170h] [rbp-58h]
  _BYTE v40[8]; // [rsp+178h] [rbp-50h] BYREF
  __int64 v41; // [rsp+180h] [rbp-48h]
  __int64 v42; // [rsp+188h] [rbp-40h]
  __int64 v43; // [rsp+190h] [rbp-38h]

  v5 = *a5;
  v6 = a5[1];
  *(_OWORD *)&v33[40] = a5[2];
  *(_OWORD *)&v33[24] = v6;
  *(_OWORD *)&v33[8] = v5;
  *(_QWORD *)&v33[56] = 0LL;
  *(_QWORD *)&v32 = 0LL;
  *((_QWORD *)&v32 + 1) = 8LL;
  *(_QWORD *)v33 = 0LL;
  *(_QWORD *)&v34 = 1LL;
  BYTE8(v34) = 0;
  v35[4] = a2;
  v36 = 0LL;
  v35[0] = 0x8000000000000000LL;
  v37 = 0;
  uu_csplit::patterns::get_patterns(&v27, a3, a4);
  v7 = v27.m256i_i64[0];
  v21 = *(_OWORD *)&v27.m256i_u64[1];
  *(_QWORD *)&v22 = v27.m256i_i64[3];
  if ( v27.m256i_i64[0] == 13 )
  {
    v38 = v21;
    v39 = v22;
    uu_csplit::do_csplit(&v21, v35, &v38, &v32);
    if ( (_DWORD)v21 == 13 )
    {
      BYTE8(v34) = 1;
      <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v24, &v32);
      if ( v25[0] == 0x8000000000000001LL )
      {
        v8 = 1;
        core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>)>>(v24);
LABEL_21:
        *(_QWORD *)(a1 + 32) = v23;
        v19 = v21;
        *(_OWORD *)(a1 + 16) = v22;
        *(_OWORD *)a1 = v19;
        result = core::ptr::drop_in_place<uu_csplit::SplitWriter>(v35);
        goto LABEL_27;
      }
      v11 = v25[0];
      v12 = v25[1];
      v13 = v25[2];
      v14 = uu_csplit::SplitWriter::new_writer(v35);
      if ( v14 )
      {
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = v14;
        v8 = 1;
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,alloc::boxed::Box<dyn uucore::mods::error::UError>>>(v25);
      }
      else if ( v11 == 0x8000000000000000LL )
      {
        *(_QWORD *)a1 = 12LL;
        *(_QWORD *)(a1 + 8) = v12;
        *(_QWORD *)(a1 + 16) = v13;
        v8 = 1;
      }
      else
      {
        v27.m256i_i64[0] = v11;
        v27.m256i_i64[1] = v12;
        v27.m256i_i64[2] = v13;
        v15 = uu_csplit::SplitWriter::writeln(v35, v12, v13);
        if ( v15 )
        {
          *(_QWORD *)a1 = 0LL;
          *(_QWORD *)(a1 + 8) = v15;
          core::ptr::drop_in_place<alloc::string::String>(&v27, v12);
          v8 = 1;
        }
        else
        {
          core::ptr::drop_in_place<alloc::string::String>(&v27, v12);
          v31 = v34;
          v30 = *(_OWORD *)&v33[48];
          v29 = *(_OWORD *)&v33[32];
          v28 = *(_OWORD *)&v33[16];
          *(_OWORD *)&v27.m256i_u64[2] = *(_OWORD *)v33;
          *(_OWORD *)v27.m256i_i8 = v32;
          while ( 1 )
          {
            <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v40, &v27);
            if ( v41 == 0x8000000000000001LL )
            {
              core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::buffered::bufreader::BufReader<std::fs::File>>,uu_csplit::csplit<std::io::buffered::bufreader::BufReader<std::fs::File>>::{{closure}}>>>>(&v27);
              uu_csplit::SplitWriter::finish_split(v35, &v27);
              v8 = 0;
              goto LABEL_21;
            }
            v16 = v42;
            v17 = v43;
            if ( v41 == 0x8000000000000000LL )
            {
              *(_QWORD *)a1 = 12LL;
              *(_QWORD *)(a1 + 8) = v16;
              *(_QWORD *)(a1 + 16) = v17;
              goto LABEL_24;
            }
            v26[0] = v41;
            v26[1] = v42;
            v26[2] = v43;
            v18 = uu_csplit::SplitWriter::writeln(v35, v42, v43);
            if ( v18 )
              break;
            core::ptr::drop_in_place<alloc::string::String>(v26, v16);
          }
          *(_QWORD *)a1 = 0LL;
          *(_QWORD *)(a1 + 8) = v18;
          core::ptr::drop_in_place<alloc::string::String>(v26, v16);
LABEL_24:
          core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::buffered::bufreader::BufReader<std::fs::File>>,uu_csplit::csplit<std::io::buffered::bufreader::BufReader<std::fs::File>>::{{closure}}>>>>(&v27);
          v8 = 0;
        }
      }
    }
    else
    {
      v8 = 1;
      if ( *(_BYTE *)(a2 + 96) )
        goto LABEL_21;
      v10 = uu_csplit::SplitWriter::delete_all_splits(v35);
      if ( !v10 )
        goto LABEL_21;
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = v10;
      v8 = 1;
    }
    core::ptr::drop_in_place<core::result::Result<(),uu_csplit::csplit_error::CsplitError>>(&v21);
  }
  else
  {
    v9 = v28;
    *(_QWORD *)(a1 + 24) = v22;
    *(_OWORD *)(a1 + 8) = v21;
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 32) = v9;
    v8 = 1;
  }
  result = core::ptr::drop_in_place<uu_csplit::SplitWriter>(v35);
LABEL_27:
  if ( v8 )
    return core::ptr::drop_in_place<uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<uu_csplit::LinesWithNewlines<std::io::buffered::bufreader::BufReader<std::fs::File>>,uu_csplit::csplit<std::io::buffered::bufreader::BufReader<std::fs::File>>::{{closure}}>>>>(&v32);
  return result;
}