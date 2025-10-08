__int64 __fastcall ruff_python_formatter::string::docstring::docstring_format_source(
        __int64 a1,
        __int128 *a2,
        char a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  __int128 v10; // xmm0
  char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int128 v15; // kr00_16
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  _QWORD v19[3]; // [rsp+8h] [rbp-2B0h] BYREF
  __int128 v20; // [rsp+20h] [rbp-298h]
  __int64 v21; // [rsp+30h] [rbp-288h]
  char *v22; // [rsp+38h] [rbp-280h] BYREF
  __int128 v23; // [rsp+40h] [rbp-278h] BYREF
  __int128 v24; // [rsp+50h] [rbp-268h]
  __int128 v25; // [rsp+60h] [rbp-258h]
  __int128 v26; // [rsp+70h] [rbp-248h]
  __int128 v27; // [rsp+80h] [rbp-238h]
  __int64 v28; // [rsp+90h] [rbp-228h]
  _QWORD v29[4]; // [rsp+A0h] [rbp-218h] BYREF
  __int16 v30; // [rsp+C0h] [rbp-1F8h]
  __int16 v31; // [rsp+C8h] [rbp-1F0h]
  char v32; // [rsp+CAh] [rbp-1EEh]
  __int128 v33; // [rsp+CCh] [rbp-1ECh]
  char v34; // [rsp+DCh] [rbp-1DCh]
  __int64 v35; // [rsp+E0h] [rbp-1D8h] BYREF
  __int128 v36; // [rsp+E8h] [rbp-1D0h]
  __int128 v37; // [rsp+F8h] [rbp-1C0h]
  __int64 v38; // [rsp+108h] [rbp-1B0h]
  __int128 v39; // [rsp+110h] [rbp-1A8h]
  __int128 v40; // [rsp+120h] [rbp-198h] BYREF
  _OWORD v41[2]; // [rsp+130h] [rbp-188h] BYREF
  __int64 v42; // [rsp+150h] [rbp-168h] BYREF
  __int128 v43; // [rsp+158h] [rbp-160h]
  __int64 v44; // [rsp+168h] [rbp-150h]
  __int128 v45; // [rsp+170h] [rbp-148h]
  __int128 v46; // [rsp+180h] [rbp-138h]
  __int128 v47; // [rsp+190h] [rbp-128h]
  __int64 v48; // [rsp+1A0h] [rbp-118h]
  _BYTE v49[48]; // [rsp+1A8h] [rbp-110h] BYREF
  __int128 v50; // [rsp+1D8h] [rbp-E0h]
  __int128 v51; // [rsp+1E8h] [rbp-D0h]
  __int128 v52; // [rsp+1F8h] [rbp-C0h]
  __int128 v53; // [rsp+208h] [rbp-B0h]

  ruff_python_parser::parse(v49, a4, a5, 3 * (unsigned int)(*((_BYTE *)a2 + 7) >= 2u) + 590592);
  v23 = *(_OWORD *)&v49[8];
  v24 = *(_OWORD *)&v49[24];
  *(_QWORD *)&v25 = *(_QWORD *)&v49[40];
  if ( __OFSUB__(-*(_QWORD *)v49, 1LL) )
  {
    result = v25;
    *(_QWORD *)(a1 + 40) = v25;
    v10 = v23;
    *(_OWORD *)(a1 + 24) = v24;
    *(_OWORD *)(a1 + 8) = v10;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  else
  {
    v41[1] = v53;
    v41[0] = v52;
    v40 = v51;
    v39 = v50;
    v36 = v23;
    v37 = v24;
    v38 = v25;
    v35 = *(_QWORD *)v49;
    ruff_python_parser::<impl core::convert::From<&ruff_python_parser::Tokens> for ruff_python_trivia::comment_ranges::CommentRanges>::from(
      v19,
      &v35);
    v11 = (char *)v41;
    if ( *((_QWORD *)&v40 + 1) != 0x8000000000000000LL )
      v11 = (char *)&v40 + 8;
    v12 = ruff_python_formatter::comments::Comments::from_ast::collect_comments(
            *((_QWORD *)&v40 + 1) == 0x8000000000000000LL,
            (__int64)v11,
            a4,
            a5,
            (__int64)v19);
    v33 = *a2;
    v29[0] = a4;
    v29[1] = a5;
    v29[2] = v12;
    v29[3] = &v35;
    v30 = 256;
    v31 = 0;
    v34 = a3;
    v32 = 2;
    v22 = (char *)&v40 + 8;
    *(_QWORD *)&v23 = &v22;
    *((_QWORD *)&v23 + 1) = &unk_57F528;
    ruff_formatter::format(v49, v29, &v23);
    v20 = *(_OWORD *)&v49[8];
    v21 = *(_QWORD *)&v49[24];
    if ( *(_QWORD *)v49 == 0x8000000000000000LL )
    {
      *(_QWORD *)&v49[23] = v21;
      *(_OWORD *)&v49[7] = v20;
      *(_BYTE *)(a1 + 8) = 41;
      v13 = *(_QWORD *)&v49[15];
      v14 = *(_QWORD *)&v49[23];
      *(_OWORD *)(a1 + 9) = *(_OWORD *)v49;
      *(_QWORD *)(a1 + 24) = v13;
      *(_QWORD *)(a1 + 32) = v14;
      *(_QWORD *)a1 = 0x8000000000000000LL;
    }
    else
    {
      v48 = v52;
      v47 = v51;
      v46 = v50;
      v45 = *(_OWORD *)&v49[32];
      v43 = v20;
      v44 = v21;
      v42 = *(_QWORD *)v49;
      ruff_formatter::Formatted<Context>::create_printer(v49, &v42);
      ruff_formatter::printer::Printer::print(&v23, v49, &v42);
      v15 = v23;
      if ( (_QWORD)v23 == 0x8000000000000000LL )
      {
        *(_BYTE *)(a1 + 8) = 42;
        *(_QWORD *)(a1 + 12) = *((_QWORD *)&v15 + 1);
        *(_QWORD *)a1 = 0x8000000000000000LL;
      }
      else
      {
        *(_QWORD *)(a1 + 80) = v28;
        v16 = v24;
        v17 = v25;
        v18 = v26;
        *(_OWORD *)(a1 + 64) = v27;
        *(_OWORD *)(a1 + 48) = v18;
        *(_OWORD *)(a1 + 32) = v17;
        *(_OWORD *)(a1 + 16) = v16;
        *(_OWORD *)a1 = v15;
      }
      core::ptr::drop_in_place<ruff_formatter::Formatted<ruff_python_formatter::context::PyFormatContext>>(&v42);
    }
    core::ptr::drop_in_place<ruff_python_trivia::comment_ranges::CommentRanges>(v19[0], v19[1]);
    return core::ptr::drop_in_place<ruff_python_parser::Parsed<ruff_python_ast::generated::Mod>>(&v35);
  }
  return result;
}