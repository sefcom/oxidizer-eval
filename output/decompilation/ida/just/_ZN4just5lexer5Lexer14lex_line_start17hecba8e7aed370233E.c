__int64 __fastcall just::lexer::Lexer::lex_line_start(__int64 a1, __int64 a2)
{
  __int128 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // r12
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r15
  int v26; // edx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // r13
  unsigned __int64 v30; // rbp
  unsigned __int8 v31; // al
  unsigned __int8 v32; // al
  unsigned __int8 v33; // al
  unsigned __int8 v34; // al
  __int64 v35; // rax
  __int64 v36; // rbp
  __int64 v37; // r15
  __int64 v38; // rdx
  __int64 result; // rax
  __int64 v40; // r15
  __int64 v41; // rbp
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // r13
  unsigned __int64 v54; // rax
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm2
  int v58; // edx
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm2
  int v68; // edx
  unsigned __int64 v69; // rdx
  __int64 v70; // rdx
  unsigned __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  unsigned __int8 v74; // [rsp+4h] [rbp-E4h]
  unsigned __int8 v75; // [rsp+5h] [rbp-E3h]
  unsigned __int8 v76; // [rsp+6h] [rbp-E2h]
  unsigned __int8 v77; // [rsp+7h] [rbp-E1h]
  unsigned __int64 v78; // [rsp+8h] [rbp-E0h]
  __int128 v79; // [rsp+18h] [rbp-D0h] BYREF
  __int128 v80; // [rsp+28h] [rbp-C0h] BYREF
  __int128 v81; // [rsp+38h] [rbp-B0h]
  __int128 v82; // [rsp+48h] [rbp-A0h]
  __int64 v83; // [rsp+58h] [rbp-90h]
  unsigned __int8 v84; // [rsp+60h] [rbp-88h]
  _DWORD v85[7]; // [rsp+61h] [rbp-87h]
  __int64 v86; // [rsp+80h] [rbp-68h] BYREF
  unsigned __int64 v87; // [rsp+88h] [rbp-60h]
  unsigned __int64 v88; // [rsp+90h] [rbp-58h]
  __int64 v89; // [rsp+98h] [rbp-50h]
  __int64 v90; // [rsp+A0h] [rbp-48h]
  _QWORD v91[8]; // [rsp+A8h] [rbp-40h] BYREF

  *(_QWORD *)&v2 = just::lexer::Lexer::rest((_QWORD *)a2);
  *((_QWORD *)&v2 + 1) = v2 + v3;
  v79 = v2;
  *(_QWORD *)&v80 = 0LL;
  BYTE8(v80) = 0;
  v4 = core::iter::traits::iterator::Iterator::try_fold(&v79, (char *)&v80 + 8);
  if ( v5 == (_DWORD)&unk_110000 )
  {
    just::lexer::Lexer::rest((_QWORD *)a2);
    v7 = v6;
  }
  else
  {
    v7 = v4;
  }
  v8 = just::lexer::Lexer::rest((_QWORD *)a2);
  v10 = v9;
  v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
          v7,
          v8,
          v9);
  v90 = v12;
  if ( !v11 )
    core::str::slice_error_fail(v8, v10, v7, v10, &off_430458);
  v89 = v11;
  v13 = just::lexer::Lexer::rest((_QWORD *)a2);
  v15 = v14;
  v16 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v7, v13);
  if ( !v16 )
    core::str::slice_error_fail(v13, v15, 0LL, v7, &off_430470);
  v18 = v16;
  v19 = v17;
  v91[0] = v16;
  v91[1] = v17;
  v20 = v17 + v16;
  v21 = just::lexer::Lexer::indentation(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  v23 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v21, v22 + v21);
  *(_QWORD *)&v79 = v18;
  *((_QWORD *)&v79 + 1) = v20;
  *(_QWORD *)&v80 = 0LL;
  *((_QWORD *)&v80 + 1) = v23;
  if ( v23 )
  {
    *((_QWORD *)&v80 + 1) = v23 - 1;
    v24 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v79);
    v25 = 0LL;
    if ( v26 != (_DWORD)&unk_110000 )
      v25 = v24;
  }
  else
  {
    v25 = 0LL;
  }
  v78 = v19;
  v27 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
          v25,
          v18);
  if ( !v27 )
    core::str::slice_error_fail(v18, v19, 0LL, v25, &off_430488);
  v29 = v27;
  v30 = v28;
  *(_QWORD *)&v79 = v18;
  *((_QWORD *)&v79 + 1) = v20;
  v31 = core::iter::traits::iterator::Iterator::try_fold(&v79);
  v77 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v31, 1LL);
  *(_QWORD *)&v79 = v18;
  *((_QWORD *)&v79 + 1) = v20;
  v32 = core::iter::traits::iterator::Iterator::try_fold(&v79);
  v76 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v32, 1LL);
  v88 = v30;
  *(_QWORD *)&v79 = v29;
  *((_QWORD *)&v79 + 1) = v30 + v29;
  v33 = core::iter::traits::iterator::Iterator::try_fold(&v79);
  v75 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v33, 1LL);
  *(_QWORD *)&v79 = v29;
  *((_QWORD *)&v79 + 1) = v30 + v29;
  v34 = core::iter::traits::iterator::Iterator::try_fold(&v79);
  v74 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v34, 1LL);
  LODWORD(v79) = 0;
  v35 = core::char::methods::encode_utf8_raw(10LL, &v79);
  v36 = v89;
  v37 = v90;
  result = core::slice::<impl [T]>::starts_with(v89, v90, v35, v38);
  if ( (_BYTE)result || (result = core::slice::<impl [T]>::starts_with(v36, v37, asc_6E55E, 2LL), !v37) || (_BYTE)result )
  {
    v40 = a1;
    if ( !v78 )
    {
LABEL_18:
      *(_BYTE *)(v40 + 72) = 37;
      return result;
    }
    if ( just::lexer::Lexer::next_is_whitespace(*(_DWORD *)(a2 + 192)) )
    {
      while ( 1 )
      {
        just::lexer::Lexer::advance((__int64)&v79, a2);
        result = v84;
        if ( v84 != 37 )
          goto LABEL_56;
        if ( !just::lexer::Lexer::next_is_whitespace(*(_DWORD *)(a2 + 192)) )
          goto LABEL_17;
      }
    }
    goto LABEL_17;
  }
  v41 = *(_QWORD *)(a2 + 8);
  v42 = *(_QWORD *)(a2 + 16);
  v43 = just::lexer::Lexer::indentation(v41, v42);
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v18, v78, v43, v44) )
    goto LABEL_22;
  if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(v91, v41, v42) )
  {
    v47 = just::lexer::Lexer::indentation(v41, v42);
    for ( result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v47, v48, v18, v78);
          !(_BYTE)result;
          result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v49, v50, v18, v78) )
    {
      just::lexer::Lexer::lex_dedent(a2);
      v49 = just::lexer::Lexer::indentation(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
    }
    v40 = a1;
    if ( !v78 )
      goto LABEL_18;
    if ( just::lexer::Lexer::next_is_whitespace(*(_DWORD *)(a2 + 192)) )
    {
      while ( 1 )
      {
        just::lexer::Lexer::advance((__int64)&v79, a2);
        result = v84;
        if ( v84 != 37 )
          break;
        if ( !just::lexer::Lexer::next_is_whitespace(*(_DWORD *)(a2 + 192)) )
          goto LABEL_17;
      }
LABEL_56:
      *(_QWORD *)(v40 + 64) = v83;
      v65 = v79;
      v66 = v80;
      v67 = v81;
      *(_OWORD *)(v40 + 48) = v82;
      *(_OWORD *)(v40 + 32) = v67;
      *(_OWORD *)(v40 + 16) = v66;
      *(_OWORD *)v40 = v65;
      v68 = *(_DWORD *)((char *)v85 + 3);
      *(_DWORD *)(v40 + 73) = v85[0];
      *(_DWORD *)(v40 + 76) = v68;
      *(_BYTE *)(v40 + 72) = result;
      return result;
    }
    goto LABEL_17;
  }
  if ( *(_BYTE *)(a2 + 196) )
  {
    v51 = just::lexer::Lexer::indentation(v41, v42);
    if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v18, v78, v51, v52) )
    {
LABEL_22:
      result = just::lexer::Lexer::indentation(v41, v42);
      if ( v45 )
      {
        v86 = just::lexer::Lexer::indentation(v41, v42);
        v87 = v86 + v46;
        if ( (core::str::validations::next_code_point(&v86) & 1) != 0 )
        {
          while ( 1 )
          {
            just::lexer::Lexer::advance((__int64)&v79, a2);
            result = v84;
            if ( v84 != 37 )
              break;
            if ( (core::str::validations::next_code_point(&v86) & 1) == 0 )
              goto LABEL_26;
          }
LABEL_46:
          *(_QWORD *)(a1 + 64) = v83;
          v55 = v79;
          v56 = v80;
          v57 = v81;
          *(_OWORD *)(a1 + 48) = v82;
          *(_OWORD *)(a1 + 32) = v57;
          *(_OWORD *)(a1 + 16) = v56;
          *(_OWORD *)a1 = v55;
          v58 = *(_DWORD *)((char *)v85 + 3);
          *(_DWORD *)(a1 + 73) = v85[0];
          *(_DWORD *)(a1 + 76) = v58;
          *(_BYTE *)(a1 + 72) = result;
          return result;
        }
LABEL_26:
        result = just::lexer::Lexer::token(a2, 36);
      }
      *(_BYTE *)(a1 + 72) = 37;
      return result;
    }
    if ( (v74 & v75) != 0 )
    {
      v18 = v29;
      v53 = v88;
LABEL_42:
      v86 = v18;
      v87 = v18 + v53;
      while ( (core::str::validations::next_code_point(&v86) & 1) != 0 )
      {
        just::lexer::Lexer::advance((__int64)&v79, a2);
        result = v84;
        if ( v84 != 37 )
          goto LABEL_46;
      }
      *((_QWORD *)&v79 + 1) = v18;
      *(_QWORD *)&v80 = v53;
      v54 = 0x800000000000002CLL;
      goto LABEL_63;
    }
    just::lexer::Lexer::indentation(v41, v42);
    if ( v78 < v69 )
      goto LABEL_58;
    just::lexer::Lexer::indentation(v41, v42);
    if ( v88 >= v71 )
    {
      v72 = just::lexer::Lexer::indentation(v41, v42);
      if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v29, v88, v72, v73) )
        goto LABEL_58;
    }
    goto LABEL_48;
  }
  if ( (v76 & v77) != 0 )
  {
    v53 = v78;
    goto LABEL_42;
  }
  just::lexer::Lexer::indentation(v41, v42);
  if ( v78 >= v59 )
  {
LABEL_48:
    just::lexer::Lexer::indentation(v41, v42);
    if ( v78 >= v60 )
    {
      v61 = just::lexer::Lexer::indentation(v41, v42);
      if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v18, v78, v61, v62) )
        goto LABEL_58;
    }
    v40 = a1;
    while ( just::lexer::Lexer::next_is_whitespace(*(_DWORD *)(a2 + 192)) )
    {
      just::lexer::Lexer::advance((__int64)&v79, a2);
      result = v84;
      if ( v84 != 37 )
        goto LABEL_56;
    }
    if ( !*(_QWORD *)(a2 + 64) )
    {
      v63 = just::lexer::Lexer::lexeme((_QWORD *)a2);
      alloc::vec::Vec<T,A>::push(a2, v63, v64, &off_4304A0);
      result = just::lexer::Lexer::token(a2, 25);
      if ( *(_BYTE *)(a2 + 197) )
        *(_BYTE *)(a2 + 196) = 1;
      goto LABEL_18;
    }
LABEL_17:
    result = just::lexer::Lexer::token(a2, 36);
    goto LABEL_18;
  }
LABEL_58:
  v86 = v18;
  v87 = v20;
  if ( (core::str::validations::next_code_point(&v86) & 1) != 0 )
  {
    while ( 1 )
    {
      just::lexer::Lexer::advance((__int64)&v79, a2);
      result = v84;
      if ( v84 != 37 )
        goto LABEL_46;
      if ( (core::str::validations::next_code_point(&v86) & 1) == 0 )
      {
        v41 = *(_QWORD *)(a2 + 8);
        v42 = *(_QWORD *)(a2 + 16);
        break;
      }
    }
  }
  *((_QWORD *)&v79 + 1) = just::lexer::Lexer::indentation(v41, v42);
  *(_QWORD *)&v80 = v70;
  *((_QWORD *)&v80 + 1) = v18;
  *(_QWORD *)&v81 = v78;
  v54 = 0x8000000000000027LL;
LABEL_63:
  *(_QWORD *)&v79 = v54;
  return just::lexer::Lexer::error(a1, a2, &v79);
}